// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gps.proto

#include "gps.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace gps {
class SampleDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Sample> _instance;
} _Sample_default_instance_;
}  // namespace gps
static void InitDefaultsscc_info_Sample_gps_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gps::_Sample_default_instance_;
    new (ptr) ::gps::Sample();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gps::Sample::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Sample_gps_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Sample_gps_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_gps_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_gps_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gps_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gps_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gps::Sample, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gps::Sample, t_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, dx_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, du_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, do__),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, x_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, u_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, obs_),
  PROTOBUF_FIELD_OFFSET(::gps::Sample, meta_),
  3,
  0,
  1,
  2,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::gps::Sample)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gps::_Sample_default_instance_),
};

const char descriptor_table_protodef_gps_2eproto[] =
  "\n\tgps.proto\022\003gps\"}\n\006Sample\022\016\n\001T\030\001 \001(\r:\0031"
  "00\022\n\n\002dX\030\002 \001(\r\022\n\n\002dU\030\003 \001(\r\022\n\n\002dO\030\004 \001(\r\022\r"
  "\n\001X\030\005 \003(\002B\002\020\001\022\r\n\001U\030\006 \003(\002B\002\020\001\022\017\n\003obs\030\007 \003("
  "\002B\002\020\001\022\020\n\004meta\030\010 \003(\002B\002\020\001*\223\004\n\nSampleType\022\n"
  "\n\006ACTION\020\000\022\020\n\014JOINT_ANGLES\020\001\022\024\n\020JOINT_VE"
  "LOCITIES\020\002\022\027\n\023END_EFFECTOR_POINTS\020\003\022!\n\035E"
  "ND_EFFECTOR_POINT_VELOCITIES\020\004\022 \n\034END_EF"
  "FECTOR_POINT_JACOBIANS\020\005\022$\n END_EFFECTOR"
  "_POINT_ROT_JACOBIANS\020\006\022\032\n\026END_EFFECTOR_P"
  "OSITIONS\020\007\022\032\n\026END_EFFECTOR_ROTATIONS\020\010\022\032"
  "\n\026END_EFFECTOR_JACOBIANS\020\t\022\031\n\025END_EFFECT"
  "OR_HESSIANS\020\n\022\r\n\tRGB_IMAGE\020\013\022\017\n\013DEPTH_IM"
  "AGE\020\014\022\022\n\016RGB_IMAGE_SIZE\020\r\022\021\n\rCONTEXT_IMA"
  "GE\020\016\022\026\n\022CONTEXT_IMAGE_SIZE\020\017\022\016\n\nIMAGE_FE"
  "AT\020\020\022!\n\035END_EFFECTOR_POINTS_NO_TARGET\020\021\022"
  "+\n\'END_EFFECTOR_POINT_VELOCITIES_NO_TARG"
  "ET\020\022\022\t\n\005NOISE\020\023\022\024\n\020TOTAL_DATA_TYPES\020\024*J\n"
  "\014ActuatorType\022\r\n\tTRIAL_ARM\020\000\022\021\n\rAUXILIAR"
  "Y_ARM\020\001\022\030\n\024TOTAL_ACTUATOR_TYPES\020\002*_\n\023Pos"
  "itionControlMode\022\016\n\nNO_CONTROL\020\000\022\017\n\013JOIN"
  "T_SPACE\020\001\022\016\n\nTASK_SPACE\020\002\022\027\n\023TOTAL_CONTR"
  "OL_MODES\020\003*o\n\016ControllerType\022\030\n\024LIN_GAUS"
  "S_CONTROLLER\020\000\022\024\n\020CAFFE_CONTROLLER\020\001\022\021\n\r"
  "TF_CONTROLLER\020\002\022\032\n\026TOTAL_CONTROLLER_TYPE"
  "S\020\003"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gps_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_gps_2eproto_sccs[1] = {
  &scc_info_Sample_gps_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gps_2eproto_once;
static bool descriptor_table_gps_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gps_2eproto = {
  &descriptor_table_gps_2eproto_initialized, descriptor_table_protodef_gps_2eproto, "gps.proto", 963,
  &descriptor_table_gps_2eproto_once, descriptor_table_gps_2eproto_sccs, descriptor_table_gps_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_gps_2eproto::offsets,
  file_level_metadata_gps_2eproto, 1, file_level_enum_descriptors_gps_2eproto, file_level_service_descriptors_gps_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_gps_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_gps_2eproto), true);
