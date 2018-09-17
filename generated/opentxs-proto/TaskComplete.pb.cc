// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TaskComplete.proto

#include "TaskComplete.pb.h"

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
class TaskCompleteDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TaskComplete>
      _instance;
} _TaskComplete_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_TaskComplete_2eproto {
void InitDefaultsTaskCompleteImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_TaskComplete_default_instance_;
    new (ptr) ::opentxs::proto::TaskComplete();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::TaskComplete::InitAsDefaultInstance();
}

void InitDefaultsTaskComplete() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTaskCompleteImpl);
}

}  // namespace protobuf_TaskComplete_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void TaskComplete::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TaskComplete::kVersionFieldNumber;
const int TaskComplete::kIdFieldNumber;
const int TaskComplete::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TaskComplete::TaskComplete()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_TaskComplete_2eproto::InitDefaultsTaskComplete();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.TaskComplete)
}
TaskComplete::TaskComplete(const TaskComplete& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&result_) -
    reinterpret_cast<char*>(&version_)) + sizeof(result_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.TaskComplete)
}

void TaskComplete::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&result_) -
      reinterpret_cast<char*>(&version_)) + sizeof(result_));
}

TaskComplete::~TaskComplete() {
  // @@protoc_insertion_point(destructor:opentxs.proto.TaskComplete)
  SharedDtor();
}

void TaskComplete::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TaskComplete::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const TaskComplete& TaskComplete::default_instance() {
  ::protobuf_TaskComplete_2eproto::InitDefaultsTaskComplete();
  return *internal_default_instance();
}

TaskComplete* TaskComplete::New(::google::protobuf::Arena* arena) const {
  TaskComplete* n = new TaskComplete;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TaskComplete::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.TaskComplete)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*id_.UnsafeRawStringPointer())->clear();
  }
  if (cached_has_bits & 6u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&result_) -
        reinterpret_cast<char*>(&version_)) + sizeof(result_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TaskComplete::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.TaskComplete)
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

      // optional string id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool result = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_result();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.TaskComplete)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.TaskComplete)
  return false;
#undef DO_
}

void TaskComplete::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.TaskComplete)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string id = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->id(), output);
  }

  // optional bool result = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->result(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.TaskComplete)
}

size_t TaskComplete::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.TaskComplete)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional string id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional bool result = 3;
    if (has_result()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TaskComplete::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TaskComplete*>(&from));
}

void TaskComplete::MergeFrom(const TaskComplete& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.TaskComplete)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000004u) {
      result_ = from.result_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void TaskComplete::CopyFrom(const TaskComplete& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.TaskComplete)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskComplete::IsInitialized() const {
  return true;
}

void TaskComplete::Swap(TaskComplete* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TaskComplete::InternalSwap(TaskComplete* other) {
  using std::swap;
  id_.Swap(&other->id_);
  swap(version_, other->version_);
  swap(result_, other->result_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string TaskComplete::GetTypeName() const {
  return "opentxs.proto.TaskComplete";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
