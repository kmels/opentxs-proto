// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OTXPush.proto

#include "OTXPush.pb.h"

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
class OTXPushDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OTXPush>
      _instance;
} _OTXPush_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_OTXPush_2eproto {
void InitDefaultsOTXPushImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_OTXPush_default_instance_;
    new (ptr) ::opentxs::proto::OTXPush();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::OTXPush::InitAsDefaultInstance();
}

void InitDefaultsOTXPush() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsOTXPushImpl);
}

}  // namespace protobuf_OTXPush_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void OTXPush::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OTXPush::kVersionFieldNumber;
const int OTXPush::kTypeFieldNumber;
const int OTXPush::kAccountidFieldNumber;
const int OTXPush::kItemidFieldNumber;
const int OTXPush::kAccountFieldNumber;
const int OTXPush::kInboxFieldNumber;
const int OTXPush::kInboxhashFieldNumber;
const int OTXPush::kOutboxFieldNumber;
const int OTXPush::kOutboxhashFieldNumber;
const int OTXPush::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OTXPush::OTXPush()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_OTXPush_2eproto::InitDefaultsOTXPush();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.OTXPush)
}
OTXPush::OTXPush(const OTXPush& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  accountid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_accountid()) {
    accountid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.accountid_);
  }
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_account()) {
    account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
  }
  inbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_inbox()) {
    inbox_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inbox_);
  }
  inboxhash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_inboxhash()) {
    inboxhash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inboxhash_);
  }
  outbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_outbox()) {
    outbox_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.outbox_);
  }
  outboxhash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_outboxhash()) {
    outboxhash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.outboxhash_);
  }
  item_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_item()) {
    item_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&itemid_) -
    reinterpret_cast<char*>(&version_)) + sizeof(itemid_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.OTXPush)
}

void OTXPush::SharedCtor() {
  _cached_size_ = 0;
  accountid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inboxhash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  outbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  outboxhash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&itemid_) -
      reinterpret_cast<char*>(&version_)) + sizeof(itemid_));
}

OTXPush::~OTXPush() {
  // @@protoc_insertion_point(destructor:opentxs.proto.OTXPush)
  SharedDtor();
}

void OTXPush::SharedDtor() {
  accountid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inbox_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  inboxhash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  outbox_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  outboxhash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void OTXPush::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OTXPush& OTXPush::default_instance() {
  ::protobuf_OTXPush_2eproto::InitDefaultsOTXPush();
  return *internal_default_instance();
}

OTXPush* OTXPush::New(::google::protobuf::Arena* arena) const {
  OTXPush* n = new OTXPush;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OTXPush::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.OTXPush)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!accountid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*accountid_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!account_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*account_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!inbox_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*inbox_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(!inboxhash_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*inboxhash_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(!outbox_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*outbox_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(!outboxhash_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*outboxhash_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000040u) {
      GOOGLE_DCHECK(!item_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*item_.UnsafeRawStringPointer())->clear();
    }
  }
  version_ = 0u;
  if (cached_has_bits & 768u) {
    ::memset(&type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&itemid_) -
        reinterpret_cast<char*>(&type_)) + sizeof(itemid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool OTXPush::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.OTXPush)
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

      // optional .opentxs.proto.OTXPushType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::OTXPushType_IsValid(value)) {
            set_type(static_cast< ::opentxs::proto::OTXPushType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string accountid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_accountid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 itemid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_itemid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &itemid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes account = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_account()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes inbox = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_inbox()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string inboxhash = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_inboxhash()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes outbox = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_outbox()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string outboxhash = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_outboxhash()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes item = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_item()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.OTXPush)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.OTXPush)
  return false;
#undef DO_
}

void OTXPush::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.OTXPush)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional .opentxs.proto.OTXPushType type = 2;
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional string accountid = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->accountid(), output);
  }

  // optional int64 itemid = 4;
  if (cached_has_bits & 0x00000200u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->itemid(), output);
  }

  // optional bytes account = 5;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->account(), output);
  }

  // optional bytes inbox = 6;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->inbox(), output);
  }

  // optional string inboxhash = 7;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->inboxhash(), output);
  }

  // optional bytes outbox = 8;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      8, this->outbox(), output);
  }

  // optional string outboxhash = 9;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->outboxhash(), output);
  }

  // optional bytes item = 10;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      10, this->item(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.OTXPush)
}

size_t OTXPush::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.OTXPush)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 255u) {
    // optional string accountid = 3;
    if (has_accountid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->accountid());
    }

    // optional bytes account = 5;
    if (has_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->account());
    }

    // optional bytes inbox = 6;
    if (has_inbox()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->inbox());
    }

    // optional string inboxhash = 7;
    if (has_inboxhash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->inboxhash());
    }

    // optional bytes outbox = 8;
    if (has_outbox()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->outbox());
    }

    // optional string outboxhash = 9;
    if (has_outboxhash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->outboxhash());
    }

    // optional bytes item = 10;
    if (has_item()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->item());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

  }
  if (_has_bits_[8 / 32] & 768u) {
    // optional .opentxs.proto.OTXPushType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional int64 itemid = 4;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->itemid());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OTXPush::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OTXPush*>(&from));
}

void OTXPush::MergeFrom(const OTXPush& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.OTXPush)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_accountid();
      accountid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.accountid_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_account();
      account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_inbox();
      inbox_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inbox_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_inboxhash();
      inboxhash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.inboxhash_);
    }
    if (cached_has_bits & 0x00000010u) {
      set_has_outbox();
      outbox_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.outbox_);
    }
    if (cached_has_bits & 0x00000020u) {
      set_has_outboxhash();
      outboxhash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.outboxhash_);
    }
    if (cached_has_bits & 0x00000040u) {
      set_has_item();
      item_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_);
    }
    if (cached_has_bits & 0x00000080u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 768u) {
    if (cached_has_bits & 0x00000100u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000200u) {
      itemid_ = from.itemid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void OTXPush::CopyFrom(const OTXPush& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.OTXPush)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OTXPush::IsInitialized() const {
  return true;
}

void OTXPush::Swap(OTXPush* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OTXPush::InternalSwap(OTXPush* other) {
  using std::swap;
  accountid_.Swap(&other->accountid_);
  account_.Swap(&other->account_);
  inbox_.Swap(&other->inbox_);
  inboxhash_.Swap(&other->inboxhash_);
  outbox_.Swap(&other->outbox_);
  outboxhash_.Swap(&other->outboxhash_);
  item_.Swap(&other->item_);
  swap(version_, other->version_);
  swap(type_, other->type_);
  swap(itemid_, other->itemid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string OTXPush::GetTypeName() const {
  return "opentxs.proto.OTXPush";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
