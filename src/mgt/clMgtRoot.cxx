/*
 * Copyright (C) 2002-2012 OpenClovis Solutions Inc.  All Rights Reserved.
 *
 * This file is available  under  a  commercial  license  from  the
 * copyright  holder or the GNU General Public License Version 2.0.
 *
 * The source code for  this program is not published  or otherwise
 * divested of  its trade secrets, irrespective  of  what  has been
 * deposited with the U.S. Copyright office.
 *
 * This program is distributed in the  hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied  warranty  of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * For more  information, see  the file  COPYING provided with this
 * material.
 */

#include "clMgtRoot.hxx"
#include <clMgtObject.hxx>
#include <clMsgPortsAndTypes.hxx>
#include <clSafplusMsgServer.hxx>
#include <clCommon.hxx>
#include <inttypes.h>

#include "MgtMsg.pb.hxx"

#ifdef __cplusplus
extern "C"
{
#endif
#include <clCommonErrors6.h>
#ifdef __cplusplus
} /* end extern 'C' */
#endif

using namespace std;
using namespace Mgt::Msg;

namespace SAFplus
{
  MgtRoot *MgtRoot::singletonInstance = 0;

  MgtRoot *MgtRoot::getInstance()
  {
    return (singletonInstance ? singletonInstance : (singletonInstance = new MgtRoot()));
  }

  MgtRoot::~MgtRoot()
  {
  }
  MgtRoot::MgtRoot():mgtMessageHandler()
  {
    /*
     * Message server to communicate with snmp/netconf
     */
    SAFplus::SafplusMsgServer* mgtIocInstance = &safplusMsgServer;
    mgtMessageHandler.init(this);
    mgtIocInstance->RegisterHandler(SAFplusI::CL_MGT_MSG_TYPE, &mgtMessageHandler, nullptr);
  }

  ClRcT MgtRoot::loadMgtModule(MgtModule *module, std::string moduleName)
  {
    if (module == nullptr)
    {
      return CL_ERR_NULL_POINTER;
    }

    /* Check if MGT module already exists in the database */
    if (mMgtModules.find(moduleName) != mMgtModules.end())
    {
      logDebug("MGT", "LOAD", "Module [%s] already exists!", moduleName.c_str());
      return CL_ERR_ALREADY_EXIST;
    }

    /* Insert MGT module into the database */
    mMgtModules.insert(pair<string, MgtModule *>(moduleName.c_str(), module));
    logDebug("MGT", "LOAD", "Module [%s] added successfully!", moduleName.c_str());

    return CL_OK;
  }

  ClRcT MgtRoot::unloadMgtModule(std::string moduleName)
  {
    /* Check if MGT module already exists in the database */
    if (mMgtModules.find(moduleName) == mMgtModules.end())
    {
      logDebug("MGT", "LOAD", "Module [%s] is not existing!", moduleName.c_str());
      return CL_ERR_NOT_EXIST;
    }

    /* Remove MGT module out off the database */
    mMgtModules.erase(moduleName);
    logDebug("MGT", "LOAD", "Module [%s] removed successful!",moduleName.c_str());

    return CL_OK;
  }

  MgtModule *MgtRoot::getMgtModule(const std::string moduleName)
  {
    map<string, MgtModule*>::iterator mapIndex = mMgtModules.find(moduleName);
    if (mapIndex != mMgtModules.end())
    {
      return static_cast<MgtModule *>((*mapIndex).second);
    }
    return nullptr;
  }

