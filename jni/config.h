#ifndef HAD_CONFIG_H
#define HAD_CONFIG_H
#ifndef _HAD_ZIPCONF_H
#include "zipconf.h"
#endif
/* BEGIN DEFINES */
/* #undef HAVE___PROGNAME */
/* #undef HAVE__CLOSE */
/* #undef HAVE__DUP */
/* #undef HAVE__FDOPEN */
/* #undef HAVE__FILENO */
/* #undef HAVE__OPEN */
/* #undef HAVE__SETMODE */
/* #undef HAVE__SNPRINTF */
/* #undef HAVE__STRDUP */
/* #undef HAVE__STRICMP */
#define HAVE_FILENO
#define HAVE_FSEEKO
#define HAVE_FTELLO
#define HAVE_GETPROGNAME
#define HAVE_OPEN
#define HAVE_MKSTEMP
/* #undef HAVE_SETMODE */
#define HAVE_SNPRINTF
#define HAVE_SSIZE_T_LIBZIP
#define HAVE_STRCASECMP
#define HAVE_STRDUP
/* #undef HAVE_STRICMP */
/* #undef HAVE_STRUCT_TM_TM_ZONE */
#define HAVE_STDBOOL_H
#define HAVE_STRINGS_H
#define HAVE_UNISTD_H
/* #undef __INT8_LIBZIP */
#define INT8_T_LIBZIP 1
#define UINT8_T_LIBZIP 1
/* #undef __INT16_LIBZIP */
#define INT16_T_LIBZIP 2
#define UINT16_T_LIBZIP 2
/* #undef __INT32_LIBZIP */
#define INT32_T_LIBZIP 4
#define UINT32_T_LIBZIP 4
/* #undef __INT64_LIBZIP */
#define INT64_T_LIBZIP 8
#define UINT64_T_LIBZIP 8
#define SIZEOF_OFF_T 4
#define SIZE_T_LIBZIP 4
#define SSIZE_T_LIBZIP 4
/* #undef HAVE_DIRENT_H */
/* #undef HAVE_NDIR_H */
/* #undef HAVE_SYS_DIR_H */
/* #undef HAVE_SYS_NDIR_H */
/* END DEFINES */
#define PACKAGE "libzip"
#define VERSION "1.1.2"

#ifndef HAVE_SSIZE_T_LIBZIP
#  if SIZE_T_LIBZIP == INT_LIBZIP
typedef int ssize_t;
#  elif SIZE_T_LIBZIP == LONG_LIBZIP
typedef long ssize_t;
#  elif SIZE_T_LIBZIP == LONG_LONG_LIBZIP
typedef long long ssize_t;
#  else
#error no suitable type for ssize_t found
#  endif
#endif

#endif /* HAD_CONFIG_H */