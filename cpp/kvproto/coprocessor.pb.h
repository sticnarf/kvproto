// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: coprocessor.proto

#ifndef PROTOBUF_coprocessor_2eproto__INCLUDED
#define PROTOBUF_coprocessor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "errorpb.pb.h"
#include "kvrpcpb.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_coprocessor_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsKeyRangeImpl();
void InitDefaultsKeyRange();
void InitDefaultsRequestImpl();
void InitDefaultsRequest();
void InitDefaultsResponseImpl();
void InitDefaultsResponse();
inline void InitDefaults() {
  InitDefaultsKeyRange();
  InitDefaultsRequest();
  InitDefaultsResponse();
}
}  // namespace protobuf_coprocessor_2eproto
namespace coprocessor {
class KeyRange;
class KeyRangeDefaultTypeInternal;
extern KeyRangeDefaultTypeInternal _KeyRange_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace coprocessor
namespace coprocessor {

// ===================================================================

class KeyRange : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:coprocessor.KeyRange) */ {
 public:
  KeyRange();
  virtual ~KeyRange();

  KeyRange(const KeyRange& from);

  inline KeyRange& operator=(const KeyRange& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  KeyRange(KeyRange&& from) noexcept
    : KeyRange() {
    *this = ::std::move(from);
  }

  inline KeyRange& operator=(KeyRange&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const KeyRange& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KeyRange* internal_default_instance() {
    return reinterpret_cast<const KeyRange*>(
               &_KeyRange_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(KeyRange* other);
  friend void swap(KeyRange& a, KeyRange& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline KeyRange* New() const PROTOBUF_FINAL { return New(NULL); }

  KeyRange* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const KeyRange& from);
  void MergeFrom(const KeyRange& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(KeyRange* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes start = 1;
  void clear_start();
  static const int kStartFieldNumber = 1;
  const ::std::string& start() const;
  void set_start(const ::std::string& value);
  #if LANG_CXX11
  void set_start(::std::string&& value);
  #endif
  void set_start(const char* value);
  void set_start(const void* value, size_t size);
  ::std::string* mutable_start();
  ::std::string* release_start();
  void set_allocated_start(::std::string* start);

  // bytes end = 2;
  void clear_end();
  static const int kEndFieldNumber = 2;
  const ::std::string& end() const;
  void set_end(const ::std::string& value);
  #if LANG_CXX11
  void set_end(::std::string&& value);
  #endif
  void set_end(const char* value);
  void set_end(const void* value, size_t size);
  ::std::string* mutable_end();
  ::std::string* release_end();
  void set_allocated_end(::std::string* end);

  // @@protoc_insertion_point(class_scope:coprocessor.KeyRange)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr start_;
  ::google::protobuf::internal::ArenaStringPtr end_;
  mutable int _cached_size_;
  friend struct ::protobuf_coprocessor_2eproto::TableStruct;
  friend void ::protobuf_coprocessor_2eproto::InitDefaultsKeyRangeImpl();
};
// -------------------------------------------------------------------

class Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:coprocessor.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Request* other);
  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const PROTOBUF_FINAL { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .coprocessor.KeyRange ranges = 4;
  int ranges_size() const;
  void clear_ranges();
  static const int kRangesFieldNumber = 4;
  const ::coprocessor::KeyRange& ranges(int index) const;
  ::coprocessor::KeyRange* mutable_ranges(int index);
  ::coprocessor::KeyRange* add_ranges();
  ::google::protobuf::RepeatedPtrField< ::coprocessor::KeyRange >*
      mutable_ranges();
  const ::google::protobuf::RepeatedPtrField< ::coprocessor::KeyRange >&
      ranges() const;

  // bytes data = 3;
  void clear_data();
  static const int kDataFieldNumber = 3;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // .kvrpcpb.Context context = 1;
  bool has_context() const;
  void clear_context();
  static const int kContextFieldNumber = 1;
  const ::kvrpcpb::Context& context() const;
  ::kvrpcpb::Context* release_context();
  ::kvrpcpb::Context* mutable_context();
  void set_allocated_context(::kvrpcpb::Context* context);

  // int64 tp = 2;
  void clear_tp();
  static const int kTpFieldNumber = 2;
  ::google::protobuf::int64 tp() const;
  void set_tp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:coprocessor.Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::coprocessor::KeyRange > ranges_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::kvrpcpb::Context* context_;
  ::google::protobuf::int64 tp_;
  mutable int _cached_size_;
  friend struct ::protobuf_coprocessor_2eproto::TableStruct;
  friend void ::protobuf_coprocessor_2eproto::InitDefaultsRequestImpl();
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:coprocessor.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const PROTOBUF_FINAL { return New(NULL); }

  Response* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes data = 1;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // string other_error = 4;
  void clear_other_error();
  static const int kOtherErrorFieldNumber = 4;
  const ::std::string& other_error() const;
  void set_other_error(const ::std::string& value);
  #if LANG_CXX11
  void set_other_error(::std::string&& value);
  #endif
  void set_other_error(const char* value);
  void set_other_error(const char* value, size_t size);
  ::std::string* mutable_other_error();
  ::std::string* release_other_error();
  void set_allocated_other_error(::std::string* other_error);

  // .errorpb.Error region_error = 2;
  bool has_region_error() const;
  void clear_region_error();
  static const int kRegionErrorFieldNumber = 2;
  const ::errorpb::Error& region_error() const;
  ::errorpb::Error* release_region_error();
  ::errorpb::Error* mutable_region_error();
  void set_allocated_region_error(::errorpb::Error* region_error);

  // .kvrpcpb.LockInfo locked = 3;
  bool has_locked() const;
  void clear_locked();
  static const int kLockedFieldNumber = 3;
  const ::kvrpcpb::LockInfo& locked() const;
  ::kvrpcpb::LockInfo* release_locked();
  ::kvrpcpb::LockInfo* mutable_locked();
  void set_allocated_locked(::kvrpcpb::LockInfo* locked);

  // .coprocessor.KeyRange range = 5;
  bool has_range() const;
  void clear_range();
  static const int kRangeFieldNumber = 5;
  const ::coprocessor::KeyRange& range() const;
  ::coprocessor::KeyRange* release_range();
  ::coprocessor::KeyRange* mutable_range();
  void set_allocated_range(::coprocessor::KeyRange* range);

  // .kvrpcpb.ExecDetails exec_details = 6;
  bool has_exec_details() const;
  void clear_exec_details();
  static const int kExecDetailsFieldNumber = 6;
  const ::kvrpcpb::ExecDetails& exec_details() const;
  ::kvrpcpb::ExecDetails* release_exec_details();
  ::kvrpcpb::ExecDetails* mutable_exec_details();
  void set_allocated_exec_details(::kvrpcpb::ExecDetails* exec_details);

  // @@protoc_insertion_point(class_scope:coprocessor.Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::internal::ArenaStringPtr other_error_;
  ::errorpb::Error* region_error_;
  ::kvrpcpb::LockInfo* locked_;
  ::coprocessor::KeyRange* range_;
  ::kvrpcpb::ExecDetails* exec_details_;
  mutable int _cached_size_;
  friend struct ::protobuf_coprocessor_2eproto::TableStruct;
  friend void ::protobuf_coprocessor_2eproto::InitDefaultsResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeyRange

// bytes start = 1;
inline void KeyRange::clear_start() {
  start_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& KeyRange::start() const {
  // @@protoc_insertion_point(field_get:coprocessor.KeyRange.start)
  return start_.GetNoArena();
}
inline void KeyRange::set_start(const ::std::string& value) {
  
  start_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:coprocessor.KeyRange.start)
}
#if LANG_CXX11
inline void KeyRange::set_start(::std::string&& value) {
  
  start_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:coprocessor.KeyRange.start)
}
#endif
inline void KeyRange::set_start(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  start_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:coprocessor.KeyRange.start)
}
inline void KeyRange::set_start(const void* value, size_t size) {
  
  start_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:coprocessor.KeyRange.start)
}
inline ::std::string* KeyRange::mutable_start() {
  
  // @@protoc_insertion_point(field_mutable:coprocessor.KeyRange.start)
  return start_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyRange::release_start() {
  // @@protoc_insertion_point(field_release:coprocessor.KeyRange.start)
  
  return start_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyRange::set_allocated_start(::std::string* start) {
  if (start != NULL) {
    
  } else {
    
  }
  start_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), start);
  // @@protoc_insertion_point(field_set_allocated:coprocessor.KeyRange.start)
}

// bytes end = 2;
inline void KeyRange::clear_end() {
  end_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& KeyRange::end() const {
  // @@protoc_insertion_point(field_get:coprocessor.KeyRange.end)
  return end_.GetNoArena();
}
inline void KeyRange::set_end(const ::std::string& value) {
  
  end_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:coprocessor.KeyRange.end)
}
#if LANG_CXX11
inline void KeyRange::set_end(::std::string&& value) {
  
  end_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:coprocessor.KeyRange.end)
}
#endif
inline void KeyRange::set_end(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  end_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:coprocessor.KeyRange.end)
}
inline void KeyRange::set_end(const void* value, size_t size) {
  
  end_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:coprocessor.KeyRange.end)
}
inline ::std::string* KeyRange::mutable_end() {
  
  // @@protoc_insertion_point(field_mutable:coprocessor.KeyRange.end)
  return end_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyRange::release_end() {
  // @@protoc_insertion_point(field_release:coprocessor.KeyRange.end)
  
  return end_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyRange::set_allocated_end(::std::string* end) {
  if (end != NULL) {
    
  } else {
    
  }
  end_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), end);
  // @@protoc_insertion_point(field_set_allocated:coprocessor.KeyRange.end)
}

// -------------------------------------------------------------------

// Request

// .kvrpcpb.Context context = 1;
inline bool Request::has_context() const {
  return this != internal_default_instance() && context_ != NULL;
}
inline const ::kvrpcpb::Context& Request::context() const {
  const ::kvrpcpb::Context* p = context_;
  // @@protoc_insertion_point(field_get:coprocessor.Request.context)
  return p != NULL ? *p : *reinterpret_cast<const ::kvrpcpb::Context*>(
      &::kvrpcpb::_Context_default_instance_);
}
inline ::kvrpcpb::Context* Request::release_context() {
  // @@protoc_insertion_point(field_release:coprocessor.Request.context)
  
  ::kvrpcpb::Context* temp = context_;
  context_ = NULL;
  return temp;
}
inline ::kvrpcpb::Context* Request::mutable_context() {
  
  if (context_ == NULL) {
    context_ = new ::kvrpcpb::Context;
  }
  // @@protoc_insertion_point(field_mutable:coprocessor.Request.context)
  return context_;
}
inline void Request::set_allocated_context(::kvrpcpb::Context* context) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(context_);
  }
  if (context) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      context = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, context, submessage_arena);
    }
    
  } else {
    
  }
  context_ = context;
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Request.context)
}