  ClRcT MgtRoot::bindMgtObject(Handle handle, MgtObject *object,const std::string module, const std::string route)
  {
    ClRcT rc = CL_OK;

    if (object == nullptr)
    {
      return CL_ERR_NULL_POINTER;
    }

    /* Check if MGT module already exists in the database */
    MgtModule *mgtModule = getMgtModule(module);
    if (mgtModule == nullptr)
    {
      logDebug("MGT", "BIND", "Module [%s] does not exist!",module.c_str());
      return CL_ERR_NOT_EXIST;
    }

    rc = mgtModule->addMgtObject(object, route);
    if ((rc != CL_OK) && (rc != CL_ERR_ALREADY_EXIST))
    {
      logDebug("MGT", "BIND", "Binding module [%s], route [%s], returning rc[0x%x].", module.c_str(), route.c_str(), rc);
      return rc;
    }

    /* Send bind data to the server */
    //ClIocAddressT allNodeReps;
    string strBind;
    MsgBind bindData;
    MsgMgt mgtMsgReq;
    Mgt::Msg::Handle *hdl = bindData.mutable_handle();

    hdl->set_id0(handle.id[0]);
    hdl->set_id1(handle.id[1]);

    bindData.set_module(module);
    bindData.set_route(route);

    bindData.SerializeToString(&strBind);

    mgtMsgReq.set_type(Mgt::Msg::MsgMgt::CL_MGT_MSG_BIND);
    mgtMsgReq.set_bind(strBind);

    //allNodeReps.iocPhyAddress.nodeAddress = CL_IOC_BROADCAST_ADDRESS; //GAS: using broadcast CL_IOC_BROADCAST_ADDRESS = 0xffffffff
    //allNodeReps.iocPhyAddress.portId = SAFplusI::MGT_IOC_PORT;

    SAFplus::SafplusMsgServer* mgtIocInstance = &safplusMsgServer;

    try
    {
      string output;
      mgtMsgReq.SerializeToString(&output);
      int size = output.size();
      mgtIocInstance->SendMsg(getProcessHandle(SAFplusI::MGT_IOC_PORT,Handle::AllNodes), (void *)output.c_str(), size, SAFplusI::CL_MGT_MSG_TYPE);
    }
    catch (Error &e)
    {
      assert(0);
    }

    return rc;
  }

  ClRcT MgtRoot::sendReplyMsg(Handle dest, void* payload, uint payloadlen)
  {
    ClRcT rc = CL_OK;
    try
    {
      SAFplus::SafplusMsgServer* mgtIocInstance = &safplusMsgServer;
      mgtIocInstance->SendMsg(dest, (void *)payload, payloadlen, SAFplusI::CL_IOC_SAF_MSG_REPLY_PROTO);
    }
    catch (SAFplus::Error &ex)
    {
      rc = ex.clError;
      logDebug("MGT","MSG","Failed to send reply");
    }
    return rc;
  }

  ClRcT MgtRoot::registerRpc(SAFplus::Handle handle,const std::string module,const std::string rpcName)
  {
    ClRcT rc = CL_OK;
    Mgt::Msg::MsgBind bindData;
    MsgMgt mgtMsgReq;
    string strBind;


    Mgt::Msg::Handle *hdl = bindData.mutable_handle();
    hdl->set_id0(handle.id[0]);
    hdl->set_id1(handle.id[1]);
    bindData.set_module(module.c_str(),CL_MAX_NAME_LENGTH - 1);
    bindData.set_route(rpcName.c_str(),MGT_MAX_ATTR_STR_LEN - 1);
    bindData.SerializeToString(&strBind);
    /* Send bind data to the server */
    mgtMsgReq.set_type(Mgt::Msg::MsgMgt::CL_MGT_MSG_BIND);
    mgtMsgReq.set_bind(strBind);

    // TODO: Who do I send this message to?  I think it should go to the active Mgt server?  Or broadcast to both Mgt servers?
    //ClIocAddressT allNodeReps;
    //allNodeReps.iocPhyAddress.nodeAddress = 0x1;//GAS: using broadcast CL_IOC_BROADCAST_ADDRESS = 0xffffffff
    //allNodeReps.iocPhyAddress.portId = SAFplusI::MGT_IOC_PORT;
    try
    {
      string output;
      SAFplus::SafplusMsgServer* mgtIocInstance = &safplusMsgServer;
      mgtMsgReq.SerializeToString(&output);
      int size = output.size();
      mgtIocInstance->SendMsg(getProcessHandle(SAFplusI::MGT_IOC_PORT,Handle::AllNodes), (void *)output.c_str(), size, SAFplusI::CL_MGT_MSG_TYPE);
    }
    catch (SAFplus::Error &ex)
    {
      rc = ex.clError;
      logDebug("ROOT","RPC","Failed to send rpc registration");
    }
    return rc;
  }

