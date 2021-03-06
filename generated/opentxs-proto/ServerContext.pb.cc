// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerContext.proto

#include "ServerContext.pb.h"

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
class ServerContextDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ServerContext>
      _instance;
} _ServerContext_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_ServerContext_2eproto {
void InitDefaultsServerContextImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_ServerContext_default_instance_;
    new (ptr) ::opentxs::proto::ServerContext();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::ServerContext::InitAsDefaultInstance();
}

void InitDefaultsServerContext() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsServerContextImpl);
}

}  // namespace protobuf_ServerContext_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void ServerContext::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServerContext::kVersionFieldNumber;
const int ServerContext::kServeridFieldNumber;
const int ServerContext::kHighesttransactionnumberFieldNumber;
const int ServerContext::kTentativerequestnumberFieldNumber;
const int ServerContext::kRevisionFieldNumber;
const int ServerContext::kAdminpasswordFieldNumber;
const int ServerContext::kAdminattemptedFieldNumber;
const int ServerContext::kAdminsuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerContext::ServerContext()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_ServerContext_2eproto::InitDefaultsServerContext();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.ServerContext)
}
ServerContext::ServerContext(const ServerContext& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      tentativerequestnumber_(from.tentativerequestnumber_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serverid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serverid()) {
    serverid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverid_);
  }
  adminpassword_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_adminpassword()) {
    adminpassword_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.adminpassword_);
  }
  ::memcpy(&highesttransactionnumber_, &from.highesttransactionnumber_,
    static_cast<size_t>(reinterpret_cast<char*>(&adminsuccess_) -
    reinterpret_cast<char*>(&highesttransactionnumber_)) + sizeof(adminsuccess_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.ServerContext)
}

void ServerContext::SharedCtor() {
  _cached_size_ = 0;
  serverid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  adminpassword_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&highesttransactionnumber_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&adminsuccess_) -
      reinterpret_cast<char*>(&highesttransactionnumber_)) + sizeof(adminsuccess_));
}

ServerContext::~ServerContext() {
  // @@protoc_insertion_point(destructor:opentxs.proto.ServerContext)
  SharedDtor();
}

void ServerContext::SharedDtor() {
  serverid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  adminpassword_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ServerContext::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ServerContext& ServerContext::default_instance() {
  ::protobuf_ServerContext_2eproto::InitDefaultsServerContext();
  return *internal_default_instance();
}

ServerContext* ServerContext::New(::google::protobuf::Arena* arena) const {
  ServerContext* n = new ServerContext;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServerContext::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.ServerContext)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tentativerequestnumber_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!serverid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*serverid_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!adminpassword_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*adminpassword_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 124u) {
    ::memset(&highesttransactionnumber_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&adminsuccess_) -
        reinterpret_cast<char*>(&highesttransactionnumber_)) + sizeof(adminsuccess_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ServerContext::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.ServerContext)
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

      // optional string serverid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serverid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 highesttransactionnumber = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_highesttransactionnumber();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &highesttransactionnumber_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 tentativerequestnumber = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 32u, input, this->mutable_tentativerequestnumber())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_tentativerequestnumber())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 revision = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_revision();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &revision_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string adminpassword = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_adminpassword()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool adminattempted = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          set_has_adminattempted();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &adminattempted_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool adminsuccess = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          set_has_adminsuccess();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &adminsuccess_)));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.ServerContext)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.ServerContext)
  return false;
#undef DO_
}

void ServerContext::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.ServerContext)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string serverid = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->serverid(), output);
  }

  // optional uint64 highesttransactionnumber = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->highesttransactionnumber(), output);
  }

  // repeated uint64 tentativerequestnumber = 4;
  for (int i = 0, n = this->tentativerequestnumber_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      4, this->tentativerequestnumber(i), output);
  }

  // optional uint64 revision = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->revision(), output);
  }

  // optional string adminpassword = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->adminpassword(), output);
  }

  // optional bool adminattempted = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->adminattempted(), output);
  }

  // optional bool adminsuccess = 8;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->adminsuccess(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.ServerContext)
}

size_t ServerContext::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.ServerContext)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated uint64 tentativerequestnumber = 4;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->tentativerequestnumber_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->tentativerequestnumber_size());
    total_size += data_size;
  }

  if (_has_bits_[0 / 32] & 127u) {
    // optional string serverid = 2;
    if (has_serverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serverid());
    }

    // optional string adminpassword = 6;
    if (has_adminpassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->adminpassword());
    }

    // optional uint64 highesttransactionnumber = 3;
    if (has_highesttransactionnumber()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->highesttransactionnumber());
    }

    // optional uint64 revision = 5;
    if (has_revision()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->revision());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional bool adminattempted = 7;
    if (has_adminattempted()) {
      total_size += 1 + 1;
    }

    // optional bool adminsuccess = 8;
    if (has_adminsuccess()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerContext::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ServerContext*>(&from));
}

void ServerContext::MergeFrom(const ServerContext& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.ServerContext)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  tentativerequestnumber_.MergeFrom(from.tentativerequestnumber_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_serverid();
      serverid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverid_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_adminpassword();
      adminpassword_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.adminpassword_);
    }
    if (cached_has_bits & 0x00000004u) {
      highesttransactionnumber_ = from.highesttransactionnumber_;
    }
    if (cached_has_bits & 0x00000008u) {
      revision_ = from.revision_;
    }
    if (cached_has_bits & 0x00000010u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000020u) {
      adminattempted_ = from.adminattempted_;
    }
    if (cached_has_bits & 0x00000040u) {
      adminsuccess_ = from.adminsuccess_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ServerContext::CopyFrom(const ServerContext& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.ServerContext)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerContext::IsInitialized() const {
  return true;
}

void ServerContext::Swap(ServerContext* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServerContext::InternalSwap(ServerContext* other) {
  using std::swap;
  tentativerequestnumber_.InternalSwap(&other->tentativerequestnumber_);
  serverid_.Swap(&other->serverid_);
  adminpassword_.Swap(&other->adminpassword_);
  swap(highesttransactionnumber_, other->highesttransactionnumber_);
  swap(revision_, other->revision_);
  swap(version_, other->version_);
  swap(adminattempted_, other->adminattempted_);
  swap(adminsuccess_, other->adminsuccess_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string ServerContext::GetTypeName() const {
  return "opentxs.proto.ServerContext";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
