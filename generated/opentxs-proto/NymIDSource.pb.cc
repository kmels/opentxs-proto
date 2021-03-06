// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NymIDSource.proto

#include "NymIDSource.pb.h"

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
class NymIDSourceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<NymIDSource>
      _instance;
  const ::opentxs::proto::AsymmetricKey* key_;
  const ::opentxs::proto::PaymentCode* paymentcode_;
} _NymIDSource_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_NymIDSource_2eproto {
void InitDefaultsNymIDSourceImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_AsymmetricKey_2eproto::InitDefaultsAsymmetricKey();
  protobuf_PaymentCode_2eproto::InitDefaultsPaymentCode();
  {
    void* ptr = &::opentxs::proto::_NymIDSource_default_instance_;
    new (ptr) ::opentxs::proto::NymIDSource();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::NymIDSource::InitAsDefaultInstance();
}

void InitDefaultsNymIDSource() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsNymIDSourceImpl);
}

}  // namespace protobuf_NymIDSource_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void NymIDSource::InitAsDefaultInstance() {
}
void NymIDSource::set_allocated_key(::opentxs::proto::AsymmetricKey* key) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_source();
  if (key) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      key = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, key, submessage_arena);
    }
    set_has_key();
    source_.key_ = key;
  }
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.NymIDSource.key)
}
void NymIDSource::clear_key() {
  if (has_key()) {
    delete source_.key_;
    clear_has_source();
  }
}
void NymIDSource::set_allocated_paymentcode(::opentxs::proto::PaymentCode* paymentcode) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_source();
  if (paymentcode) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      paymentcode = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, paymentcode, submessage_arena);
    }
    set_has_paymentcode();
    source_.paymentcode_ = paymentcode;
  }
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.NymIDSource.paymentcode)
}
void NymIDSource::clear_paymentcode() {
  if (has_paymentcode()) {
    delete source_.paymentcode_;
    clear_has_source();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NymIDSource::kVersionFieldNumber;
const int NymIDSource::kTypeFieldNumber;
const int NymIDSource::kKeyFieldNumber;
const int NymIDSource::kPaymentcodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NymIDSource::NymIDSource()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_NymIDSource_2eproto::InitDefaultsNymIDSource();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.NymIDSource)
}
NymIDSource::NymIDSource(const NymIDSource& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&version_)) + sizeof(type_));
  clear_has_source();
  switch (from.source_case()) {
    case kKey: {
      mutable_key()->::opentxs::proto::AsymmetricKey::MergeFrom(from.key());
      break;
    }
    case kPaymentcode: {
      mutable_paymentcode()->::opentxs::proto::PaymentCode::MergeFrom(from.paymentcode());
      break;
    }
    case SOURCE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.NymIDSource)
}

void NymIDSource::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&version_)) + sizeof(type_));
  clear_has_source();
}

NymIDSource::~NymIDSource() {
  // @@protoc_insertion_point(destructor:opentxs.proto.NymIDSource)
  SharedDtor();
}

void NymIDSource::SharedDtor() {
  if (has_source()) {
    clear_source();
  }
}

void NymIDSource::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NymIDSource& NymIDSource::default_instance() {
  ::protobuf_NymIDSource_2eproto::InitDefaultsNymIDSource();
  return *internal_default_instance();
}

NymIDSource* NymIDSource::New(::google::protobuf::Arena* arena) const {
  NymIDSource* n = new NymIDSource;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void NymIDSource::clear_source() {
// @@protoc_insertion_point(one_of_clear_start:opentxs.proto.NymIDSource)
  switch (source_case()) {
    case kKey: {
      delete source_.key_;
      break;
    }
    case kPaymentcode: {
      delete source_.paymentcode_;
      break;
    }
    case SOURCE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = SOURCE_NOT_SET;
}


void NymIDSource::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.NymIDSource)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&version_)) + sizeof(type_));
  }
  clear_source();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool NymIDSource::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.NymIDSource)
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

      // optional .opentxs.proto.SourceType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::SourceType_IsValid(value)) {
            set_type(static_cast< ::opentxs::proto::SourceType >(value));
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

      // optional .opentxs.proto.AsymmetricKey key = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.PaymentCode paymentcode = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_paymentcode()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.NymIDSource)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.NymIDSource)
  return false;
#undef DO_
}

void NymIDSource::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.NymIDSource)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional .opentxs.proto.SourceType type = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  switch (source_case()) {
    case kKey:
      ::google::protobuf::internal::WireFormatLite::WriteMessage(
        3, *source_.key_, output);
      break;
    case kPaymentcode:
      ::google::protobuf::internal::WireFormatLite::WriteMessage(
        4, *source_.paymentcode_, output);
      break;
    default: ;
  }
  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.NymIDSource)
}

size_t NymIDSource::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.NymIDSource)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional .opentxs.proto.SourceType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  switch (source_case()) {
    // optional .opentxs.proto.AsymmetricKey key = 3;
    case kKey: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *source_.key_);
      break;
    }
    // optional .opentxs.proto.PaymentCode paymentcode = 4;
    case kPaymentcode: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *source_.paymentcode_);
      break;
    }
    case SOURCE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NymIDSource::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NymIDSource*>(&from));
}

void NymIDSource::MergeFrom(const NymIDSource& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.NymIDSource)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  switch (from.source_case()) {
    case kKey: {
      mutable_key()->::opentxs::proto::AsymmetricKey::MergeFrom(from.key());
      break;
    }
    case kPaymentcode: {
      mutable_paymentcode()->::opentxs::proto::PaymentCode::MergeFrom(from.paymentcode());
      break;
    }
    case SOURCE_NOT_SET: {
      break;
    }
  }
}

void NymIDSource::CopyFrom(const NymIDSource& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.NymIDSource)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NymIDSource::IsInitialized() const {
  return true;
}

void NymIDSource::Swap(NymIDSource* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NymIDSource::InternalSwap(NymIDSource* other) {
  using std::swap;
  swap(version_, other->version_);
  swap(type_, other->type_);
  swap(source_, other->source_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string NymIDSource::GetTypeName() const {
  return "opentxs.proto.NymIDSource";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
