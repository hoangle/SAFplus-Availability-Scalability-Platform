// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "clRpcChannel.hxx"
#include "msgReflection.hxx"

namespace SAFplus {
namespace Rpc {
namespace msgReflection {

namespace {

const ::google::protobuf::ServiceDescriptor* msgReflection_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Rpc_msgReflection_2eproto() {
  protobuf_AddDesc_msgReflection_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msgReflection.proto");
  GOOGLE_CHECK(file != NULL);
  msgReflection_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Rpc_msgReflection_2eproto);
}

}  // namespace
msgReflection::~msgReflection() {}

const ::google::protobuf::ServiceDescriptor* msgReflection::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return msgReflection_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* msgReflection::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return msgReflection_descriptor_;
}

void msgReflection::call(const ::SAFplus::Rpc::msgReflection::CallRequest*,
                         ::SAFplus::Rpc::msgReflection::CallResponse*)
{
  logError("RPC","SVR","Method call() not implemented.");
}

void msgReflection::call(SAFplus::Handle destination,
                     const ::SAFplus::Rpc::msgReflection::CallRequest* request,
                     ::SAFplus::Rpc::msgReflection::CallResponse* response,
                     SAFplus::Wakeable& wakeable)
{
  logError("RPC","SVR","Method call() not implemented.");
}

void msgReflection::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             SAFplus::Handle destination,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             SAFplus::Wakeable& wakeable) {
  GOOGLE_DCHECK_EQ(method->service(), msgReflection_descriptor_);
  switch(method->index()) {
    case 0:
      call(::google::protobuf::down_cast<const ::SAFplus::Rpc::msgReflection::CallRequest*>(request),
             ::google::protobuf::down_cast< ::SAFplus::Rpc::msgReflection::CallResponse*>(response));
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& msgReflection::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::SAFplus::Rpc::msgReflection::CallRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& msgReflection::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::SAFplus::Rpc::msgReflection::CallResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

msgReflection_Stub::msgReflection_Stub(SAFplus::Rpc::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
msgReflection_Stub::msgReflection_Stub(
    SAFplus::Rpc::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
msgReflection_Stub::~msgReflection_Stub() {
  if (owns_channel_) delete channel_;
}

void msgReflection_Stub::call(SAFplus::Handle dest,
                              const ::SAFplus::Rpc::msgReflection::CallRequest* request,
                              ::SAFplus::Rpc::msgReflection::CallResponse* response,
                              SAFplus::Wakeable& wakeable) {
  channel_->CallMethod(descriptor()->method(0), dest, request, response, wakeable);
}

}  // namespace msgReflection
}  // namespace Rpc
}  // namespace SAFplus
