// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MgtMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MgtMsg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Mgt {
namespace Msg {

namespace {

const ::google::protobuf::Descriptor* MsgBind_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgBind_reflection_ = NULL;
const ::google::protobuf::Descriptor* MsgData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgData_reflection_ = NULL;
const ::google::protobuf::Descriptor* MsgMgt_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgMgt_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MsgMgt_MgtMsgType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_MgtMsg_2eproto() {
  protobuf_AddDesc_MgtMsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MgtMsg.proto");
  GOOGLE_CHECK(file != NULL);
  MsgBind_descriptor_ = file->message_type(0);
  static const int MsgBind_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBind, handle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBind, module_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBind, route_),
  };
  MsgBind_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgBind_descriptor_,
      MsgBind::default_instance_,
      MsgBind_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBind, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBind, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgBind));
  MsgData_descriptor_ = file->message_type(1);
  static const int MsgData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgData, route_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgData, value_),
  };
  MsgData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgData_descriptor_,
      MsgData::default_instance_,
      MsgData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgData));
  MsgMgt_descriptor_ = file->message_type(2);
  static const int MsgMgt_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMgt, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMgt, bind_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMgt, data_),
  };
  MsgMgt_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgMgt_descriptor_,
      MsgMgt::default_instance_,
      MsgMgt_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMgt, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMgt, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgMgt));
  MsgMgt_MgtMsgType_descriptor_ = MsgMgt_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MgtMsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgBind_descriptor_, &MsgBind::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgData_descriptor_, &MsgData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgMgt_descriptor_, &MsgMgt::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MgtMsg_2eproto() {
  delete MsgBind::default_instance_;
  delete MsgBind_reflection_;
  delete MsgData::default_instance_;
  delete MsgData_reflection_;
  delete MsgMgt::default_instance_;
  delete MsgMgt_reflection_;
}

void protobuf_AddDesc_MgtMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014MgtMsg.proto\022\007Mgt.Msg\"8\n\007MsgBind\022\016\n\006ha"
    "ndle\030\001 \002(\t\022\016\n\006module\030\002 \002(\t\022\r\n\005route\030\003 \002("
    "\t\"\'\n\007MsgData\022\r\n\005route\030\001 \002(\t\022\r\n\005value\030\002 \001"
    "(\t\"\364\001\n\006MsgMgt\022(\n\004type\030\001 \002(\0162\032.Mgt.Msg.Ms"
    "gMgt.MgtMsgType\022\014\n\004bind\030\002 \002(\014\022\014\n\004data\030\003 "
    "\003(\014\"\243\001\n\nMgtMsgType\022\025\n\021CL_MGT_MSG_UNUSED\020"
    "\000\022\023\n\017CL_MGT_MSG_BIND\020\001\022\022\n\016CL_MGT_MSG_GET"
    "\020\002\022\022\n\016CL_MGT_MSG_SET\020\003\022\022\n\016CL_MGT_MSG_RPC"
    "\020\004\022\027\n\023CL_MGT_MSG_BIND_RPC\020\005\022\024\n\020CL_MGT_MS"
    "G_NOTIF\020\006", 369);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MgtMsg.proto", &protobuf_RegisterTypes);
  MsgBind::default_instance_ = new MsgBind();
  MsgData::default_instance_ = new MsgData();
  MsgMgt::default_instance_ = new MsgMgt();
  MsgBind::default_instance_->InitAsDefaultInstance();
  MsgData::default_instance_->InitAsDefaultInstance();
  MsgMgt::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MgtMsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MgtMsg_2eproto {
  StaticDescriptorInitializer_MgtMsg_2eproto() {
    protobuf_AddDesc_MgtMsg_2eproto();
  }
} static_descriptor_initializer_MgtMsg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MsgBind::kHandleFieldNumber;
const int MsgBind::kModuleFieldNumber;
const int MsgBind::kRouteFieldNumber;
#endif  // !_MSC_VER

MsgBind::MsgBind()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgBind::InitAsDefaultInstance() {
}

MsgBind::MsgBind(const MsgBind& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgBind::SharedCtor() {
  _cached_size_ = 0;
  handle_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  module_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  route_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgBind::~MsgBind() {
  SharedDtor();
}

void MsgBind::SharedDtor() {
  if (handle_ != &::google::protobuf::internal::kEmptyString) {
    delete handle_;
  }
  if (module_ != &::google::protobuf::internal::kEmptyString) {
    delete module_;
  }
  if (route_ != &::google::protobuf::internal::kEmptyString) {
    delete route_;
  }
  if (this != default_instance_) {
  }
}

void MsgBind::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgBind::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgBind_descriptor_;
}

const MsgBind& MsgBind::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MgtMsg_2eproto();
  return *default_instance_;
}

MsgBind* MsgBind::default_instance_ = NULL;

MsgBind* MsgBind::New() const {
  return new MsgBind;
}

