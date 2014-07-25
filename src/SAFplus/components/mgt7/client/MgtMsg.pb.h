// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MgtMsg.proto

#ifndef PROTOBUF_MgtMsg_2eproto__INCLUDED
#define PROTOBUF_MgtMsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Mgt {
namespace Msg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MgtMsg_2eproto();
void protobuf_AssignDesc_MgtMsg_2eproto();
void protobuf_ShutdownFile_MgtMsg_2eproto();

class MsgBind;
class MsgData;
class MsgMgt;

enum MsgMgt_MgtMsgType {
  MsgMgt_MgtMsgType_CL_MGT_MSG_UNUSED = 0,
  MsgMgt_MgtMsgType_CL_MGT_MSG_BIND = 1,
  MsgMgt_MgtMsgType_CL_MGT_MSG_GET = 2,
  MsgMgt_MgtMsgType_CL_MGT_MSG_SET = 3,
  MsgMgt_MgtMsgType_CL_MGT_MSG_RPC = 4,
  MsgMgt_MgtMsgType_CL_MGT_MSG_BIND_RPC = 5,
  MsgMgt_MgtMsgType_CL_MGT_MSG_NOTIF = 6
};
bool MsgMgt_MgtMsgType_IsValid(int value);
const MsgMgt_MgtMsgType MsgMgt_MgtMsgType_MgtMsgType_MIN = MsgMgt_MgtMsgType_CL_MGT_MSG_UNUSED;
const MsgMgt_MgtMsgType MsgMgt_MgtMsgType_MgtMsgType_MAX = MsgMgt_MgtMsgType_CL_MGT_MSG_NOTIF;
const int MsgMgt_MgtMsgType_MgtMsgType_ARRAYSIZE = MsgMgt_MgtMsgType_MgtMsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgMgt_MgtMsgType_descriptor();
inline const ::std::string& MsgMgt_MgtMsgType_Name(MsgMgt_MgtMsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgMgt_MgtMsgType_descriptor(), value);
}
inline bool MsgMgt_MgtMsgType_Parse(
    const ::std::string& name, MsgMgt_MgtMsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgMgt_MgtMsgType>(
    MsgMgt_MgtMsgType_descriptor(), name, value);
}
// ===================================================================

class MsgBind : public ::google::protobuf::Message {
 public:
  MsgBind();
  virtual ~MsgBind();

  MsgBind(const MsgBind& from);

  inline MsgBind& operator=(const MsgBind& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgBind& default_instance();

  void Swap(MsgBind* other);

  // implements Message ----------------------------------------------

  MsgBind* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgBind& from);
  void MergeFrom(const MsgBind& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string handle = 1;
  inline bool has_handle() const;
  inline void clear_handle();
  static const int kHandleFieldNumber = 1;
  inline const ::std::string& handle() const;
  inline void set_handle(const ::std::string& value);
  inline void set_handle(const char* value);
  inline void set_handle(const char* value, size_t size);
  inline ::std::string* mutable_handle();
  inline ::std::string* release_handle();
  inline void set_allocated_handle(::std::string* handle);

  // required string module = 2;
  inline bool has_module() const;
  inline void clear_module();
  static const int kModuleFieldNumber = 2;
  inline const ::std::string& module() const;
  inline void set_module(const ::std::string& value);
  inline void set_module(const char* value);
  inline void set_module(const char* value, size_t size);
  inline ::std::string* mutable_module();
  inline ::std::string* release_module();
  inline void set_allocated_module(::std::string* module);

  // required string route = 3;
  inline bool has_route() const;
  inline void clear_route();
  static const int kRouteFieldNumber = 3;
  inline const ::std::string& route() const;
  inline void set_route(const ::std::string& value);
  inline void set_route(const char* value);
  inline void set_route(const char* value, size_t size);
  inline ::std::string* mutable_route();
  inline ::std::string* release_route();
  inline void set_allocated_route(::std::string* route);

  // @@protoc_insertion_point(class_scope:Mgt.Msg.MsgBind)
 private:
  inline void set_has_handle();
  inline void clear_has_handle();
  inline void set_has_module();
  inline void clear_has_module();
  inline void set_has_route();
  inline void clear_has_route();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* handle_;
  ::std::string* module_;
  ::std::string* route_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_MgtMsg_2eproto();
  friend void protobuf_AssignDesc_MgtMsg_2eproto();
  friend void protobuf_ShutdownFile_MgtMsg_2eproto();

  void InitAsDefaultInstance();
  static MsgBind* default_instance_;
};
// -------------------------------------------------------------------

class MsgData : public ::google::protobuf::Message {
 public:
  MsgData();
  virtual ~MsgData();

