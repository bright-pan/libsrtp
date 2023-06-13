#ifndef CONFIG__
#define CONFIG__

#include <stdint.h>
#include <inttypes.h>
#include "byteorder.h"

#define PACKAGE_STRING "libsrtp"
#define PACKAGE_VERSION "alios-0.0.1"

#define HAVE_LWIP_H 1
#define SIZEOF_UNSIGNED_LONG 8

#define be64_to_cpu sys_be64_to_cpu
#define be32_to_cpu sys_be64_to_cpu

#endif