// int64 tp = 2;
inline void Request::clear_tp() {
  tp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Request::tp() const {
  // @@protoc_insertion_point(field_get:coprocessor.Request.tp)
  return tp_;
}
inline void Request::set_tp(::google::protobuf::int64 value) {
  
  tp_ = value;
  // @@protoc_insertion_point(field_set:coprocessor.Request.tp)
}

// bytes data = 3;
inline void Request::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::data() const {
  // @@protoc_insertion_point(field_get:coprocessor.Request.data)
  return data_.GetNoArena();
}
inline void Request::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:coprocessor.Request.data)
}
#if LANG_CXX11
inline void Request::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:coprocessor.Request.data)
}
#endif
inline void Request::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:coprocessor.Request.data)
}
inline void Request::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:coprocessor.Request.data)
}
inline ::std::string* Request::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:coprocessor.Request.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_data() {
  // @@protoc_insertion_point(field_release:coprocessor.Request.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Request.data)
}

// repeated .coprocessor.KeyRange ranges = 4;
inline int Request::ranges_size() const {
  return ranges_.size();
}
inline void Request::clear_ranges() {
  ranges_.Clear();
}
inline const ::coprocessor::KeyRange& Request::ranges(int index) const {
  // @@protoc_insertion_point(field_get:coprocessor.Request.ranges)
  return ranges_.Get(index);
}
inline ::coprocessor::KeyRange* Request::mutable_ranges(int index) {
  // @@protoc_insertion_point(field_mutable:coprocessor.Request.ranges)
  return ranges_.Mutable(index);
}
inline ::coprocessor::KeyRange* Request::add_ranges() {
  // @@protoc_insertion_point(field_add:coprocessor.Request.ranges)
  return ranges_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::coprocessor::KeyRange >*
Request::mutable_ranges() {
  // @@protoc_insertion_point(field_mutable_list:coprocessor.Request.ranges)
  return &ranges_;
}
inline const ::google::protobuf::RepeatedPtrField< ::coprocessor::KeyRange >&
Request::ranges() const {
  // @@protoc_insertion_point(field_list:coprocessor.Request.ranges)
  return ranges_;
}

// -------------------------------------------------------------------

// Response

// bytes data = 1;
inline void Response::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::data() const {
  // @@protoc_insertion_point(field_get:coprocessor.Response.data)
  return data_.GetNoArena();
}
inline void Response::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:coprocessor.Response.data)
}
#if LANG_CXX11
inline void Response::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:coprocessor.Response.data)
}
#endif
inline void Response::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:coprocessor.Response.data)
}
inline void Response::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:coprocessor.Response.data)
}
inline ::std::string* Response::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:coprocessor.Response.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_data() {
  // @@protoc_insertion_point(field_release:coprocessor.Response.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Response.data)
}

