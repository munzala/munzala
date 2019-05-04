// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "echo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace echo {

namespace {

const ::google::protobuf::Descriptor* EchoRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* AddRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* AddResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_echo_2eproto() {
  protobuf_AddDesc_echo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "echo.proto");
  GOOGLE_CHECK(file != NULL);
  EchoRequest_descriptor_ = file->message_type(0);
  static const int EchoRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, message_),
  };
  EchoRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EchoRequest_descriptor_,
      EchoRequest::default_instance_,
      EchoRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(EchoRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, _is_default_instance_));
  AddRequest_descriptor_ = file->message_type(1);
  static const int AddRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddRequest, addx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddRequest, addy_),
  };
  AddRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AddRequest_descriptor_,
      AddRequest::default_instance_,
      AddRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(AddRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddRequest, _is_default_instance_));
  AddResponse_descriptor_ = file->message_type(2);
  static const int AddResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddResponse, answer_),
  };
  AddResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AddResponse_descriptor_,
      AddResponse::default_instance_,
      AddResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(AddResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_echo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EchoRequest_descriptor_, &EchoRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AddRequest_descriptor_, &AddRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AddResponse_descriptor_, &AddResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_echo_2eproto() {
  delete EchoRequest::default_instance_;
  delete EchoRequest_reflection_;
  delete AddRequest::default_instance_;
  delete AddRequest_reflection_;
  delete AddResponse::default_instance_;
  delete AddResponse_reflection_;
}

void protobuf_AddDesc_echo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\necho.proto\022\004echo\"\036\n\013EchoRequest\022\017\n\007mes"
    "sage\030\001 \001(\t\"(\n\nAddRequest\022\014\n\004addX\030\001 \001(\007\022\014"
    "\n\004addY\030\002 \001(\007\"\035\n\013AddResponse\022\016\n\006answer\030\001 "
    "\001(\00728\n\004Echo\0220\n\006DoEcho\022\021.echo.EchoRequest"
    "\032\021.echo.EchoRequest\"\00025\n\003Add\022.\n\005DoAdd\022\020."
    "echo.AddRequest\032\021.echo.AddResponse\"\000b\006pr"
    "oto3", 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "echo.proto", &protobuf_RegisterTypes);
  EchoRequest::default_instance_ = new EchoRequest();
  AddRequest::default_instance_ = new AddRequest();
  AddResponse::default_instance_ = new AddResponse();
  EchoRequest::default_instance_->InitAsDefaultInstance();
  AddRequest::default_instance_->InitAsDefaultInstance();
  AddResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_echo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_echo_2eproto {
  StaticDescriptorInitializer_echo_2eproto() {
    protobuf_AddDesc_echo_2eproto();
  }
} static_descriptor_initializer_echo_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EchoRequest::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EchoRequest::EchoRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:echo.EchoRequest)
}

void EchoRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

EchoRequest::EchoRequest(const EchoRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:echo.EchoRequest)
}

void EchoRequest::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EchoRequest::~EchoRequest() {
  // @@protoc_insertion_point(destructor:echo.EchoRequest)
  SharedDtor();
}

void EchoRequest::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void EchoRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoRequest_descriptor_;
}

const EchoRequest& EchoRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();
  return *default_instance_;
}

EchoRequest* EchoRequest::default_instance_ = NULL;

EchoRequest* EchoRequest::New(::google::protobuf::Arena* arena) const {
  EchoRequest* n = new EchoRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EchoRequest::Clear() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool EchoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:echo.EchoRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "echo.EchoRequest.message"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:echo.EchoRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:echo.EchoRequest)
  return false;
#undef DO_
}

void EchoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:echo.EchoRequest)
  // optional string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "echo.EchoRequest.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  // @@protoc_insertion_point(serialize_end:echo.EchoRequest)
}

::google::protobuf::uint8* EchoRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:echo.EchoRequest)
  // optional string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "echo.EchoRequest.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:echo.EchoRequest)
  return target;
}

int EchoRequest::ByteSize() const {
  int total_size = 0;

  // optional string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const EchoRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EchoRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoRequest::MergeFrom(const EchoRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
}

void EchoRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoRequest::CopyFrom(const EchoRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoRequest::IsInitialized() const {

  return true;
}

void EchoRequest::Swap(EchoRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EchoRequest::InternalSwap(EchoRequest* other) {
  message_.Swap(&other->message_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EchoRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoRequest_descriptor_;
  metadata.reflection = EchoRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EchoRequest

// optional string message = 1;
void EchoRequest::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& EchoRequest::message() const {
  // @@protoc_insertion_point(field_get:echo.EchoRequest.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EchoRequest::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.EchoRequest.message)
}
 void EchoRequest::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.EchoRequest.message)
}
 void EchoRequest::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.EchoRequest.message)
}
 ::std::string* EchoRequest::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:echo.EchoRequest.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* EchoRequest::release_message() {
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EchoRequest::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:echo.EchoRequest.message)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddRequest::kAddXFieldNumber;
const int AddRequest::kAddYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AddRequest::AddRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:echo.AddRequest)
}

void AddRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AddRequest::AddRequest(const AddRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:echo.AddRequest)
}

void AddRequest::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  addx_ = 0u;
  addy_ = 0u;
}

AddRequest::~AddRequest() {
  // @@protoc_insertion_point(destructor:echo.AddRequest)
  SharedDtor();
}

void AddRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AddRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddRequest_descriptor_;
}

