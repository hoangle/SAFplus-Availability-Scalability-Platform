// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcTest.proto

#ifndef PROTOBUF_rpcTest_2eproto__INCLUDED
#define PROTOBUF_rpcTest_2eproto__INCLUDED

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
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "SAFplusPBExt.pb.h"
// @@protoc_insertion_point(includes)

namespace SAFplus {
namespace Rpc {
namespace rpcTest {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpcTest_2eproto();
void protobuf_AssignDesc_rpcTest_2eproto();
void protobuf_ShutdownFile_rpcTest_2eproto();

class TestGetRpcMethodRequest;
class DataResult;
class TestGetRpcMethodResponse;

// ===================================================================

class TestGetRpcMethodRequest : public ::google::protobuf::Message {
 public:
  TestGetRpcMethodRequest();
  virtual ~TestGetRpcMethodRequest();

  TestGetRpcMethodRequest(const TestGetRpcMethodRequest& from);

  inline TestGetRpcMethodRequest& operator=(const TestGetRpcMethodRequest& from) {
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
  static const TestGetRpcMethodRequest& default_instance();

  void Swap(TestGetRpcMethodRequest* other);

  // implements Message ----------------------------------------------

  TestGetRpcMethodRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestGetRpcMethodRequest& from);
  void MergeFrom(const TestGetRpcMethodRequest& from);
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

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(TestGetRpcMethodRequest)
  // @@protoc_insertion_point(class_scope:SAFplus.Rpc.rpcTest.TestGetRpcMethodRequest)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_rpcTest_2eproto();
  friend void protobuf_AssignDesc_rpcTest_2eproto();
  friend void protobuf_ShutdownFile_rpcTest_2eproto();

  void InitAsDefaultInstance();
  static TestGetRpcMethodRequest* default_instance_;
};
// -------------------------------------------------------------------

class DataResult : public ::google::protobuf::Message {
 public:
  DataResult();
  virtual ~DataResult();

  DataResult(const DataResult& from);

  inline DataResult& operator=(const DataResult& from) {
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
  static const DataResult& default_instance();

  void Swap(DataResult* other);

  // implements Message ----------------------------------------------

  DataResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataResult& from);
  void MergeFrom(const DataResult& from);
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

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 status = 2;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 2;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(DataResult)
  // @@protoc_insertion_point(class_scope:SAFplus.Rpc.rpcTest.DataResult)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_rpcTest_2eproto();
  friend void protobuf_AssignDesc_rpcTest_2eproto();
  friend void protobuf_ShutdownFile_rpcTest_2eproto();

  void InitAsDefaultInstance();
  static DataResult* default_instance_;
};
// -------------------------------------------------------------------

class TestGetRpcMethodResponse : public ::google::protobuf::Message {
 public:
  TestGetRpcMethodResponse();
  virtual ~TestGetRpcMethodResponse();

  TestGetRpcMethodResponse(const TestGetRpcMethodResponse& from);

  inline TestGetRpcMethodResponse& operator=(const TestGetRpcMethodResponse& from) {
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
  static const TestGetRpcMethodResponse& default_instance();

  void Swap(TestGetRpcMethodResponse* other);

  // implements Message ----------------------------------------------

  TestGetRpcMethodResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestGetRpcMethodResponse& from);
  void MergeFrom(const TestGetRpcMethodResponse& from);
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

  // optional .SAFplus.Rpc.rpcTest.DataResult dataResult = 1;
  inline bool has_dataresult() const;
  inline void clear_dataresult();
  static const int kDataResultFieldNumber = 1;
  inline const ::SAFplus::Rpc::rpcTest::DataResult& dataresult() const;
  inline ::SAFplus::Rpc::rpcTest::DataResult* mutable_dataresult();
  inline ::SAFplus::Rpc::rpcTest::DataResult* release_dataresult();
  inline void set_allocated_dataresult(::SAFplus::Rpc::rpcTest::DataResult* dataresult);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(TestGetRpcMethodResponse)
  // @@protoc_insertion_point(class_scope:SAFplus.Rpc.rpcTest.TestGetRpcMethodResponse)
 private:
  inline void set_has_dataresult();
  inline void clear_has_dataresult();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::SAFplus::Rpc::rpcTest::DataResult* dataresult_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_rpcTest_2eproto();
  friend void protobuf_AssignDesc_rpcTest_2eproto();
  friend void protobuf_ShutdownFile_rpcTest_2eproto();

