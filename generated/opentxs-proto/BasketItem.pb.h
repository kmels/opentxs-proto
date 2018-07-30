// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BasketItem.proto

#ifndef PROTOBUF_BasketItem_2eproto__INCLUDED
#define PROTOBUF_BasketItem_2eproto__INCLUDED

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

namespace protobuf_BasketItem_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsBasketItemImpl();
void InitDefaultsBasketItem();
inline void InitDefaults() {
  InitDefaultsBasketItem();
}
}  // namespace protobuf_BasketItem_2eproto
namespace opentxs {
namespace proto {
class BasketItem;
class BasketItemDefaultTypeInternal;
extern BasketItemDefaultTypeInternal _BasketItem_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class BasketItem : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.BasketItem) */ {
 public:
  BasketItem();
  virtual ~BasketItem();

  BasketItem(const BasketItem& from);

  inline BasketItem& operator=(const BasketItem& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BasketItem(BasketItem&& from) noexcept
    : BasketItem() {
    *this = ::std::move(from);
  }

  inline BasketItem& operator=(BasketItem&& from) noexcept {
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

  static const BasketItem& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BasketItem* internal_default_instance() {
    return reinterpret_cast<const BasketItem*>(
               &_BasketItem_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BasketItem* other);
  friend void swap(BasketItem& a, BasketItem& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BasketItem* New() const PROTOBUF_FINAL { return New(NULL); }

  BasketItem* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const BasketItem& from);
  void MergeFrom(const BasketItem& from);
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
  void InternalSwap(BasketItem* other);
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

  // optional string unit = 3;
  bool has_unit() const;
  void clear_unit();
  static const int kUnitFieldNumber = 3;
  const ::std::string& unit() const;
  void set_unit(const ::std::string& value);
  #if LANG_CXX11
  void set_unit(::std::string&& value);
  #endif
  void set_unit(const char* value);
  void set_unit(const char* value, size_t size);
  ::std::string* mutable_unit();
  ::std::string* release_unit();
  void set_allocated_unit(::std::string* unit);

  // optional string account = 4;
  bool has_account() const;
  void clear_account();
  static const int kAccountFieldNumber = 4;
  const ::std::string& account() const;
  void set_account(const ::std::string& value);
  #if LANG_CXX11
  void set_account(::std::string&& value);
  #endif
  void set_account(const char* value);
  void set_account(const char* value, size_t size);
  ::std::string* mutable_account();
  ::std::string* release_account();
  void set_allocated_account(::std::string* account);

  // optional uint64 weight = 2;
  bool has_weight() const;
  void clear_weight();
  static const int kWeightFieldNumber = 2;
  ::google::protobuf::uint64 weight() const;
  void set_weight(::google::protobuf::uint64 value);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.BasketItem)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_weight();
  void clear_has_weight();
  void set_has_unit();
  void clear_has_unit();
  void set_has_account();
  void clear_has_account();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr unit_;
  ::google::protobuf::internal::ArenaStringPtr account_;
  ::google::protobuf::uint64 weight_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_BasketItem_2eproto::TableStruct;
  friend void ::protobuf_BasketItem_2eproto::InitDefaultsBasketItemImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BasketItem

// optional uint32 version = 1;
inline bool BasketItem::has_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BasketItem::set_has_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BasketItem::clear_has_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BasketItem::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 BasketItem::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BasketItem.version)
  return version_;
}
inline void BasketItem::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.BasketItem.version)
}

// optional uint64 weight = 2;
inline bool BasketItem::has_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BasketItem::set_has_weight() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BasketItem::clear_has_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BasketItem::clear_weight() {
  weight_ = GOOGLE_ULONGLONG(0);
  clear_has_weight();
}
inline ::google::protobuf::uint64 BasketItem::weight() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BasketItem.weight)
  return weight_;
}
inline void BasketItem::set_weight(::google::protobuf::uint64 value) {
  set_has_weight();
  weight_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.BasketItem.weight)
}

// optional string unit = 3;
inline bool BasketItem::has_unit() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BasketItem::set_has_unit() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BasketItem::clear_has_unit() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BasketItem::clear_unit() {
  unit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_unit();
}
inline const ::std::string& BasketItem::unit() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BasketItem.unit)
  return unit_.GetNoArena();
}
inline void BasketItem::set_unit(const ::std::string& value) {
  set_has_unit();
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.BasketItem.unit)
}
#if LANG_CXX11
inline void BasketItem::set_unit(::std::string&& value) {
  set_has_unit();
  unit_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.BasketItem.unit)
}
#endif
inline void BasketItem::set_unit(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_unit();
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.BasketItem.unit)
}
inline void BasketItem::set_unit(const char* value, size_t size) {
  set_has_unit();
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.BasketItem.unit)
}
inline ::std::string* BasketItem::mutable_unit() {
  set_has_unit();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.BasketItem.unit)
  return unit_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BasketItem::release_unit() {
  // @@protoc_insertion_point(field_release:opentxs.proto.BasketItem.unit)
  clear_has_unit();
  return unit_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BasketItem::set_allocated_unit(::std::string* unit) {
  if (unit != NULL) {
    set_has_unit();
  } else {
    clear_has_unit();
  }
  unit_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unit);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.BasketItem.unit)
}

// optional string account = 4;
inline bool BasketItem::has_account() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BasketItem::set_has_account() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BasketItem::clear_has_account() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BasketItem::clear_account() {
  account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_account();
}
inline const ::std::string& BasketItem::account() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BasketItem.account)
  return account_.GetNoArena();
}
inline void BasketItem::set_account(const ::std::string& value) {
  set_has_account();
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.BasketItem.account)
}
#if LANG_CXX11
inline void BasketItem::set_account(::std::string&& value) {
  set_has_account();
  account_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.BasketItem.account)
}
#endif
inline void BasketItem::set_account(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_account();
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.BasketItem.account)
}
inline void BasketItem::set_account(const char* value, size_t size) {
  set_has_account();
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.BasketItem.account)
}
inline ::std::string* BasketItem::mutable_account() {
  set_has_account();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.BasketItem.account)
  return account_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BasketItem::release_account() {
  // @@protoc_insertion_point(field_release:opentxs.proto.BasketItem.account)
  clear_has_account();
  return account_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BasketItem::set_allocated_account(::std::string* account) {
  if (account != NULL) {
    set_has_account();
  } else {
    clear_has_account();
  }
  account_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.BasketItem.account)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BasketItem_2eproto__INCLUDED