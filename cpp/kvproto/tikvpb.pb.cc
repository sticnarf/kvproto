// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tikvpb.proto

#include "tikvpb.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace tikvpb {
}  // namespace tikvpb
namespace protobuf_tikvpb_2eproto {
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tikvpb.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014tikvpb.proto\022\006tikvpb\032\021coprocessor.prot"
      "o\032\rkvrpcpb.proto\032\023raft_serverpb.proto2\223\020"
      "\n\004Tikv\0224\n\005KvGet\022\023.kvrpcpb.GetRequest\032\024.k"
      "vrpcpb.GetResponse\"\000\0227\n\006KvScan\022\024.kvrpcpb"
      ".ScanRequest\032\025.kvrpcpb.ScanResponse\"\000\022C\n"
      "\nKvPrewrite\022\030.kvrpcpb.PrewriteRequest\032\031."
      "kvrpcpb.PrewriteResponse\"\000\022=\n\010KvCommit\022\026"
      ".kvrpcpb.CommitRequest\032\027.kvrpcpb.CommitR"
      "esponse\"\000\022=\n\010KvImport\022\026.kvrpcpb.ImportRe"
      "quest\032\027.kvrpcpb.ImportResponse\"\000\022@\n\tKvCl"
      "eanup\022\027.kvrpcpb.CleanupRequest\032\030.kvrpcpb"
      ".CleanupResponse\"\000\022C\n\nKvBatchGet\022\030.kvrpc"
      "pb.BatchGetRequest\032\031.kvrpcpb.BatchGetRes"
      "ponse\"\000\022R\n\017KvBatchRollback\022\035.kvrpcpb.Bat"
      "chRollbackRequest\032\036.kvrpcpb.BatchRollbac"
      "kResponse\"\000\022C\n\nKvScanLock\022\030.kvrpcpb.Scan"
      "LockRequest\032\031.kvrpcpb.ScanLockResponse\"\000"
      "\022L\n\rKvResolveLock\022\033.kvrpcpb.ResolveLockR"
      "equest\032\034.kvrpcpb.ResolveLockResponse\"\000\0221"
      "\n\004KvGC\022\022.kvrpcpb.GCRequest\032\023.kvrpcpb.GCR"
      "esponse\"\000\022L\n\rKvDeleteRange\022\033.kvrpcpb.Del"
      "eteRangeRequest\032\034.kvrpcpb.DeleteRangeRes"
      "ponse\"\000\022;\n\006RawGet\022\026.kvrpcpb.RawGetReques"
      "t\032\027.kvrpcpb.RawGetResponse\"\000\022J\n\013RawBatch"
      "Get\022\033.kvrpcpb.RawBatchGetRequest\032\034.kvrpc"
      "pb.RawBatchGetResponse\"\000\022;\n\006RawPut\022\026.kvr"
      "pcpb.RawPutRequest\032\027.kvrpcpb.RawPutRespo"
      "nse\"\000\022J\n\013RawBatchPut\022\033.kvrpcpb.RawBatchP"
      "utRequest\032\034.kvrpcpb.RawBatchPutResponse\""
      "\000\022D\n\tRawDelete\022\031.kvrpcpb.RawDeleteReques"
      "t\032\032.kvrpcpb.RawDeleteResponse\"\000\022S\n\016RawBa"
      "tchDelete\022\036.kvrpcpb.RawBatchDeleteReques"
      "t\032\037.kvrpcpb.RawBatchDeleteResponse\"\000\022>\n\007"
      "RawScan\022\027.kvrpcpb.RawScanRequest\032\030.kvrpc"
      "pb.RawScanResponse\"\000\022S\n\016RawDeleteRange\022\036"
      ".kvrpcpb.RawDeleteRangeRequest\032\037.kvrpcpb"
      ".RawDeleteRangeResponse\"\000\022M\n\014RawBatchSca"
      "n\022\034.kvrpcpb.RawBatchScanRequest\032\035.kvrpcp"
      "b.RawBatchScanResponse\"\000\022_\n\022UnsafeDestro"
      "yRange\022\".kvrpcpb.UnsafeDestroyRangeReque"
      "st\032#.kvrpcpb.UnsafeDestroyRangeResponse\""
      "\000\022<\n\013Coprocessor\022\024.coprocessor.Request\032\025"
      ".coprocessor.Response\"\000\022D\n\021CoprocessorSt"
      "ream\022\024.coprocessor.Request\032\025.coprocessor"
      ".Response\"\0000\001\022;\n\004Raft\022\032.raft_serverpb.Ra"
      "ftMessage\032\023.raft_serverpb.Done\"\000(\001\022A\n\010Sn"
      "apshot\022\034.raft_serverpb.SnapshotChunk\032\023.r"
      "aft_serverpb.Done\"\000(\001\022J\n\013SplitRegion\022\033.k"
      "vrpcpb.SplitRegionRequest\032\034.kvrpcpb.Spli"
      "tRegionResponse\"\000\022M\n\014MvccGetByKey\022\034.kvrp"
      "cpb.MvccGetByKeyRequest\032\035.kvrpcpb.MvccGe"
      "tByKeyResponse\"\000\022Y\n\020MvccGetByStartTs\022 .k"
      "vrpcpb.MvccGetByStartTsRequest\032!.kvrpcpb"
      ".MvccGetByStartTsResponse\"\000B\032\n\030com.pingc"
      "ap.tikv.kvprotob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 2183);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tikvpb.proto", &protobuf_RegisterTypes);
  ::protobuf_coprocessor_2eproto::AddDescriptors();
  ::protobuf_kvrpcpb_2eproto::AddDescriptors();
  ::protobuf_raft_5fserverpb_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_tikvpb_2eproto
namespace tikvpb {

// @@protoc_insertion_point(namespace_scope)
}  // namespace tikvpb

// @@protoc_insertion_point(global_scope)