  MsgData(const MsgData& from);

  inline MsgData& operator=(const MsgData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgData& default_instance();

  void Swap(MsgData* other);

  // implements Message ----------------------------------------------

  MsgData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgData& from);
  void MergeFrom(const MsgData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string route = 1;
  inline bool has_route() const;
  inline void clear_route();
  static const int kRouteFieldNumber = 1;
  inline const ::std::string& route() const;
  inline void set_route(const ::std::string& value);
  inline void set_route(const char* value);
  inline void set_route(const char* value, size_t size);
  inline ::std::string* mutable_route();
  inline ::std::string* release_route();
  inline void set_allocated_route(::std::string* route);

  // optional string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:Mgt.Msg.MsgData)
 private:
  inline void set_has_route();
  inline void clear_has_route();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* route_;
  ::std::string* value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_MgtMsg_2eproto();
  friend void protobuf_AssignDesc_MgtMsg_2eproto();
  friend void protobuf_ShutdownFile_MgtMsg_2eproto();

  void InitAsDefaultInstance();
  static MsgData* default_instance_;
};
// -------------------------------------------------------------------

class MsgMgt : public ::google::protobuf::Message {
 public:
  MsgMgt();
  virtual ~MsgMgt();

  MsgMgt(const MsgMgt& from);

