// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageAccounts.proto

#include "StorageAccounts.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opentxs {
namespace proto {
class StorageAccountsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StorageAccounts>
      _instance;
} _StorageAccounts_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_StorageAccounts_2eproto {
void InitDefaultsStorageAccountsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_StorageItemHash_2eproto::InitDefaultsStorageItemHash();
  protobuf_StorageAccountIndex_2eproto::InitDefaultsStorageAccountIndex();
  protobuf_StorageIDList_2eproto::InitDefaultsStorageIDList();
  {
    void* ptr = &::opentxs::proto::_StorageAccounts_default_instance_;
    new (ptr) ::opentxs::proto::StorageAccounts();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::StorageAccounts::InitAsDefaultInstance();
}

void InitDefaultsStorageAccounts() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStorageAccountsImpl);
}

}  // namespace protobuf_StorageAccounts_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void StorageAccounts::InitAsDefaultInstance() {
}
void StorageAccounts::clear_account() {
  account_.Clear();
}
void StorageAccounts::clear_index() {
  index_.Clear();
}
void StorageAccounts::clear_owner() {
  owner_.Clear();
}
void StorageAccounts::clear_signer() {
  signer_.Clear();
}
void StorageAccounts::clear_issuer() {
  issuer_.Clear();
}
void StorageAccounts::clear_server() {
  server_.Clear();
}
void StorageAccounts::clear_unit() {
  unit_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StorageAccounts::kVersionFieldNumber;
const int StorageAccounts::kAccountFieldNumber;
const int StorageAccounts::kIndexFieldNumber;
const int StorageAccounts::kOwnerFieldNumber;
const int StorageAccounts::kSignerFieldNumber;
const int StorageAccounts::kIssuerFieldNumber;
const int StorageAccounts::kServerFieldNumber;
const int StorageAccounts::kUnitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StorageAccounts::StorageAccounts()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_StorageAccounts_2eproto::InitDefaultsStorageAccounts();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.StorageAccounts)
}
StorageAccounts::StorageAccounts(const StorageAccounts& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      account_(from.account_),
      index_(from.index_),
      owner_(from.owner_),
      signer_(from.signer_),
      issuer_(from.issuer_),
      server_(from.server_),
      unit_(from.unit_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.StorageAccounts)
}

void StorageAccounts::SharedCtor() {
  _cached_size_ = 0;
  version_ = 0u;
}

StorageAccounts::~StorageAccounts() {
  // @@protoc_insertion_point(destructor:opentxs.proto.StorageAccounts)
  SharedDtor();
}

void StorageAccounts::SharedDtor() {
}

void StorageAccounts::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StorageAccounts& StorageAccounts::default_instance() {
  ::protobuf_StorageAccounts_2eproto::InitDefaultsStorageAccounts();
  return *internal_default_instance();
}

StorageAccounts* StorageAccounts::New(::google::protobuf::Arena* arena) const {
  StorageAccounts* n = new StorageAccounts;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StorageAccounts::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.StorageAccounts)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  account_.Clear();
  index_.Clear();
  owner_.Clear();
  signer_.Clear();
  issuer_.Clear();
  server_.Clear();
  unit_.Clear();
  version_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StorageAccounts::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.StorageAccounts)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageItemHash account = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_account()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageAccountIndex index = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_index()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageIDList owner = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_owner()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageIDList signer = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_signer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageIDList issuer = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_issuer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageIDList server = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_server()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageIDList unit = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_unit()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opentxs.proto.StorageAccounts)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.StorageAccounts)
  return false;
#undef DO_
}

void StorageAccounts::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.StorageAccounts)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // repeated .opentxs.proto.StorageItemHash account = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->account_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->account(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageAccountIndex index = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->index_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->index(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageIDList owner = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->owner_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->owner(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageIDList signer = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->signer_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->signer(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageIDList issuer = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->issuer_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6, this->issuer(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageIDList server = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      7, this->server(static_cast<int>(i)), output);
  }

  // repeated .opentxs.proto.StorageIDList unit = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->unit_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      8, this->unit(static_cast<int>(i)), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.StorageAccounts)
}

size_t StorageAccounts::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.StorageAccounts)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .opentxs.proto.StorageItemHash account = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->account_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->account(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageAccountIndex index = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->index_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->index(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageIDList owner = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->owner_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->owner(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageIDList signer = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->signer_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->signer(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageIDList issuer = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->issuer_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->issuer(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageIDList server = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->server_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->server(static_cast<int>(i)));
    }
  }

  // repeated .opentxs.proto.StorageIDList unit = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->unit_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->unit(static_cast<int>(i)));
    }
  }

  // optional uint32 version = 1;
  if (has_version()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StorageAccounts::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StorageAccounts*>(&from));
}

void StorageAccounts::MergeFrom(const StorageAccounts& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.StorageAccounts)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  account_.MergeFrom(from.account_);
  index_.MergeFrom(from.index_);
  owner_.MergeFrom(from.owner_);
  signer_.MergeFrom(from.signer_);
  issuer_.MergeFrom(from.issuer_);
  server_.MergeFrom(from.server_);
  unit_.MergeFrom(from.unit_);
  if (from.has_version()) {
    set_version(from.version());
  }
}

void StorageAccounts::CopyFrom(const StorageAccounts& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.StorageAccounts)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StorageAccounts::IsInitialized() const {
  return true;
}

void StorageAccounts::Swap(StorageAccounts* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StorageAccounts::InternalSwap(StorageAccounts* other) {
  using std::swap;
  account_.InternalSwap(&other->account_);
  index_.InternalSwap(&other->index_);
  owner_.InternalSwap(&other->owner_);
  signer_.InternalSwap(&other->signer_);
  issuer_.InternalSwap(&other->issuer_);
  server_.InternalSwap(&other->server_);
  unit_.InternalSwap(&other->unit_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string StorageAccounts::GetTypeName() const {
  return "opentxs.proto.StorageAccounts";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