  void MgtRoot::clMgtMsgEditHandle(SAFplus::Handle srcAddr, Mgt::Msg::MsgMgt reqMsg)
  {
    ClRcT rc = CL_OK;
    ClBoolT rc1 = CL_FALSE;
    SAFplus::Transaction t;

    Mgt::Msg::MsgBind bindData;
    Mgt::Msg::MsgSetGet setData;
    bindData.ParseFromString(reqMsg.bind());

    logDebug("MGT","SET","Received setting message for module %s and route %s",bindData.module().c_str(),bindData.route().c_str());
    if(reqMsg.data_size() <= 0)
    {
      logError("MGT","SET","Received empty set data");
      rc = CL_ERR_INVALID_PARAMETER;
      MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
      return;
    }
    setData.ParseFromString(reqMsg.data(0));
    MgtModule * module = MgtRoot::getInstance()->getMgtModule(bindData.module());
    if (!module)
    {
      logDebug("MGT","SET","Can't found module %s",bindData.module().c_str());
      rc = CL_ERR_INVALID_PARAMETER;
      MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
      return;
    }

    MgtObject * object = module->getMgtObject(bindData.route().c_str());
    if (!object)
    {
      logDebug("MGT","SET","Can't found object %s",bindData.route().c_str());
      rc = CL_ERR_INVALID_PARAMETER;
      MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
      return;
    }
    string strInMsg((ClCharT *)setData.data().c_str());
    // Add root element, it should be similar to netconf message
    // OID: <adminStatus>true</adminStatus>
    // NETCONF: <interfaces><adminStatus>true</adminStatus><ename>eth0</ename></interface>
    if (setData.data().compare(1, object->tag.length(), object->tag))
    {
      setData.set_data("<" + object->tag + ">" + strInMsg + "</" + object->tag  + ">");
    }
    rc1 = object->set((void *)setData.data().c_str(),setData.data().size(), t);
    if (rc1 == CL_TRUE)
    {
      t.commit();
    }
    else
    {
      t.abort();
      rc = CL_ERR_INVALID_PARAMETER;
    }

    MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
  }

  void MgtRoot::clMgtMsgGetHandle(SAFplus::Handle srcAddr, Mgt::Msg::MsgMgt reqMsg)
  {
    MsgGeneral rplMesg;
    string outBuff,strRplMesg;
    ClUint64T outMsgSize = 0;
    Mgt::Msg::MsgBind bindData;

    bindData.ParseFromString(reqMsg.bind());

    if (!bindData.has_route())
      {
        // TODO  MgtRoot::sendReplyMsg(error)
      }
    const string& route = bindData.route();
    const char* routeStr = route.c_str();
    logDebug("MGT","GET","Received 'get' message for module [%s] and route [%s]",bindData.module().c_str(),routeStr);
    MgtModule * module = MgtRoot::getInstance()->getMgtModule(bindData.module());
    if (!module)
    {
      logError("MGT", "GET",
                 "Received getting request from [%" PRIx64 ":%" PRIx64 "] for Non-existent module [%s] route [%s]",
                 srcAddr.id[0],srcAddr.id[1],
                 bindData.module().c_str(), routeStr);
      return;
    }

    MgtObject * object = module->getMgtObject(route);
    if (!object)
    {
      logError("MGT", "GET",
                 "Received 'get' request from [%" PRIx64 ":%" PRIx64 "] for non-existent route [%s] module [%s]",
                 srcAddr.id[0], srcAddr.id[1],
                 routeStr, bindData.module().c_str());
      // GAS TODO: Shouldn't we reply with an error?
      return;
    }
    /* Improvement: Compare revision to limit data sending */
    if(reqMsg.data_size() > 0)
    {
      std::string strRev = reqMsg.data(0);
      ClUint32T rxrev = std::stoi(strRev);
      logDebug("MGT","GET","Checking if data has updated [%x-%x]",rxrev,object->root()->headRev);
      if(rxrev >= object->root()->headRev && object->root()->headRev !=0 )
      {
        rplMesg.add_data(strRev);
        rplMesg.SerializeToString(&strRplMesg);
        MgtRoot::sendReplyMsg(srcAddr,(void *)strRplMesg.c_str(),strRplMesg.size());
        return;
      }
      // If revision of that route on mgt server is out of date, also send lastest data
    }
    std::string strRev = std::to_string(object->root()->headRev);
    object->get(&outBuff, &outMsgSize);
    rplMesg.add_data(strRev);
    rplMesg.add_data(outBuff.c_str(),outMsgSize);
    rplMesg.SerializeToString(&strRplMesg);
    logDebug("MGT","GET","Replying with msg of size [%d]",strRplMesg.size());
    MgtRoot::sendReplyMsg(srcAddr,(void *)strRplMesg.c_str(),strRplMesg.size());
  }

  MgtObject *MgtRoot::findMgtObject(const std::string &xpath)
  {
    int idx;

    if (xpath[0] != '/')
      {
        // Invalid xpath
        return nullptr;
      }

    idx = xpath.find("/", 1);

    if (idx == std::string::npos)
      {
        // Invalid xpath
        return nullptr;
      }

    std::string moduleName = xpath.substr(1, idx -1);

    MgtModule * module = getMgtModule(moduleName);

    if (!module)
      {
        // Module not found
        for(map<string, MgtModule*>::iterator iter = mMgtModules.begin(); iter != mMgtModules.end(); iter++)
          {
            module = static_cast<MgtModule *>((*iter).second);
            std::string modXpath;
            modXpath.assign("/");
            modXpath.append((*iter).first);
            modXpath.append(xpath);

            MgtObject *object = module->findMgtObject(modXpath);
            if (object)
              return object;
          }

        return nullptr;
      }

    return module->findMgtObject(xpath);
  }