// .errorpb.Error region_error = 2;
inline bool Response::has_region_error() const {
  return this != internal_default_instance() && region_error_ != NULL;
}
inline const ::errorpb::Error& Response::region_error() const {
  const ::errorpb::Error* p = region_error_;
  // @@protoc_insertion_point(field_get:coprocessor.Response.region_error)
  return p != NULL ? *p : *reinterpret_cast<const ::errorpb::Error*>(
      &::errorpb::_Error_default_instance_);
}
inline ::errorpb::Error* Response::release_region_error() {
  // @@protoc_insertion_point(field_release:coprocessor.Response.region_error)
  
  ::errorpb::Error* temp = region_error_;
  region_error_ = NULL;
  return temp;
}
inline ::errorpb::Error* Response::mutable_region_error() {
  
  if (region_error_ == NULL) {
    region_error_ = new ::errorpb::Error;
  }
  // @@protoc_insertion_point(field_mutable:coprocessor.Response.region_error)
  return region_error_;
}
inline void Response::set_allocated_region_error(::errorpb::Error* region_error) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(region_error_);
  }
  if (region_error) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      region_error = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, region_error, submessage_arena);
    }
    
  } else {
    
  }
  region_error_ = region_error;
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Response.region_error)
}

// .kvrpcpb.LockInfo locked = 3;
inline bool Response::has_locked() const {
  return this != internal_default_instance() && locked_ != NULL;
}
inline const ::kvrpcpb::LockInfo& Response::locked() const {
  const ::kvrpcpb::LockInfo* p = locked_;
  // @@protoc_insertion_point(field_get:coprocessor.Response.locked)
  return p != NULL ? *p : *reinterpret_cast<const ::kvrpcpb::LockInfo*>(
      &::kvrpcpb::_LockInfo_default_instance_);
}
inline ::kvrpcpb::LockInfo* Response::release_locked() {
  // @@protoc_insertion_point(field_release:coprocessor.Response.locked)
  
  ::kvrpcpb::LockInfo* temp = locked_;
  locked_ = NULL;
  return temp;
}
inline ::kvrpcpb::LockInfo* Response::mutable_locked() {
  
  if (locked_ == NULL) {
    locked_ = new ::kvrpcpb::LockInfo;
  }
  // @@protoc_insertion_point(field_mutable:coprocessor.Response.locked)
  return locked_;
}
inline void Response::set_allocated_locked(::kvrpcpb::LockInfo* locked) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(locked_);
  }
  if (locked) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      locked = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, locked, submessage_arena);
    }
    
  } else {
    
  }
  locked_ = locked;
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Response.locked)
}

