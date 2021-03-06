// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MoveFunds.proto

#include "MoveFunds.pb.h"

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
class MoveFundsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MoveFunds>
      _instance;
} _MoveFunds_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_MoveFunds_2eproto {
void InitDefaultsMoveFundsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_MoveFunds_default_instance_;
    new (ptr) ::opentxs::proto::MoveFunds();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::MoveFunds::InitAsDefaultInstance();
}

void InitDefaultsMoveFunds() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMoveFundsImpl);
}

}  // namespace protobuf_MoveFunds_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void MoveFunds::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MoveFunds::kVersionFieldNumber;
const int MoveFunds::kTypeFieldNumber;
const int MoveFunds::kSourceaccountFieldNumber;
const int MoveFunds::kDestinationaccountFieldNumber;
const int MoveFunds::kMemoFieldNumber;
const int MoveFunds::kAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MoveFunds::MoveFunds()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_MoveFunds_2eproto::InitDefaultsMoveFunds();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.MoveFunds)
}
MoveFunds::MoveFunds(const MoveFunds& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  sourceaccount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_sourceaccount()) {
    sourceaccount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sourceaccount_);
  }
  destinationaccount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_destinationaccount()) {
    destinationaccount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.destinationaccount_);
  }
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_memo()) {
    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&amount_) -
    reinterpret_cast<char*>(&version_)) + sizeof(amount_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.MoveFunds)
}

void MoveFunds::SharedCtor() {
  _cached_size_ = 0;
  sourceaccount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  destinationaccount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&amount_) -
      reinterpret_cast<char*>(&version_)) + sizeof(amount_));
}

MoveFunds::~MoveFunds() {
  // @@protoc_insertion_point(destructor:opentxs.proto.MoveFunds)
  SharedDtor();
}

void MoveFunds::SharedDtor() {
  sourceaccount_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  destinationaccount_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MoveFunds::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MoveFunds& MoveFunds::default_instance() {
  ::protobuf_MoveFunds_2eproto::InitDefaultsMoveFunds();
  return *internal_default_instance();
}

MoveFunds* MoveFunds::New(::google::protobuf::Arena* arena) const {
  MoveFunds* n = new MoveFunds;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MoveFunds::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.MoveFunds)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!sourceaccount_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*sourceaccount_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!destinationaccount_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*destinationaccount_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!memo_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*memo_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 56u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&amount_) -
        reinterpret_cast<char*>(&version_)) + sizeof(amount_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MoveFunds::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.MoveFunds)
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

      // optional .opentxs.proto.RPCPaymentType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::RPCPaymentType_IsValid(value)) {
            set_type(static_cast< ::opentxs::proto::RPCPaymentType >(value));
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

      // optional string sourceaccount = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sourceaccount()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string destinationaccount = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_destinationaccount()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string memo = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_memo()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 amount = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_amount();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &amount_)));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.MoveFunds)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.MoveFunds)
  return false;
#undef DO_
}

void MoveFunds::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.MoveFunds)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional .opentxs.proto.RPCPaymentType type = 2;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional string sourceaccount = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->sourceaccount(), output);
  }

  // optional string destinationaccount = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->destinationaccount(), output);
  }

  // optional string memo = 5;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->memo(), output);
  }

  // optional uint64 amount = 6;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->amount(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.MoveFunds)
}

size_t MoveFunds::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.MoveFunds)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 63u) {
    // optional string sourceaccount = 3;
    if (has_sourceaccount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sourceaccount());
    }

    // optional string destinationaccount = 4;
    if (has_destinationaccount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->destinationaccount());
    }

    // optional string memo = 5;
    if (has_memo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->memo());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional .opentxs.proto.RPCPaymentType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional uint64 amount = 6;
    if (has_amount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->amount());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MoveFunds::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MoveFunds*>(&from));
}

void MoveFunds::MergeFrom(const MoveFunds& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.MoveFunds)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_sourceaccount();
      sourceaccount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sourceaccount_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_destinationaccount();
      destinationaccount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.destinationaccount_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_memo();
      memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
    }
    if (cached_has_bits & 0x00000008u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000010u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000020u) {
      amount_ = from.amount_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MoveFunds::CopyFrom(const MoveFunds& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.MoveFunds)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MoveFunds::IsInitialized() const {
  return true;
}

void MoveFunds::Swap(MoveFunds* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MoveFunds::InternalSwap(MoveFunds* other) {
  using std::swap;
  sourceaccount_.Swap(&other->sourceaccount_);
  destinationaccount_.Swap(&other->destinationaccount_);
  memo_.Swap(&other->memo_);
  swap(version_, other->version_);
  swap(type_, other->type_);
  swap(amount_, other->amount_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string MoveFunds::GetTypeName() const {
  return "opentxs.proto.MoveFunds";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