  void MgtRoot::clMgtMsgXGetHandle(SAFplus::Handle srcAddr, Mgt::Msg::MsgMgt reqMsg)
  {
    MgtObject *object = findMgtObject(reqMsg.bind());

    if (object != nullptr)
      {
        MsgGeneral rplMesg;
        std::string outBuff, strRplMesg;
        ClUint64T outMsgSize = 0;

        object->get(&outBuff, &outMsgSize);
        rplMesg.add_data(outBuff.c_str(),outMsgSize);
        rplMesg.SerializeToString(&strRplMesg);
        logDebug("MGT","XGET","Replying with msg of size [%d]",strRplMesg.size());
        MgtRoot::sendReplyMsg(srcAddr,(void *)strRplMesg.c_str(),strRplMesg.size());
      }
  }

  void MgtRoot::clMgtMsgXSetHandle(SAFplus::Handle srcAddr, Mgt::Msg::MsgMgt reqMsg)
  {
    MgtObject *object = findMgtObject(reqMsg.bind());
    if (object != nullptr)
      {
        std::string value = reqMsg.data(0);
        ClRcT rc = object->setObj(value);
        MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
      }
  }

  void MgtRoot::clMgtMsgCreateHandle(SAFplus::Handle srcAddr, Mgt::Msg::MsgMgt reqMsg)
  {
    int idx = reqMsg.bind().find_last_of("/");

    if (idx == std::string::npos)
      {
        // Invalid xpath
        return;
      }

    std::string xpath = reqMsg.bind().substr(0, idx);
    std::string value = reqMsg.bind().substr(idx + 1);

    MgtObject *object = findMgtObject(xpath);

    if (object != nullptr)
      {
        ClRcT rc = object->createObj(value);
        MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
      }
  }

  void MgtRoot::clMgtMsgDeleteHandle(SAFplus::Handle srcAddr, Mgt::Msg::MsgMgt reqMsg)
  {
    int idx = reqMsg.bind().find_last_of("/");

    if (idx == std::string::npos)
      {
        // Invalid xpath
        return;
      }

    std::string xpath = reqMsg.bind().substr(0, idx);
    std::string value = reqMsg.bind().substr(idx + 1);

    MgtObject *object = findMgtObject(xpath);

    if (object != nullptr)
      {
        ClRcT rc = object->deleteObj(value);
        MgtRoot::sendReplyMsg(srcAddr,(void *)&rc,sizeof(ClRcT));
      }
  }

  MgtRoot::MgtMessageHandler::MgtMessageHandler()
  {

  }
  void MgtRoot::MgtMessageHandler::init(MgtRoot *mroot)
  {
    mRoot = mroot;
  }
  void MgtRoot::MgtMessageHandler::msgHandler(SAFplus::Handle from, SAFplus::MsgServer* svr, ClPtrT msg, ClWordT msglen, ClPtrT cookie)
  {
    Mgt::Msg::MsgMgt mgtMsgReq;
    mgtMsgReq.ParseFromArray(msg, msglen);
    switch(mgtMsgReq.type())
    {
      case Mgt::Msg::MsgMgt::CL_MGT_MSG_SET:
        mRoot->clMgtMsgEditHandle(from,mgtMsgReq);
        break;
      case Mgt::Msg::MsgMgt::CL_MGT_MSG_GET:
        mRoot->clMgtMsgGetHandle(from,mgtMsgReq);
        break;
      case Mgt::Msg::MsgMgt::CL_MGT_MSG_XGET:
        mRoot->clMgtMsgXGetHandle(from,mgtMsgReq);
        break;
      case Mgt::Msg::MsgMgt::CL_MGT_MSG_XSET:
        mRoot->clMgtMsgXSetHandle(from,mgtMsgReq);
        break;
      case Mgt::Msg::MsgMgt::CL_MGT_MSG_CREATE:
        mRoot->clMgtMsgCreateHandle(from,mgtMsgReq);
        break;
      case Mgt::Msg::MsgMgt::CL_MGT_MSG_DELETE:
        mRoot->clMgtMsgDeleteHandle(from,mgtMsgReq);
        break;
      default:
        break;
    }
  }
};