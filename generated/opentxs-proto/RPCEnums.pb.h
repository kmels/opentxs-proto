// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RPCEnums.proto

#ifndef PROTOBUF_RPCEnums_2eproto__INCLUDED
#define PROTOBUF_RPCEnums_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_RPCEnums_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
inline void InitDefaults() {
}
}  // namespace protobuf_RPCEnums_2eproto
namespace opentxs {
namespace proto {
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

enum RPCCommandType {
  RPCCOMMAND_ERROR = 0,
  RPCCOMMAND_ADDCLIENTSESSION = 1,
  RPCCOMMAND_ADDSERVERSESSION = 2,
  RPCCOMMAND_LISTCLIENTSESSIONS = 3,
  RPCCOMMAND_LISTSERVERSESSIONS = 4,
  RPCCOMMAND_IMPORTHDSEED = 5,
  RPCCOMMAND_LISTHDSEEDS = 6,
  RPCCOMMAND_GETHDSEED = 7,
  RPCCOMMAND_CREATENYM = 8,
  RPCCOMMAND_LISTNYMS = 9,
  RPCCOMMAND_GETNYM = 10,
  RPCCOMMAND_ADDCLAIM = 11,
  RPCCOMMAND_DELETECLAIM = 12,
  RPCCOMMAND_IMPORTSERVERCONTRACT = 13,
  RPCCOMMAND_LISTSERVERCONTRACTS = 14,
  RPCCOMMAND_REGISTERNYM = 15,
  RPCCOMMAND_CREATEUNITDEFINITION = 16,
  RPCCOMMAND_LISTUNITDEFINITIONS = 17,
  RPCCOMMAND_ISSUEUNITDEFINITION = 18,
  RPCCOMMAND_CREATEACCOUNT = 19,
  RPCCOMMAND_LISTACCOUNTS = 20,
  RPCCOMMAND_GETACCOUNTBALANCE = 21,
  RPCCOMMAND_GETACCOUNTACTIVITY = 22,
  RPCCOMMAND_SENDPAYMENT = 23,
  RPCCOMMAND_MOVEFUNDS = 24,
  RPCCOMMAND_ADDCONTACT = 25,
  RPCCOMMAND_LISTCONTACTS = 26,
  RPCCOMMAND_GETCONTACT = 27,
  RPCCOMMAND_ADDCONTACTCLAIM = 28,
  RPCCOMMAND_DELETECONTACTCLAIM = 29,
  RPCCOMMAND_VERIFYCLAIM = 30,
  RPCCOMMAND_ACCEPTVERIFICATION = 31,
  RPCCOMMAND_SENDCONTACTMESSAGE = 32,
  RPCCOMMAND_GETCONTACTACTIVITY = 33,
  RPCCOMMAND_GETSERVERCONTRACT = 34
};
bool RPCCommandType_IsValid(int value);
const RPCCommandType RPCCommandType_MIN = RPCCOMMAND_ERROR;
const RPCCommandType RPCCommandType_MAX = RPCCOMMAND_GETSERVERCONTRACT;
const int RPCCommandType_ARRAYSIZE = RPCCommandType_MAX + 1;

enum RPCResponseCode {
  RPCRESPONSE_INVALID = 0,
  RPCRESPONSE_SUCCESS = 1,
  RPCRESPONSE_BAD_SESSION = 2,
  RPCRESPONSE_NONE = 3,
  RPCRESPONSE_PARTIAL = 4,
  RPCRESPONSE_QUEUED = 5,
  RPCRESPONSE_UNNECESSARY = 6,
  RPCRESPONSE_ERROR = 255
};
bool RPCResponseCode_IsValid(int value);
const RPCResponseCode RPCResponseCode_MIN = RPCRESPONSE_INVALID;
const RPCResponseCode RPCResponseCode_MAX = RPCRESPONSE_ERROR;
const int RPCResponseCode_ARRAYSIZE = RPCResponseCode_MAX + 1;

enum RPCPushType {
  RPCPUSH_ERROR = 0,
  RPCPUSH_ACCOUNT = 1,
  RPCPUSH_CONTACT = 2,
  RPCPUSH_TASK = 3
};
bool RPCPushType_IsValid(int value);
const RPCPushType RPCPushType_MIN = RPCPUSH_ERROR;
const RPCPushType RPCPushType_MAX = RPCPUSH_TASK;
const int RPCPushType_ARRAYSIZE = RPCPushType_MAX + 1;

enum RPCPaymentType {
  RPCPAYMENTTYPE_ERROR = 0,
  RPCPAYMENTTYPE_CHEQUE = 1,
  RPCPAYMENTTYPE_TRANSFER = 2,
  RPCPAYMENTTYPE_VOUCHER = 3,
  RPCPAYMENTTYPE_INVOICE = 4,
  RPCPAYMENTTYPE_BLINDED = 5
};
bool RPCPaymentType_IsValid(int value);
const RPCPaymentType RPCPaymentType_MIN = RPCPAYMENTTYPE_ERROR;
const RPCPaymentType RPCPaymentType_MAX = RPCPAYMENTTYPE_BLINDED;
const int RPCPaymentType_ARRAYSIZE = RPCPaymentType_MAX + 1;

enum AccountEventType {
  ACCOUNTEVENT_ERROR = 0,
  ACCOUNTEVENT_INCOMINGCHEQUE = 1,
  ACCOUNTEVENT_OUTGOINGCHEQUE = 2,
  ACCOUNTEVENT_INCOMINGTRANSFER = 3,
  ACCOUNTEVENT_OUTGOINGTRANSFER = 4
};
bool AccountEventType_IsValid(int value);
const AccountEventType AccountEventType_MIN = ACCOUNTEVENT_ERROR;
const AccountEventType AccountEventType_MAX = ACCOUNTEVENT_OUTGOINGTRANSFER;
const int AccountEventType_ARRAYSIZE = AccountEventType_MAX + 1;

enum ContactEventType {
  CONTACTEVENT_ERROR = 0,
  CONTACTEVENT_INCOMINGMESSAGE = 1,
  CONTACTEVENT_OUTGOINGMESSAGE = 2,
  CONTACTEVENT_INCOMONGPAYMENT = 3,
  CONTACTEVENT_OUTGOINGPAYMENT = 4
};
bool ContactEventType_IsValid(int value);
const ContactEventType ContactEventType_MIN = CONTACTEVENT_ERROR;
const ContactEventType ContactEventType_MAX = CONTACTEVENT_OUTGOINGPAYMENT;
const int ContactEventType_ARRAYSIZE = ContactEventType_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::opentxs::proto::RPCCommandType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::RPCResponseCode> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::RPCPushType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::RPCPaymentType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::AccountEventType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::opentxs::proto::ContactEventType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RPCEnums_2eproto__INCLUDED