namespace gps {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SampleType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_gps_2eproto);
  return file_level_enum_descriptors_gps_2eproto[0];
}
bool SampleType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ActuatorType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_gps_2eproto);
  return file_level_enum_descriptors_gps_2eproto[1];
}
bool ActuatorType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PositionControlMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_gps_2eproto);
  return file_level_enum_descriptors_gps_2eproto[2];
}
bool PositionControlMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ControllerType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_gps_2eproto);
  return file_level_enum_descriptors_gps_2eproto[3];
}
bool ControllerType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Sample::InitAsDefaultInstance() {
}
class Sample::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<Sample>()._has_bits_);
  static void set_has_t(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_dx(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_du(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_do_(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Sample::kTFieldNumber;
const int Sample::kDXFieldNumber;
const int Sample::kDUFieldNumber;
const int Sample::kDOFieldNumber;
const int Sample::kXFieldNumber;
const int Sample::kUFieldNumber;
const int Sample::kObsFieldNumber;
const int Sample::kMetaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Sample::Sample()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gps.Sample)
}
Sample::Sample(const Sample& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      x_(from.x_),
      u_(from.u_),
      obs_(from.obs_),
      meta_(from.meta_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&dx_, &from.dx_,
    static_cast<size_t>(reinterpret_cast<char*>(&t_) -
    reinterpret_cast<char*>(&dx_)) + sizeof(t_));
  // @@protoc_insertion_point(copy_constructor:gps.Sample)
}

void Sample::SharedCtor() {
  ::memset(&dx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&do__) -
      reinterpret_cast<char*>(&dx_)) + sizeof(do__));
  t_ = 100u;
}

Sample::~Sample() {
  // @@protoc_insertion_point(destructor:gps.Sample)
  SharedDtor();
}

void Sample::SharedDtor() {
}

void Sample::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Sample& Sample::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Sample_gps_2eproto.base);
  return *internal_default_instance();
}


void Sample::Clear() {
// @@protoc_insertion_point(message_clear_start:gps.Sample)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  x_.Clear();
  u_.Clear();
  obs_.Clear();
  meta_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&dx_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&do__) -
        reinterpret_cast<char*>(&dx_)) + sizeof(do__));
    t_ = 100u;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Sample::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint32 T = 1 [default = 100];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          HasBitSetters::set_has_t(&has_bits);
          t_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 dX = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          HasBitSetters::set_has_dx(&has_bits);
          dx_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 dU = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          HasBitSetters::set_has_du(&has_bits);
          du_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 dO = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          HasBitSetters::set_has_do_(&has_bits);
          do__ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float X = 5 [packed = true];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_x(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45) {
          add_x(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float U = 6 [packed = true];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_u(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53) {
          add_u(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float obs = 7 [packed = true];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_obs(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61) {
          add_obs(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float meta = 8 [packed = true];
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_meta(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69) {
          add_meta(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Sample::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:gps.Sample)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 T = 1 [default = 100];
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          HasBitSetters::set_has_t(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &t_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 dX = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          HasBitSetters::set_has_dx(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 dU = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          HasBitSetters::set_has_du(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &du_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 dO = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          HasBitSetters::set_has_do_(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &do__)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float X = 5 [packed = true];
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_x())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (45 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 42u, input, this->mutable_x())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float U = 6 [packed = true];
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (50 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_u())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (53 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 50u, input, this->mutable_u())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float obs = 7 [packed = true];
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (58 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_obs())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (61 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 58u, input, this->mutable_obs())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float meta = 8 [packed = true];
      case 8: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (66 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_meta())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (69 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 66u, input, this->mutable_meta())));
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gps.Sample)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gps.Sample)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Sample::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gps.Sample)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 T = 1 [default = 100];
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(1, this->t(), output);
  }

  // optional uint32 dX = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(2, this->dx(), output);
  }

  // optional uint32 dU = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(3, this->du(), output);
  }

  // optional uint32 dO = 4;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(4, this->do_(), output);
  }

  // repeated float X = 5 [packed = true];
  if (this->x_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(5, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_x_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->x().data(), this->x_size(), output);
  }

  // repeated float U = 6 [packed = true];
  if (this->u_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(6, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_u_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->u().data(), this->u_size(), output);
  }

  // repeated float obs = 7 [packed = true];
  if (this->obs_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(7, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_obs_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->obs().data(), this->obs_size(), output);
  }

  // repeated float meta = 8 [packed = true];
  if (this->meta_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(8, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_meta_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->meta().data(), this->meta_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gps.Sample)
}