// string other_error = 4;
inline void Response::clear_other_error() {
  other_error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::other_error() const {
  // @@protoc_insertion_point(field_get:coprocessor.Response.other_error)
  return other_error_.GetNoArena();
}
inline void Response::set_other_error(const ::std::string& value) {
  
  other_error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:coprocessor.Response.other_error)
}
#if LANG_CXX11
inline void Response::set_other_error(::std::string&& value) {
  
  other_error_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:coprocessor.Response.other_error)
}
#endif
inline void Response::set_other_error(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  other_error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:coprocessor.Response.other_error)
}
inline void Response::set_other_error(const char* value, size_t size) {
  
  other_error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:coprocessor.Response.other_error)
}
inline ::std::string* Response::mutable_other_error() {
  
  // @@protoc_insertion_point(field_mutable:coprocessor.Response.other_error)
  return other_error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_other_error() {
  // @@protoc_insertion_point(field_release:coprocessor.Response.other_error)
  
  return other_error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_other_error(::std::string* other_error) {
  if (other_error != NULL) {
    
  } else {
    
  }
  other_error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), other_error);
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Response.other_error)
}

// .coprocessor.KeyRange range = 5;
inline bool Response::has_range() const {
  return this != internal_default_instance() && range_ != NULL;
}
inline void Response::clear_range() {
  if (GetArenaNoVirtual() == NULL && range_ != NULL) {
    delete range_;
  }
  range_ = NULL;
}
inline const ::coprocessor::KeyRange& Response::range() const {
  const ::coprocessor::KeyRange* p = range_;
  // @@protoc_insertion_point(field_get:coprocessor.Response.range)
  return p != NULL ? *p : *reinterpret_cast<const ::coprocessor::KeyRange*>(
      &::coprocessor::_KeyRange_default_instance_);
}
inline ::coprocessor::KeyRange* Response::release_range() {
  // @@protoc_insertion_point(field_release:coprocessor.Response.range)
  
  ::coprocessor::KeyRange* temp = range_;
  range_ = NULL;
  return temp;
}
inline ::coprocessor::KeyRange* Response::mutable_range() {
  
  if (range_ == NULL) {
    range_ = new ::coprocessor::KeyRange;
  }
  // @@protoc_insertion_point(field_mutable:coprocessor.Response.range)
  return range_;
}
inline void Response::set_allocated_range(::coprocessor::KeyRange* range) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete range_;
  }
  if (range) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      range = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, range, submessage_arena);
    }
    
  } else {
    
  }
  range_ = range;
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Response.range)
}

