#pragma once
#include <memory>

enum KVBasicType_t : uint8_t
{
	KV_BASIC_INVALID,
	KV_BASIC_NULL,
	KV_BASIC_BOOL,
	KV_BASIC_INT,
	KV_BASIC_UINT,
	KV_BASIC_DOUBLE,
	KV_BASIC_STRING,
	KV_BASIC_BINARY_BLOB,
	KV_BASIC_ARRAY,
	KV_BASIC_TABLE
};

enum KVFieldType_t : uint8_t
{
	KV_FIELD_INVALID,
	KV_FIELD_RESOURCE,
	KV_FIELD_RESOURCE_NAME,
	KV_FIELD_PANORAMA,
	KV_FIELD_SOUNDEVENT,
	KV_FIELD_SUBCLASS,
	KV_FIELD_UNSPECIFIED,
	KV_FIELD_NULL,
	KV_FIELD_BINARY_BLOB,
	KV_FIELD_ARRAY,
	KV_FIELD_TABLE,
	KV_FIELD_BOOL8,
	KV_FIELD_CHAR8,
	KV_FIELD_UCHAR32,
	KV_FIELD_INT8,
	KV_FIELD_UINT8,
	KV_FIELD_INT16,
	KV_FIELD_UINT16,
	KV_FIELD_INT32,
	KV_FIELD_UINT32,
	KV_FIELD_INT64,
	KV_FIELD_UINT64,
	KV_FIELD_FLOAT32,
	KV_FIELD_FLOAT64,
	KV_FIELD_STRING,
	KV_FIELD_POINTER,
	KV_FIELD_COLOR32,
	KV_FIELD_VECTOR,
	KV_FIELD_VECTOR2D,
	KV_FIELD_VECTOR4D,
	KV_FIELD_ROTATION_VECTOR,
	KV_FIELD_QUATERNION,
	KV_FIELD_QANGLE,
	KV_FIELD_MATRIX3X4,
	KV_FIELD_TRANSFORM,
	KV_FIELD_STRING_TOKEN,
	KV_FIELD_EHANDLE
};

class KeyValues3
{
public:
	char pad[0x100]{};
};

struct KV3ID_t
{
	const char* name;
	std::uint64_t key;
	std::uint64_t key2;

	explicit KV3ID_t() = default;
	explicit KV3ID_t(const char* name, std::uint64_t key, std::uint64_t key2);
};