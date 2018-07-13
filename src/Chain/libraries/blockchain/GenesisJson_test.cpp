#ifdef ALP_TEST_NETWORK

#include <blockchain/GenesisJson.hpp>
#include <blockchain/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>

namespace thinkyoung {
namespace blockchain {
static const unsigned char raw_genesis_config0[] =
{
  0x84, 0x86, 0xac, 0x5a, 0x00, 0x0b, 0x06, 0x6e, 0x65, 0x77, 0x74, 0x6f, 0x6e, 
  0x02, 0x55, 0x85, 0x60, 0x6d, 0xb2, 0x17, 0x8b, 0x73, 0x19, 0xe0, 0xbb, 0xe8, 
  0x9d, 0x6b, 0xe4, 0xf8, 0xa4, 0x3f, 0xa8, 0x27, 0xed, 0x81, 0xed, 0x10, 0xcd, 
  0xa8, 0x6a, 0x93, 0x8f, 0xd9, 0xdb, 0xdf, 0x07, 0x63, 0x6f, 0x6c, 0x6f, 0x6d, 
  0x62, 0x6f, 0x03, 0x4f, 0x5c, 0x3a, 0x95, 0x04, 0x07, 0xb8, 0x46, 0xf4, 0x7d, 
  0xb3, 0x74, 0xe4, 0x82, 0x56, 0x30, 0x83, 0xb4, 0x71, 0x30, 0xa8, 0x2f, 0xa5, 
  0x38, 0xf9, 0x9e, 0xe4, 0x17, 0xff, 0x9e, 0x11, 0xfc, 0x08, 0x65, 0x69, 0x6e, 
  0x73, 0x74, 0x65, 0x69, 0x6e, 0x02, 0x8d, 0xe4, 0xe4, 0xe3, 0x71, 0xa5, 0xe5, 
  0x34, 0xb4, 0x3f, 0xc3, 0xe5, 0xd1, 0x28, 0x8b, 0x6d, 0xf0, 0xe7, 0x3f, 0x60, 
  0xc1, 0xb5, 0xeb, 0x3f, 0x0e, 0x47, 0xcb, 0xb3, 0xf2, 0xf0, 0xc9, 0x9b, 0x07, 
  0x67, 0x61, 0x6c, 0x69, 0x6c, 0x65, 0x69, 0x03, 0x00, 0xd4, 0x96, 0x96, 0x26, 
  0x04, 0x61, 0x5f, 0x2a, 0x3f, 0x9e, 0x2a, 0xa5, 0xe5, 0x0d, 0xa3, 0x35, 0xa2, 
  0x5f, 0x6b, 0x4d, 0x94, 0x3b, 0x0c, 0xe8, 0x29, 0xc9, 0xb1, 0x43, 0x7a, 0x00, 
  0x4b, 0x07, 0x61, 0x72, 0x69, 0x73, 0x74, 0x6f, 0x74, 0x03, 0x77, 0xe0, 0x68, 
  0xa5, 0x72, 0x54, 0xb9, 0x79, 0xc5, 0x06, 0xa3, 0xf2, 0x63, 0x08, 0x1b, 0x7f, 
  0x43, 0x0e, 0x1f, 0x05, 0x54, 0x40, 0xcc, 0x1e, 0xad, 0xae, 0xae, 0x1a, 0x2a, 
  0xb4, 0x80, 0x1e, 0x06, 0x64, 0x61, 0x72, 0x77, 0x69, 0x6e, 0x03, 0x7c, 0x56, 
  0x14, 0x62, 0x18, 0x5e, 0x86, 0x61, 0x89, 0x96, 0xf9, 0x69, 0xae, 0x76, 0x3a, 
  0x70, 0xe7, 0xfe, 0x91, 0x53, 0x8b, 0xc0, 0x4c, 0xe7, 0xb4, 0x86, 0x85, 0xb5, 
  0x4f, 0x0d, 0x7c, 0xda, 0x0a, 0x63, 0x6f, 0x70, 0x65, 0x72, 0x6e, 0x69, 0x63, 
  0x75, 0x73, 0x02, 0xdf, 0xad, 0xe2, 0xee, 0x1e, 0xd6, 0xd1, 0xc5, 0x95, 0x92, 
  0x59, 0xc9, 0x84, 0x0f, 0x9d, 0x33, 0x46, 0x39, 0xad, 0xb0, 0xb7, 0x92, 0x6b, 
  0xc9, 0x63, 0x1c, 0x7c, 0x10, 0x51, 0x79, 0x6f, 0x2d, 0x09, 0x63, 0x6f, 0x6e, 
  0x66, 0x75, 0x63, 0x69, 0x75, 0x73, 0x03, 0xe0, 0x29, 0xdb, 0x0f, 0xd3, 0xdd, 
  0xaf, 0xba, 0x16, 0x4b, 0x86, 0xf2, 0xed, 0xe3, 0x72, 0x56, 0x91, 0x60, 0xe1, 
  0x31, 0x6c, 0xab, 0x01, 0xd9, 0xa4, 0x9c, 0x92, 0x1c, 0xef, 0xb2, 0xaa, 0xac, 
  0x0a, 0x73, 0x68, 0x69, 0x68, 0x75, 0x61, 0x6e, 0x67, 0x64, 0x69, 0x03, 0xfe, 
  0x85, 0x22, 0x29, 0x1e, 0xfd, 0xe2, 0xa2, 0xb5, 0x7f, 0x3c, 0xbf, 0xf2, 0xc1, 
  0x1e, 0x38, 0xff, 0x41, 0x46, 0x7f, 0xd7, 0x10, 0x77, 0xa9, 0xde, 0x37, 0x41, 
  0xbe, 0x52, 0xf3, 0x20, 0x91, 0x0a, 0x77, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 
  0x74, 0x6f, 0x6e, 0x03, 0x6e, 0xc2, 0x6e, 0xcf, 0x67, 0x7e, 0xe8, 0x0c, 0x9c, 
  0x41, 0xbb, 0x16, 0x2c, 0xbc, 0x39, 0x38, 0xde, 0x5a, 0x68, 0x92, 0xbd, 0x44, 
  0x31, 0x98, 0x17, 0xdf, 0xf7, 0x82, 0xde, 0xd3, 0x70, 0xcf, 0x0c, 0x63, 0x6f, 
  0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x69, 0x6e, 0x75, 0x73, 0x02, 0xa0, 0x94, 
  0xcc, 0x09, 0xe4, 0x3b, 0x9b, 0x63, 0x7d, 0x3f, 0x2e, 0x35, 0xf3, 0x0f, 0x3d, 
  0xbf, 0x5e, 0x48, 0xdd, 0xdb, 0xa0, 0x3f, 0xdc, 0x1f, 0x82, 0x8b, 0x89, 0x75, 
  0xc8, 0x5d, 0xd0, 0xfe, 0x0b, 0x24, 0x53, 0x53, 0x43, 0x41, 0x75, 0x34, 0x33, 
  0x64, 0x66, 0x55, 0x47, 0x4e, 0x45, 0x76, 0x52, 0x47, 0x36, 0x79, 0x51, 0x38, 
  0x5a, 0x54, 0x71, 0x69, 0x35, 0x4b, 0x63, 0x56, 0x37, 0x7a, 0x57, 0x41, 0x69, 
  0x68, 0x72, 0x6e, 0x00, 0x40, 0x7a, 0x10, 0xf3, 0x5a, 0x00, 0x00, 0x24, 0x53, 
  0x53, 0x43, 0x46, 0x78, 0x52, 0x4c, 0x61, 0x47, 0x32, 0x68, 0x37, 0x55, 0x31, 
  0x6e, 0x4a, 0x6a, 0x66, 0x36, 0x39, 0x73, 0x54, 0x58, 0x31, 0x45, 0x39, 0x41, 
  0x6a, 0x6e, 0x6d, 0x39, 0x38, 0x78, 0x69, 0x71, 0x51, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0x53, 0x53, 0x43, 0x4e, 0x4a, 0x53, 0x76, 0x79, 
  0x65, 0x67, 0x4a, 0x47, 0x34, 0x34, 0x76, 0x74, 0x65, 0x33, 0x35, 0x76, 0x42, 
  0x32, 0x38, 0x70, 0x62, 0x55, 0x33, 0x47, 0x68, 0x43, 0x58, 0x78, 0x4a, 0x48, 
  0x43, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x53, 0x53, 
  0x43, 0x41, 0x47, 0x58, 0x78, 0x78, 0x41, 0x58, 0x71, 0x58, 0x57, 0x41, 0x77, 
  0x7a, 0x76, 0x38, 0x75, 0x57, 0x64, 0x43, 0x5a, 0x4d, 0x4e, 0x33, 0x72, 0x32, 
  0x68, 0x36, 0x57, 0x5a, 0x5a, 0x53, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x23, 0x53, 0x53, 0x43, 0x6f, 0x52, 0x4b, 0x61, 0x31, 0x6f, 0x73, 
  0x78, 0x55, 0x4c, 0x57, 0x6a, 0x35, 0x6f, 0x65, 0x39, 0x43, 0x58, 0x38, 0x78, 
  0x4a, 0x57, 0x43, 0x32, 0x4d, 0x41, 0x56, 0x31, 0x4b, 0x62, 0x32, 0x7a, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x53, 0x53, 0x43, 0x4c, 0x56, 
  0x37, 0x34, 0x52, 0x6d, 0x6b, 0x53, 0x32, 0x4b, 0x46, 0x45, 0x51, 0x61, 0x6b, 
  0x69, 0x4c, 0x61, 0x33, 0x59, 0x42, 0x72, 0x41, 0x67, 0x65, 0x42, 0x55, 0x48, 
  0x6f, 0x69, 0x35, 0x36, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x24, 0x53, 0x53, 0x43, 0x41, 0x42, 0x45, 0x41, 0x63, 0x63, 0x64, 0x75, 0x32, 
  0x57, 0x55, 0x77, 0x56, 0x4e, 0x32, 0x76, 0x74, 0x4c, 0x41, 0x44, 0x69, 0x73, 
  0x73, 0x62, 0x73, 0x55, 0x50, 0x66, 0x63, 0x6e, 0x43, 0x57, 0x78, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x53, 0x53, 0x43, 0x44, 0x66, 0x4e, 
  0x62, 0x4c, 0x5a, 0x51, 0x64, 0x35, 0x4e, 0x33, 0x43, 0x5a, 0x53, 0x53, 0x61, 
  0x6d, 0x6b, 0x43, 0x73, 0x5a, 0x73, 0x58, 0x34, 0x32, 0x79, 0x6d, 0x46, 0x54, 
  0x79, 0x78, 0x57, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 
  0x53, 0x53, 0x43, 0x4c, 0x36, 0x36, 0x45, 0x50, 0x45, 0x34, 0x4e, 0x45, 0x45, 
  0x64, 0x79, 0x42, 0x50, 0x6a, 0x7a, 0x36, 0x68, 0x57, 0x57, 0x64, 0x56, 0x4c, 
  0x6a, 0x67, 0x57, 0x75, 0x45, 0x4e, 0x7a, 0x7a, 0x6d, 0x6b, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x53, 0x53, 0x43, 0x4b, 0x63, 0x61, 0x65, 
  0x34, 0x74, 0x45, 0x6f, 0x57, 0x37, 0x79, 0x50, 0x39, 0x35, 0x4e, 0x65, 0x62, 
  0x6b, 0x78, 0x6a, 0x41, 0x75, 0x6d, 0x44, 0x6d, 0x79, 0x47, 0x32, 0x67, 0x47, 
  0x6b, 0x38, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x53, 
  0x53, 0x43, 0x4e, 0x31, 0x37, 0x61, 0x75, 0x65, 0x71, 0x4b, 0x4c, 0x4b, 0x33, 
  0x66, 0x55, 0x35, 0x61, 0x71, 0x32, 0x61, 0x6f, 0x4d, 0x73, 0x6e, 0x35, 0x4e, 
  0x68, 0x35, 0x33, 0x7a, 0x57, 0x68, 0x35, 0x56, 0x6a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GenesisState get_builtin_genesis_block_config()
{
  unsigned total_size = sizeof(raw_genesis_config0);
  std::unique_ptr<char[]> buffer(new char[total_size]);
  char *ptr = buffer.get();
  memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  ptr += sizeof(raw_genesis_config0);
  return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
}

fc::sha256 get_builtin_genesis_block_state_hash()
{
  fc::sha256::encoder encoder;
  encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  return encoder.result();
}
}
}
#endif