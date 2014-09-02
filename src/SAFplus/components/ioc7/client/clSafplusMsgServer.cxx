/*
 * Copyright (C) 2002-2014 OpenClovis Solutions Inc.  All Rights Reserved.
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

#include <clIocProtocols.h>
#include "clSafplusMsgServer.hxx"
#include "MsgReplyHandler.hxx"


namespace SAFplus
{
    SafplusMsgServer safplusMsgServer;

    void msgServerInitialize(ClWordT port, ClWordT maxPendingMsgs, ClWordT maxHandlerThreads)
      {
      safplusMsgServer.init(port,maxPendingMsgs, maxHandlerThreads);
      }

    void SAFplus::SafplusMsgServer::init(ClWordT port, ClWordT maxPendingMsgs, ClWordT maxHandlerThreads, Options flags)
      {
        MsgServer::Init(port, maxPendingMsgs, maxHandlerThreads, flags);
        MsgHandler *replyHandler = new MsgReplyHandler();
        this->RegisterHandler(CL_IOC_SAF_MSG_REPLY_PROTO, replyHandler, &msgReply);
        iocPort = port; // Set this global to be used as a unique identifier for this component across the node.  There can be many MsgServers per component but only one SafplusMsgServer.
      }

    void SAFplus::SafplusMsgServer::registerHandler(ClWordT type, MsgHandler *handler, ClPtrT cookie)
    {
        SAFplus::MsgServer::RegisterHandler(type, handler, cookie);
    }

    void SAFplus::SafplusMsgServer::removeHandler(ClWordT type)
    {
        SAFplus::MsgServer::RemoveHandler(type);
    }

    MsgReply *SafplusMsgServer::sendReply(ClIocAddressT destination, void* buffer, ClWordT length, ClWordT msgtype, Wakeable *wakeable)
    {
        memset(&msgReply, 0, sizeof(MsgReply));
        /*
         * Send message
         */
        try
        {
            SendMsg(destination, buffer, length, msgtype);
        }
        catch (...)
        {
            return NULL;
        }
        /**
         * Sending Sync type, need to start listen on replying to wake
         */
        if (wakeable == NULL)
        {
            /**
             * Wait on condition
             */
            while (strlen(msgReply.buffer) < 2)
            {
                if (!msgSendConditionMutex.timed_wait(msgSendReplyMutex, 4000)) return &msgReply;
            }
        }
        else
        {
            /*
             * GAS: using mutex on wakeable object
             */
            wakeable->wake(0, &msgReply);
        }
        return &msgReply;
    }

}