  inline MsgMgt& operator=(const MsgMgt& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgMgt& default_instance();

  void Swap(MsgMgt* other);

  // implements Message ----------------------------------------------

  MsgMgt* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgMgt& from);
  void MergeFrom(const MsgMgt& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef MsgMgt_MgtMsgType MgtMsgType;
  static const MgtMsgType CL_MGT_MSG_UNUSED = MsgMgt_MgtMsgType_CL_MGT_MSG_UNUSED;
  static const MgtMsgType CL_MGT_MSG_BIND = MsgMgt_MgtMsgType_CL_MGT_MSG_BIND;
  static const MgtMsgType CL_MGT_MSG_GET = MsgMgt_MgtMsgType_CL_MGT_MSG_GET;
  static const MgtMsgType CL_MGT_MSG_SET = MsgMgt_MgtMsgType_CL_MGT_MSG_SET;
  static const MgtMsgType CL_MGT_MSG_RPC = MsgMgt_MgtMsgType_CL_MGT_MSG_RPC;
  static const MgtMsgType CL_MGT_MSG_BIND_RPC = MsgMgt_MgtMsgType_CL_MGT_MSG_BIND_RPC;
  static const MgtMsgType CL_MGT_MSG_NOTIF = MsgMgt_MgtMsgType_CL_MGT_MSG_NOTIF;
  static inline bool MgtMsgType_IsValid(int value) {
    return MsgMgt_MgtMsgType_IsValid(value);
  }
  static const MgtMsgType MgtMsgType_MIN =
    MsgMgt_MgtMsgType_MgtMsgType_MIN;
  static const MgtMsgType MgtMsgType_MAX =
    MsgMgt_MgtMsgType_MgtMsgType_MAX;
  static const int MgtMsgType_ARRAYSIZE =
    MsgMgt_MgtMsgType_MgtMsgType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MgtMsgType_descriptor() {
    return MsgMgt_MgtMsgType_descriptor();
  }
  static inline const ::std::string& MgtMsgType_Name(MgtMsgType value) {
    return MsgMgt_MgtMsgType_Name(value);
  }
  static inline bool MgtMsgType_Parse(const ::std::string& name,
      MgtMsgType* value) {
    return MsgMgt_MgtMsgType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .Mgt.Msg.MsgMgt.MgtMsgType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::Mgt::Msg::MsgMgt_MgtMsgType type() const;
  inline void set_type(::Mgt::Msg::MsgMgt_MgtMsgType value);

  // required bytes bind = 2;
  inline bool has_bind() const;
  inline void clear_bind();
  static const int kBindFieldNumber = 2;
  inline const ::std::string& bind() const;
  inline void set_bind(const ::std::string& value);
  inline void set_bind(const char* value);
  inline void set_bind(const void* value, size_t size);
  inline ::std::string* mutable_bind();
  inline ::std::string* release_bind();
  inline void set_allocated_bind(::std::string* bind);

  // repeated bytes data = 3;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data(int index) const;
  inline ::std::string* mutable_data(int index);
  inline void set_data(int index, const ::std::string& value);
  inline void set_data(int index, const char* value);
  inline void set_data(int index, const void* value, size_t size);
  inline ::std::string* add_data();
  inline void add_data(const ::std::string& value);
  inline void add_data(const char* value);
  inline void add_data(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& data() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_data();

  // @@protoc_insertion_point(class_scope:Mgt.Msg.MsgMgt)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_bind();
  inline void clear_has_bind();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* bind_;
  ::google::protobuf::RepeatedPtrField< ::std::string> data_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_MgtMsg_2eproto();
  friend void protobuf_AssignDesc_MgtMsg_2eproto();
  friend void protobuf_ShutdownFile_MgtMsg_2eproto();

  void InitAsDefaultInstance();
  static MsgMgt* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgBind

// required string handle = 1;
inline bool MsgBind::has_handle() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgBind::set_has_handle() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgBind::clear_has_handle() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgBind::clear_handle() {
  if (handle_ != &::google::protobuf::internal::kEmptyString) {
    handle_->clear();
  }
  clear_has_handle();
}
inline const ::std::string& MsgBind::handle() const {
  return *handle_;
}
inline void MsgBind::set_handle(const ::std::string& value) {
  set_has_handle();
  if (handle_ == &::google::protobuf::internal::kEmptyString) {
    handle_ = new ::std::string;
  }
  handle_->assign(value);
}
inline void MsgBind::set_handle(const char* value) {
  set_has_handle();
  if (handle_ == &::google::protobuf::internal::kEmptyString) {
    handle_ = new ::std::string;
  }
  handle_->assign(value);
}
inline void MsgBind::set_handle(const char* value, size_t size) {
  set_has_handle();
  if (handle_ == &::google::protobuf::internal::kEmptyString) {
    handle_ = new ::std::string;
  }
  handle_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBind::mutable_handle() {
  set_has_handle();
  if (handle_ == &::google::protobuf::internal::kEmptyString) {
    handle_ = new ::std::string;
  }
  return handle_;
}
inline ::std::string* MsgBind::release_handle() {
  clear_has_handle();
  if (handle_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = handle_;
    handle_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgBind::set_allocated_handle(::std::string* handle) {
  if (handle_ != &::google::protobuf::internal::kEmptyString) {
    delete handle_;
  }
  if (handle) {
    set_has_handle();
    handle_ = handle;
  } else {
    clear_has_handle();
    handle_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string module = 2;
inline bool MsgBind::has_module() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgBind::set_has_module() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgBind::clear_has_module() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgBind::clear_module() {
  if (module_ != &::google::protobuf::internal::kEmptyString) {
    module_->clear();
  }
  clear_has_module();
}
inline const ::std::string& MsgBind::module() const {
  return *module_;
}
inline void MsgBind::set_module(const ::std::string& value) {
  set_has_module();
  if (module_ == &::google::protobuf::internal::kEmptyString) {
    module_ = new ::std::string;
  }
  module_->assign(value);
}
inline void MsgBind::set_module(const char* value) {
  set_has_module();
  if (module_ == &::google::protobuf::internal::kEmptyString) {
    module_ = new ::std::string;
  }
  module_->assign(value);
}
inline void MsgBind::set_module(const char* value, size_t size) {
  set_has_module();
  if (module_ == &::google::protobuf::internal::kEmptyString) {
    module_ = new ::std::string;
  }
  module_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBind::mutable_module() {
  set_has_module();
  if (module_ == &::google::protobuf::internal::kEmptyString) {
    module_ = new ::std::string;
  }
  return module_;
}
inline ::std::string* MsgBind::release_module() {
  clear_has_module();
  if (module_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = module_;
    module_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgBind::set_allocated_module(::std::string* module) {
  if (module_ != &::google::protobuf::internal::kEmptyString) {
    delete module_;
  }
  if (module) {
    set_has_module();
    module_ = module;
  } else {
    clear_has_module();
    module_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string route = 3;
inline bool MsgBind::has_route() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgBind::set_has_route() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgBind::clear_has_route() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgBind::clear_route() {
  if (route_ != &::google::protobuf::internal::kEmptyString) {
    route_->clear();
  }
  clear_has_route();
}
inline const ::std::string& MsgBind::route() const {
  return *route_;
}
inline void MsgBind::set_route(const ::std::string& value) {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  route_->assign(value);
}
inline void MsgBind::set_route(const char* value) {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  route_->assign(value);
}
inline void MsgBind::set_route(const char* value, size_t size) {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  route_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBind::mutable_route() {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  return route_;
}
inline ::std::string* MsgBind::release_route() {
  clear_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = route_;
    route_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgBind::set_allocated_route(::std::string* route) {
  if (route_ != &::google::protobuf::internal::kEmptyString) {
    delete route_;
  }
  if (route) {
    set_has_route();
    route_ = route;
  } else {
    clear_has_route();
    route_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MsgData

// required string route = 1;
inline bool MsgData::has_route() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgData::set_has_route() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgData::clear_has_route() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgData::clear_route() {
  if (route_ != &::google::protobuf::internal::kEmptyString) {
    route_->clear();
  }
  clear_has_route();
}
inline const ::std::string& MsgData::route() const {
  return *route_;
}
inline void MsgData::set_route(const ::std::string& value) {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  route_->assign(value);
}
inline void MsgData::set_route(const char* value) {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  route_->assign(value);
}
inline void MsgData::set_route(const char* value, size_t size) {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  route_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgData::mutable_route() {
  set_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    route_ = new ::std::string;
  }
  return route_;
}
inline ::std::string* MsgData::release_route() {
  clear_has_route();
  if (route_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = route_;
    route_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgData::set_allocated_route(::std::string* route) {
  if (route_ != &::google::protobuf::internal::kEmptyString) {
    delete route_;
  }
  if (route) {
    set_has_route();
    route_ = route;
  } else {
    clear_has_route();
    route_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string value = 2;
inline bool MsgData::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgData::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgData::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgData::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& MsgData::value() const {
  return *value_;
}
inline void MsgData::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void MsgData::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void MsgData::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgData::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* MsgData::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgData::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MsgMgt

// required .Mgt.Msg.MsgMgt.MgtMsgType type = 1;
inline bool MsgMgt::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgMgt::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgMgt::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgMgt::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::Mgt::Msg::MsgMgt_MgtMsgType MsgMgt::type() const {
  return static_cast< ::Mgt::Msg::MsgMgt_MgtMsgType >(type_);
}
inline void MsgMgt::set_type(::Mgt::Msg::MsgMgt_MgtMsgType value) {
  assert(::Mgt::Msg::MsgMgt_MgtMsgType_IsValid(value));
  set_has_type();
  type_ = value;
}

// required bytes bind = 2;
inline bool MsgMgt::has_bind() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgMgt::set_has_bind() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgMgt::clear_has_bind() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgMgt::clear_bind() {
  if (bind_ != &::google::protobuf::internal::kEmptyString) {
    bind_->clear();
  }
  clear_has_bind();
}
inline const ::std::string& MsgMgt::bind() const {
  return *bind_;
}
inline void MsgMgt::set_bind(const ::std::string& value) {
  set_has_bind();
  if (bind_ == &::google::protobuf::internal::kEmptyString) {
    bind_ = new ::std::string;
  }
  bind_->assign(value);
}
inline void MsgMgt::set_bind(const char* value) {
  set_has_bind();
  if (bind_ == &::google::protobuf::internal::kEmptyString) {
    bind_ = new ::std::string;
  }
  bind_->assign(value);
}
inline void MsgMgt::set_bind(const void* value, size_t size) {
  set_has_bind();
  if (bind_ == &::google::protobuf::internal::kEmptyString) {
    bind_ = new ::std::string;
  }
  bind_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgMgt::mutable_bind() {
  set_has_bind();
  if (bind_ == &::google::protobuf::internal::kEmptyString) {
    bind_ = new ::std::string;
  }
  return bind_;
}
inline ::std::string* MsgMgt::release_bind() {
  clear_has_bind();
  if (bind_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = bind_;
    bind_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgMgt::set_allocated_bind(::std::string* bind) {
  if (bind_ != &::google::protobuf::internal::kEmptyString) {
    delete bind_;
  }
  if (bind) {
    set_has_bind();
    bind_ = bind;
  } else {
    clear_has_bind();
    bind_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated bytes data = 3;
inline int MsgMgt::data_size() const {
  return data_.size();
}
inline void MsgMgt::clear_data() {
  data_.Clear();
}
inline const ::std::string& MsgMgt::data(int index) const {
  return data_.Get(index);
}
inline ::std::string* MsgMgt::mutable_data(int index) {
  return data_.Mutable(index);
}
inline void MsgMgt::set_data(int index, const ::std::string& value) {
  data_.Mutable(index)->assign(value);
}
inline void MsgMgt::set_data(int index, const char* value) {
  data_.Mutable(index)->assign(value);
}
inline void MsgMgt::set_data(int index, const void* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgMgt::add_data() {
  return data_.Add();
}
inline void MsgMgt::add_data(const ::std::string& value) {
  data_.Add()->assign(value);
}
inline void MsgMgt::add_data(const char* value) {
  data_.Add()->assign(value);
}
inline void MsgMgt::add_data(const void* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MsgMgt::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MsgMgt::mutable_data() {
  return &data_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Msg
}  // namespace Mgt

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Mgt::Msg::MsgMgt_MgtMsgType>() {
  return ::Mgt::Msg::MsgMgt_MgtMsgType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MgtMsg_2eproto__INCLUDED