void MsgBind::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_handle()) {
      if (handle_ != &::google::protobuf::internal::kEmptyString) {
        handle_->clear();
      }
    }
    if (has_module()) {
      if (module_ != &::google::protobuf::internal::kEmptyString) {
        module_->clear();
      }
    }
    if (has_route()) {
      if (route_ != &::google::protobuf::internal::kEmptyString) {
        route_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgBind::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string handle = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_handle()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->handle().data(), this->handle().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_module;
        break;
      }

      // required string module = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_module:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_module()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->module().data(), this->module().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_route;
        break;
      }

      // required string route = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_route:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_route()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->route().data(), this->route().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgBind::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string handle = 1;
  if (has_handle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->handle().data(), this->handle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->handle(), output);
  }

  // required string module = 2;
  if (has_module()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->module().data(), this->module().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->module(), output);
  }

  // required string route = 3;
  if (has_route()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->route().data(), this->route().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->route(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgBind::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string handle = 1;
  if (has_handle()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->handle().data(), this->handle().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->handle(), target);
  }

  // required string module = 2;
  if (has_module()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->module().data(), this->module().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->module(), target);
  }

  // required string route = 3;
  if (has_route()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->route().data(), this->route().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->route(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgBind::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string handle = 1;
    if (has_handle()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->handle());
    }

    // required string module = 2;
    if (has_module()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->module());
    }

    // required string route = 3;
    if (has_route()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->route());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgBind::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgBind* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgBind*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgBind::MergeFrom(const MsgBind& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_handle()) {
      set_handle(from.handle());
    }
    if (from.has_module()) {
      set_module(from.module());
    }
    if (from.has_route()) {
      set_route(from.route());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgBind::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgBind::CopyFrom(const MsgBind& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgBind::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MsgBind::Swap(MsgBind* other) {
  if (other != this) {
    std::swap(handle_, other->handle_);
    std::swap(module_, other->module_);
    std::swap(route_, other->route_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgBind::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgBind_descriptor_;
  metadata.reflection = MsgBind_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MsgData::kRouteFieldNumber;
const int MsgData::kValueFieldNumber;
#endif  // !_MSC_VER

MsgData::MsgData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgData::InitAsDefaultInstance() {
}

MsgData::MsgData(const MsgData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgData::SharedCtor() {
  _cached_size_ = 0;
  route_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgData::~MsgData() {
  SharedDtor();
}

void MsgData::SharedDtor() {
  if (route_ != &::google::protobuf::internal::kEmptyString) {
    delete route_;
  }
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void MsgData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgData_descriptor_;
}

const MsgData& MsgData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MgtMsg_2eproto();
  return *default_instance_;
}

MsgData* MsgData::default_instance_ = NULL;

MsgData* MsgData::New() const {
  return new MsgData;
}

void MsgData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_route()) {
      if (route_ != &::google::protobuf::internal::kEmptyString) {
        route_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::kEmptyString) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string route = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_route()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->route().data(), this->route().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // optional string value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string route = 1;
  if (has_route()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->route().data(), this->route().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->route(), output);
  }

  // optional string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string route = 1;
  if (has_route()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->route().data(), this->route().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->route(), target);
  }

  // optional string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string route = 1;
    if (has_route()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->route());
    }

    // optional string value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgData::MergeFrom(const MsgData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_route()) {
      set_route(from.route());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgData::CopyFrom(const MsgData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MsgData::Swap(MsgData* other) {
  if (other != this) {
    std::swap(route_, other->route_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgData_descriptor_;
  metadata.reflection = MsgData_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* MsgMgt_MgtMsgType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgMgt_MgtMsgType_descriptor_;
}
bool MsgMgt_MgtMsgType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_UNUSED;
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_BIND;
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_GET;
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_SET;
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_RPC;
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_BIND_RPC;
const MsgMgt_MgtMsgType MsgMgt::CL_MGT_MSG_NOTIF;
const MsgMgt_MgtMsgType MsgMgt::MgtMsgType_MIN;
const MsgMgt_MgtMsgType MsgMgt::MgtMsgType_MAX;
const int MsgMgt::MgtMsgType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int MsgMgt::kTypeFieldNumber;
const int MsgMgt::kBindFieldNumber;
const int MsgMgt::kDataFieldNumber;
#endif  // !_MSC_VER

MsgMgt::MsgMgt()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgMgt::InitAsDefaultInstance() {
}

MsgMgt::MsgMgt(const MsgMgt& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgMgt::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  bind_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgMgt::~MsgMgt() {
  SharedDtor();
}

void MsgMgt::SharedDtor() {
  if (bind_ != &::google::protobuf::internal::kEmptyString) {
    delete bind_;
  }
  if (this != default_instance_) {
  }
}

void MsgMgt::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgMgt::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgMgt_descriptor_;
}

const MsgMgt& MsgMgt::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MgtMsg_2eproto();
  return *default_instance_;
}

MsgMgt* MsgMgt::default_instance_ = NULL;

MsgMgt* MsgMgt::New() const {
  return new MsgMgt;
}

void MsgMgt::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_bind()) {
      if (bind_ != &::google::protobuf::internal::kEmptyString) {
        bind_->clear();
      }
    }
  }
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgMgt::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Mgt.Msg.MsgMgt.MgtMsgType type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Mgt::Msg::MsgMgt_MgtMsgType_IsValid(value)) {
            set_type(static_cast< ::Mgt::Msg::MsgMgt_MgtMsgType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_bind;
        break;
      }

      // required bytes bind = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_bind:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_bind()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // repeated bytes data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_data;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgMgt::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .Mgt.Msg.MsgMgt.MgtMsgType type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required bytes bind = 2;
  if (has_bind()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->bind(), output);
  }

  // repeated bytes data = 3;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgMgt::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .Mgt.Msg.MsgMgt.MgtMsgType type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required bytes bind = 2;
  if (has_bind()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->bind(), target);
  }

  // repeated bytes data = 3;
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(3, this->data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgMgt::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Mgt.Msg.MsgMgt.MgtMsgType type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // required bytes bind = 2;
    if (has_bind()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->bind());
    }

  }
  // repeated bytes data = 3;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->data(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgMgt::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgMgt* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgMgt*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgMgt::MergeFrom(const MsgMgt& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_bind()) {
      set_bind(from.bind());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgMgt::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgMgt::CopyFrom(const MsgMgt& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgMgt::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void MsgMgt::Swap(MsgMgt* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(bind_, other->bind_);
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgMgt::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgMgt_descriptor_;
  metadata.reflection = MsgMgt_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Msg
}  // namespace Mgt

// @@protoc_insertion_point(global_scope)