  void InitAsDefaultInstance();
  static TestGetRpcMethodResponse* default_instance_;
};
// ===================================================================

class rpcTest_Stub;

class rpcTest : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline rpcTest() {};
 public:
  virtual ~rpcTest();

  typedef rpcTest_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void testGetRpcMethod(::google::protobuf::RpcController* controller,
                       const ::SAFplus::Rpc::rpcTest::TestGetRpcMethodRequest* request,
                       ::SAFplus::Rpc::rpcTest::TestGetRpcMethodResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(rpcTest);
};

class rpcTest_Stub : public rpcTest {
 public:
  rpcTest_Stub(::google::protobuf::RpcChannel* channel);
  rpcTest_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~rpcTest_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements rpcTest ------------------------------------------

  void testGetRpcMethod(::google::protobuf::RpcController* controller,
                       const ::SAFplus::Rpc::rpcTest::TestGetRpcMethodRequest* request,
                       ::SAFplus::Rpc::rpcTest::TestGetRpcMethodResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(rpcTest_Stub);
};


// ===================================================================


// ===================================================================

// TestGetRpcMethodRequest

// optional string name = 1;
inline bool TestGetRpcMethodRequest::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestGetRpcMethodRequest::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestGetRpcMethodRequest::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestGetRpcMethodRequest::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& TestGetRpcMethodRequest::name() const {
  return *name_;
}
inline void TestGetRpcMethodRequest::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void TestGetRpcMethodRequest::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void TestGetRpcMethodRequest::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TestGetRpcMethodRequest::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* TestGetRpcMethodRequest::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TestGetRpcMethodRequest::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// DataResult

// optional string name = 1;
inline bool DataResult::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataResult::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataResult::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataResult::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& DataResult::name() const {
  return *name_;
}
inline void DataResult::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DataResult::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DataResult::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataResult::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* DataResult::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DataResult::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 status = 2;
inline bool DataResult::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataResult::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataResult::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataResult::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 DataResult::status() const {
  return status_;
}
inline void DataResult::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
}

// -------------------------------------------------------------------

// TestGetRpcMethodResponse

// optional .SAFplus.Rpc.rpcTest.DataResult dataResult = 1;
inline bool TestGetRpcMethodResponse::has_dataresult() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestGetRpcMethodResponse::set_has_dataresult() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestGetRpcMethodResponse::clear_has_dataresult() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestGetRpcMethodResponse::clear_dataresult() {
  if (dataresult_ != NULL) dataresult_->::SAFplus::Rpc::rpcTest::DataResult::Clear();
  clear_has_dataresult();
}
inline const ::SAFplus::Rpc::rpcTest::DataResult& TestGetRpcMethodResponse::dataresult() const {
  return dataresult_ != NULL ? *dataresult_ : *default_instance_->dataresult_;
}
inline ::SAFplus::Rpc::rpcTest::DataResult* TestGetRpcMethodResponse::mutable_dataresult() {
  set_has_dataresult();
  if (dataresult_ == NULL) dataresult_ = new ::SAFplus::Rpc::rpcTest::DataResult;
  return dataresult_;
}
inline ::SAFplus::Rpc::rpcTest::DataResult* TestGetRpcMethodResponse::release_dataresult() {
  clear_has_dataresult();
  ::SAFplus::Rpc::rpcTest::DataResult* temp = dataresult_;
  dataresult_ = NULL;
  return temp;
}
inline void TestGetRpcMethodResponse::set_allocated_dataresult(::SAFplus::Rpc::rpcTest::DataResult* dataresult) {
  delete dataresult_;
  dataresult_ = dataresult;
  if (dataresult) {
    set_has_dataresult();
  } else {
    clear_has_dataresult();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rpcTest
}  // namespace Rpc
}  // namespace SAFplus

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpcTest_2eproto__INCLUDED