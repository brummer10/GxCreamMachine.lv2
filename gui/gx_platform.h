// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_H__
#define __GX_PLATFORM_H__ 1

/*---------------------------------------------------------------------
-----------------------------------------------------------------------
		define some MACROS to read png data from binary stream
		png's been converted to object files with
		ld -r -b binary name.png -o name.o
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// in former(?) mingw versions, this was spelled "binary_" (without leading underscore)
#if defined(__linux__) || defined(_WIN32)
#define EXTLD(NAME) \
  extern const unsigned char _binary_ ## NAME ## _start[]; \
  extern const unsigned char _binary_ ## NAME ## _end[];
#define LDVAR(NAME) \
  _binary_ ## NAME ## _start
#define LDLEN(NAME) \
  ((_binary_ ## NAME ## _end) - (_binary_ ## NAME ## _start))
#endif /* defined(__linux__) || defined(_WIN32) */

#ifdef __APPLE__
#include <mach-o/getsect.h>
#define EXTLD(NAME) \
  extern const unsigned char _section$__DATA__ ## NAME [];
#define LDVAR(NAME) _section$__DATA__ ## NAME
#define LDLEN(NAME) (getsectbyname("__DATA", "__" #NAME)->size)
#endif /*__APPLE__ */

#endif /* __GX_PLATFORM_H__ */