// .kvrpcpb.ExecDetails exec_details = 6;
inline bool Response::has_exec_details() const {
  return this != internal_default_instance() && exec_details_ != NULL;
}
inline const ::kvrpcpb::ExecDetails& Response::exec_details() const {
  const ::kvrpcpb::ExecDetails* p = exec_details_;
  // @@protoc_insertion_point(field_get:coprocessor.Response.exec_details)
  return p != NULL ? *p : *reinterpret_cast<const ::kvrpcpb::ExecDetails*>(
      &::kvrpcpb::_ExecDetails_default_instance_);
}
inline ::kvrpcpb::ExecDetails* Response::release_exec_details() {
  // @@protoc_insertion_point(field_release:coprocessor.Response.exec_details)
  
  ::kvrpcpb::ExecDetails* temp = exec_details_;
  exec_details_ = NULL;
  return temp;
}
inline ::kvrpcpb::ExecDetails* Response::mutable_exec_details() {
  
  if (exec_details_ == NULL) {
    exec_details_ = new ::kvrpcpb::ExecDetails;
  }
  // @@protoc_insertion_point(field_mutable:coprocessor.Response.exec_details)
  return exec_details_;
}
inline void Response::set_allocated_exec_details(::kvrpcpb::ExecDetails* exec_details) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(exec_details_);
  }
  if (exec_details) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      exec_details = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, exec_details, submessage_arena);
    }
    
  } else {
    
  }
  exec_details_ = exec_details;
  // @@protoc_insertion_point(field_set_allocated:coprocessor.Response.exec_details)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace coprocessor

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_coprocessor_2eproto__INCLUDED
