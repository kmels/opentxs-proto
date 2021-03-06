// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PeerRequestWorkflow.proto

#ifndef PROTOBUF_PeerRequestWorkflow_2eproto__INCLUDED
#define PROTOBUF_PeerRequestWorkflow_2eproto__INCLUDED

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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_PeerRequestWorkflow_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsPeerRequestWorkflowImpl();
void InitDefaultsPeerRequestWorkflow();
inline void InitDefaults() {
  InitDefaultsPeerRequestWorkflow();
}
}  // namespace protobuf_PeerRequestWorkflow_2eproto
namespace opentxs {
namespace proto {
class PeerRequestWorkflow;
class PeerRequestWorkflowDefaultTypeInternal;
extern PeerRequestWorkflowDefaultTypeInternal _PeerRequestWorkflow_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class PeerRequestWorkflow : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.PeerRequestWorkflow) */ {
 public:
  PeerRequestWorkflow();
  virtual ~PeerRequestWorkflow();

  PeerRequestWorkflow(const PeerRequestWorkflow& from);

  inline PeerRequestWorkflow& operator=(const PeerRequestWorkflow& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PeerRequestWorkflow(PeerRequestWorkflow&& from) noexcept
    : PeerRequestWorkflow() {
    *this = ::std::move(from);
  }

  inline PeerRequestWorkflow& operator=(PeerRequestWorkflow&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const PeerRequestWorkflow& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PeerRequestWorkflow* internal_default_instance() {
    return reinterpret_cast<const PeerRequestWorkflow*>(
               &_PeerRequestWorkflow_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PeerRequestWorkflow* other);
  friend void swap(PeerRequestWorkflow& a, PeerRequestWorkflow& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PeerRequestWorkflow* New() const PROTOBUF_FINAL { return New(NULL); }

  PeerRequestWorkflow* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const PeerRequestWorkflow& from);
  void MergeFrom(const PeerRequestWorkflow& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PeerRequestWorkflow* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string requestid = 2;
  bool has_requestid() const;
  void clear_requestid();
  static const int kRequestidFieldNumber = 2;
  const ::std::string& requestid() const;
  void set_requestid(const ::std::string& value);
  #if LANG_CXX11
  void set_requestid(::std::string&& value);
  #endif
  void set_requestid(const char* value);
  void set_requestid(const char* value, size_t size);
  ::std::string* mutable_requestid();
  ::std::string* release_requestid();
  void set_allocated_requestid(::std::string* requestid);

  // optional string replyid = 3;
  bool has_replyid() const;
  void clear_replyid();
  static const int kReplyidFieldNumber = 3;
  const ::std::string& replyid() const;
  void set_replyid(const ::std::string& value);
  #if LANG_CXX11
  void set_replyid(::std::string&& value);
  #endif
  void set_replyid(const char* value);
  void set_replyid(const char* value, size_t size);
  ::std::string* mutable_replyid();
  ::std::string* release_replyid();
  void set_allocated_replyid(::std::string* replyid);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional bool used = 4;
  bool has_used() const;
  void clear_used();
  static const int kUsedFieldNumber = 4;
  bool used() const;
  void set_used(bool value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.PeerRequestWorkflow)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_requestid();
  void clear_has_requestid();
  void set_has_replyid();
  void clear_has_replyid();
  void set_has_used();
  void clear_has_used();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr requestid_;
  ::google::protobuf::internal::ArenaStringPtr replyid_;
  ::google::protobuf::uint32 version_;
  bool used_;
  friend struct ::protobuf_PeerRequestWorkflow_2eproto::TableStruct;
  friend void ::protobuf_PeerRequestWorkflow_2eproto::InitDefaultsPeerRequestWorkflowImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PeerRequestWorkflow

// optional uint32 version = 1;
inline bool PeerRequestWorkflow::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PeerRequestWorkflow::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PeerRequestWorkflow::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PeerRequestWorkflow::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 PeerRequestWorkflow::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PeerRequestWorkflow.version)
  return version_;
}
inline void PeerRequestWorkflow::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PeerRequestWorkflow.version)
}

// optional string requestid = 2;
inline bool PeerRequestWorkflow::has_requestid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PeerRequestWorkflow::set_has_requestid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PeerRequestWorkflow::clear_has_requestid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PeerRequestWorkflow::clear_requestid() {
  requestid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_requestid();
}
inline const ::std::string& PeerRequestWorkflow::requestid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PeerRequestWorkflow.requestid)
  return requestid_.GetNoArena();
}
inline void PeerRequestWorkflow::set_requestid(const ::std::string& value) {
  set_has_requestid();
  requestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PeerRequestWorkflow.requestid)
}
#if LANG_CXX11
inline void PeerRequestWorkflow::set_requestid(::std::string&& value) {
  set_has_requestid();
  requestid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PeerRequestWorkflow.requestid)
}
#endif
inline void PeerRequestWorkflow::set_requestid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_requestid();
  requestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PeerRequestWorkflow.requestid)
}
inline void PeerRequestWorkflow::set_requestid(const char* value, size_t size) {
  set_has_requestid();
  requestid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PeerRequestWorkflow.requestid)
}
inline ::std::string* PeerRequestWorkflow::mutable_requestid() {
  set_has_requestid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PeerRequestWorkflow.requestid)
  return requestid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PeerRequestWorkflow::release_requestid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PeerRequestWorkflow.requestid)
  clear_has_requestid();
  return requestid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PeerRequestWorkflow::set_allocated_requestid(::std::string* requestid) {
  if (requestid != NULL) {
    set_has_requestid();
  } else {
    clear_has_requestid();
  }
  requestid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), requestid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PeerRequestWorkflow.requestid)
}