const AddRequest& AddRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();
  return *default_instance_;
}

AddRequest* AddRequest::default_instance_ = NULL;

AddRequest* AddRequest::New(::google::protobuf::Arena* arena) const {
  AddRequest* n = new AddRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddRequest::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<AddRequest*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(addx_, addy_);

#undef ZR_HELPER_
#undef ZR_

}

bool AddRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:echo.AddRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed32 addX = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &addx_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_addY;
        break;
      }

      // optional fixed32 addY = 2;
      case 2: {
        if (tag == 21) {
         parse_addY:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &addy_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:echo.AddRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:echo.AddRequest)
  return false;
#undef DO_
}

void AddRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:echo.AddRequest)
  // optional fixed32 addX = 1;
  if (this->addx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->addx(), output);
  }

  // optional fixed32 addY = 2;
  if (this->addy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->addy(), output);
  }

  // @@protoc_insertion_point(serialize_end:echo.AddRequest)
}

::google::protobuf::uint8* AddRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:echo.AddRequest)
  // optional fixed32 addX = 1;
  if (this->addx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->addx(), target);
  }

  // optional fixed32 addY = 2;
  if (this->addy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->addy(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:echo.AddRequest)
  return target;
}

int AddRequest::ByteSize() const {
  int total_size = 0;

  // optional fixed32 addX = 1;
  if (this->addx() != 0) {
    total_size += 1 + 4;
  }

  // optional fixed32 addY = 2;
  if (this->addy() != 0) {
    total_size += 1 + 4;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const AddRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AddRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AddRequest::MergeFrom(const AddRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.addx() != 0) {
    set_addx(from.addx());
  }
  if (from.addy() != 0) {
    set_addy(from.addy());
  }
}

void AddRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddRequest::CopyFrom(const AddRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddRequest::IsInitialized() const {

  return true;
}

void AddRequest::Swap(AddRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddRequest::InternalSwap(AddRequest* other) {
  std::swap(addx_, other->addx_);
  std::swap(addy_, other->addy_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddRequest_descriptor_;
  metadata.reflection = AddRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AddRequest

// optional fixed32 addX = 1;
void AddRequest::clear_addx() {
  addx_ = 0u;
}
 ::google::protobuf::uint32 AddRequest::addx() const {
  // @@protoc_insertion_point(field_get:echo.AddRequest.addX)
  return addx_;
}
 void AddRequest::set_addx(::google::protobuf::uint32 value) {
  
  addx_ = value;
  // @@protoc_insertion_point(field_set:echo.AddRequest.addX)
}

// optional fixed32 addY = 2;
void AddRequest::clear_addy() {
  addy_ = 0u;
}
 ::google::protobuf::uint32 AddRequest::addy() const {
  // @@protoc_insertion_point(field_get:echo.AddRequest.addY)
  return addy_;
}
 void AddRequest::set_addy(::google::protobuf::uint32 value) {
  
  addy_ = value;
  // @@protoc_insertion_point(field_set:echo.AddRequest.addY)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddResponse::kAnswerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AddResponse::AddResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:echo.AddResponse)
}

void AddResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AddResponse::AddResponse(const AddResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:echo.AddResponse)
}

void AddResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  answer_ = 0u;
}

AddResponse::~AddResponse() {
  // @@protoc_insertion_point(destructor:echo.AddResponse)
  SharedDtor();
}

void AddResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AddResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddResponse_descriptor_;
}

const AddResponse& AddResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_2eproto();
  return *default_instance_;
}

AddResponse* AddResponse::default_instance_ = NULL;

AddResponse* AddResponse::New(::google::protobuf::Arena* arena) const {
  AddResponse* n = new AddResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddResponse::Clear() {
  answer_ = 0u;
}

bool AddResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:echo.AddResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed32 answer = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &answer_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:echo.AddResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:echo.AddResponse)
  return false;
#undef DO_
}

void AddResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:echo.AddResponse)
  // optional fixed32 answer = 1;
  if (this->answer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->answer(), output);
  }

  // @@protoc_insertion_point(serialize_end:echo.AddResponse)
}

::google::protobuf::uint8* AddResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:echo.AddResponse)
  // optional fixed32 answer = 1;
  if (this->answer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->answer(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:echo.AddResponse)
  return target;
}

int AddResponse::ByteSize() const {
  int total_size = 0;

  // optional fixed32 answer = 1;
  if (this->answer() != 0) {
    total_size += 1 + 4;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddResponse::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const AddResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AddResponse>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AddResponse::MergeFrom(const AddResponse& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.answer() != 0) {
    set_answer(from.answer());
  }
}

void AddResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddResponse::CopyFrom(const AddResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddResponse::IsInitialized() const {

  return true;
}

void AddResponse::Swap(AddResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddResponse::InternalSwap(AddResponse* other) {
  std::swap(answer_, other->answer_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddResponse_descriptor_;
  metadata.reflection = AddResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AddResponse

// optional fixed32 answer = 1;
void AddResponse::clear_answer() {
  answer_ = 0u;
}
 ::google::protobuf::uint32 AddResponse::answer() const {
  // @@protoc_insertion_point(field_get:echo.AddResponse.answer)
  return answer_;
}
 void AddResponse::set_answer(::google::protobuf::uint32 value) {
  
  answer_ = value;
  // @@protoc_insertion_point(field_set:echo.AddResponse.answer)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

// @@protoc_insertion_point(global_scope)
