#ifndef LIBSRTP_CONFIG__
#define LIBSRTP_CONFIG__

#include <inttypes.h>

#define PACKAGE_STRING "libsrtp"
#define PACKAGE_VERSION "alios-0.0.1"

#define HAVE_CONFIG_H 1
#define HAVE_STDLIB_H 1
#define HAVE_INTYPES_H 1
#define HAVE_LWIP_DEF_H 1

#define HAVE_UINT64_T 1

#define CPU_RISC 1
#define MBEDTLS 1

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#undef WORDS_BIGENDIAN
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
#else
#error "Unknown byte order"
#endif

// #define __GNUC__
// #define be64_to_cpu sys_be64_to_cpu
// #define be32_to_cpu sys_be64_to_cpu

#endif