// optional string replyid = 3;
inline bool PeerRequestWorkflow::has_replyid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PeerRequestWorkflow::set_has_replyid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PeerRequestWorkflow::clear_has_replyid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PeerRequestWorkflow::clear_replyid() {
  replyid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_replyid();
}
inline const ::std::string& PeerRequestWorkflow::replyid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PeerRequestWorkflow.replyid)
  return replyid_.GetNoArena();
}
inline void PeerRequestWorkflow::set_replyid(const ::std::string& value) {
  set_has_replyid();
  replyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.PeerRequestWorkflow.replyid)
}
#if LANG_CXX11
inline void PeerRequestWorkflow::set_replyid(::std::string&& value) {
  set_has_replyid();
  replyid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.PeerRequestWorkflow.replyid)
}
#endif
inline void PeerRequestWorkflow::set_replyid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_replyid();
  replyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.PeerRequestWorkflow.replyid)
}
inline void PeerRequestWorkflow::set_replyid(const char* value, size_t size) {
  set_has_replyid();
  replyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.PeerRequestWorkflow.replyid)
}
inline ::std::string* PeerRequestWorkflow::mutable_replyid() {
  set_has_replyid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.PeerRequestWorkflow.replyid)
  return replyid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PeerRequestWorkflow::release_replyid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.PeerRequestWorkflow.replyid)
  clear_has_replyid();
  return replyid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PeerRequestWorkflow::set_allocated_replyid(::std::string* replyid) {
  if (replyid != NULL) {
    set_has_replyid();
  } else {
    clear_has_replyid();
  }
  replyid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), replyid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.PeerRequestWorkflow.replyid)
}

// optional bool used = 4;
inline bool PeerRequestWorkflow::has_used() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PeerRequestWorkflow::set_has_used() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PeerRequestWorkflow::clear_has_used() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PeerRequestWorkflow::clear_used() {
  used_ = false;
  clear_has_used();
}
inline bool PeerRequestWorkflow::used() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.PeerRequestWorkflow.used)
  return used_;
}
inline void PeerRequestWorkflow::set_used(bool value) {
  set_has_used();
  used_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.PeerRequestWorkflow.used)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PeerRequestWorkflow_2eproto__INCLUDED
