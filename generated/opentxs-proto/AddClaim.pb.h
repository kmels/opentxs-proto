// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AddClaim.proto

#ifndef PROTOBUF_AddClaim_2eproto__INCLUDED
#define PROTOBUF_AddClaim_2eproto__INCLUDED

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
#include "ContactEnums.pb.h"  // IWYU pragma: export
#include "ContactItem.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_AddClaim_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsAddClaimImpl();
void InitDefaultsAddClaim();
inline void InitDefaults() {
  InitDefaultsAddClaim();
}
}  // namespace protobuf_AddClaim_2eproto
namespace opentxs {
namespace proto {
class AddClaim;
class AddClaimDefaultTypeInternal;
extern AddClaimDefaultTypeInternal _AddClaim_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class AddClaim : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.AddClaim) */ {
 public:
  AddClaim();
  virtual ~AddClaim();

  AddClaim(const AddClaim& from);

  inline AddClaim& operator=(const AddClaim& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AddClaim(AddClaim&& from) noexcept
    : AddClaim() {
    *this = ::std::move(from);
  }

  inline AddClaim& operator=(AddClaim&& from) noexcept {
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

  static const AddClaim& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddClaim* internal_default_instance() {
    return reinterpret_cast<const AddClaim*>(
               &_AddClaim_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AddClaim* other);
  friend void swap(AddClaim& a, AddClaim& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AddClaim* New() const PROTOBUF_FINAL { return New(NULL); }

  AddClaim* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AddClaim& from);
  void MergeFrom(const AddClaim& from);
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
  void InternalSwap(AddClaim* other);
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

  // optional .opentxs.proto.ContactItem item = 4;
  bool has_item() const;
  void clear_item();
  static const int kItemFieldNumber = 4;
  const ::opentxs::proto::ContactItem& item() const;
  ::opentxs::proto::ContactItem* release_item();
  ::opentxs::proto::ContactItem* mutable_item();
  void set_allocated_item(::opentxs::proto::ContactItem* item);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional uint32 sectionversion = 2;
  bool has_sectionversion() const;
  void clear_sectionversion();
  static const int kSectionversionFieldNumber = 2;
  ::google::protobuf::uint32 sectionversion() const;
  void set_sectionversion(::google::protobuf::uint32 value);

  // optional .opentxs.proto.ContactSectionName sectiontype = 3;
  bool has_sectiontype() const;
  void clear_sectiontype();
  static const int kSectiontypeFieldNumber = 3;
  ::opentxs::proto::ContactSectionName sectiontype() const;
  void set_sectiontype(::opentxs::proto::ContactSectionName value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.AddClaim)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_sectionversion();
  void clear_has_sectionversion();
  void set_has_sectiontype();
  void clear_has_sectiontype();
  void set_has_item();
  void clear_has_item();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::opentxs::proto::ContactItem* item_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 sectionversion_;
  int sectiontype_;
  friend struct ::protobuf_AddClaim_2eproto::TableStruct;
  friend void ::protobuf_AddClaim_2eproto::InitDefaultsAddClaimImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddClaim

// optional uint32 version = 1;
inline bool AddClaim::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AddClaim::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AddClaim::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AddClaim::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 AddClaim::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddClaim.version)
  return version_;
}
inline void AddClaim::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AddClaim.version)
}

// optional uint32 sectionversion = 2;
inline bool AddClaim::has_sectionversion() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AddClaim::set_has_sectionversion() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AddClaim::clear_has_sectionversion() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AddClaim::clear_sectionversion() {
  sectionversion_ = 0u;
  clear_has_sectionversion();
}
inline ::google::protobuf::uint32 AddClaim::sectionversion() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddClaim.sectionversion)
  return sectionversion_;
}
inline void AddClaim::set_sectionversion(::google::protobuf::uint32 value) {
  set_has_sectionversion();
  sectionversion_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AddClaim.sectionversion)
}

// optional .opentxs.proto.ContactSectionName sectiontype = 3;
inline bool AddClaim::has_sectiontype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AddClaim::set_has_sectiontype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AddClaim::clear_has_sectiontype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AddClaim::clear_sectiontype() {
  sectiontype_ = 0;
  clear_has_sectiontype();
}
inline ::opentxs::proto::ContactSectionName AddClaim::sectiontype() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AddClaim.sectiontype)
  return static_cast< ::opentxs::proto::ContactSectionName >(sectiontype_);
}
inline void AddClaim::set_sectiontype(::opentxs::proto::ContactSectionName value) {
  assert(::opentxs::proto::ContactSectionName_IsValid(value));
  set_has_sectiontype();
  sectiontype_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AddClaim.sectiontype)
}

// optional .opentxs.proto.ContactItem item = 4;
inline bool AddClaim::has_item() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AddClaim::set_has_item() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AddClaim::clear_has_item() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::opentxs::proto::ContactItem& AddClaim::item() const {
  const ::opentxs::proto::ContactItem* p = item_;
  // @@protoc_insertion_point(field_get:opentxs.proto.AddClaim.item)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::ContactItem*>(
      &::opentxs::proto::_ContactItem_default_instance_);
}
inline ::opentxs::proto::ContactItem* AddClaim::release_item() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AddClaim.item)
  clear_has_item();
  ::opentxs::proto::ContactItem* temp = item_;
  item_ = NULL;
  return temp;
}
inline ::opentxs::proto::ContactItem* AddClaim::mutable_item() {
  set_has_item();
  if (item_ == NULL) {
    item_ = new ::opentxs::proto::ContactItem;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AddClaim.item)
  return item_;
}
inline void AddClaim::set_allocated_item(::opentxs::proto::ContactItem* item) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(item_);
  }
  if (item) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      item = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, item, submessage_arena);
    }
    set_has_item();
  } else {
    clear_has_item();
  }
  item_ = item;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AddClaim.item)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AddClaim_2eproto__INCLUDED