::PROTOBUF_NAMESPACE_ID::uint8* Sample::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gps.Sample)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 T = 1 [default = 100];
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->t(), target);
  }

  // optional uint32 dX = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->dx(), target);
  }

  // optional uint32 dU = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->du(), target);
  }

  // optional uint32 dO = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->do_(), target);
  }

  // repeated float X = 5 [packed = true];
  if (this->x_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      5,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _x_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->x_, target);
  }

  // repeated float U = 6 [packed = true];
  if (this->u_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      6,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _u_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->u_, target);
  }

  // repeated float obs = 7 [packed = true];
  if (this->obs_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      7,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _obs_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->obs_, target);
  }

  // repeated float meta = 8 [packed = true];
  if (this->meta_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      8,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _meta_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->meta_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gps.Sample)
  return target;
}

size_t Sample::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gps.Sample)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float X = 5 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->x_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _x_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float U = 6 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->u_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _u_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float obs = 7 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->obs_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _obs_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float meta = 8 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->meta_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _meta_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional uint32 dX = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->dx());
    }

    // optional uint32 dU = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->du());
    }

    // optional uint32 dO = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->do_());
    }

    // optional uint32 T = 1 [default = 100];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->t());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sample::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gps.Sample)
  GOOGLE_DCHECK_NE(&from, this);
  const Sample* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Sample>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gps.Sample)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gps.Sample)
    MergeFrom(*source);
  }
}

void Sample::MergeFrom(const Sample& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gps.Sample)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  x_.MergeFrom(from.x_);
  u_.MergeFrom(from.u_);
  obs_.MergeFrom(from.obs_);
  meta_.MergeFrom(from.meta_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      dx_ = from.dx_;
    }
    if (cached_has_bits & 0x00000002u) {
      du_ = from.du_;
    }
    if (cached_has_bits & 0x00000004u) {
      do__ = from.do__;
    }
    if (cached_has_bits & 0x00000008u) {
      t_ = from.t_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Sample::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gps.Sample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sample::CopyFrom(const Sample& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gps.Sample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sample::IsInitialized() const {
  return true;
}

void Sample::Swap(Sample* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Sample::InternalSwap(Sample* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  x_.InternalSwap(&other->x_);
  u_.InternalSwap(&other->u_);
  obs_.InternalSwap(&other->obs_);
  meta_.InternalSwap(&other->meta_);
  swap(dx_, other->dx_);
  swap(du_, other->du_);
  swap(do__, other->do__);
  swap(t_, other->t_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Sample::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace gps
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gps::Sample* Arena::CreateMaybeMessage< ::gps::Sample >(Arena* arena) {
  return Arena::CreateInternal< ::gps::Sample >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
