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

/*
 * TODO: This file should be auto generated by protobuf plugin
 * This implementation to response the data to client request
 */

#include "RpcTestImpl.hxx"
#include <iostream>

namespace SAFplus
{
  namespace Rpc
  {
    namespace rpcTest
    {

      rpcTestImpl::rpcTestImpl()
      {
        // TODO Auto-generated constructor stub

      }

      rpcTestImpl::~rpcTestImpl()
      {
        // TODO Auto-generated destructor stub
      }

      void
      rpcTestImpl::testGetRpcMethod(::google::protobuf::RpcController* controller,
          const ::SAFplus::Rpc::rpcTest::TestGetRpcMethodRequest* request, ::SAFplus::Rpc::rpcTest::TestGetRpcMethodResponse* response,
          ::google::protobuf::Closure* done)
      {
        std::cout<<"Server implementation request here!!!"<<std::endl;
        std::cout<<request->DebugString()<<std::endl;

        //TODO:Test
        SAFplus::Rpc::rpcTest::DataResult *data = response->mutable_dataresult();
        data->set_name("MyNameReturn!!!");
        data->set_status(1);
        done->Run();
      }

    } /* namespace rpcTest */
  } /* namespace Rpc */
} /* namespace SAFplus */
