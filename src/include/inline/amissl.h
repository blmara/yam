#ifndef _INLINE_AMISSL_H
#define _INLINE_AMISSL_H

#ifndef CLIB_AMISSL_PROTOS_H
#define CLIB_AMISSL_PROTOS_H
#endif

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef  AMISSL_AMISSL_H
#include <amissl/amissl.h>
#endif

#ifndef AMISSL_BASE_NAME
#define AMISSL_BASE_NAME AmiSSLBase
#endif

#define InitAmiSSLA(tagList) \
  LP1(0x24, long, InitAmiSSLA, struct TagItem *, tagList, a0, \
  , AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define InitAmiSSL(tags...) \
  ({ULONG _tags[] = {tags}; InitAmiSSLA((struct TagItem *) _tags);})
#endif

#define CleanupAmiSSLA(tagList) \
  LP1(0x2a, long, CleanupAmiSSLA, struct TagItem *, tagList, a0, \
  , AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define CleanupAmiSSL(tags...) \
  ({ULONG _tags[] = {tags}; CleanupAmiSSLA((struct TagItem *) _tags);})
#endif

#define IsCipherAvailable(cipher) \
  LP1(0x30, long, IsCipherAvailable, long, cipher, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_new() \
  LP0(0x66, ASN1_TYPE *, ASN1_TYPE_new, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_free(a) \
  LP1NR(0x6c, ASN1_TYPE_free, ASN1_TYPE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_TYPE(a, in, len) \
  LP3(0x72, ASN1_TYPE *, d2i_ASN1_TYPE, ASN1_TYPE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_TYPE(a, out) \
  LP2(0x78, int, i2d_ASN1_TYPE, ASN1_TYPE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_ANY_it() \
  LP0(0x7e, const ASN1_ITEM *, ASN1_ANY_it, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_get(a) \
  LP1(0x84, int, ASN1_TYPE_get, ASN1_TYPE *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_set(a, type, value) \
  LP3NR(0x8a, ASN1_TYPE_set, ASN1_TYPE *, a, a0, LONG, type, d0, void *, value, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_OBJECT_new() \
  LP0(0x90, ASN1_OBJECT *, ASN1_OBJECT_new, \
  , AMISSL_BASE_NAME)

#define ASN1_OBJECT_free(a) \
  LP1NR(0x96, ASN1_OBJECT_free, ASN1_OBJECT *, a, a0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_OBJECT(a, pp) \
  LP2(0x9c, int, i2d_ASN1_OBJECT, ASN1_OBJECT *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define c2i_ASN1_OBJECT(a, pp, length) \
  LP3(0xa2, ASN1_OBJECT *, c2i_ASN1_OBJECT, ASN1_OBJECT **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_OBJECT(a, pp, length) \
  LP3(0xa8, ASN1_OBJECT *, d2i_ASN1_OBJECT, ASN1_OBJECT **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_OBJECT_it() \
  LP0(0xae, const ASN1_ITEM *, ASN1_OBJECT_it, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_new() \
  LP0(0xb4, ASN1_STRING *, ASN1_STRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_free(a) \
  LP1NR(0xba, ASN1_STRING_free, ASN1_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_dup(a) \
  LP1(0xc0, ASN1_STRING *, ASN1_STRING_dup, ASN1_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_type_new(type) \
  LP1(0xc6, ASN1_STRING *, ASN1_STRING_type_new, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_cmp(a, b) \
  LP2(0xcc, int, ASN1_STRING_cmp, ASN1_STRING *, a, a0, ASN1_STRING *, b, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_set(str, data, len) \
  LP3(0xd2, int, ASN1_STRING_set, ASN1_STRING *, str, a0, const void *, data, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_length(x) \
  LP1(0xd8, int, ASN1_STRING_length, ASN1_STRING *, x, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_length_set(x, n) \
  LP2NR(0xde, ASN1_STRING_length_set, ASN1_STRING *, x, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_type(x) \
  LP1(0xe4, int, ASN1_STRING_type, ASN1_STRING *, x, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_data(x) \
  LP1(0xea, unsigned char *, ASN1_STRING_data, ASN1_STRING *, x, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_new() \
  LP0(0xf0, ASN1_BIT_STRING *, ASN1_BIT_STRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_free(a) \
  LP1NR(0xf6, ASN1_BIT_STRING_free, ASN1_BIT_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_BIT_STRING(a, in, len) \
  LP3(0xfc, ASN1_BIT_STRING *, d2i_ASN1_BIT_STRING, ASN1_BIT_STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_BIT_STRING(a, out) \
  LP2(0x102, int, i2d_ASN1_BIT_STRING, ASN1_BIT_STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_it() \
  LP0(0x108, const ASN1_ITEM *, ASN1_BIT_STRING_it, \
  , AMISSL_BASE_NAME)

#define i2c_ASN1_BIT_STRING(a, pp) \
  LP2(0x10e, int, i2c_ASN1_BIT_STRING, ASN1_BIT_STRING *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define c2i_ASN1_BIT_STRING(a, pp, length) \
  LP3(0x114, ASN1_BIT_STRING *, c2i_ASN1_BIT_STRING, ASN1_BIT_STRING **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_set(a, d, length) \
  LP3(0x11a, int, ASN1_BIT_STRING_set, ASN1_BIT_STRING *, a, a0, unsigned char *, d, a1, LONG, length, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_set_bit(a, n, value) \
  LP3(0x120, int, ASN1_BIT_STRING_set_bit, ASN1_BIT_STRING *, a, a0, LONG, n, d0, LONG, value, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_get_bit(a, n) \
  LP2(0x126, int, ASN1_BIT_STRING_get_bit, ASN1_BIT_STRING *, a, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_name_print(out, bs, tbl, indent) \
  LP4(0x12c, int, ASN1_BIT_STRING_name_print, BIO *, out, a0, ASN1_BIT_STRING *, bs, a1, BIT_STRING_BITNAME *, tbl, a2, LONG, indent, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_num_asc(name, tbl) \
  LP2(0x132, int, ASN1_BIT_STRING_num_asc, char *, name, a0, BIT_STRING_BITNAME *, tbl, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_set_asc(bs, name, value, tbl) \
  LP4(0x138, int, ASN1_BIT_STRING_set_asc, ASN1_BIT_STRING *, bs, a0, char *, name, a1, LONG, value, d0, BIT_STRING_BITNAME *, tbl, a2, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_BOOLEAN(a, pp) \
  LP2(0x13e, int, i2d_ASN1_BOOLEAN, LONG, a, d0, unsigned char **, pp, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_BOOLEAN(a, pp, length) \
  LP3(0x144, int, d2i_ASN1_BOOLEAN, int *, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_new() \
  LP0(0x14a, ASN1_INTEGER *, ASN1_INTEGER_new, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_free(a) \
  LP1NR(0x150, ASN1_INTEGER_free, ASN1_INTEGER *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_INTEGER(a, in, len) \
  LP3(0x156, ASN1_INTEGER *, d2i_ASN1_INTEGER, ASN1_INTEGER **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_INTEGER(a, out) \
  LP2(0x15c, int, i2d_ASN1_INTEGER, ASN1_INTEGER *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_it() \
  LP0(0x162, const ASN1_ITEM *, ASN1_INTEGER_it, \
  , AMISSL_BASE_NAME)

#define i2c_ASN1_INTEGER(a, pp) \
  LP2(0x168, int, i2c_ASN1_INTEGER, ASN1_INTEGER *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define c2i_ASN1_INTEGER(a, pp, length) \
  LP3(0x16e, ASN1_INTEGER *, c2i_ASN1_INTEGER, ASN1_INTEGER **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_UINTEGER(a, pp, length) \
  LP3(0x174, ASN1_INTEGER *, d2i_ASN1_UINTEGER, ASN1_INTEGER **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_dup(x) \
  LP1(0x17a, ASN1_INTEGER *, ASN1_INTEGER_dup, ASN1_INTEGER *, x, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_cmp(x, y) \
  LP2(0x180, int, ASN1_INTEGER_cmp, ASN1_INTEGER *, x, a0, ASN1_INTEGER *, y, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_new() \
  LP0(0x186, ASN1_ENUMERATED *, ASN1_ENUMERATED_new, \
  , AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_free(a) \
  LP1NR(0x18c, ASN1_ENUMERATED_free, ASN1_ENUMERATED *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_ENUMERATED(a, in, len) \
  LP3(0x192, ASN1_ENUMERATED *, d2i_ASN1_ENUMERATED, ASN1_ENUMERATED **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_ENUMERATED(a, out) \
  LP2(0x198, int, i2d_ASN1_ENUMERATED, ASN1_ENUMERATED *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_it() \
  LP0(0x19e, const ASN1_ITEM *, ASN1_ENUMERATED_it, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_check(a) \
  LP1(0x1a4, int, ASN1_UTCTIME_check, ASN1_UTCTIME *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_set(s, t) \
  LP2(0x1aa, ASN1_UTCTIME *, ASN1_UTCTIME_set, ASN1_UTCTIME *, s, a0, time_t, t, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_set_string(s, str) \
  LP2(0x1b0, int, ASN1_UTCTIME_set_string, ASN1_UTCTIME *, s, a0, char *, str, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_cmp_time_t(s, t) \
  LP2(0x1b6, int, ASN1_UTCTIME_cmp_time_t, const ASN1_UTCTIME *, s, a0, time_t, t, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_check(a) \
  LP1(0x1bc, int, ASN1_GENERALIZEDTIME_check, ASN1_GENERALIZEDTIME *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_set(s, t) \
  LP2(0x1c2, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_set, ASN1_GENERALIZEDTIME *, s, a0, time_t, t, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_set_string(s, str) \
  LP2(0x1c8, int, ASN1_GENERALIZEDTIME_set_string, ASN1_GENERALIZEDTIME *, s, a0, char *, str, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_new() \
  LP0(0x1ce, ASN1_OCTET_STRING *, ASN1_OCTET_STRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_free(a) \
  LP1NR(0x1d4, ASN1_OCTET_STRING_free, ASN1_OCTET_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_OCTET_STRING(a, in, len) \
  LP3(0x1da, ASN1_OCTET_STRING *, d2i_ASN1_OCTET_STRING, ASN1_OCTET_STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_OCTET_STRING(a, out) \
  LP2(0x1e0, int, i2d_ASN1_OCTET_STRING, ASN1_OCTET_STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_it() \
  LP0(0x1e6, const ASN1_ITEM *, ASN1_OCTET_STRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_dup(a) \
  LP1(0x1ec, ASN1_OCTET_STRING *, ASN1_OCTET_STRING_dup, ASN1_OCTET_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_cmp(a, b) \
  LP2(0x1f2, int, ASN1_OCTET_STRING_cmp, ASN1_OCTET_STRING *, a, a0, ASN1_OCTET_STRING *, b, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_set(str, data, len) \
  LP3(0x1f8, int, ASN1_OCTET_STRING_set, ASN1_OCTET_STRING *, str, a0, unsigned char *, data, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_VISIBLESTRING_new() \
  LP0(0x1fe, ASN1_VISIBLESTRING *, ASN1_VISIBLESTRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_VISIBLESTRING_free(a) \
  LP1NR(0x204, ASN1_VISIBLESTRING_free, ASN1_VISIBLESTRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_VISIBLESTRING(a, in, len) \
  LP3(0x20a, ASN1_VISIBLESTRING *, d2i_ASN1_VISIBLESTRING, ASN1_VISIBLESTRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_VISIBLESTRING(a, out) \
  LP2(0x210, int, i2d_ASN1_VISIBLESTRING, ASN1_VISIBLESTRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_VISIBLESTRING_it() \
  LP0(0x216, const ASN1_ITEM *, ASN1_VISIBLESTRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_new() \
  LP0(0x21c, ASN1_UNIVERSALSTRING *, ASN1_UNIVERSALSTRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_free(a) \
  LP1NR(0x222, ASN1_UNIVERSALSTRING_free, ASN1_UNIVERSALSTRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_UNIVERSALSTRING(a, in, len) \
  LP3(0x228, ASN1_UNIVERSALSTRING *, d2i_ASN1_UNIVERSALSTRING, ASN1_UNIVERSALSTRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_UNIVERSALSTRING(a, out) \
  LP2(0x22e, int, i2d_ASN1_UNIVERSALSTRING, ASN1_UNIVERSALSTRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_it() \
  LP0(0x234, const ASN1_ITEM *, ASN1_UNIVERSALSTRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_UTF8STRING_new() \
  LP0(0x23a, ASN1_UTF8STRING *, ASN1_UTF8STRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_UTF8STRING_free(a) \
  LP1NR(0x240, ASN1_UTF8STRING_free, ASN1_UTF8STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_UTF8STRING(a, in, len) \
  LP3(0x246, ASN1_UTF8STRING *, d2i_ASN1_UTF8STRING, ASN1_UTF8STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_UTF8STRING(a, out) \
  LP2(0x24c, int, i2d_ASN1_UTF8STRING, ASN1_UTF8STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_UTF8STRING_it() \
  LP0(0x252, const ASN1_ITEM *, ASN1_UTF8STRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_NULL_new() \
  LP0(0x258, ASN1_NULL *, ASN1_NULL_new, \
  , AMISSL_BASE_NAME)

#define ASN1_NULL_free(a) \
  LP1NR(0x25e, ASN1_NULL_free, ASN1_NULL *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_NULL(a, in, len) \
  LP3(0x264, ASN1_NULL *, d2i_ASN1_NULL, ASN1_NULL **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_NULL(a, out) \
  LP2(0x26a, int, i2d_ASN1_NULL, ASN1_NULL *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_NULL_it() \
  LP0(0x270, const ASN1_ITEM *, ASN1_NULL_it, \
  , AMISSL_BASE_NAME)

#define ASN1_BMPSTRING_new() \
  LP0(0x276, ASN1_BMPSTRING *, ASN1_BMPSTRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_BMPSTRING_free(a) \
  LP1NR(0x27c, ASN1_BMPSTRING_free, ASN1_BMPSTRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_BMPSTRING(a, in, len) \
  LP3(0x282, ASN1_BMPSTRING *, d2i_ASN1_BMPSTRING, ASN1_BMPSTRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_BMPSTRING(a, out) \
  LP2(0x288, int, i2d_ASN1_BMPSTRING, ASN1_BMPSTRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_BMPSTRING_it() \
  LP0(0x28e, const ASN1_ITEM *, ASN1_BMPSTRING_it, \
  , AMISSL_BASE_NAME)

#define UTF8_getc(str, len, val) \
  LP3(0x294, int, UTF8_getc, const unsigned char *, str, a0, LONG, len, d0, unsigned long *, val, a1, \
  , AMISSL_BASE_NAME)

#define UTF8_putc(str, len, value) \
  LP3(0x29a, int, UTF8_putc, unsigned char *, str, a0, LONG, len, d0, unsigned long, value, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_new() \
  LP0(0x2a0, ASN1_STRING *, ASN1_PRINTABLE_new, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_free(a) \
  LP1NR(0x2a6, ASN1_PRINTABLE_free, ASN1_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_PRINTABLE(a, in, len) \
  LP3(0x2ac, ASN1_STRING *, d2i_ASN1_PRINTABLE, ASN1_STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_PRINTABLE(a, out) \
  LP2(0x2b2, int, i2d_ASN1_PRINTABLE, ASN1_STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_it() \
  LP0(0x2b8, const ASN1_ITEM *, ASN1_PRINTABLE_it, \
  , AMISSL_BASE_NAME)

#define DIRECTORYSTRING_new() \
  LP0(0x2be, ASN1_STRING *, DIRECTORYSTRING_new, \
  , AMISSL_BASE_NAME)

#define DIRECTORYSTRING_free(a) \
  LP1NR(0x2c4, DIRECTORYSTRING_free, ASN1_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_DIRECTORYSTRING(a, in, len) \
  LP3(0x2ca, ASN1_STRING *, d2i_DIRECTORYSTRING, ASN1_STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_DIRECTORYSTRING(a, out) \
  LP2(0x2d0, int, i2d_DIRECTORYSTRING, ASN1_STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define DIRECTORYSTRING_it() \
  LP0(0x2d6, const ASN1_ITEM *, DIRECTORYSTRING_it, \
  , AMISSL_BASE_NAME)

#define DISPLAYTEXT_new() \
  LP0(0x2dc, ASN1_STRING *, DISPLAYTEXT_new, \
  , AMISSL_BASE_NAME)

#define DISPLAYTEXT_free(a) \
  LP1NR(0x2e2, DISPLAYTEXT_free, ASN1_STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_DISPLAYTEXT(a, in, len) \
  LP3(0x2e8, ASN1_STRING *, d2i_DISPLAYTEXT, ASN1_STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_DISPLAYTEXT(a, out) \
  LP2(0x2ee, int, i2d_DISPLAYTEXT, ASN1_STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define DISPLAYTEXT_it() \
  LP0(0x2f4, const ASN1_ITEM *, DISPLAYTEXT_it, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLESTRING_new() \
  LP0(0x2fa, ASN1_PRINTABLESTRING *, ASN1_PRINTABLESTRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLESTRING_free(a) \
  LP1NR(0x300, ASN1_PRINTABLESTRING_free, ASN1_PRINTABLESTRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_PRINTABLESTRING(a, in, len) \
  LP3(0x306, ASN1_PRINTABLESTRING *, d2i_ASN1_PRINTABLESTRING, ASN1_PRINTABLESTRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_PRINTABLESTRING(a, out) \
  LP2(0x30c, int, i2d_ASN1_PRINTABLESTRING, ASN1_PRINTABLESTRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLESTRING_it() \
  LP0(0x312, const ASN1_ITEM *, ASN1_PRINTABLESTRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_T61STRING_new() \
  LP0(0x318, ASN1_T61STRING *, ASN1_T61STRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_T61STRING_free(a) \
  LP1NR(0x31e, ASN1_T61STRING_free, ASN1_T61STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_T61STRING(a, in, len) \
  LP3(0x324, ASN1_T61STRING *, d2i_ASN1_T61STRING, ASN1_T61STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_T61STRING(a, out) \
  LP2(0x32a, int, i2d_ASN1_T61STRING, ASN1_T61STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_T61STRING_it() \
  LP0(0x330, const ASN1_ITEM *, ASN1_T61STRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_IA5STRING_new() \
  LP0(0x336, ASN1_IA5STRING *, ASN1_IA5STRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_IA5STRING_free(a) \
  LP1NR(0x33c, ASN1_IA5STRING_free, ASN1_IA5STRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_IA5STRING(a, in, len) \
  LP3(0x342, ASN1_IA5STRING *, d2i_ASN1_IA5STRING, ASN1_IA5STRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_IA5STRING(a, out) \
  LP2(0x348, int, i2d_ASN1_IA5STRING, ASN1_IA5STRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_IA5STRING_it() \
  LP0(0x34e, const ASN1_ITEM *, ASN1_IA5STRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALSTRING_new() \
  LP0(0x354, ASN1_GENERALSTRING *, ASN1_GENERALSTRING_new, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALSTRING_free(a) \
  LP1NR(0x35a, ASN1_GENERALSTRING_free, ASN1_GENERALSTRING *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_GENERALSTRING(a, in, len) \
  LP3(0x360, ASN1_GENERALSTRING *, d2i_ASN1_GENERALSTRING, ASN1_GENERALSTRING **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_GENERALSTRING(a, out) \
  LP2(0x366, int, i2d_ASN1_GENERALSTRING, ASN1_GENERALSTRING *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALSTRING_it() \
  LP0(0x36c, const ASN1_ITEM *, ASN1_GENERALSTRING_it, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_new() \
  LP0(0x372, ASN1_UTCTIME *, ASN1_UTCTIME_new, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_free(a) \
  LP1NR(0x378, ASN1_UTCTIME_free, ASN1_UTCTIME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_UTCTIME(a, in, len) \
  LP3(0x37e, ASN1_UTCTIME *, d2i_ASN1_UTCTIME, ASN1_UTCTIME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_UTCTIME(a, out) \
  LP2(0x384, int, i2d_ASN1_UTCTIME, ASN1_UTCTIME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_it() \
  LP0(0x38a, const ASN1_ITEM *, ASN1_UTCTIME_it, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_new() \
  LP0(0x390, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_new, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_free(a) \
  LP1NR(0x396, ASN1_GENERALIZEDTIME_free, ASN1_GENERALIZEDTIME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_GENERALIZEDTIME(a, in, len) \
  LP3(0x39c, ASN1_GENERALIZEDTIME *, d2i_ASN1_GENERALIZEDTIME, ASN1_GENERALIZEDTIME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_GENERALIZEDTIME(a, out) \
  LP2(0x3a2, int, i2d_ASN1_GENERALIZEDTIME, ASN1_GENERALIZEDTIME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_it() \
  LP0(0x3a8, const ASN1_ITEM *, ASN1_GENERALIZEDTIME_it, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_new() \
  LP0(0x3ae, ASN1_TIME *, ASN1_TIME_new, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_free(a) \
  LP1NR(0x3b4, ASN1_TIME_free, ASN1_TIME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_TIME(a, in, len) \
  LP3(0x3ba, ASN1_TIME *, d2i_ASN1_TIME, ASN1_TIME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_TIME(a, out) \
  LP2(0x3c0, int, i2d_ASN1_TIME, ASN1_TIME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_it() \
  LP0(0x3c6, const ASN1_ITEM *, ASN1_TIME_it, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_set(s, t) \
  LP2(0x3cc, ASN1_TIME *, ASN1_TIME_set, ASN1_TIME *, s, a0, time_t, t, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_check(t) \
  LP1(0x3d2, int, ASN1_TIME_check, ASN1_TIME *, t, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_to_generalizedtime(t, out) \
  LP2(0x3d8, ASN1_GENERALIZEDTIME *, ASN1_TIME_to_generalizedtime, ASN1_TIME *, t, a0, ASN1_GENERALIZEDTIME **, out, a1, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_SET(a, pp, func, ex_tag, ex_class, is_set) \
  LP6FP(0x3de, int, i2d_ASN1_SET, STACK *, a, a0, unsigned char **, pp, a1, __fpt, func, a2, LONG, ex_tag, d0, LONG, ex_class, d1, LONG, is_set, d2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define d2i_ASN1_SET(a, pp, length, func, free_func, ex_tag, ex_class) \
  LP7FP(0x3e4, STACK *, d2i_ASN1_SET, STACK **, a, a0, unsigned char **, pp, a1, long, length, d0, __fpt, func, a2, void *, free_func, a3, LONG, ex_tag, d1, LONG, ex_class, d2, \
  , AMISSL_BASE_NAME, char * (*__fpt)())

#define i2a_ASN1_INTEGER(bp, a) \
  LP2(0x3ea, int, i2a_ASN1_INTEGER, BIO *, bp, a0, ASN1_INTEGER *, a, a1, \
  , AMISSL_BASE_NAME)

#define a2i_ASN1_INTEGER(bp, bs, buf, size) \
  LP4(0x3f0, int, a2i_ASN1_INTEGER, BIO *, bp, a0, ASN1_INTEGER *, bs, a1, char *, buf, a2, LONG, size, d0, \
  , AMISSL_BASE_NAME)

#define i2a_ASN1_ENUMERATED(bp, a) \
  LP2(0x3f6, int, i2a_ASN1_ENUMERATED, BIO *, bp, a0, ASN1_ENUMERATED *, a, a1, \
  , AMISSL_BASE_NAME)

#define a2i_ASN1_ENUMERATED(bp, bs, buf, size) \
  LP4(0x3fc, int, a2i_ASN1_ENUMERATED, BIO *, bp, a0, ASN1_ENUMERATED *, bs, a1, char *, buf, a2, LONG, size, d0, \
  , AMISSL_BASE_NAME)

#define i2a_ASN1_OBJECT(bp, a) \
  LP2(0x402, int, i2a_ASN1_OBJECT, BIO *, bp, a0, ASN1_OBJECT *, a, a1, \
  , AMISSL_BASE_NAME)

#define a2i_ASN1_STRING(bp, bs, buf, size) \
  LP4(0x408, int, a2i_ASN1_STRING, BIO *, bp, a0, ASN1_STRING *, bs, a1, char *, buf, a2, LONG, size, d0, \
  , AMISSL_BASE_NAME)

#define i2a_ASN1_STRING(bp, a, type) \
  LP3(0x40e, int, i2a_ASN1_STRING, BIO *, bp, a0, ASN1_STRING *, a, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define i2t_ASN1_OBJECT(buf, buf_len, a) \
  LP3(0x414, int, i2t_ASN1_OBJECT, char *, buf, a0, LONG, buf_len, d0, ASN1_OBJECT *, a, a1, \
  , AMISSL_BASE_NAME)

#define a2d_ASN1_OBJECT(out, olen, buf, num) \
  LP4(0x41a, int, a2d_ASN1_OBJECT, unsigned char *, out, a0, LONG, olen, d0, const char *, buf, a1, LONG, num, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_OBJECT_create(nid, data, len, sn, ln) \
  LP5(0x420, ASN1_OBJECT *, ASN1_OBJECT_create, LONG, nid, d0, unsigned char *, data, a0, LONG, len, d1, const char *, sn, a1, const char *, ln, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_set(a, v) \
  LP2(0x426, int, ASN1_INTEGER_set, ASN1_INTEGER *, a, a0, long, v, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_get(a) \
  LP1(0x42c, long, ASN1_INTEGER_get, ASN1_INTEGER *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_to_ASN1_INTEGER(bn, ai) \
  LP2(0x432, ASN1_INTEGER *, BN_to_ASN1_INTEGER, BIGNUM *, bn, a0, ASN1_INTEGER *, ai, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_INTEGER_to_BN(ai, bn) \
  LP2(0x438, BIGNUM *, ASN1_INTEGER_to_BN, ASN1_INTEGER *, ai, a0, BIGNUM *, bn, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_set(a, v) \
  LP2(0x43e, int, ASN1_ENUMERATED_set, ASN1_ENUMERATED *, a, a0, long, v, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_get(a) \
  LP1(0x444, long, ASN1_ENUMERATED_get, ASN1_ENUMERATED *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_to_ASN1_ENUMERATED(bn, ai) \
  LP2(0x44a, ASN1_ENUMERATED *, BN_to_ASN1_ENUMERATED, BIGNUM *, bn, a0, ASN1_ENUMERATED *, ai, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_to_BN(ai, bn) \
  LP2(0x450, BIGNUM *, ASN1_ENUMERATED_to_BN, ASN1_ENUMERATED *, ai, a0, BIGNUM *, bn, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_type(s, max) \
  LP2(0x456, int, ASN1_PRINTABLE_type, const unsigned char *, s, a0, LONG, max, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_bytes(a, pp, tag, xclass) \
  LP4(0x45c, int, i2d_ASN1_bytes, ASN1_STRING *, a, a0, unsigned char **, pp, a1, LONG, tag, d0, LONG, xclass, d1, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_bytes(a, pp, length, Ptag, Pclass) \
  LP5(0x462, ASN1_STRING *, d2i_ASN1_bytes, ASN1_STRING **, a, a0, unsigned char **, pp, a1, long, length, d0, LONG, Ptag, d1, LONG, Pclass, d2, \
  , AMISSL_BASE_NAME)

#define ASN1_tag2bit(tag) \
  LP1(0x468, unsigned long, ASN1_tag2bit, LONG, tag, d0, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_type_bytes(a, pp, length, type) \
  LP4(0x46e, ASN1_STRING *, d2i_ASN1_type_bytes, ASN1_STRING **, a, a0, unsigned char **, pp, a1, long, length, d0, LONG, type, d1, \
  , AMISSL_BASE_NAME)

#define asn1_Finish(c) \
  LP1(0x474, int, asn1_Finish, ASN1_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_get_object(pp, plength, ptag, pclass, omax) \
  LP5(0x47a, int, ASN1_get_object, unsigned char **, pp, a0, long *, plength, a1, int *, ptag, a2, int *, pclass, a3, long, omax, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_check_infinite_end(p, len) \
  LP2(0x480, int, ASN1_check_infinite_end, unsigned char **, p, a0, long, len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_put_object(pp, constructed, length, tag, xclass) \
  LP5NR(0x486, ASN1_put_object, unsigned char **, pp, a0, LONG, constructed, d0, LONG, length, d1, LONG, tag, d2, LONG, xclass, d3, \
  , AMISSL_BASE_NAME)

#define ASN1_object_size(constructed, length, tag) \
  LP3(0x48c, int, ASN1_object_size, LONG, constructed, d0, LONG, length, d1, LONG, tag, d2, \
  , AMISSL_BASE_NAME)

#define ASN1_dup(i2d, d2i, x) \
  LP3FP(0x492, char *, ASN1_dup, __fpt, i2d, a0, void *, d2i, a1, char *, x, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_item_dup(it, x) \
  LP2(0x498, void *, ASN1_item_dup, const ASN1_ITEM *, it, a0, void *, x, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_to_UTF8(out, in) \
  LP2(0x49e, int, ASN1_STRING_to_UTF8, unsigned char **, out, a0, ASN1_STRING *, in, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_d2i_bio(xnew, d2i, bp, x) \
  LP4FP(0x4a4, char *, ASN1_d2i_bio, __fpt, xnew, a0, void *, d2i, a1, BIO *, bp, a2, unsigned char **, x, a3, \
  , AMISSL_BASE_NAME, char * (*__fpt)())

#define ASN1_item_d2i_bio(it, in, x) \
  LP3(0x4aa, void *, ASN1_item_d2i_bio, const ASN1_ITEM *, it, a0, BIO *, in, a1, void *, x, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_i2d_bio(i2d, out, x) \
  LP3FP(0x4b0, int, ASN1_i2d_bio, __fpt, i2d, a0, BIO *, out, a1, unsigned char *, x, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_item_i2d_bio(it, out, x) \
  LP3(0x4b6, int, ASN1_item_i2d_bio, const ASN1_ITEM *, it, a0, BIO *, out, a1, void *, x, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_UTCTIME_print(fp, a) \
  LP2(0x4bc, int, ASN1_UTCTIME_print, BIO *, fp, a0, ASN1_UTCTIME *, a, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_print(fp, a) \
  LP2(0x4c2, int, ASN1_GENERALIZEDTIME_print, BIO *, fp, a0, ASN1_GENERALIZEDTIME *, a, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_TIME_print(fp, a) \
  LP2(0x4c8, int, ASN1_TIME_print, BIO *, fp, a0, ASN1_TIME *, a, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_print(bp, v) \
  LP2(0x4ce, int, ASN1_STRING_print, BIO *, bp, a0, ASN1_STRING *, v, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_print_ex(out, str, flags) \
  LP3(0x4d4, int, ASN1_STRING_print_ex, BIO *, out, a0, ASN1_STRING *, str, a1, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_parse(bp, pp, len, indent) \
  LP4(0x4da, int, ASN1_parse, BIO *, bp, a0, unsigned char *, pp, a1, long, len, d0, LONG, indent, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_parse_dump(bp, pp, len, indent, dump) \
  LP5(0x4e0, int, ASN1_parse_dump, BIO *, bp, a0, unsigned char *, pp, a1, long, len, d0, LONG, indent, d1, LONG, dump, d2, \
  , AMISSL_BASE_NAME)

#define ASN1_tag2str(tag) \
  LP1(0x4e6, const char *, ASN1_tag2str, LONG, tag, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ASN1_HEADER(a, pp) \
  LP2(0x4ec, int, i2d_ASN1_HEADER, ASN1_HEADER *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_ASN1_HEADER(a, pp, length) \
  LP3(0x4f2, ASN1_HEADER *, d2i_ASN1_HEADER, ASN1_HEADER **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_HEADER_new() \
  LP0(0x4f8, ASN1_HEADER *, ASN1_HEADER_new, \
  , AMISSL_BASE_NAME)

#define ASN1_HEADER_free(a) \
  LP1NR(0x4fe, ASN1_HEADER_free, ASN1_HEADER *, a, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_to_string(s) \
  LP1(0x504, int, ASN1_UNIVERSALSTRING_to_string, ASN1_UNIVERSALSTRING *, s, a0, \
  , AMISSL_BASE_NAME)

#define X509_asn1_meth() \
  LP0(0x50a, ASN1_METHOD *, X509_asn1_meth, \
  , AMISSL_BASE_NAME)

#define RSAPrivateKey_asn1_meth() \
  LP0(0x510, ASN1_METHOD *, RSAPrivateKey_asn1_meth, \
  , AMISSL_BASE_NAME)

#define ASN1_IA5STRING_asn1_meth() \
  LP0(0x516, ASN1_METHOD *, ASN1_IA5STRING_asn1_meth, \
  , AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_asn1_meth() \
  LP0(0x51c, ASN1_METHOD *, ASN1_BIT_STRING_asn1_meth, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_set_octetstring(a, data, len) \
  LP3(0x522, int, ASN1_TYPE_set_octetstring, ASN1_TYPE *, a, a0, unsigned char *, data, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_get_octetstring(a, data, max_len) \
  LP3(0x528, int, ASN1_TYPE_get_octetstring, ASN1_TYPE *, a, a0, unsigned char *, data, a1, LONG, max_len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_set_int_octetstring(a, num, data, len) \
  LP4(0x52e, int, ASN1_TYPE_set_int_octetstring, ASN1_TYPE *, a, a0, long, num, d0, unsigned char *, data, a1, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_TYPE_get_int_octetstring(a, num, data, max_len) \
  LP4(0x534, int, ASN1_TYPE_get_int_octetstring, ASN1_TYPE *, a, a0, long *, num, a1, unsigned char *, data, a2, LONG, max_len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_seq_unpack(buf, len, d2i, free_func) \
  LP4FP(0x53a, STACK *, ASN1_seq_unpack, unsigned char *, buf, a0, LONG, len, d0, __fpt, d2i, a1, void *, free_func, a2, \
  , AMISSL_BASE_NAME, char * (*__fpt)())

#define ASN1_seq_pack(safes, i2d, buf, len) \
  LP4FP(0x540, unsigned char *, ASN1_seq_pack, STACK *, safes, a0, __fpt, i2d, a1, unsigned char **, buf, a2, int *, len, a3, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_unpack_string(oct, d2i) \
  LP2FP(0x546, void *, ASN1_unpack_string, ASN1_STRING *, oct, a0, __fpt, d2i, a1, \
  , AMISSL_BASE_NAME, char * (*__fpt)())

#define ASN1_item_unpack(oct, it) \
  LP2(0x54c, void *, ASN1_item_unpack, ASN1_STRING *, oct, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_pack_string(obj, i2d, oct) \
  LP3FP(0x552, ASN1_STRING *, ASN1_pack_string, void *, obj, a0, __fpt, i2d, a1, ASN1_OCTET_STRING **, oct, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_item_pack(obj, it, oct) \
  LP3(0x558, ASN1_STRING *, ASN1_item_pack, void *, obj, a0, const ASN1_ITEM *, it, a1, ASN1_OCTET_STRING **, oct, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_set_default_mask(mask) \
  LP1NR(0x55e, ASN1_STRING_set_default_mask, unsigned long, mask, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_set_default_mask_asc(p) \
  LP1(0x564, int, ASN1_STRING_set_default_mask_asc, char *, p, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_get_default_mask() \
  LP0(0x56a, unsigned long, ASN1_STRING_get_default_mask, \
  , AMISSL_BASE_NAME)

#define ASN1_mbstring_copy(out, in, len, inform, mask) \
  LP5(0x570, int, ASN1_mbstring_copy, ASN1_STRING **, out, a0, const unsigned char *, in, a1, LONG, len, d0, LONG, inform, d1, unsigned long, mask, d2, \
  , AMISSL_BASE_NAME)

#define ASN1_mbstring_ncopy(out, in, len, inform, mask, minsize, maxsize) \
  LP7(0x576, int, ASN1_mbstring_ncopy, ASN1_STRING **, out, a0, const unsigned char *, in, a1, LONG, len, d0, LONG, inform, d1, unsigned long, mask, d2, long, minsize, d3, long, maxsize, d4, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_set_by_NID(out, in, inlen, inform, nid) \
  LP5(0x57c, ASN1_STRING *, ASN1_STRING_set_by_NID, ASN1_STRING **, out, a0, const unsigned char *, in, a1, LONG, inlen, d0, LONG, inform, d1, LONG, nid, d2, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_TABLE_get(nid) \
  LP1(0x582, ASN1_STRING_TABLE *, ASN1_STRING_TABLE_get, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_TABLE_add(a, b, c, d, e) \
  LP5(0x588, int, ASN1_STRING_TABLE_add, LONG, a, d0, long, b, d1, long, c, d2, unsigned long, d, d3, unsigned long, e, d4, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_TABLE_cleanup() \
  LP0NR(0x58e, ASN1_STRING_TABLE_cleanup, \
  , AMISSL_BASE_NAME)

#define ASN1_item_new(it) \
  LP1(0x594, ASN1_VALUE *, ASN1_item_new, const ASN1_ITEM *, it, a0, \
  , AMISSL_BASE_NAME)

#define ASN1_item_free(val, it) \
  LP2NR(0x59a, ASN1_item_free, ASN1_VALUE *, val, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_item_d2i(val, in, len, it) \
  LP4(0x5a0, ASN1_VALUE *, ASN1_item_d2i, ASN1_VALUE **, val, a0, unsigned char **, in, a1, long, len, d0, const ASN1_ITEM *, it, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_item_i2d(val, out, it) \
  LP3(0x5a6, int, ASN1_item_i2d, ASN1_VALUE *, val, a0, unsigned char **, out, a1, const ASN1_ITEM *, it, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_add_oid_module() \
  LP0NR(0x5ac, ASN1_add_oid_module, \
  , AMISSL_BASE_NAME)

#define ERR_load_ASN1_strings() \
  LP0NR(0x5b2, ERR_load_ASN1_strings, \
  , AMISSL_BASE_NAME)

#define asn1_GetSequence(c, length) \
  LP2(0x5b8, int, asn1_GetSequence, ASN1_CTX *, c, a0, long *, length, a1, \
  , AMISSL_BASE_NAME)

#define asn1_add_error(address, offset) \
  LP2NR(0x5be, asn1_add_error, unsigned char *, address, a0, LONG, offset, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_BOOLEAN_it() \
  LP0(0x5c4, const ASN1_ITEM *, ASN1_BOOLEAN_it, \
  , AMISSL_BASE_NAME)

#define ASN1_TBOOLEAN_it() \
  LP0(0x5ca, const ASN1_ITEM *, ASN1_TBOOLEAN_it, \
  , AMISSL_BASE_NAME)

#define ASN1_FBOOLEAN_it() \
  LP0(0x5d0, const ASN1_ITEM *, ASN1_FBOOLEAN_it, \
  , AMISSL_BASE_NAME)

#define ASN1_SEQUENCE_it() \
  LP0(0x5d6, const ASN1_ITEM *, ASN1_SEQUENCE_it, \
  , AMISSL_BASE_NAME)

#define CBIGNUM_it() \
  LP0(0x5dc, const ASN1_ITEM *, CBIGNUM_it, \
  , AMISSL_BASE_NAME)

#define BIGNUM_it() \
  LP0(0x5e2, const ASN1_ITEM *, BIGNUM_it, \
  , AMISSL_BASE_NAME)

#define LONG_it() \
  LP0(0x5e8, const ASN1_ITEM *, LONG_it, \
  , AMISSL_BASE_NAME)

#define ZLONG_it() \
  LP0(0x5ee, const ASN1_ITEM *, ZLONG_it, \
  , AMISSL_BASE_NAME)

#define ASN1_item_ex_new(pval, it) \
  LP2(0x5f4, int, ASN1_item_ex_new, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_item_ex_free(pval, it) \
  LP2NR(0x5fa, ASN1_item_ex_free, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_template_new(pval, tt) \
  LP2(0x600, int, ASN1_template_new, ASN1_VALUE **, pval, a0, const ASN1_TEMPLATE *, tt, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_primitive_new(pval, it) \
  LP2(0x606, int, ASN1_primitive_new, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_template_free(pval, tt) \
  LP2NR(0x60c, ASN1_template_free, ASN1_VALUE **, pval, a0, const ASN1_TEMPLATE *, tt, a1, \
  , AMISSL_BASE_NAME)

#define ASN1_template_d2i(pval, in, len, tt) \
  LP4(0x612, int, ASN1_template_d2i, ASN1_VALUE **, pval, a0, unsigned char **, in, a1, long, len, d0, const ASN1_TEMPLATE *, tt, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_item_ex_d2i(pval, in, len, it, tag, aclass, opt, ctx) \
  LP8(0x618, int, ASN1_item_ex_d2i, ASN1_VALUE **, pval, a0, unsigned char **, in, a1, long, len, d0, const ASN1_ITEM *, it, a2, LONG, tag, d1, LONG, aclass, d2, LONG, opt, d3, ASN1_TLC *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define ASN1_item_ex_i2d(pval, out, it, tag, aclass) \
  LP5(0x61e, int, ASN1_item_ex_i2d, ASN1_VALUE **, pval, a0, unsigned char **, out, a1, const ASN1_ITEM *, it, a2, LONG, tag, d0, LONG, aclass, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_template_i2d(pval, out, tt) \
  LP3(0x624, int, ASN1_template_i2d, ASN1_VALUE **, pval, a0, unsigned char **, out, a1, const ASN1_TEMPLATE *, tt, a2, \
  , AMISSL_BASE_NAME)

#define ASN1_primitive_free(pval, it) \
  LP2NR(0x62a, ASN1_primitive_free, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define asn1_ex_i2c(pval, cont, putype, it) \
  LP4(0x630, int, asn1_ex_i2c, ASN1_VALUE **, pval, a0, unsigned char *, cont, a1, int *, putype, a2, const ASN1_ITEM *, it, a3, \
  , AMISSL_BASE_NAME)

#define asn1_ex_c2i(pval, cont, len, utype, free_cont, it) \
  LP6(0x636, int, asn1_ex_c2i, ASN1_VALUE **, pval, a0, unsigned char *, cont, a1, LONG, len, d0, LONG, utype, d1, char *, free_cont, a2, const ASN1_ITEM *, it, a3, \
  , AMISSL_BASE_NAME)

#define asn1_get_choice_selector(pval, it) \
  LP2(0x63c, int, asn1_get_choice_selector, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define asn1_set_choice_selector(pval, value, it) \
  LP3(0x642, int, asn1_set_choice_selector, ASN1_VALUE **, pval, a0, LONG, value, d0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define asn1_get_field_ptr(pval, tt) \
  LP2(0x648, ASN1_VALUE **, asn1_get_field_ptr, ASN1_VALUE **, pval, a0, const ASN1_TEMPLATE *, tt, a1, \
  , AMISSL_BASE_NAME)

#define asn1_do_adb(pval, tt, nullerr) \
  LP3(0x64e, const ASN1_TEMPLATE *, asn1_do_adb, ASN1_VALUE **, pval, a0, const ASN1_TEMPLATE *, tt, a1, LONG, nullerr, d0, \
  , AMISSL_BASE_NAME)

#define asn1_do_lock(pval, op, it) \
  LP3(0x654, int, asn1_do_lock, ASN1_VALUE **, pval, a0, LONG, op, d0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define asn1_enc_init(pval, it) \
  LP2NR(0x65a, asn1_enc_init, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define asn1_enc_free(pval, it) \
  LP2NR(0x660, asn1_enc_free, ASN1_VALUE **, pval, a0, const ASN1_ITEM *, it, a1, \
  , AMISSL_BASE_NAME)

#define asn1_enc_restore(len, out, pval, it) \
  LP4(0x666, int, asn1_enc_restore, int *, len, a0, unsigned char **, out, a1, ASN1_VALUE **, pval, a2, const ASN1_ITEM *, it, a3, \
  , AMISSL_BASE_NAME)

#define asn1_enc_save(pval, in, inlen, it) \
  LP4(0x66c, int, asn1_enc_save, ASN1_VALUE **, pval, a0, unsigned char *, in, a1, LONG, inlen, d0, const ASN1_ITEM *, it, a2, \
  , AMISSL_BASE_NAME)

#define BIO_ctrl_pending(b) \
  LP1(0x672, size_t, BIO_ctrl_pending, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_ctrl_wpending(b) \
  LP1(0x678, size_t, BIO_ctrl_wpending, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_ctrl_get_write_guarantee(b) \
  LP1(0x67e, size_t, BIO_ctrl_get_write_guarantee, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_ctrl_get_read_request(b) \
  LP1(0x684, size_t, BIO_ctrl_get_read_request, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_ctrl_reset_read_request(b) \
  LP1(0x68a, int, BIO_ctrl_reset_read_request, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_set_ex_data(bio, idx, data) \
  LP3(0x690, int, BIO_set_ex_data, BIO *, bio, a0, LONG, idx, d0, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define BIO_get_ex_data(bio, idx) \
  LP2(0x696, void *, BIO_get_ex_data, BIO *, bio, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define BIO_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x69c, int, BIO_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define BIO_number_read(bio) \
  LP1(0x6a2, unsigned long, BIO_number_read, BIO *, bio, a0, \
  , AMISSL_BASE_NAME)

#define BIO_number_written(bio) \
  LP1(0x6a8, unsigned long, BIO_number_written, BIO *, bio, a0, \
  , AMISSL_BASE_NAME)

#define BIO_s_file() \
  LP0(0x6ae, BIO_METHOD *, BIO_s_file, \
  , AMISSL_BASE_NAME)

#define BIO_new_file(filename, mode) \
  LP2(0x6b4, BIO *, BIO_new_file, const char *, filename, a0, const char *, mode, a1, \
  , AMISSL_BASE_NAME)

#define BIO_new_fp_amiga(stream, close_flag) \
  LP2(0x6ba, BIO *, BIO_new_fp_amiga, BPTR, stream, d0, LONG, close_flag, d1, \
  , AMISSL_BASE_NAME)

#define BIO_new(type) \
  LP1(0x6c0, BIO *, BIO_new, BIO_METHOD *, type, a0, \
  , AMISSL_BASE_NAME)

#define BIO_set(a, type) \
  LP2(0x6c6, int, BIO_set, BIO *, a, a0, BIO_METHOD *, type, a1, \
  , AMISSL_BASE_NAME)

#define BIO_free(a) \
  LP1(0x6cc, int, BIO_free, BIO *, a, a0, \
  , AMISSL_BASE_NAME)

#define BIO_vfree(a) \
  LP1NR(0x6d2, BIO_vfree, BIO *, a, a0, \
  , AMISSL_BASE_NAME)

#define BIO_read(b, data, len) \
  LP3(0x6d8, int, BIO_read, BIO *, b, a0, void *, data, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define BIO_gets(bp, buf, size) \
  LP3(0x6de, int, BIO_gets, BIO *, bp, a0, char *, buf, a1, LONG, size, d0, \
  , AMISSL_BASE_NAME)

#define BIO_write(b, data, len) \
  LP3(0x6e4, int, BIO_write, BIO *, b, a0, const void *, data, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define BIO_puts(bp, buf) \
  LP2(0x6ea, int, BIO_puts, BIO *, bp, a0, const char *, buf, a1, \
  , AMISSL_BASE_NAME)

#define BIO_indent(b, indent, max) \
  LP3(0x6f0, int, BIO_indent, BIO *, b, a0, LONG, indent, d0, LONG, max, d1, \
  , AMISSL_BASE_NAME)

#define BIO_ctrl(bp, cmd, larg, parg) \
  LP4(0x6f6, long, BIO_ctrl, BIO *, bp, a0, LONG, cmd, d0, long, larg, d1, void *, parg, a1, \
  , AMISSL_BASE_NAME)

#define BIO_callback_ctrl(b, cmd, fp) \
  LP3FP(0x6fc, long, BIO_callback_ctrl, BIO *, b, a0, LONG, cmd, d0, __fpt, fp, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(struct bio_st *, int, const char *, int, long, long))

#define BIO_ptr_ctrl(bp, cmd, larg) \
  LP3(0x702, char *, BIO_ptr_ctrl, BIO *, bp, a0, LONG, cmd, d0, long, larg, d1, \
  , AMISSL_BASE_NAME)

#define BIO_int_ctrl(bp, cmd, larg, iarg) \
  LP4(0x708, long, BIO_int_ctrl, BIO *, bp, a0, LONG, cmd, d0, long, larg, d1, LONG, iarg, d2, \
  , AMISSL_BASE_NAME)

#define BIO_push(b, append) \
  LP2(0x70e, BIO *, BIO_push, BIO *, b, a0, BIO *, append, a1, \
  , AMISSL_BASE_NAME)

#define BIO_pop(b) \
  LP1(0x714, BIO *, BIO_pop, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_free_all(a) \
  LP1NR(0x71a, BIO_free_all, BIO *, a, a0, \
  , AMISSL_BASE_NAME)

#define BIO_find_type(b, bio_type) \
  LP2(0x720, BIO *, BIO_find_type, BIO *, b, a0, LONG, bio_type, d0, \
  , AMISSL_BASE_NAME)

#define BIO_next(b) \
  LP1(0x726, BIO *, BIO_next, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_get_retry_BIO(bio, reason) \
  LP2(0x72c, BIO *, BIO_get_retry_BIO, BIO *, bio, a0, int *, reason, a1, \
  , AMISSL_BASE_NAME)

#define BIO_get_retry_reason(bio) \
  LP1(0x732, int, BIO_get_retry_reason, BIO *, bio, a0, \
  , AMISSL_BASE_NAME)

#define BIO_dup_chain(in) \
  LP1(0x738, BIO *, BIO_dup_chain, BIO *, in, a0, \
  , AMISSL_BASE_NAME)

#define BIO_nread0(bio, buf) \
  LP2(0x73e, int, BIO_nread0, BIO *, bio, a0, char **, buf, a1, \
  , AMISSL_BASE_NAME)

#define BIO_nread(bio, buf, num) \
  LP3(0x744, int, BIO_nread, BIO *, bio, a0, char **, buf, a1, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define BIO_nwrite0(bio, buf) \
  LP2(0x74a, int, BIO_nwrite0, BIO *, bio, a0, char **, buf, a1, \
  , AMISSL_BASE_NAME)

#define BIO_nwrite(bio, buf, num) \
  LP3(0x750, int, BIO_nwrite, BIO *, bio, a0, char **, buf, a1, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define BIO_debug_callback(bio, cmd, argp, argi, argl, ret) \
  LP6(0x756, long, BIO_debug_callback, BIO *, bio, a0, LONG, cmd, d0, const char *, argp, a1, LONG, argi, d1, long, argl, d2, long, ret, d3, \
  , AMISSL_BASE_NAME)

#define BIO_s_mem() \
  LP0(0x75c, BIO_METHOD *, BIO_s_mem, \
  , AMISSL_BASE_NAME)

#define BIO_new_mem_buf(buf, len) \
  LP2(0x762, BIO *, BIO_new_mem_buf, void *, buf, a0, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define BIO_s_socket() \
  LP0(0x768, BIO_METHOD *, BIO_s_socket, \
  , AMISSL_BASE_NAME)

#define BIO_s_connect() \
  LP0(0x76e, BIO_METHOD *, BIO_s_connect, \
  , AMISSL_BASE_NAME)

#define BIO_s_accept() \
  LP0(0x774, BIO_METHOD *, BIO_s_accept, \
  , AMISSL_BASE_NAME)

#define BIO_s_fd() \
  LP0(0x77a, BIO_METHOD *, BIO_s_fd, \
  , AMISSL_BASE_NAME)

#define BIO_s_log() \
  LP0(0x780, BIO_METHOD *, BIO_s_log, \
  , AMISSL_BASE_NAME)

#define BIO_s_bio() \
  LP0(0x786, BIO_METHOD *, BIO_s_bio, \
  , AMISSL_BASE_NAME)

#define BIO_s_null() \
  LP0(0x78c, BIO_METHOD *, BIO_s_null, \
  , AMISSL_BASE_NAME)

#define BIO_f_null() \
  LP0(0x792, BIO_METHOD *, BIO_f_null, \
  , AMISSL_BASE_NAME)

#define BIO_f_buffer() \
  LP0(0x798, BIO_METHOD *, BIO_f_buffer, \
  , AMISSL_BASE_NAME)

#define BIO_f_nbio_test() \
  LP0(0x79e, BIO_METHOD *, BIO_f_nbio_test, \
  , AMISSL_BASE_NAME)

#define BIO_sock_should_retry(i) \
  LP1(0x7a4, int, BIO_sock_should_retry, LONG, i, d0, \
  , AMISSL_BASE_NAME)

#define BIO_sock_non_fatal_error(error) \
  LP1(0x7aa, int, BIO_sock_non_fatal_error, LONG, error, d0, \
  , AMISSL_BASE_NAME)

#define BIO_fd_should_retry(i) \
  LP1(0x7b0, int, BIO_fd_should_retry, LONG, i, d0, \
  , AMISSL_BASE_NAME)

#define BIO_fd_non_fatal_error(error) \
  LP1(0x7b6, int, BIO_fd_non_fatal_error, LONG, error, d0, \
  , AMISSL_BASE_NAME)

#define BIO_dump(b, bytes, len) \
  LP3(0x7bc, int, BIO_dump, BIO *, b, a0, const char *, bytes, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define BIO_dump_indent(b, bytes, len, indent) \
  LP4(0x7c2, int, BIO_dump_indent, BIO *, b, a0, const char *, bytes, a1, LONG, len, d0, LONG, indent, d1, \
  , AMISSL_BASE_NAME)

#define BIO_gethostbyname(name) \
  LP1(0x7c8, struct hostent *, BIO_gethostbyname, const char *, name, a0, \
  , AMISSL_BASE_NAME)

#define BIO_sock_error(sock) \
  LP1(0x7ce, int, BIO_sock_error, LONG, sock, d0, \
  , AMISSL_BASE_NAME)

#define BIO_socket_ioctl(fd, type, arg) \
  LP3(0x7d4, int, BIO_socket_ioctl, LONG, fd, d0, long, type, d1, void *, arg, a0, \
  , AMISSL_BASE_NAME)

#define BIO_socket_nbio(fd, mode) \
  LP2(0x7da, int, BIO_socket_nbio, LONG, fd, d0, LONG, mode, d1, \
  , AMISSL_BASE_NAME)

#define BIO_get_port(str, port_ptr) \
  LP2(0x7e0, int, BIO_get_port, const char *, str, a0, unsigned short *, port_ptr, a1, \
  , AMISSL_BASE_NAME)

#define BIO_get_host_ip(str, ip) \
  LP2(0x7e6, int, BIO_get_host_ip, const char *, str, a0, unsigned char *, ip, a1, \
  , AMISSL_BASE_NAME)

#define BIO_get_accept_socket(host_port, mode) \
  LP2(0x7ec, int, BIO_get_accept_socket, char *, host_port, a0, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define BIO_accept(sock, ip_port) \
  LP2(0x7f2, int, BIO_accept, LONG, sock, d0, char **, ip_port, a0, \
  , AMISSL_BASE_NAME)

#define BIO_sock_init() \
  LP0(0x7f8, int, BIO_sock_init, \
  , AMISSL_BASE_NAME)

#define BIO_sock_cleanup() \
  LP0NR(0x7fe, BIO_sock_cleanup, \
  , AMISSL_BASE_NAME)

#define BIO_set_tcp_ndelay(sock, turn_on) \
  LP2(0x804, int, BIO_set_tcp_ndelay, LONG, sock, d0, LONG, turn_on, d1, \
  , AMISSL_BASE_NAME)

#define BIO_new_socket(sock, close_flag) \
  LP2(0x80a, BIO *, BIO_new_socket, LONG, sock, d0, LONG, close_flag, d1, \
  , AMISSL_BASE_NAME)

#define BIO_new_fd(fd, close_flag) \
  LP2(0x810, BIO *, BIO_new_fd, LONG, fd, d0, LONG, close_flag, d1, \
  , AMISSL_BASE_NAME)

#define BIO_new_connect(host_port) \
  LP1(0x816, BIO *, BIO_new_connect, char *, host_port, a0, \
  , AMISSL_BASE_NAME)

#define BIO_new_accept(host_port) \
  LP1(0x81c, BIO *, BIO_new_accept, char *, host_port, a0, \
  , AMISSL_BASE_NAME)

#define BIO_new_bio_pair(bio1, writebuf1, bio2, writebuf2) \
  LP4(0x822, int, BIO_new_bio_pair, BIO **, bio1, a0, ULONG, writebuf1, d0, BIO **, bio2, a1, ULONG, writebuf2, d1, \
  , AMISSL_BASE_NAME)

#define BIO_copy_next_retry(b) \
  LP1NR(0x828, BIO_copy_next_retry, BIO *, b, a0, \
  , AMISSL_BASE_NAME)

#define BIO_vprintf(bio, format, args) \
  LP3(0x82e, int, BIO_vprintf, BIO *, bio, a0, const char *, format, a1, long *, args, d0, \
  , AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define BIO_printf(bio, format, tags...) \
  ({ULONG _tags[] = {tags}; BIO_vprintf((bio), (format), (long *) _tags);})
#endif

#define BIO_vsnprintf(buf, n, format, args) \
  LP4(0x834, int, BIO_vsnprintf, char *, buf, a0, ULONG, n, d0, const char *, format, a1, long *, args, d1, \
  , AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define BIO_snprintf(buf, n, format, tags...) \
  ({ULONG _tags[] = {tags}; BIO_vsnprintf((buf), (n), (format), (long *) _tags);})
#endif

#define ERR_load_BIO_strings() \
  LP0NR(0x83a, ERR_load_BIO_strings, \
  , AMISSL_BASE_NAME)

#define BN_value_one() \
  LP0(0x840, const BIGNUM *, BN_value_one, \
  , AMISSL_BASE_NAME)

#define BN_options() \
  LP0(0x846, char *, BN_options, \
  , AMISSL_BASE_NAME)

#define BN_CTX_new() \
  LP0(0x84c, BN_CTX *, BN_CTX_new, \
  , AMISSL_BASE_NAME)

#define BN_CTX_init(c) \
  LP1NR(0x852, BN_CTX_init, BN_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define BN_CTX_free(c) \
  LP1NR(0x858, BN_CTX_free, BN_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define BN_CTX_start(ctx) \
  LP1NR(0x85e, BN_CTX_start, BN_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define BN_CTX_get(ctx) \
  LP1(0x864, BIGNUM *, BN_CTX_get, BN_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define BN_CTX_end(ctx) \
  LP1NR(0x86a, BN_CTX_end, BN_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define BN_rand(rnd, bits, top, bottom) \
  LP4(0x870, int, BN_rand, BIGNUM *, rnd, a0, LONG, bits, d0, LONG, top, d1, LONG, bottom, d2, \
  , AMISSL_BASE_NAME)

#define BN_pseudo_rand(rnd, bits, top, bottom) \
  LP4(0x876, int, BN_pseudo_rand, BIGNUM *, rnd, a0, LONG, bits, d0, LONG, top, d1, LONG, bottom, d2, \
  , AMISSL_BASE_NAME)

#define BN_rand_range(rnd, range) \
  LP2(0x87c, int, BN_rand_range, BIGNUM *, rnd, a0, BIGNUM *, range, a1, \
  , AMISSL_BASE_NAME)

#define BN_pseudo_rand_range(rnd, range) \
  LP2(0x882, int, BN_pseudo_rand_range, BIGNUM *, rnd, a0, BIGNUM *, range, a1, \
  , AMISSL_BASE_NAME)

#define BN_num_bits(a) \
  LP1(0x888, int, BN_num_bits, const BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_num_bits_word(a) \
  LP1(0x88e, int, BN_num_bits_word, BN_ULONG, a, d0, \
  , AMISSL_BASE_NAME)

#define BN_new() \
  LP0(0x894, BIGNUM *, BN_new, \
  , AMISSL_BASE_NAME)

#define BN_init(a) \
  LP1NR(0x89a, BN_init, BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_clear_free(a) \
  LP1NR(0x8a0, BN_clear_free, BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_copy(a, b) \
  LP2(0x8a6, BIGNUM *, BN_copy, BIGNUM *, a, a0, const BIGNUM *, b, a1, \
  , AMISSL_BASE_NAME)

#define BN_swap(a, b) \
  LP2NR(0x8ac, BN_swap, BIGNUM *, a, a0, BIGNUM *, b, a1, \
  , AMISSL_BASE_NAME)

#define BN_bin2bn(s, len, ret) \
  LP3(0x8b2, BIGNUM *, BN_bin2bn, const unsigned char *, s, a0, LONG, len, d0, BIGNUM *, ret, a1, \
  , AMISSL_BASE_NAME)

#define BN_bn2bin(a, to) \
  LP2(0x8b8, int, BN_bn2bin, const BIGNUM *, a, a0, unsigned char *, to, a1, \
  , AMISSL_BASE_NAME)

#define BN_mpi2bn(s, len, ret) \
  LP3(0x8be, BIGNUM *, BN_mpi2bn, const unsigned char *, s, a0, LONG, len, d0, BIGNUM *, ret, a1, \
  , AMISSL_BASE_NAME)

#define BN_bn2mpi(a, to) \
  LP2(0x8c4, int, BN_bn2mpi, const BIGNUM *, a, a0, unsigned char *, to, a1, \
  , AMISSL_BASE_NAME)

#define BN_sub(r, a, b) \
  LP3(0x8ca, int, BN_sub, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, \
  , AMISSL_BASE_NAME)

#define BN_usub(r, a, b) \
  LP3(0x8d0, int, BN_usub, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, \
  , AMISSL_BASE_NAME)

#define BN_uadd(r, a, b) \
  LP3(0x8d6, int, BN_uadd, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, \
  , AMISSL_BASE_NAME)

#define BN_add(r, a, b) \
  LP3(0x8dc, int, BN_add, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, \
  , AMISSL_BASE_NAME)

#define BN_mul(r, a, b, ctx) \
  LP4(0x8e2, int, BN_mul, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_sqr(r, a, ctx) \
  LP3(0x8e8, int, BN_sqr, BIGNUM *, r, a0, const BIGNUM *, a, a1, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_div(dv, rem, m, d, ctx) \
  LP5(0x8ee, int, BN_div, BIGNUM *, dv, a0, BIGNUM *, rem, a1, const BIGNUM *, m, a2, const BIGNUM *, d, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_nnmod(r, m, d, ctx) \
  LP4(0x8f4, int, BN_nnmod, BIGNUM *, r, a0, const BIGNUM *, m, a1, const BIGNUM *, d, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_add(r, a, b, m, ctx) \
  LP5(0x8fa, int, BN_mod_add, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_mod_add_quick(r, a, b, m) \
  LP4(0x900, int, BN_mod_add_quick, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, const BIGNUM *, m, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_sub(r, a, b, m, ctx) \
  LP5(0x906, int, BN_mod_sub, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_mod_sub_quick(r, a, b, m) \
  LP4(0x90c, int, BN_mod_sub_quick, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, const BIGNUM *, m, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_mul(r, a, b, m, ctx) \
  LP5(0x912, int, BN_mod_mul, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_mod_sqr(r, a, m, ctx) \
  LP4(0x918, int, BN_mod_sqr, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, m, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_lshift1(r, a, m, ctx) \
  LP4(0x91e, int, BN_mod_lshift1, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, m, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_lshift1_quick(r, a, m) \
  LP3(0x924, int, BN_mod_lshift1_quick, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, m, a2, \
  , AMISSL_BASE_NAME)

#define BN_mod_lshift(r, a, n, m, ctx) \
  LP5(0x92a, int, BN_mod_lshift, BIGNUM *, r, a0, const BIGNUM *, a, a1, LONG, n, d0, const BIGNUM *, m, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_lshift_quick(r, a, n, m) \
  LP4(0x930, int, BN_mod_lshift_quick, BIGNUM *, r, a0, const BIGNUM *, a, a1, LONG, n, d0, const BIGNUM *, m, a2, \
  , AMISSL_BASE_NAME)

#define BN_mod_word(a, w) \
  LP2(0x936, BN_ULONG, BN_mod_word, const BIGNUM *, a, a0, BN_ULONG, w, d0, \
  , AMISSL_BASE_NAME)

#define BN_div_word(a, w) \
  LP2(0x93c, BN_ULONG, BN_div_word, BIGNUM *, a, a0, BN_ULONG, w, d0, \
  , AMISSL_BASE_NAME)

#define BN_mul_word(a, w) \
  LP2(0x942, int, BN_mul_word, BIGNUM *, a, a0, BN_ULONG, w, d0, \
  , AMISSL_BASE_NAME)

#define BN_add_word(a, w) \
  LP2(0x948, int, BN_add_word, BIGNUM *, a, a0, BN_ULONG, w, d0, \
  , AMISSL_BASE_NAME)

#define BN_sub_word(a, w) \
  LP2(0x94e, int, BN_sub_word, BIGNUM *, a, a0, BN_ULONG, w, d0, \
  , AMISSL_BASE_NAME)

#define BN_set_word(a, w) \
  LP2(0x954, int, BN_set_word, BIGNUM *, a, a0, BN_ULONG, w, d0, \
  , AMISSL_BASE_NAME)

#define BN_get_word(a) \
  LP1(0x95a, BN_ULONG, BN_get_word, const BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_cmp(a, b) \
  LP2(0x960, int, BN_cmp, const BIGNUM *, a, a0, const BIGNUM *, b, a1, \
  , AMISSL_BASE_NAME)

#define BN_free(a) \
  LP1NR(0x966, BN_free, BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_is_bit_set(a, n) \
  LP2(0x96c, int, BN_is_bit_set, const BIGNUM *, a, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define BN_lshift(r, a, n) \
  LP3(0x972, int, BN_lshift, BIGNUM *, r, a0, const BIGNUM *, a, a1, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define BN_lshift1(r, a) \
  LP2(0x978, int, BN_lshift1, BIGNUM *, r, a0, const BIGNUM *, a, a1, \
  , AMISSL_BASE_NAME)

#define BN_exp(r, a, p, ctx) \
  LP4(0x97e, int, BN_exp, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, p, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_exp(r, a, p, m, ctx) \
  LP5(0x984, int, BN_mod_exp, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, p, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_mod_exp_mont(r, a, p, m, ctx, m_ctx) \
  LP6(0x98a, int, BN_mod_exp_mont, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, p, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, BN_MONT_CTX *, m_ctx, d1, \
  , AMISSL_BASE_NAME)

#define BN_mod_exp_mont_word(r, a, p, m, ctx, m_ctx) \
  LP6(0x990, int, BN_mod_exp_mont_word, BIGNUM *, r, a0, BN_ULONG, a, d0, const BIGNUM *, p, a1, const BIGNUM *, m, a2, BN_CTX *, ctx, a3, BN_MONT_CTX *, m_ctx, d1, \
  , AMISSL_BASE_NAME)

#define BN_mod_exp2_mont(r, a1, p1, a2, p2, m, ctx, m_ctx) \
  LP8(0x996, int, BN_mod_exp2_mont, BIGNUM *, r, a0, const BIGNUM *, a1, a1, const BIGNUM *, p1, a2, const BIGNUM *, a2, a3, const BIGNUM *, p2, d0, const BIGNUM *, m, d1, BN_CTX *, ctx, d2, BN_MONT_CTX *, m_ctx, d3, \
  , AMISSL_BASE_NAME)

#define BN_mod_exp_simple(r, a, p, m, ctx) \
  LP5(0x99c, int, BN_mod_exp_simple, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, p, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_mask_bits(a, n) \
  LP2(0x9a2, int, BN_mask_bits, BIGNUM *, a, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define BN_print(fp, a) \
  LP2(0x9a8, int, BN_print, BIO *, fp, a0, const BIGNUM *, a, a1, \
  , AMISSL_BASE_NAME)

#define BN_reciprocal(r, m, len, ctx) \
  LP4(0x9ae, int, BN_reciprocal, BIGNUM *, r, a0, const BIGNUM *, m, a1, LONG, len, d0, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_rshift(r, a, n) \
  LP3(0x9b4, int, BN_rshift, BIGNUM *, r, a0, const BIGNUM *, a, a1, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define BN_rshift1(r, a) \
  LP2(0x9ba, int, BN_rshift1, BIGNUM *, r, a0, const BIGNUM *, a, a1, \
  , AMISSL_BASE_NAME)

#define BN_clear(a) \
  LP1NR(0x9c0, BN_clear, BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_dup(a) \
  LP1(0x9c6, BIGNUM *, BN_dup, const BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_ucmp(a, b) \
  LP2(0x9cc, int, BN_ucmp, const BIGNUM *, a, a0, const BIGNUM *, b, a1, \
  , AMISSL_BASE_NAME)

#define BN_set_bit(a, n) \
  LP2(0x9d2, int, BN_set_bit, BIGNUM *, a, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define BN_clear_bit(a, n) \
  LP2(0x9d8, int, BN_clear_bit, BIGNUM *, a, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define BN_bn2hex(a) \
  LP1(0x9de, char *, BN_bn2hex, const BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_bn2dec(a) \
  LP1(0x9e4, char *, BN_bn2dec, const BIGNUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BN_hex2bn(a, str) \
  LP2(0x9ea, int, BN_hex2bn, BIGNUM **, a, a0, const char *, str, a1, \
  , AMISSL_BASE_NAME)

#define BN_dec2bn(a, str) \
  LP2(0x9f0, int, BN_dec2bn, BIGNUM **, a, a0, const char *, str, a1, \
  , AMISSL_BASE_NAME)

#define BN_gcd(r, a, b, ctx) \
  LP4(0x9f6, int, BN_gcd, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_kronecker(a, b, ctx) \
  LP3(0x9fc, int, BN_kronecker, const BIGNUM *, a, a0, const BIGNUM *, b, a1, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_mod_inverse(ret, a, n, ctx) \
  LP4(0xa02, BIGNUM *, BN_mod_inverse, BIGNUM *, ret, a0, const BIGNUM *, a, a1, const BIGNUM *, n, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_mod_sqrt(ret, a, n, ctx) \
  LP4(0xa08, BIGNUM *, BN_mod_sqrt, BIGNUM *, ret, a0, const BIGNUM *, a, a1, const BIGNUM *, n, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_generate_prime(ret, bits, safe, add, rem, callback, cb_arg) \
  LP7FP(0xa0e, BIGNUM *, BN_generate_prime, BIGNUM *, ret, a0, LONG, bits, d0, LONG, safe, d1, const BIGNUM *, add, a1, const BIGNUM *, rem, a2, __fpt, callback, a3, void *, cb_arg, d2, \
  , AMISSL_BASE_NAME, void (*__fpt)(int, int, void *))

#define BN_is_prime(p, nchecks, callback, ctx, cb_arg) \
  LP5FP(0xa14, int, BN_is_prime, const BIGNUM *, p, a0, LONG, nchecks, d0, __fpt, callback, a1, BN_CTX *, ctx, a2, void *, cb_arg, a3, \
  , AMISSL_BASE_NAME, void (*__fpt)(int, int, void *))

#define BN_is_prime_fasttest(p, nchecks, callback, ctx, cb_arg, do_trial_division) \
  LP6FP(0xa1a, int, BN_is_prime_fasttest, const BIGNUM *, p, a0, LONG, nchecks, d0, __fpt, callback, a1, BN_CTX *, ctx, a2, void *, cb_arg, a3, LONG, do_trial_division, d1, \
  , AMISSL_BASE_NAME, void (*__fpt)(int, int, void *))

#define BN_MONT_CTX_new() \
  LP0(0xa20, BN_MONT_CTX *, BN_MONT_CTX_new, \
  , AMISSL_BASE_NAME)

#define BN_MONT_CTX_init(ctx) \
  LP1NR(0xa26, BN_MONT_CTX_init, BN_MONT_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define BN_mod_mul_montgomery(r, a, b, mont, ctx) \
  LP5(0xa2c, int, BN_mod_mul_montgomery, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, BN_MONT_CTX *, mont, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_from_montgomery(r, a, mont, ctx) \
  LP4(0xa32, int, BN_from_montgomery, BIGNUM *, r, a0, const BIGNUM *, a, a1, BN_MONT_CTX *, mont, a2, BN_CTX *, ctx, a3, \
  , AMISSL_BASE_NAME)

#define BN_MONT_CTX_free(mont) \
  LP1NR(0xa38, BN_MONT_CTX_free, BN_MONT_CTX *, mont, a0, \
  , AMISSL_BASE_NAME)

#define BN_MONT_CTX_set(mont, mod, ctx) \
  LP3(0xa3e, int, BN_MONT_CTX_set, BN_MONT_CTX *, mont, a0, const BIGNUM *, mod, a1, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_MONT_CTX_copy(to, from) \
  LP2(0xa44, BN_MONT_CTX *, BN_MONT_CTX_copy, BN_MONT_CTX *, to, a0, BN_MONT_CTX *, from, a1, \
  , AMISSL_BASE_NAME)

#define BN_BLINDING_new(A, Ai, mod) \
  LP3(0xa4a, BN_BLINDING *, BN_BLINDING_new, BIGNUM *, A, a0, BIGNUM *, Ai, a1, BIGNUM *, mod, a2, \
  , AMISSL_BASE_NAME)

#define BN_BLINDING_free(b) \
  LP1NR(0xa50, BN_BLINDING_free, BN_BLINDING *, b, a0, \
  , AMISSL_BASE_NAME)

#define BN_BLINDING_update(b, ctx) \
  LP2(0xa56, int, BN_BLINDING_update, BN_BLINDING *, b, a0, BN_CTX *, ctx, a1, \
  , AMISSL_BASE_NAME)

#define BN_BLINDING_convert(n, r, ctx) \
  LP3(0xa5c, int, BN_BLINDING_convert, BIGNUM *, n, a0, BN_BLINDING *, r, a1, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_BLINDING_invert(n, b, ctx) \
  LP3(0xa62, int, BN_BLINDING_invert, BIGNUM *, n, a0, BN_BLINDING *, b, a1, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_set_params(mul, high, low, mont) \
  LP4NR(0xa68, BN_set_params, LONG, mul, d0, LONG, high, d1, LONG, low, d2, LONG, mont, d3, \
  , AMISSL_BASE_NAME)

#define BN_get_params(which) \
  LP1(0xa6e, int, BN_get_params, LONG, which, d0, \
  , AMISSL_BASE_NAME)

#define BN_RECP_CTX_init(recp) \
  LP1NR(0xa74, BN_RECP_CTX_init, BN_RECP_CTX *, recp, a0, \
  , AMISSL_BASE_NAME)

#define BN_RECP_CTX_new() \
  LP0(0xa7a, BN_RECP_CTX *, BN_RECP_CTX_new, \
  , AMISSL_BASE_NAME)

#define BN_RECP_CTX_free(recp) \
  LP1NR(0xa80, BN_RECP_CTX_free, BN_RECP_CTX *, recp, a0, \
  , AMISSL_BASE_NAME)

#define BN_RECP_CTX_set(recp, rdiv, ctx) \
  LP3(0xa86, int, BN_RECP_CTX_set, BN_RECP_CTX *, recp, a0, const BIGNUM *, rdiv, a1, BN_CTX *, ctx, a2, \
  , AMISSL_BASE_NAME)

#define BN_mod_mul_reciprocal(r, x, y, recp, ctx) \
  LP5(0xa8c, int, BN_mod_mul_reciprocal, BIGNUM *, r, a0, const BIGNUM *, x, a1, const BIGNUM *, y, a2, BN_RECP_CTX *, recp, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_mod_exp_recp(r, a, p, m, ctx) \
  LP5(0xa92, int, BN_mod_exp_recp, BIGNUM *, r, a0, const BIGNUM *, a, a1, const BIGNUM *, p, a2, const BIGNUM *, m, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define BN_div_recp(dv, rem, m, recp, ctx) \
  LP5(0xa98, int, BN_div_recp, BIGNUM *, dv, a0, BIGNUM *, rem, a1, const BIGNUM *, m, a2, BN_RECP_CTX *, recp, a3, BN_CTX *, ctx, d0, \
  , AMISSL_BASE_NAME)

#define bn_expand2(a, words) \
  LP2(0xa9e, BIGNUM *, bn_expand2, BIGNUM *, a, a0, LONG, words, d0, \
  , AMISSL_BASE_NAME)

#define bn_dup_expand(a, words) \
  LP2(0xaa4, BIGNUM *, bn_dup_expand, const BIGNUM *, a, a0, LONG, words, d0, \
  , AMISSL_BASE_NAME)

#define bn_mul_add_words(rp, ap, num, w) \
  LP4(0xaaa, BN_ULONG, bn_mul_add_words, BN_ULONG *, rp, a0, const BN_ULONG *, ap, a1, LONG, num, d0, BN_ULONG, w, d1, \
  , AMISSL_BASE_NAME)

#define bn_mul_words(rp, ap, num, w) \
  LP4(0xab0, BN_ULONG, bn_mul_words, BN_ULONG *, rp, a0, const BN_ULONG *, ap, a1, LONG, num, d0, BN_ULONG, w, d1, \
  , AMISSL_BASE_NAME)

#define bn_sqr_words(rp, ap, num) \
  LP3NR(0xab6, bn_sqr_words, BN_ULONG *, rp, a0, const BN_ULONG *, ap, a1, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define bn_div_words(h, l, d) \
  LP3(0xabc, BN_ULONG, bn_div_words, BN_ULONG, h, d0, BN_ULONG, l, d1, BN_ULONG, d, d2, \
  , AMISSL_BASE_NAME)

#define bn_add_words(rp, ap, bp, num) \
  LP4(0xac2, BN_ULONG, bn_add_words, BN_ULONG *, rp, a0, const BN_ULONG *, ap, a1, const BN_ULONG *, bp, a2, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define bn_sub_words(rp, ap, bp, num) \
  LP4(0xac8, BN_ULONG, bn_sub_words, BN_ULONG *, rp, a0, const BN_ULONG *, ap, a1, const BN_ULONG *, bp, a2, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define BN_bntest_rand(rnd, bits, top, bottom) \
  LP4(0xace, int, BN_bntest_rand, BIGNUM *, rnd, a0, LONG, bits, d0, LONG, top, d1, LONG, bottom, d2, \
  , AMISSL_BASE_NAME)

#define ERR_load_BN_strings() \
  LP0NR(0xad4, ERR_load_BN_strings, \
  , AMISSL_BASE_NAME)

#define BUF_MEM_new() \
  LP0(0xada, BUF_MEM *, BUF_MEM_new, \
  , AMISSL_BASE_NAME)

#define BUF_MEM_free(a) \
  LP1NR(0xae0, BUF_MEM_free, BUF_MEM *, a, a0, \
  , AMISSL_BASE_NAME)

#define BUF_MEM_grow(str, len) \
  LP2(0xae6, int, BUF_MEM_grow, BUF_MEM *, str, a0, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define BUF_MEM_grow_clean(str, len) \
  LP2(0xaec, int, BUF_MEM_grow_clean, BUF_MEM *, str, a0, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define BUF_strdup(str) \
  LP1(0xaf2, char *, BUF_strdup, const char *, str, a0, \
  , AMISSL_BASE_NAME)

#define BUF_strlcpy(dst, src, siz) \
  LP3(0xaf8, size_t, BUF_strlcpy, char *, dst, a0, const char *, src, a1, ULONG, siz, d0, \
  , AMISSL_BASE_NAME)

#define BUF_strlcat(dst, src, siz) \
  LP3(0xafe, size_t, BUF_strlcat, char *, dst, a0, const char *, src, a1, ULONG, siz, d0, \
  , AMISSL_BASE_NAME)

#define ERR_load_BUF_strings() \
  LP0NR(0xb04, ERR_load_BUF_strings, \
  , AMISSL_BASE_NAME)

#define COMP_CTX_new(meth) \
  LP1(0xb0a, COMP_CTX *, COMP_CTX_new, COMP_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define COMP_CTX_free(ctx) \
  LP1NR(0xb10, COMP_CTX_free, COMP_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define COMP_compress_block(ctx, out, olen, in, ilen) \
  LP5(0xb16, int, COMP_compress_block, COMP_CTX *, ctx, a0, unsigned char *, out, a1, LONG, olen, d0, unsigned char *, in, a2, LONG, ilen, d1, \
  , AMISSL_BASE_NAME)

#define COMP_expand_block(ctx, out, olen, in, ilen) \
  LP5(0xb1c, int, COMP_expand_block, COMP_CTX *, ctx, a0, unsigned char *, out, a1, LONG, olen, d0, unsigned char *, in, a2, LONG, ilen, d1, \
  , AMISSL_BASE_NAME)

#define COMP_rle() \
  LP0(0xb22, COMP_METHOD *, COMP_rle, \
  , AMISSL_BASE_NAME)

#define COMP_zlib() \
  LP0(0xb28, COMP_METHOD *, COMP_zlib, \
  , AMISSL_BASE_NAME)

#define ERR_load_COMP_strings() \
  LP0NR(0xb2e, ERR_load_COMP_strings, \
  , AMISSL_BASE_NAME)

#define CONF_set_default_method(meth) \
  LP1(0xb34, int, CONF_set_default_method, CONF_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define CONF_set_nconf(conf, hash) \
  LP2NR(0xb3a, CONF_set_nconf, CONF *, conf, a0, LHASH *, hash, a1, \
  , AMISSL_BASE_NAME)

#define CONF_load(conf, file, eline) \
  LP3(0xb40, LHASH *, CONF_load, LHASH *, conf, a0, const char *, file, a1, long *, eline, a2, \
  , AMISSL_BASE_NAME)

#define CONF_load_bio(conf, bp, eline) \
  LP3(0xb46, LHASH *, CONF_load_bio, LHASH *, conf, a0, BIO *, bp, a1, long *, eline, a2, \
  , AMISSL_BASE_NAME)

#define CONF_get_section(conf, section) \
  LP2(0xb4c, STACK_OF(CONF_VALUE) *, CONF_get_section, LHASH *, conf, a0, const char *, section, a1, \
  , AMISSL_BASE_NAME)

#define CONF_get_string(conf, group, name) \
  LP3(0xb52, char *, CONF_get_string, LHASH *, conf, a0, const char *, group, a1, const char *, name, a2, \
  , AMISSL_BASE_NAME)

#define CONF_get_number(conf, group, name) \
  LP3(0xb58, long, CONF_get_number, LHASH *, conf, a0, const char *, group, a1, const char *, name, a2, \
  , AMISSL_BASE_NAME)

#define CONF_free(conf) \
  LP1NR(0xb5e, CONF_free, LHASH *, conf, a0, \
  , AMISSL_BASE_NAME)

#define CONF_dump_bio(conf, out) \
  LP2(0xb64, int, CONF_dump_bio, LHASH *, conf, a0, BIO *, out, a1, \
  , AMISSL_BASE_NAME)

#define OPENSSL_config(config_name) \
  LP1NR(0xb6a, OPENSSL_config, const char *, config_name, a0, \
  , AMISSL_BASE_NAME)

#define OPENSSL_no_config() \
  LP0NR(0xb70, OPENSSL_no_config, \
  , AMISSL_BASE_NAME)

#define NCONF_new(meth) \
  LP1(0xb76, CONF *, NCONF_new, CONF_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define NCONF_default() \
  LP0(0xb7c, CONF_METHOD *, NCONF_default, \
  , AMISSL_BASE_NAME)

#define NCONF_WIN32() \
  LP0(0xb82, CONF_METHOD *, NCONF_WIN32, \
  , AMISSL_BASE_NAME)

#define NCONF_free(conf) \
  LP1NR(0xb88, NCONF_free, CONF *, conf, a0, \
  , AMISSL_BASE_NAME)

#define NCONF_free_data(conf) \
  LP1NR(0xb8e, NCONF_free_data, CONF *, conf, a0, \
  , AMISSL_BASE_NAME)

#define NCONF_load(conf, file, eline) \
  LP3(0xb94, int, NCONF_load, CONF *, conf, a0, const char *, file, a1, long *, eline, a2, \
  , AMISSL_BASE_NAME)

#define NCONF_load_bio(conf, bp, eline) \
  LP3(0xb9a, int, NCONF_load_bio, CONF *, conf, a0, BIO *, bp, a1, long *, eline, a2, \
  , AMISSL_BASE_NAME)

#define NCONF_get_section(conf, section) \
  LP2(0xba0, STACK_OF(CONF_VALUE) *, NCONF_get_section, const CONF *, conf, a0, const char *, section, a1, \
  , AMISSL_BASE_NAME)

#define NCONF_get_string(conf, group, name) \
  LP3(0xba6, char *, NCONF_get_string, const CONF *, conf, a0, const char *, group, a1, const char *, name, a2, \
  , AMISSL_BASE_NAME)

#define NCONF_get_number_e(conf, group, name, result) \
  LP4(0xbac, int, NCONF_get_number_e, const CONF *, conf, a0, const char *, group, a1, const char *, name, a2, long *, result, a3, \
  , AMISSL_BASE_NAME)

#define NCONF_dump_bio(conf, out) \
  LP2(0xbb2, int, NCONF_dump_bio, const CONF *, conf, a0, BIO *, out, a1, \
  , AMISSL_BASE_NAME)

#define CONF_modules_load(cnf, appname, flags) \
  LP3(0xbb8, int, CONF_modules_load, const CONF *, cnf, a0, const char *, appname, a1, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define CONF_modules_load_file(filename, appname, flags) \
  LP3(0xbbe, int, CONF_modules_load_file, const char *, filename, a0, const char *, appname, a1, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define CONF_modules_unload(all) \
  LP1NR(0xbc4, CONF_modules_unload, LONG, all, d0, \
  , AMISSL_BASE_NAME)

#define CONF_modules_finish() \
  LP0NR(0xbca, CONF_modules_finish, \
  , AMISSL_BASE_NAME)

#define CONF_modules_free() \
  LP0NR(0xbd0, CONF_modules_free, \
  , AMISSL_BASE_NAME)

#define CONF_module_add(name, ifunc, ffunc) \
  LP3FP(0xbd6, int, CONF_module_add, const char *, name, a0, __fpt, ifunc, a1, void *, ffunc, a2, \
  , AMISSL_BASE_NAME, conf_init_func * (*__fpt)())

#define CONF_imodule_get_name(md) \
  LP1(0xbdc, const char *, CONF_imodule_get_name, const CONF_IMODULE *, md, a0, \
  , AMISSL_BASE_NAME)

#define CONF_imodule_get_value(md) \
  LP1(0xbe2, const char *, CONF_imodule_get_value, const CONF_IMODULE *, md, a0, \
  , AMISSL_BASE_NAME)

#define CONF_imodule_get_usr_data(md) \
  LP1(0xbe8, void *, CONF_imodule_get_usr_data, const CONF_IMODULE *, md, a0, \
  , AMISSL_BASE_NAME)

#define CONF_imodule_set_usr_data(md, usr_data) \
  LP2NR(0xbee, CONF_imodule_set_usr_data, CONF_IMODULE *, md, a0, void *, usr_data, a1, \
  , AMISSL_BASE_NAME)

#define CONF_imodule_get_module(md) \
  LP1(0xbf4, CONF_MODULE *, CONF_imodule_get_module, const CONF_IMODULE *, md, a0, \
  , AMISSL_BASE_NAME)

#define CONF_imodule_get_flags(md) \
  LP1(0xbfa, unsigned long, CONF_imodule_get_flags, const CONF_IMODULE *, md, a0, \
  , AMISSL_BASE_NAME)

#define CONF_imodule_set_flags(md, flags) \
  LP2NR(0xc00, CONF_imodule_set_flags, CONF_IMODULE *, md, a0, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define CONF_module_get_usr_data(pmod) \
  LP1(0xc06, void *, CONF_module_get_usr_data, CONF_MODULE *, pmod, a0, \
  , AMISSL_BASE_NAME)

#define CONF_module_set_usr_data(pmod, usr_data) \
  LP2NR(0xc0c, CONF_module_set_usr_data, CONF_MODULE *, pmod, a0, void *, usr_data, a1, \
  , AMISSL_BASE_NAME)

#define CONF_get1_default_config_file() \
  LP0(0xc12, char *, CONF_get1_default_config_file, \
  , AMISSL_BASE_NAME)

#define CONF_parse_list(list, sep, nospc, list_cb, arg) \
  LP5FP(0xc18, int, CONF_parse_list, const char *, list, a0, LONG, sep, d0, LONG, nospc, d1, __fpt, list_cb, a1, void *, arg, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)(const char *elem, int len, void *usr))

#define OPENSSL_load_builtin_modules() \
  LP0NR(0xc1e, OPENSSL_load_builtin_modules, \
  , AMISSL_BASE_NAME)

#define ERR_load_CONF_strings() \
  LP0NR(0xc24, ERR_load_CONF_strings, \
  , AMISSL_BASE_NAME)

#define _CONF_new_section(conf, section) \
  LP2(0xc2a, CONF_VALUE *, _CONF_new_section, CONF *, conf, a0, const char *, section, a1, \
  , AMISSL_BASE_NAME)

#define _CONF_get_section(conf, section) \
  LP2(0xc30, CONF_VALUE *, _CONF_get_section, const CONF *, conf, a0, const char *, section, a1, \
  , AMISSL_BASE_NAME)

#define _CONF_get_section_values(conf, section) \
  LP2(0xc36, STACK_OF(CONF_VALUE) *, _CONF_get_section_values, const CONF *, conf, a0, const char *, section, a1, \
  , AMISSL_BASE_NAME)

#define _CONF_add_string(conf, section, value) \
  LP3(0xc3c, int, _CONF_add_string, CONF *, conf, a0, CONF_VALUE *, section, a1, CONF_VALUE *, value, a2, \
  , AMISSL_BASE_NAME)

#define _CONF_get_string(conf, section, name) \
  LP3(0xc42, char *, _CONF_get_string, const CONF *, conf, a0, const char *, section, a1, const char *, name, a2, \
  , AMISSL_BASE_NAME)

#define _CONF_new_data(conf) \
  LP1(0xc48, int, _CONF_new_data, CONF *, conf, a0, \
  , AMISSL_BASE_NAME)

#define _CONF_free_data(conf) \
  LP1NR(0xc4e, _CONF_free_data, CONF *, conf, a0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_mem_ctrl(mode) \
  LP1(0xc54, int, CRYPTO_mem_ctrl, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_is_mem_check_on() \
  LP0(0xc5a, int, CRYPTO_is_mem_check_on, \
  , AMISSL_BASE_NAME)

#define SSLeay_version(type) \
  LP1(0xc60, const char *, SSLeay_version, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSLeay() \
  LP0(0xc66, unsigned long, SSLeay, \
  , AMISSL_BASE_NAME)

#define OPENSSL_issetugid() \
  LP0(0xc6c, int, OPENSSL_issetugid, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_ex_data_implementation() \
  LP0(0xc72, const CRYPTO_EX_DATA_IMPL *, CRYPTO_get_ex_data_implementation, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_ex_data_implementation(i) \
  LP1(0xc78, int, CRYPTO_set_ex_data_implementation, const CRYPTO_EX_DATA_IMPL *, i, a0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_ex_data_new_class() \
  LP0(0xc7e, int, CRYPTO_ex_data_new_class, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_ex_new_index(class_index, argl, argp, new_func, dup_func, free_func) \
  LP6FP(0xc84, int, CRYPTO_get_ex_new_index, LONG, class_index, d0, long, argl, d1, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define CRYPTO_new_ex_data(class_index, obj, ad) \
  LP3(0xc8a, int, CRYPTO_new_ex_data, LONG, class_index, d0, void *, obj, a0, CRYPTO_EX_DATA *, ad, a1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_dup_ex_data(class_index, to, from) \
  LP3(0xc90, int, CRYPTO_dup_ex_data, LONG, class_index, d0, CRYPTO_EX_DATA *, to, a0, CRYPTO_EX_DATA *, from, a1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_free_ex_data(class_index, obj, ad) \
  LP3NR(0xc96, CRYPTO_free_ex_data, LONG, class_index, d0, void *, obj, a0, CRYPTO_EX_DATA *, ad, a1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_ex_data(ad, idx, val) \
  LP3(0xc9c, int, CRYPTO_set_ex_data, CRYPTO_EX_DATA *, ad, a0, LONG, idx, d0, void *, val, a1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_ex_data(ad, idx) \
  LP2(0xca2, void *, CRYPTO_get_ex_data, const CRYPTO_EX_DATA *, ad, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_cleanup_all_ex_data() \
  LP0NR(0xca8, CRYPTO_cleanup_all_ex_data, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_new_lockid(name) \
  LP1(0xcae, int, CRYPTO_get_new_lockid, char *, name, a0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_num_locks() \
  LP0(0xcb4, int, CRYPTO_num_locks, \
  , AMISSL_BASE_NAME)

#define CRYPTO_lock(mode, type, file, line) \
  LP4NR(0xcba, CRYPTO_lock, LONG, mode, d0, LONG, type, d1, const char *, file, a0, LONG, line, d2, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_locking_callback(func) \
  LP1NRFP(0xcc0, CRYPTO_set_locking_callback, __fpt, func, a0, \
  , AMISSL_BASE_NAME, void (*__fpt)(int mode, int type, const char *file, int line))

#define CRYPTO_get_locking_callback() \
  LP0(0xcc6, void (*)(int mode, int type, const char *file, int line), CRYPTO_get_locking_callback, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_add_lock_callback(func) \
  LP1NRFP(0xccc, CRYPTO_set_add_lock_callback, __fpt, func, a0, \
  , AMISSL_BASE_NAME, int (*__fpt)(int *num, int mount, int type, const char *file, int line))

#define CRYPTO_get_add_lock_callback() \
  LP0(0xcd2, int (*)(int *num, int mount, int type, const char *file, int line), CRYPTO_get_add_lock_callback, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_id_callback(func) \
  LP1NRFP(0xcd8, CRYPTO_set_id_callback, __fpt, func, a0, \
  , AMISSL_BASE_NAME, unsigned long (*__fpt)(void))

#define CRYPTO_get_id_callback() \
  LP0(0xcde, unsigned long (*)(void), CRYPTO_get_id_callback, \
  , AMISSL_BASE_NAME)

#define CRYPTO_thread_id() \
  LP0(0xce4, unsigned long, CRYPTO_thread_id, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_lock_name(type) \
  LP1(0xcea, const char *, CRYPTO_get_lock_name, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_add_lock(pointer, amount, type, file, line) \
  LP5(0xcf0, int, CRYPTO_add_lock, int *, pointer, a0, LONG, amount, d0, LONG, type, d1, const char *, file, a1, LONG, line, d2, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_new_dynlockid() \
  LP0(0xcf6, int, CRYPTO_get_new_dynlockid, \
  , AMISSL_BASE_NAME)

#define CRYPTO_destroy_dynlockid(i) \
  LP1NR(0xcfc, CRYPTO_destroy_dynlockid, LONG, i, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_dynlock_value(i) \
  LP1(0xd02, struct CRYPTO_dynlock_value *, CRYPTO_get_dynlock_value, LONG, i, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_dynlock_create_callback(dyn_create_function) \
  LP1NRFP(0xd08, CRYPTO_set_dynlock_create_callback, __fpt, dyn_create_function, a0, \
  , AMISSL_BASE_NAME, struct CRYPTO_dynlock_value * (*__fpt)(const char *file, int line))

#define CRYPTO_set_dynlock_lock_callback(dyn_lock_function) \
  LP1NRFP(0xd0e, CRYPTO_set_dynlock_lock_callback, __fpt, dyn_lock_function, a0, \
  , AMISSL_BASE_NAME, void (*__fpt)(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line))

#define CRYPTO_set_dynlock_destroy_callback(dyn_destroy_function) \
  LP1NRFP(0xd14, CRYPTO_set_dynlock_destroy_callback, __fpt, dyn_destroy_function, a0, \
  , AMISSL_BASE_NAME, void (*__fpt)(struct CRYPTO_dynlock_value *l, const char *file, int line))

#define CRYPTO_get_dynlock_create_callback() \
  LP0(0xd1a, struct CRYPTO_dynlock_value * (*)(const char *file, int line), CRYPTO_get_dynlock_create_callback, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_dynlock_lock_callback() \
  LP0(0xd20, void (*)(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line), CRYPTO_get_dynlock_lock_callback, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_dynlock_destroy_callback() \
  LP0(0xd26, void (*)(struct CRYPTO_dynlock_value *l, const char *file, int line), CRYPTO_get_dynlock_destroy_callback, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_mem_functions(m, r, f) \
  LP3FP(0xd2c, int, CRYPTO_set_mem_functions, __fpt, m, a0, void *, r, a1, void *, f, a2, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_set_locked_mem_functions(m, free_func) \
  LP2FP(0xd32, int, CRYPTO_set_locked_mem_functions, __fpt, m, a0, void *, free_func, a1, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_set_mem_ex_functions(m, r, f) \
  LP3FP(0xd38, int, CRYPTO_set_mem_ex_functions, __fpt, m, a0, void *, r, a1, void *, f, a2, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t, const char *, int))

#define CRYPTO_set_locked_mem_ex_functions(m, free_func) \
  LP2FP(0xd3e, int, CRYPTO_set_locked_mem_ex_functions, __fpt, m, a0, void *, free_func, a1, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t, const char *, int))

#define CRYPTO_set_mem_debug_functions(m, r, f, so, go) \
  LP5FP(0xd44, int, CRYPTO_set_mem_debug_functions, __fpt, m, a0, void *, r, a1, void *, f, a2, void *, so, a3, void *, go, d0, \
  , AMISSL_BASE_NAME, void (*__fpt)(void *, int, const char *, int, int))

#define CRYPTO_get_mem_functions(m, r, f) \
  LP3NRFP(0xd4a, CRYPTO_get_mem_functions, __fpt, m, a0, void *, r, a1, void *, f, a2, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_get_locked_mem_functions(m, f) \
  LP2NRFP(0xd50, CRYPTO_get_locked_mem_functions, __fpt, m, a0, void *, f, a1, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_get_mem_ex_functions(m, r, f) \
  LP3NRFP(0xd56, CRYPTO_get_mem_ex_functions, __fpt, m, a0, void *, r, a1, void *, f, a2, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t, const char *, int))

#define CRYPTO_get_locked_mem_ex_functions(m, f) \
  LP2NRFP(0xd5c, CRYPTO_get_locked_mem_ex_functions, __fpt, m, a0, void *, f, a1, \
  , AMISSL_BASE_NAME, void * (*__fpt)(size_t, const char *, int))

#define CRYPTO_get_mem_debug_functions(m, r, f, so, go) \
  LP5NRFP(0xd62, CRYPTO_get_mem_debug_functions, __fpt, m, a0, void *, r, a1, void *, f, a2, void *, so, a3, void *, go, d0, \
  , AMISSL_BASE_NAME, void (*__fpt)(void *, int, const char *, int, int))

#define CRYPTO_malloc_locked(num, file, line) \
  LP3(0xd68, void *, CRYPTO_malloc_locked, LONG, num, d0, const char *, file, a0, LONG, line, d1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_free_locked(a) \
  LP1NR(0xd6e, CRYPTO_free_locked, void *, a, a0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_malloc(num, file, line) \
  LP3(0xd74, void *, CRYPTO_malloc, LONG, num, d0, const char *, file, a0, LONG, line, d1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_free(a) \
  LP1NR(0xd7a, CRYPTO_free, void *, a, a0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_realloc(addr, num, file, line) \
  LP4(0xd80, void *, CRYPTO_realloc, void *, addr, a0, LONG, num, d0, const char *, file, a1, LONG, line, d1, \
  , AMISSL_BASE_NAME)

#define CRYPTO_realloc_clean(addr, old_num, num, file, line) \
  LP5(0xd86, void *, CRYPTO_realloc_clean, void *, addr, a0, LONG, old_num, d0, LONG, num, d1, const char *, file, a1, LONG, line, d2, \
  , AMISSL_BASE_NAME)

#define CRYPTO_remalloc(addr, num, file, line) \
  LP4(0xd8c, void *, CRYPTO_remalloc, void *, addr, a0, LONG, num, d0, const char *, file, a1, LONG, line, d1, \
  , AMISSL_BASE_NAME)

#define OPENSSL_cleanse(ptr, len) \
  LP2NR(0xd92, OPENSSL_cleanse, void *, ptr, a0, ULONG, len, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_set_mem_debug_options(bits) \
  LP1NR(0xd98, CRYPTO_set_mem_debug_options, long, bits, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_get_mem_debug_options() \
  LP0(0xd9e, long, CRYPTO_get_mem_debug_options, \
  , AMISSL_BASE_NAME)

#define CRYPTO_push_info_(info, file, line) \
  LP3(0xda4, int, CRYPTO_push_info_, const char *, info, a0, const char *, file, a1, LONG, line, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_pop_info() \
  LP0(0xdaa, int, CRYPTO_pop_info, \
  , AMISSL_BASE_NAME)

#define CRYPTO_remove_all_info() \
  LP0(0xdb0, int, CRYPTO_remove_all_info, \
  , AMISSL_BASE_NAME)

#define CRYPTO_dbg_malloc(addr, num, file, line, before_p) \
  LP5NR(0xdb6, CRYPTO_dbg_malloc, void *, addr, a0, LONG, num, d0, const char *, file, a1, LONG, line, d1, LONG, before_p, d2, \
  , AMISSL_BASE_NAME)

#define CRYPTO_dbg_realloc(addr1, addr2, num, file, line, before_p) \
  LP6NR(0xdbc, CRYPTO_dbg_realloc, void *, addr1, a0, void *, addr2, a1, LONG, num, d0, const char *, file, a2, LONG, line, d1, LONG, before_p, d2, \
  , AMISSL_BASE_NAME)

#define CRYPTO_dbg_free(addr, before_p) \
  LP2NR(0xdc2, CRYPTO_dbg_free, void *, addr, a0, LONG, before_p, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_dbg_set_options(bits) \
  LP1NR(0xdc8, CRYPTO_dbg_set_options, long, bits, d0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_dbg_get_options() \
  LP0(0xdce, long, CRYPTO_dbg_get_options, \
  , AMISSL_BASE_NAME)

#define CRYPTO_mem_leaks(bio) \
  LP1NR(0xdd4, CRYPTO_mem_leaks, struct bio_st *, bio, a0, \
  , AMISSL_BASE_NAME)

#define CRYPTO_mem_leaks_cb(cb) \
  LP1NRFP(0xdda, CRYPTO_mem_leaks_cb, __fpt, cb, a0, \
  , AMISSL_BASE_NAME, CRYPTO_MEM_LEAK_CB * (*__fpt)(unsigned long, const char *, int, int, void *))

#define OpenSSLDie(file, line, assertion) \
  LP3NR(0xde0, OpenSSLDie, const char *, file, a0, LONG, line, d0, const char *, assertion, a1, \
  , AMISSL_BASE_NAME)

#define ERR_load_CRYPTO_strings() \
  LP0NR(0xde6, ERR_load_CRYPTO_strings, \
  , AMISSL_BASE_NAME)

#define DSO_new() \
  LP0(0xdec, DSO *, DSO_new, \
  , AMISSL_BASE_NAME)

#define DSO_new_method(method) \
  LP1(0xdf2, DSO *, DSO_new_method, DSO_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define DSO_free(dso) \
  LP1(0xdf8, int, DSO_free, DSO *, dso, a0, \
  , AMISSL_BASE_NAME)

#define DSO_flags(dso) \
  LP1(0xdfe, int, DSO_flags, DSO *, dso, a0, \
  , AMISSL_BASE_NAME)

#define DSO_up_ref(dso) \
  LP1(0xe04, int, DSO_up_ref, DSO *, dso, a0, \
  , AMISSL_BASE_NAME)

#define DSO_ctrl(dso, cmd, larg, parg) \
  LP4(0xe0a, long, DSO_ctrl, DSO *, dso, a0, LONG, cmd, d0, long, larg, d1, void *, parg, a1, \
  , AMISSL_BASE_NAME)

#define DSO_set_name_converter(dso, cb, oldcb) \
  LP3(0xe10, int, DSO_set_name_converter, DSO *, dso, a0, DSO_NAME_CONVERTER_FUNC, cb, d0, DSO_NAME_CONVERTER_FUNC *, oldcb, a1, \
  , AMISSL_BASE_NAME)

#define DSO_get_filename(dso) \
  LP1(0xe16, const char *, DSO_get_filename, DSO *, dso, a0, \
  , AMISSL_BASE_NAME)

#define DSO_set_filename(dso, filename) \
  LP2(0xe1c, int, DSO_set_filename, DSO *, dso, a0, const char *, filename, a1, \
  , AMISSL_BASE_NAME)

#define DSO_convert_filename(dso, filename) \
  LP2(0xe22, char *, DSO_convert_filename, DSO *, dso, a0, const char *, filename, a1, \
  , AMISSL_BASE_NAME)

#define DSO_get_loaded_filename(dso) \
  LP1(0xe28, const char *, DSO_get_loaded_filename, DSO *, dso, a0, \
  , AMISSL_BASE_NAME)

#define DSO_set_default_method(meth) \
  LP1NR(0xe2e, DSO_set_default_method, DSO_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define DSO_get_default_method() \
  LP0(0xe34, DSO_METHOD *, DSO_get_default_method, \
  , AMISSL_BASE_NAME)

#define DSO_get_method(dso) \
  LP1(0xe3a, DSO_METHOD *, DSO_get_method, DSO *, dso, a0, \
  , AMISSL_BASE_NAME)

#define DSO_set_method(dso, meth) \
  LP2(0xe40, DSO_METHOD *, DSO_set_method, DSO *, dso, a0, DSO_METHOD *, meth, a1, \
  , AMISSL_BASE_NAME)

#define DSO_load(dso, filename, meth, flags) \
  LP4(0xe46, DSO *, DSO_load, DSO *, dso, a0, const char *, filename, a1, DSO_METHOD *, meth, a2, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define DSO_bind_var(dso, symname) \
  LP2(0xe4c, void *, DSO_bind_var, DSO *, dso, a0, const char *, symname, a1, \
  , AMISSL_BASE_NAME)

#define DSO_bind_func(dso, symname) \
  LP2(0xe52, DSO_FUNC_TYPE, DSO_bind_func, DSO *, dso, a0, const char *, symname, a1, \
  , AMISSL_BASE_NAME)

#define DSO_METHOD_openssl() \
  LP0(0xe58, DSO_METHOD *, DSO_METHOD_openssl, \
  , AMISSL_BASE_NAME)

#define DSO_METHOD_null() \
  LP0(0xe5e, DSO_METHOD *, DSO_METHOD_null, \
  , AMISSL_BASE_NAME)

#define DSO_METHOD_dlfcn() \
  LP0(0xe64, DSO_METHOD *, DSO_METHOD_dlfcn, \
  , AMISSL_BASE_NAME)

#define DSO_METHOD_dl() \
  LP0(0xe6a, DSO_METHOD *, DSO_METHOD_dl, \
  , AMISSL_BASE_NAME)

#define DSO_METHOD_win32() \
  LP0(0xe70, DSO_METHOD *, DSO_METHOD_win32, \
  , AMISSL_BASE_NAME)

#define DSO_METHOD_vms() \
  LP0(0xe76, DSO_METHOD *, DSO_METHOD_vms, \
  , AMISSL_BASE_NAME)

#define ERR_load_DSO_strings() \
  LP0NR(0xe7c, ERR_load_DSO_strings, \
  , AMISSL_BASE_NAME)

#define EC_GFp_simple_method() \
  LP0(0xe82, const EC_METHOD *, EC_GFp_simple_method, \
  , AMISSL_BASE_NAME)

#define EC_GFp_mont_method() \
  LP0(0xe88, const EC_METHOD *, EC_GFp_mont_method, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_new(a) \
  LP1(0xe8e, EC_GROUP *, EC_GROUP_new, const EC_METHOD *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_free(a) \
  LP1NR(0xe94, EC_GROUP_free, EC_GROUP *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_clear_free(a) \
  LP1NR(0xe9a, EC_GROUP_clear_free, EC_GROUP *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_copy(a, b) \
  LP2(0xea0, int, EC_GROUP_copy, EC_GROUP *, a, a0, const EC_GROUP *, b, a1, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_method_of(a) \
  LP1(0xea6, const EC_METHOD *, EC_GROUP_method_of, const EC_GROUP *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_set_curve_GFp(a1, p, a, b, a2) \
  LP5(0xeac, int, EC_GROUP_set_curve_GFp, EC_GROUP *, a1, a0, const BIGNUM *, p, a1, const BIGNUM *, a, a2, const BIGNUM *, b, a3, BN_CTX *, a2, d0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_get_curve_GFp(a1, p, a, b, a2) \
  LP5(0xeb2, int, EC_GROUP_get_curve_GFp, const EC_GROUP *, a1, a0, BIGNUM *, p, a1, BIGNUM *, a, a2, BIGNUM *, b, a3, BN_CTX *, a2, d0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_new_curve_GFp(p, a, b, a1) \
  LP4(0xeb8, EC_GROUP *, EC_GROUP_new_curve_GFp, const BIGNUM *, p, a0, const BIGNUM *, a, a1, const BIGNUM *, b, a2, BN_CTX *, a1, a3, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_set_generator(a1, generator, order, cofactor) \
  LP4(0xebe, int, EC_GROUP_set_generator, EC_GROUP *, a1, a0, const EC_POINT *, generator, a1, const BIGNUM *, order, a2, const BIGNUM *, cofactor, a3, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_get0_generator(a1) \
  LP1(0xec4, EC_POINT *, EC_GROUP_get0_generator, const EC_GROUP *, a1, a0, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_get_order(a1, order, a2) \
  LP3(0xeca, int, EC_GROUP_get_order, const EC_GROUP *, a1, a0, BIGNUM *, order, a1, BN_CTX *, a2, a2, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_get_cofactor(a1, cofactor, a2) \
  LP3(0xed0, int, EC_GROUP_get_cofactor, const EC_GROUP *, a1, a0, BIGNUM *, cofactor, a1, BN_CTX *, a2, a2, \
  , AMISSL_BASE_NAME)

#define EC_POINT_new(a) \
  LP1(0xed6, EC_POINT *, EC_POINT_new, const EC_GROUP *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_free(a) \
  LP1NR(0xedc, EC_POINT_free, EC_POINT *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_clear_free(a) \
  LP1NR(0xee2, EC_POINT_clear_free, EC_POINT *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_copy(a, b) \
  LP2(0xee8, int, EC_POINT_copy, EC_POINT *, a, a0, const EC_POINT *, b, a1, \
  , AMISSL_BASE_NAME)

#define EC_POINT_method_of(a) \
  LP1(0xeee, const EC_METHOD *, EC_POINT_method_of, const EC_POINT *, a, a0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_set_to_infinity(a, b) \
  LP2(0xef4, int, EC_POINT_set_to_infinity, const EC_GROUP *, a, a0, EC_POINT *, b, a1, \
  , AMISSL_BASE_NAME)

#define EC_POINT_set_Jprojective_coordinates_GFp(a1, a2, x, y, z, a3) \
  LP6(0xefa, int, EC_POINT_set_Jprojective_coordinates_GFp, const EC_GROUP *, a1, a0, EC_POINT *, a2, a1, const BIGNUM *, x, a2, const BIGNUM *, y, a3, const BIGNUM *, z, d0, BN_CTX *, a3, d1, \
  , AMISSL_BASE_NAME)

#define EC_POINT_get_Jprojective_coordinates_GFp(a1, a2, x, y, z, a3) \
  LP6(0xf00, int, EC_POINT_get_Jprojective_coordinates_GFp, const EC_GROUP *, a1, a0, const EC_POINT *, a2, a1, BIGNUM *, x, a2, BIGNUM *, y, a3, BIGNUM *, z, d0, BN_CTX *, a3, d1, \
  , AMISSL_BASE_NAME)

#define EC_POINT_set_affine_coordinates_GFp(a1, a2, x, y, a3) \
  LP5(0xf06, int, EC_POINT_set_affine_coordinates_GFp, const EC_GROUP *, a1, a0, EC_POINT *, a2, a1, const BIGNUM *, x, a2, const BIGNUM *, y, a3, BN_CTX *, a3, d0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_get_affine_coordinates_GFp(a1, a2, x, y, a3) \
  LP5(0xf0c, int, EC_POINT_get_affine_coordinates_GFp, const EC_GROUP *, a1, a0, const EC_POINT *, a2, a1, BIGNUM *, x, a2, BIGNUM *, y, a3, BN_CTX *, a3, d0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_set_compressed_coordinates_GFp(a1, a2, x, y_bit, a3) \
  LP5(0xf12, int, EC_POINT_set_compressed_coordinates_GFp, const EC_GROUP *, a1, a0, EC_POINT *, a2, a1, const BIGNUM *, x, a2, LONG, y_bit, d0, BN_CTX *, a3, a3, \
  , AMISSL_BASE_NAME)

#define EC_POINT_point2oct(a1, a2, form, buf, len, a3) \
  LP6(0xf18, size_t, EC_POINT_point2oct, const EC_GROUP *, a1, a0, const EC_POINT *, a2, a1, point_conversion_form_t, form, d0, unsigned char *, buf, a2, ULONG, len, d1, BN_CTX *, a3, a3, \
  , AMISSL_BASE_NAME)

#define EC_POINT_oct2point(a1, a2, buf, len, a3) \
  LP5(0xf1e, int, EC_POINT_oct2point, const EC_GROUP *, a1, a0, EC_POINT *, a2, a1, const unsigned char *, buf, a2, ULONG, len, d0, BN_CTX *, a3, a3, \
  , AMISSL_BASE_NAME)

#define EC_POINT_add(a1, r, a, b, a2) \
  LP5(0xf24, int, EC_POINT_add, const EC_GROUP *, a1, a0, EC_POINT *, r, a1, const EC_POINT *, a, a2, const EC_POINT *, b, a3, BN_CTX *, a2, d0, \
  , AMISSL_BASE_NAME)

#define EC_POINT_dbl(a1, r, a, a2) \
  LP4(0xf2a, int, EC_POINT_dbl, const EC_GROUP *, a1, a0, EC_POINT *, r, a1, const EC_POINT *, a, a2, BN_CTX *, a2, a3, \
  , AMISSL_BASE_NAME)

#define EC_POINT_invert(a1, a2, a3) \
  LP3(0xf30, int, EC_POINT_invert, const EC_GROUP *, a1, a0, EC_POINT *, a2, a1, BN_CTX *, a3, a2, \
  , AMISSL_BASE_NAME)

#define EC_POINT_is_at_infinity(a, b) \
  LP2(0xf36, int, EC_POINT_is_at_infinity, const EC_GROUP *, a, a0, const EC_POINT *, b, a1, \
  , AMISSL_BASE_NAME)

#define EC_POINT_is_on_curve(a, b, c) \
  LP3(0xf3c, int, EC_POINT_is_on_curve, const EC_GROUP *, a, a0, const EC_POINT *, b, a1, BN_CTX *, c, a2, \
  , AMISSL_BASE_NAME)

#define EC_POINT_cmp(a1, a, b, a2) \
  LP4(0xf42, int, EC_POINT_cmp, const EC_GROUP *, a1, a0, const EC_POINT *, a, a1, const EC_POINT *, b, a2, BN_CTX *, a2, a3, \
  , AMISSL_BASE_NAME)

#define EC_POINT_make_affine(a, b, c) \
  LP3(0xf48, int, EC_POINT_make_affine, const EC_GROUP *, a, a0, EC_POINT *, b, a1, BN_CTX *, c, a2, \
  , AMISSL_BASE_NAME)

#define EC_POINTs_make_affine(a1, num, a2, a3) \
  LP4(0xf4e, int, EC_POINTs_make_affine, const EC_GROUP *, a1, a0, ULONG, num, d0, EC_POINT **, a2, a1, BN_CTX *, a3, a2, \
  , AMISSL_BASE_NAME)

#define EC_POINTs_mul(a1, r, a2, num, a3, a4, a5) \
  LP7(0xf54, int, EC_POINTs_mul, const EC_GROUP *, a1, a0, EC_POINT *, r, a1, const BIGNUM *, a2, a2, ULONG, num, d0, const EC_POINT **, a3, a3, const BIGNUM **, a4, d1, BN_CTX *, a5, d2, \
  , AMISSL_BASE_NAME)

#define EC_POINT_mul(a1, r, a2, a3, a4, a5) \
  LP6(0xf5a, int, EC_POINT_mul, const EC_GROUP *, a1, a0, EC_POINT *, r, a1, const BIGNUM *, a2, a2, const EC_POINT *, a3, a3, const BIGNUM *, a4, d0, BN_CTX *, a5, d1, \
  , AMISSL_BASE_NAME)

#define EC_GROUP_precompute_mult(a, b) \
  LP2(0xf60, int, EC_GROUP_precompute_mult, EC_GROUP *, a, a0, BN_CTX *, b, a1, \
  , AMISSL_BASE_NAME)

#define ERR_load_EC_strings() \
  LP0NR(0xf66, ERR_load_EC_strings, \
  , AMISSL_BASE_NAME)

#define ERR_put_error(lib, func, reason, file, line) \
  LP5NR(0xf6c, ERR_put_error, LONG, lib, d0, LONG, func, d1, LONG, reason, d2, const char *, file, a0, LONG, line, d3, \
  , AMISSL_BASE_NAME)

#define ERR_set_error_data(data, flags) \
  LP2NR(0xf72, ERR_set_error_data, char *, data, a0, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define ERR_get_error() \
  LP0(0xf78, unsigned long, ERR_get_error, \
  , AMISSL_BASE_NAME)

#define ERR_get_error_line(file, line) \
  LP2(0xf7e, unsigned long, ERR_get_error_line, const char **, file, a0, int *, line, a1, \
  , AMISSL_BASE_NAME)

#define ERR_get_error_line_data(file, line, data, flags) \
  LP4(0xf84, unsigned long, ERR_get_error_line_data, const char **, file, a0, int *, line, a1, const char **, data, a2, int *, flags, a3, \
  , AMISSL_BASE_NAME)

#define ERR_peek_error() \
  LP0(0xf8a, unsigned long, ERR_peek_error, \
  , AMISSL_BASE_NAME)

#define ERR_peek_error_line(file, line) \
  LP2(0xf90, unsigned long, ERR_peek_error_line, const char **, file, a0, int *, line, a1, \
  , AMISSL_BASE_NAME)

#define ERR_peek_error_line_data(file, line, data, flags) \
  LP4(0xf96, unsigned long, ERR_peek_error_line_data, const char **, file, a0, int *, line, a1, const char **, data, a2, int *, flags, a3, \
  , AMISSL_BASE_NAME)

#define ERR_peek_last_error() \
  LP0(0xf9c, unsigned long, ERR_peek_last_error, \
  , AMISSL_BASE_NAME)

#define ERR_peek_last_error_line(file, line) \
  LP2(0xfa2, unsigned long, ERR_peek_last_error_line, const char **, file, a0, int *, line, a1, \
  , AMISSL_BASE_NAME)

#define ERR_peek_last_error_line_data(file, line, data, flags) \
  LP4(0xfa8, unsigned long, ERR_peek_last_error_line_data, const char **, file, a0, int *, line, a1, const char **, data, a2, int *, flags, a3, \
  , AMISSL_BASE_NAME)

#define ERR_clear_error() \
  LP0NR(0xfae, ERR_clear_error, \
  , AMISSL_BASE_NAME)

#define ERR_error_string(e, buf) \
  LP2(0xfb4, char *, ERR_error_string, unsigned long, e, d0, char *, buf, a0, \
  , AMISSL_BASE_NAME)

#define ERR_error_string_n(e, buf, len) \
  LP3NR(0xfba, ERR_error_string_n, unsigned long, e, d0, char *, buf, a0, ULONG, len, d1, \
  , AMISSL_BASE_NAME)

#define ERR_lib_error_string(e) \
  LP1(0xfc0, const char *, ERR_lib_error_string, unsigned long, e, d0, \
  , AMISSL_BASE_NAME)

#define ERR_func_error_string(e) \
  LP1(0xfc6, const char *, ERR_func_error_string, unsigned long, e, d0, \
  , AMISSL_BASE_NAME)

#define ERR_reason_error_string(e) \
  LP1(0xfcc, const char *, ERR_reason_error_string, unsigned long, e, d0, \
  , AMISSL_BASE_NAME)

#define ERR_print_errors_cb(cb, u) \
  LP2NRFP(0xfd2, ERR_print_errors_cb, __fpt, cb, a0, void *, u, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(const char *str, size_t len, void *u))

#define ERR_print_errors(bp) \
  LP1NR(0xfd8, ERR_print_errors, BIO *, bp, a0, \
  , AMISSL_BASE_NAME)

#define ERR_add_error_dataA(num, args) \
  LP2NR(0xfde, ERR_add_error_dataA, LONG, num, d0, long *, args, d1, \
  , AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define ERR_add_error_data(num, tags...) \
  ({ULONG _tags[] = {tags}; ERR_add_error_dataA((num), (long *) _tags);})
#endif

#define ERR_load_strings(lib, str) \
  LP2NR(0xfe4, ERR_load_strings, LONG, lib, d0, ERR_STRING_DATA *, str, a0, \
  , AMISSL_BASE_NAME)

#define ERR_unload_strings(lib, str) \
  LP2NR(0xfea, ERR_unload_strings, LONG, lib, d0, ERR_STRING_DATA *, str, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_ERR_strings() \
  LP0NR(0xff0, ERR_load_ERR_strings, \
  , AMISSL_BASE_NAME)

#define ERR_load_crypto_strings() \
  LP0NR(0xff6, ERR_load_crypto_strings, \
  , AMISSL_BASE_NAME)

#define ERR_free_strings() \
  LP0NR(0xffc, ERR_free_strings, \
  , AMISSL_BASE_NAME)

#define ERR_remove_state(pid) \
  LP1NR(0x1002, ERR_remove_state, unsigned long, pid, d0, \
  , AMISSL_BASE_NAME)

#define ERR_get_state() \
  LP0(0x1008, ERR_STATE *, ERR_get_state, \
  , AMISSL_BASE_NAME)

#define ERR_get_string_table() \
  LP0(0x100e, LHASH *, ERR_get_string_table, \
  , AMISSL_BASE_NAME)

#define ERR_get_err_state_table() \
  LP0(0x1014, LHASH *, ERR_get_err_state_table, \
  , AMISSL_BASE_NAME)

#define ERR_release_err_state_table(hash) \
  LP1NR(0x101a, ERR_release_err_state_table, LHASH **, hash, a0, \
  , AMISSL_BASE_NAME)

#define ERR_get_next_error_library() \
  LP0(0x1020, int, ERR_get_next_error_library, \
  , AMISSL_BASE_NAME)

#define ERR_get_implementation() \
  LP0(0x1026, const ERR_FNS *, ERR_get_implementation, \
  , AMISSL_BASE_NAME)

#define ERR_set_implementation(fns) \
  LP1(0x102c, int, ERR_set_implementation, const ERR_FNS *, fns, a0, \
  , AMISSL_BASE_NAME)

#define EVP_MD_CTX_init(ctx) \
  LP1NR(0x1032, EVP_MD_CTX_init, EVP_MD_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define EVP_MD_CTX_cleanup(ctx) \
  LP1(0x1038, int, EVP_MD_CTX_cleanup, EVP_MD_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define EVP_MD_CTX_create() \
  LP0(0x103e, EVP_MD_CTX *, EVP_MD_CTX_create, \
  , AMISSL_BASE_NAME)

#define EVP_MD_CTX_destroy(ctx) \
  LP1NR(0x1044, EVP_MD_CTX_destroy, EVP_MD_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define EVP_MD_CTX_copy_ex(out, in) \
  LP2(0x104a, int, EVP_MD_CTX_copy_ex, EVP_MD_CTX *, out, a0, const EVP_MD_CTX *, in, a1, \
  , AMISSL_BASE_NAME)

#define EVP_DigestInit_ex(ctx, type, impl) \
  LP3(0x1050, int, EVP_DigestInit_ex, EVP_MD_CTX *, ctx, a0, const EVP_MD *, type, a1, ENGINE *, impl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_DigestUpdate(ctx, d, cnt) \
  LP3(0x1056, int, EVP_DigestUpdate, EVP_MD_CTX *, ctx, a0, const void *, d, a1, ULONG, cnt, d0, \
  , AMISSL_BASE_NAME)

#define EVP_DigestFinal_ex(ctx, md, s) \
  LP3(0x105c, int, EVP_DigestFinal_ex, EVP_MD_CTX *, ctx, a0, unsigned char *, md, a1, unsigned int *, s, a2, \
  , AMISSL_BASE_NAME)

#define EVP_Digest(data, count, md, size, type, impl) \
  LP6(0x1062, int, EVP_Digest, void *, data, a0, ULONG, count, d0, unsigned char *, md, a1, unsigned int *, size, a2, const EVP_MD *, type, a3, ENGINE *, impl, d1, \
  , AMISSL_BASE_NAME)

#define EVP_MD_CTX_copy(out, in) \
  LP2(0x1068, int, EVP_MD_CTX_copy, EVP_MD_CTX *, out, a0, const EVP_MD_CTX *, in, a1, \
  , AMISSL_BASE_NAME)

#define EVP_DigestInit(ctx, type) \
  LP2(0x106e, int, EVP_DigestInit, EVP_MD_CTX *, ctx, a0, const EVP_MD *, type, a1, \
  , AMISSL_BASE_NAME)

#define EVP_DigestFinal(ctx, md, s) \
  LP3(0x1074, int, EVP_DigestFinal, EVP_MD_CTX *, ctx, a0, unsigned char *, md, a1, unsigned int *, s, a2, \
  , AMISSL_BASE_NAME)

#define EVP_read_pw_string(buf, length, prompt, verify) \
  LP4(0x107a, int, EVP_read_pw_string, char *, buf, a0, LONG, length, d0, const char *, prompt, a1, LONG, verify, d1, \
  , AMISSL_BASE_NAME)

#define EVP_set_pw_prompt(prompt) \
  LP1NR(0x1080, EVP_set_pw_prompt, char *, prompt, a0, \
  , AMISSL_BASE_NAME)

#define EVP_get_pw_prompt() \
  LP0(0x1086, char *, EVP_get_pw_prompt, \
  , AMISSL_BASE_NAME)

#define EVP_BytesToKey(type, md, salt, data, datal, count, key, iv) \
  LP8(0x108c, int, EVP_BytesToKey, const EVP_CIPHER *, type, a0, const EVP_MD *, md, a1, const unsigned char *, salt, a2, const unsigned char *, data, a3, LONG, datal, d0, LONG, count, d1, unsigned char *, key, d2, unsigned char *, iv, d3, \
  , AMISSL_BASE_NAME)

#define EVP_EncryptInit(ctx, cipher, key, iv) \
  LP4(0x1092, int, EVP_EncryptInit, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, cipher, a1, const unsigned char *, key, a2, const unsigned char *, iv, a3, \
  , AMISSL_BASE_NAME)

#define EVP_EncryptInit_ex(ctx, cipher, impl, key, iv) \
  LP5(0x1098, int, EVP_EncryptInit_ex, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, cipher, a1, ENGINE *, impl, a2, const unsigned char *, key, a3, const unsigned char *, iv, d0, \
  , AMISSL_BASE_NAME)

#define EVP_EncryptUpdate(ctx, out, outl, in, inl) \
  LP5(0x109e, int, EVP_EncryptUpdate, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, const unsigned char *, in, a3, LONG, inl, d0, \
  , AMISSL_BASE_NAME)

#define EVP_EncryptFinal_ex(ctx, out, outl) \
  LP3(0x10a4, int, EVP_EncryptFinal_ex, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_EncryptFinal(ctx, out, outl) \
  LP3(0x10aa, int, EVP_EncryptFinal, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_DecryptInit(ctx, cipher, key, iv) \
  LP4(0x10b0, int, EVP_DecryptInit, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, cipher, a1, const unsigned char *, key, a2, const unsigned char *, iv, a3, \
  , AMISSL_BASE_NAME)

#define EVP_DecryptInit_ex(ctx, cipher, impl, key, iv) \
  LP5(0x10b6, int, EVP_DecryptInit_ex, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, cipher, a1, ENGINE *, impl, a2, const unsigned char *, key, a3, const unsigned char *, iv, d0, \
  , AMISSL_BASE_NAME)

#define EVP_DecryptUpdate(ctx, out, outl, in, inl) \
  LP5(0x10bc, int, EVP_DecryptUpdate, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, const unsigned char *, in, a3, LONG, inl, d0, \
  , AMISSL_BASE_NAME)

#define EVP_DecryptFinal(ctx, outm, outl) \
  LP3(0x10c2, int, EVP_DecryptFinal, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, outm, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_DecryptFinal_ex(ctx, outm, outl) \
  LP3(0x10c8, int, EVP_DecryptFinal_ex, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, outm, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_CipherInit(ctx, cipher, key, iv, enc) \
  LP5(0x10ce, int, EVP_CipherInit, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, cipher, a1, const unsigned char *, key, a2, const unsigned char *, iv, a3, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define EVP_CipherInit_ex(ctx, cipher, impl, key, iv, enc) \
  LP6(0x10d4, int, EVP_CipherInit_ex, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, cipher, a1, ENGINE *, impl, a2, const unsigned char *, key, a3, const unsigned char *, iv, d0, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define EVP_CipherUpdate(ctx, out, outl, in, inl) \
  LP5(0x10da, int, EVP_CipherUpdate, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, const unsigned char *, in, a3, LONG, inl, d0, \
  , AMISSL_BASE_NAME)

#define EVP_CipherFinal(ctx, outm, outl) \
  LP3(0x10e0, int, EVP_CipherFinal, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, outm, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_CipherFinal_ex(ctx, outm, outl) \
  LP3(0x10e6, int, EVP_CipherFinal_ex, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, outm, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_SignFinal(ctx, md, s, pkey) \
  LP4(0x10ec, int, EVP_SignFinal, EVP_MD_CTX *, ctx, a0, unsigned char *, md, a1, unsigned int *, s, a2, EVP_PKEY *, pkey, a3, \
  , AMISSL_BASE_NAME)

#define EVP_VerifyFinal(ctx, sigbuf, siglen, pkey) \
  LP4(0x10f2, int, EVP_VerifyFinal, EVP_MD_CTX *, ctx, a0, unsigned char *, sigbuf, a1, ULONG, siglen, d0, EVP_PKEY *, pkey, a2, \
  , AMISSL_BASE_NAME)

#define EVP_OpenInit(ctx, type, ek, ekl, iv, priv) \
  LP6(0x10f8, int, EVP_OpenInit, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, type, a1, unsigned char *, ek, a2, LONG, ekl, d0, unsigned char *, iv, a3, EVP_PKEY *, priv, d1, \
  , AMISSL_BASE_NAME)

#define EVP_OpenFinal(ctx, out, outl) \
  LP3(0x10fe, int, EVP_OpenFinal, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_SealInit(ctx, type, ek, ekl, iv, pubk, npubk) \
  LP7(0x1104, int, EVP_SealInit, EVP_CIPHER_CTX *, ctx, a0, const EVP_CIPHER *, type, a1, unsigned char **, ek, a2, int *, ekl, a3, unsigned char *, iv, d0, EVP_PKEY **, pubk, d1, LONG, npubk, d2, \
  , AMISSL_BASE_NAME)

#define EVP_SealFinal(ctx, out, outl) \
  LP3(0x110a, int, EVP_SealFinal, EVP_CIPHER_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_EncodeInit(ctx) \
  LP1NR(0x1110, EVP_EncodeInit, EVP_ENCODE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define EVP_EncodeUpdate(ctx, out, outl, in, inl) \
  LP5NR(0x1116, EVP_EncodeUpdate, EVP_ENCODE_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, unsigned char *, in, a3, LONG, inl, d0, \
  , AMISSL_BASE_NAME)

#define EVP_EncodeFinal(ctx, out, outl) \
  LP3NR(0x111c, EVP_EncodeFinal, EVP_ENCODE_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_EncodeBlock(t, f, n) \
  LP3(0x1122, int, EVP_EncodeBlock, unsigned char *, t, a0, const unsigned char *, f, a1, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define EVP_DecodeInit(ctx) \
  LP1NR(0x1128, EVP_DecodeInit, EVP_ENCODE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define EVP_DecodeUpdate(ctx, out, outl, in, inl) \
  LP5(0x112e, int, EVP_DecodeUpdate, EVP_ENCODE_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, unsigned char *, in, a3, LONG, inl, d0, \
  , AMISSL_BASE_NAME)

#define EVP_DecodeFinal(ctx, out, outl) \
  LP3(0x1134, int, EVP_DecodeFinal, EVP_ENCODE_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, \
  , AMISSL_BASE_NAME)

#define EVP_DecodeBlock(t, f, n) \
  LP3(0x113a, int, EVP_DecodeBlock, unsigned char *, t, a0, const unsigned char *, f, a1, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_init(a) \
  LP1NR(0x1140, EVP_CIPHER_CTX_init, EVP_CIPHER_CTX *, a, a0, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_cleanup(a) \
  LP1(0x1146, int, EVP_CIPHER_CTX_cleanup, EVP_CIPHER_CTX *, a, a0, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_set_key_length(x, keylen) \
  LP2(0x114c, int, EVP_CIPHER_CTX_set_key_length, EVP_CIPHER_CTX *, x, a0, LONG, keylen, d0, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_set_padding(c, pad) \
  LP2(0x1152, int, EVP_CIPHER_CTX_set_padding, EVP_CIPHER_CTX *, c, a0, LONG, pad, d0, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_ctrl(ctx, type, arg, ptr) \
  LP4(0x1158, int, EVP_CIPHER_CTX_ctrl, EVP_CIPHER_CTX *, ctx, a0, LONG, type, d0, LONG, arg, d1, void *, ptr, a1, \
  , AMISSL_BASE_NAME)

#define BIO_f_md() \
  LP0(0x115e, BIO_METHOD *, BIO_f_md, \
  , AMISSL_BASE_NAME)

#define BIO_f_base64() \
  LP0(0x1164, BIO_METHOD *, BIO_f_base64, \
  , AMISSL_BASE_NAME)

#define BIO_f_cipher() \
  LP0(0x116a, BIO_METHOD *, BIO_f_cipher, \
  , AMISSL_BASE_NAME)

#define BIO_f_reliable() \
  LP0(0x1170, BIO_METHOD *, BIO_f_reliable, \
  , AMISSL_BASE_NAME)

#define BIO_set_cipher(b, c, k, i, enc) \
  LP5NR(0x1176, BIO_set_cipher, BIO *, b, a0, const EVP_CIPHER *, c, a1, unsigned char *, k, a2, unsigned char *, i, a3, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define EVP_md_null() \
  LP0(0x117c, const EVP_MD *, EVP_md_null, \
  , AMISSL_BASE_NAME)

#define EVP_md2() \
  LP0(0x1182, const EVP_MD *, EVP_md2, \
  , AMISSL_BASE_NAME)

#define EVP_md4() \
  LP0(0x1188, const EVP_MD *, EVP_md4, \
  , AMISSL_BASE_NAME)

#define EVP_md5() \
  LP0(0x118e, const EVP_MD *, EVP_md5, \
  , AMISSL_BASE_NAME)

#define EVP_sha() \
  LP0(0x1194, const EVP_MD *, EVP_sha, \
  , AMISSL_BASE_NAME)

#define EVP_sha1() \
  LP0(0x119a, const EVP_MD *, EVP_sha1, \
  , AMISSL_BASE_NAME)

#define EVP_dss() \
  LP0(0x11a0, const EVP_MD *, EVP_dss, \
  , AMISSL_BASE_NAME)

#define EVP_dss1() \
  LP0(0x11a6, const EVP_MD *, EVP_dss1, \
  , AMISSL_BASE_NAME)

#define EVP_mdc2() \
  LP0(0x11ac, const EVP_MD *, EVP_mdc2, \
  , AMISSL_BASE_NAME)

#define EVP_ripemd160() \
  LP0(0x11b2, const EVP_MD *, EVP_ripemd160, \
  , AMISSL_BASE_NAME)

#define EVP_enc_null() \
  LP0(0x11b8, const EVP_CIPHER *, EVP_enc_null, \
  , AMISSL_BASE_NAME)

#define EVP_des_ecb() \
  LP0(0x11be, const EVP_CIPHER *, EVP_des_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede() \
  LP0(0x11c4, const EVP_CIPHER *, EVP_des_ede, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3() \
  LP0(0x11ca, const EVP_CIPHER *, EVP_des_ede3, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede_ecb() \
  LP0(0x11d0, const EVP_CIPHER *, EVP_des_ede_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3_ecb() \
  LP0(0x11d6, const EVP_CIPHER *, EVP_des_ede3_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_des_cfb64() \
  LP0(0x11dc, const EVP_CIPHER *, EVP_des_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_des_cfb1() \
  LP0(0x11e2, const EVP_CIPHER *, EVP_des_cfb1, \
  , AMISSL_BASE_NAME)

#define EVP_des_cfb8() \
  LP0(0x11e8, const EVP_CIPHER *, EVP_des_cfb8, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede_cfb64() \
  LP0(0x11ee, const EVP_CIPHER *, EVP_des_ede_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3_cfb64() \
  LP0(0x11f4, const EVP_CIPHER *, EVP_des_ede3_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3_cfb1() \
  LP0(0x11fa, const EVP_CIPHER *, EVP_des_ede3_cfb1, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3_cfb8() \
  LP0(0x1200, const EVP_CIPHER *, EVP_des_ede3_cfb8, \
  , AMISSL_BASE_NAME)

#define EVP_des_ofb() \
  LP0(0x1206, const EVP_CIPHER *, EVP_des_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede_ofb() \
  LP0(0x120c, const EVP_CIPHER *, EVP_des_ede_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3_ofb() \
  LP0(0x1212, const EVP_CIPHER *, EVP_des_ede3_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_des_cbc() \
  LP0(0x1218, const EVP_CIPHER *, EVP_des_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede_cbc() \
  LP0(0x121e, const EVP_CIPHER *, EVP_des_ede_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_des_ede3_cbc() \
  LP0(0x1224, const EVP_CIPHER *, EVP_des_ede3_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_desx_cbc() \
  LP0(0x122a, const EVP_CIPHER *, EVP_desx_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_rc4() \
  LP0(0x1230, const EVP_CIPHER *, EVP_rc4, \
  , AMISSL_BASE_NAME)

#define EVP_rc4_40() \
  LP0(0x1236, const EVP_CIPHER *, EVP_rc4_40, \
  , AMISSL_BASE_NAME)

#define EVP_idea_ecb() \
  LP0(0x123c, const EVP_CIPHER *, EVP_idea_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_idea_cfb64() \
  LP0(0x1242, const EVP_CIPHER *, EVP_idea_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_idea_ofb() \
  LP0(0x1248, const EVP_CIPHER *, EVP_idea_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_idea_cbc() \
  LP0(0x124e, const EVP_CIPHER *, EVP_idea_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_rc2_ecb() \
  LP0(0x1254, const EVP_CIPHER *, EVP_rc2_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_rc2_cbc() \
  LP0(0x125a, const EVP_CIPHER *, EVP_rc2_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_rc2_40_cbc() \
  LP0(0x1260, const EVP_CIPHER *, EVP_rc2_40_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_rc2_64_cbc() \
  LP0(0x1266, const EVP_CIPHER *, EVP_rc2_64_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_rc2_cfb64() \
  LP0(0x126c, const EVP_CIPHER *, EVP_rc2_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_rc2_ofb() \
  LP0(0x1272, const EVP_CIPHER *, EVP_rc2_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_bf_ecb() \
  LP0(0x1278, const EVP_CIPHER *, EVP_bf_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_bf_cbc() \
  LP0(0x127e, const EVP_CIPHER *, EVP_bf_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_bf_cfb64() \
  LP0(0x1284, const EVP_CIPHER *, EVP_bf_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_bf_ofb() \
  LP0(0x128a, const EVP_CIPHER *, EVP_bf_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_cast5_ecb() \
  LP0(0x1290, const EVP_CIPHER *, EVP_cast5_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_cast5_cbc() \
  LP0(0x1296, const EVP_CIPHER *, EVP_cast5_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_cast5_cfb64() \
  LP0(0x129c, const EVP_CIPHER *, EVP_cast5_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_cast5_ofb() \
  LP0(0x12a2, const EVP_CIPHER *, EVP_cast5_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_cbc() \
  LP0(0x12a8, const EVP_CIPHER *, EVP_rc5_32_12_16_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_ecb() \
  LP0(0x12ae, const EVP_CIPHER *, EVP_rc5_32_12_16_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_cfb64() \
  LP0(0x12b4, const EVP_CIPHER *, EVP_rc5_32_12_16_cfb64, \
  , AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_ofb() \
  LP0(0x12ba, const EVP_CIPHER *, EVP_rc5_32_12_16_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_aes_128_ecb() \
  LP0(0x12c0, const EVP_CIPHER *, EVP_aes_128_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_aes_128_cbc() \
  LP0(0x12c6, const EVP_CIPHER *, EVP_aes_128_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_aes_128_cfb1() \
  LP0(0x12cc, const EVP_CIPHER *, EVP_aes_128_cfb1, \
  , AMISSL_BASE_NAME)

#define EVP_aes_128_cfb8() \
  LP0(0x12d2, const EVP_CIPHER *, EVP_aes_128_cfb8, \
  , AMISSL_BASE_NAME)

#define EVP_aes_128_cfb128() \
  LP0(0x12d8, const EVP_CIPHER *, EVP_aes_128_cfb128, \
  , AMISSL_BASE_NAME)

#define EVP_aes_128_ofb() \
  LP0(0x12de, const EVP_CIPHER *, EVP_aes_128_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_aes_192_ecb() \
  LP0(0x12e4, const EVP_CIPHER *, EVP_aes_192_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_aes_192_cbc() \
  LP0(0x12ea, const EVP_CIPHER *, EVP_aes_192_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_aes_192_cfb1() \
  LP0(0x12f0, const EVP_CIPHER *, EVP_aes_192_cfb1, \
  , AMISSL_BASE_NAME)

#define EVP_aes_192_cfb8() \
  LP0(0x12f6, const EVP_CIPHER *, EVP_aes_192_cfb8, \
  , AMISSL_BASE_NAME)

#define EVP_aes_192_cfb128() \
  LP0(0x12fc, const EVP_CIPHER *, EVP_aes_192_cfb128, \
  , AMISSL_BASE_NAME)

#define EVP_aes_192_ofb() \
  LP0(0x1302, const EVP_CIPHER *, EVP_aes_192_ofb, \
  , AMISSL_BASE_NAME)

#define EVP_aes_256_ecb() \
  LP0(0x1308, const EVP_CIPHER *, EVP_aes_256_ecb, \
  , AMISSL_BASE_NAME)

#define EVP_aes_256_cbc() \
  LP0(0x130e, const EVP_CIPHER *, EVP_aes_256_cbc, \
  , AMISSL_BASE_NAME)

#define EVP_aes_256_cfb1() \
  LP0(0x1314, const EVP_CIPHER *, EVP_aes_256_cfb1, \
  , AMISSL_BASE_NAME)

#define EVP_aes_256_cfb8() \
  LP0(0x131a, const EVP_CIPHER *, EVP_aes_256_cfb8, \
  , AMISSL_BASE_NAME)

#define EVP_aes_256_cfb128() \
  LP0(0x1320, const EVP_CIPHER *, EVP_aes_256_cfb128, \
  , AMISSL_BASE_NAME)

#define EVP_aes_256_ofb() \
  LP0(0x1326, const EVP_CIPHER *, EVP_aes_256_ofb, \
  , AMISSL_BASE_NAME)

#define OPENSSL_add_all_algorithms_noconf() \
  LP0NR(0x132c, OPENSSL_add_all_algorithms_noconf, \
  , AMISSL_BASE_NAME)

#define OPENSSL_add_all_algorithms_conf() \
  LP0NR(0x1332, OPENSSL_add_all_algorithms_conf, \
  , AMISSL_BASE_NAME)

#define OpenSSL_add_all_ciphers() \
  LP0NR(0x1338, OpenSSL_add_all_ciphers, \
  , AMISSL_BASE_NAME)

#define OpenSSL_add_all_digests() \
  LP0NR(0x133e, OpenSSL_add_all_digests, \
  , AMISSL_BASE_NAME)

#define EVP_add_cipher(cipher) \
  LP1(0x1344, int, EVP_add_cipher, const EVP_CIPHER *, cipher, a0, \
  , AMISSL_BASE_NAME)

#define EVP_add_digest(digest) \
  LP1(0x134a, int, EVP_add_digest, const EVP_MD *, digest, a0, \
  , AMISSL_BASE_NAME)

#define EVP_get_cipherbyname(name) \
  LP1(0x1350, const EVP_CIPHER *, EVP_get_cipherbyname, const char *, name, a0, \
  , AMISSL_BASE_NAME)

#define EVP_get_digestbyname(name) \
  LP1(0x1356, const EVP_MD *, EVP_get_digestbyname, const char *, name, a0, \
  , AMISSL_BASE_NAME)

#define EVP_cleanup() \
  LP0NR(0x135c, EVP_cleanup, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_decrypt(dec_key, enc_key, enc_key_len, private_key) \
  LP4(0x1362, int, EVP_PKEY_decrypt, unsigned char *, dec_key, a0, unsigned char *, enc_key, a1, LONG, enc_key_len, d0, EVP_PKEY *, private_key, a2, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_encrypt(enc_key, key, key_len, pub_key) \
  LP4(0x1368, int, EVP_PKEY_encrypt, unsigned char *, enc_key, a0, unsigned char *, key, a1, LONG, key_len, d0, EVP_PKEY *, pub_key, a2, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_type(type) \
  LP1(0x136e, int, EVP_PKEY_type, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_bits(pkey) \
  LP1(0x1374, int, EVP_PKEY_bits, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_size(pkey) \
  LP1(0x137a, int, EVP_PKEY_size, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_assign(pkey, type, key) \
  LP3(0x1380, int, EVP_PKEY_assign, EVP_PKEY *, pkey, a0, LONG, type, d0, char *, key, a1, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_set1_RSA(pkey, key) \
  LP2(0x1386, int, EVP_PKEY_set1_RSA, EVP_PKEY *, pkey, a0, struct rsa_st *, key, a1, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_get1_RSA(pkey) \
  LP1(0x138c, struct rsa_st *, EVP_PKEY_get1_RSA, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_set1_DSA(pkey, key) \
  LP2(0x1392, int, EVP_PKEY_set1_DSA, EVP_PKEY *, pkey, a0, struct dsa_st *, key, a1, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_get1_DSA(pkey) \
  LP1(0x1398, struct dsa_st *, EVP_PKEY_get1_DSA, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_set1_DH(pkey, key) \
  LP2(0x139e, int, EVP_PKEY_set1_DH, EVP_PKEY *, pkey, a0, struct dh_st *, key, a1, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_get1_DH(pkey) \
  LP1(0x13a4, struct dh_st *, EVP_PKEY_get1_DH, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_new() \
  LP0(0x13aa, EVP_PKEY *, EVP_PKEY_new, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_free(pkey) \
  LP1NR(0x13b0, EVP_PKEY_free, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PublicKey(type, a, pp, length) \
  LP4(0x13b6, EVP_PKEY *, d2i_PublicKey, LONG, type, d0, EVP_PKEY **, a, a0, unsigned char **, pp, a1, long, length, d1, \
  , AMISSL_BASE_NAME)

#define i2d_PublicKey(a, pp) \
  LP2(0x13bc, int, i2d_PublicKey, EVP_PKEY *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PrivateKey(type, a, pp, length) \
  LP4(0x13c2, EVP_PKEY *, d2i_PrivateKey, LONG, type, d0, EVP_PKEY **, a, a0, unsigned char **, pp, a1, long, length, d1, \
  , AMISSL_BASE_NAME)

#define d2i_AutoPrivateKey(a, pp, length) \
  LP3(0x13c8, EVP_PKEY *, d2i_AutoPrivateKey, EVP_PKEY **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PrivateKey(a, pp) \
  LP2(0x13ce, int, i2d_PrivateKey, EVP_PKEY *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_copy_parameters(to, from) \
  LP2(0x13d4, int, EVP_PKEY_copy_parameters, EVP_PKEY *, to, a0, EVP_PKEY *, from, a1, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_missing_parameters(pkey) \
  LP1(0x13da, int, EVP_PKEY_missing_parameters, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_save_parameters(pkey, mode) \
  LP2(0x13e0, int, EVP_PKEY_save_parameters, EVP_PKEY *, pkey, a0, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY_cmp_parameters(a, b) \
  LP2(0x13e6, int, EVP_PKEY_cmp_parameters, EVP_PKEY *, a, a0, EVP_PKEY *, b, a1, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_type(ctx) \
  LP1(0x13ec, int, EVP_CIPHER_type, const EVP_CIPHER *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_param_to_asn1(c, type) \
  LP2(0x13f2, int, EVP_CIPHER_param_to_asn1, EVP_CIPHER_CTX *, c, a0, ASN1_TYPE *, type, a1, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_asn1_to_param(c, type) \
  LP2(0x13f8, int, EVP_CIPHER_asn1_to_param, EVP_CIPHER_CTX *, c, a0, ASN1_TYPE *, type, a1, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_set_asn1_iv(c, type) \
  LP2(0x13fe, int, EVP_CIPHER_set_asn1_iv, EVP_CIPHER_CTX *, c, a0, ASN1_TYPE *, type, a1, \
  , AMISSL_BASE_NAME)

#define EVP_CIPHER_get_asn1_iv(c, type) \
  LP2(0x1404, int, EVP_CIPHER_get_asn1_iv, EVP_CIPHER_CTX *, c, a0, ASN1_TYPE *, type, a1, \
  , AMISSL_BASE_NAME)

#define PKCS5_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de) \
  LP7(0x140a, int, PKCS5_PBE_keyivgen, EVP_CIPHER_CTX *, ctx, a0, const char *, pass, a1, LONG, passlen, d0, ASN1_TYPE *, param, a2, const EVP_CIPHER *, cipher, a3, const EVP_MD *, md, d1, LONG, en_de, d2, \
  , AMISSL_BASE_NAME)

#define PKCS5_PBKDF2_HMAC_SHA1(pass, passlen, salt, saltlen, iter, keylen, out) \
  LP7(0x1410, int, PKCS5_PBKDF2_HMAC_SHA1, const char *, pass, a0, LONG, passlen, d0, unsigned char *, salt, a1, LONG, saltlen, d1, LONG, iter, d2, LONG, keylen, d3, unsigned char *, out, a2, \
  , AMISSL_BASE_NAME)

#define PKCS5_v2_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de) \
  LP7(0x1416, int, PKCS5_v2_PBE_keyivgen, EVP_CIPHER_CTX *, ctx, a0, const char *, pass, a1, LONG, passlen, d0, ASN1_TYPE *, param, a2, const EVP_CIPHER *, cipher, a3, const EVP_MD *, md, d1, LONG, en_de, d2, \
  , AMISSL_BASE_NAME)

#define PKCS5_PBE_add() \
  LP0NR(0x141c, PKCS5_PBE_add, \
  , AMISSL_BASE_NAME)

#define EVP_PBE_CipherInit(pbe_obj, pass, passlen, param, ctx, en_de) \
  LP6(0x1422, int, EVP_PBE_CipherInit, ASN1_OBJECT *, pbe_obj, a0, const char *, pass, a1, LONG, passlen, d0, ASN1_TYPE *, param, a2, EVP_CIPHER_CTX *, ctx, a3, LONG, en_de, d1, \
  , AMISSL_BASE_NAME)

#define EVP_PBE_alg_add(nid, cipher, md, keygen) \
  LP4FP(0x1428, int, EVP_PBE_alg_add, LONG, nid, d0, const EVP_CIPHER *, cipher, a0, const EVP_MD *, md, a1, __fpt, keygen, a2, \
  , AMISSL_BASE_NAME, EVP_PBE_KEYGEN * (*__fpt)(struct evp_cipher_ctx_st *ctx, const char *pass, int passlen, struct asn1_type_st *param, struct evp_cipher_st *cipher, struct env_md_st *md, int en_de))

#define EVP_PBE_cleanup() \
  LP0NR(0x142e, EVP_PBE_cleanup, \
  , AMISSL_BASE_NAME)

#define ERR_load_EVP_strings() \
  LP0NR(0x1434, ERR_load_EVP_strings, \
  , AMISSL_BASE_NAME)

#define HMAC_CTX_init(ctx) \
  LP1NR(0x143a, HMAC_CTX_init, HMAC_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define HMAC_CTX_cleanup(ctx) \
  LP1NR(0x1440, HMAC_CTX_cleanup, HMAC_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define HMAC_Init(ctx, key, len, md) \
  LP4NR(0x1446, HMAC_Init, HMAC_CTX *, ctx, a0, const void *, key, a1, LONG, len, d0, const EVP_MD *, md, a2, \
  , AMISSL_BASE_NAME)

#define HMAC_Init_ex(ctx, key, len, md, impl) \
  LP5NR(0x144c, HMAC_Init_ex, HMAC_CTX *, ctx, a0, const void *, key, a1, LONG, len, d0, const EVP_MD *, md, a2, ENGINE *, impl, a3, \
  , AMISSL_BASE_NAME)

#define HMAC_Update(ctx, data, len) \
  LP3NR(0x1452, HMAC_Update, HMAC_CTX *, ctx, a0, const unsigned char *, data, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define HMAC_Final(ctx, md, len) \
  LP3NR(0x1458, HMAC_Final, HMAC_CTX *, ctx, a0, unsigned char *, md, a1, unsigned int *, len, a2, \
  , AMISSL_BASE_NAME)

#define HMAC(evp_md, key, key_len, d, n, md, md_len) \
  LP7(0x145e, unsigned char *, HMAC, const EVP_MD *, evp_md, a0, const void *, key, a1, LONG, key_len, d0, const unsigned char *, d, a2, LONG, n, d1, unsigned char *, md, a3, unsigned int *, md_len, d2, \
  , AMISSL_BASE_NAME)

#define KRB5_ENCDATA_new() \
  LP0(0x1464, KRB5_ENCDATA *, KRB5_ENCDATA_new, \
  , AMISSL_BASE_NAME)

#define KRB5_ENCDATA_free(a) \
  LP1NR(0x146a, KRB5_ENCDATA_free, KRB5_ENCDATA *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_ENCDATA(a, in, len) \
  LP3(0x1470, KRB5_ENCDATA *, d2i_KRB5_ENCDATA, KRB5_ENCDATA **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_ENCDATA(a, out) \
  LP2(0x1476, int, i2d_KRB5_ENCDATA, KRB5_ENCDATA *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_ENCDATA_it() \
  LP0(0x147c, const ASN1_ITEM *, KRB5_ENCDATA_it, \
  , AMISSL_BASE_NAME)

#define KRB5_PRINCNAME_new() \
  LP0(0x1482, KRB5_PRINCNAME *, KRB5_PRINCNAME_new, \
  , AMISSL_BASE_NAME)

#define KRB5_PRINCNAME_free(a) \
  LP1NR(0x1488, KRB5_PRINCNAME_free, KRB5_PRINCNAME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_PRINCNAME(a, in, len) \
  LP3(0x148e, KRB5_PRINCNAME *, d2i_KRB5_PRINCNAME, KRB5_PRINCNAME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_PRINCNAME(a, out) \
  LP2(0x1494, int, i2d_KRB5_PRINCNAME, KRB5_PRINCNAME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_PRINCNAME_it() \
  LP0(0x149a, const ASN1_ITEM *, KRB5_PRINCNAME_it, \
  , AMISSL_BASE_NAME)

#define KRB5_TKTBODY_new() \
  LP0(0x14a0, KRB5_TKTBODY *, KRB5_TKTBODY_new, \
  , AMISSL_BASE_NAME)

#define KRB5_TKTBODY_free(a) \
  LP1NR(0x14a6, KRB5_TKTBODY_free, KRB5_TKTBODY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_TKTBODY(a, in, len) \
  LP3(0x14ac, KRB5_TKTBODY *, d2i_KRB5_TKTBODY, KRB5_TKTBODY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_TKTBODY(a, out) \
  LP2(0x14b2, int, i2d_KRB5_TKTBODY, KRB5_TKTBODY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_TKTBODY_it() \
  LP0(0x14b8, const ASN1_ITEM *, KRB5_TKTBODY_it, \
  , AMISSL_BASE_NAME)

#define KRB5_APREQBODY_new() \
  LP0(0x14be, KRB5_APREQBODY *, KRB5_APREQBODY_new, \
  , AMISSL_BASE_NAME)

#define KRB5_APREQBODY_free(a) \
  LP1NR(0x14c4, KRB5_APREQBODY_free, KRB5_APREQBODY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_APREQBODY(a, in, len) \
  LP3(0x14ca, KRB5_APREQBODY *, d2i_KRB5_APREQBODY, KRB5_APREQBODY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_APREQBODY(a, out) \
  LP2(0x14d0, int, i2d_KRB5_APREQBODY, KRB5_APREQBODY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_APREQBODY_it() \
  LP0(0x14d6, const ASN1_ITEM *, KRB5_APREQBODY_it, \
  , AMISSL_BASE_NAME)

#define KRB5_TICKET_new() \
  LP0(0x14dc, KRB5_TICKET *, KRB5_TICKET_new, \
  , AMISSL_BASE_NAME)

#define KRB5_TICKET_free(a) \
  LP1NR(0x14e2, KRB5_TICKET_free, KRB5_TICKET *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_TICKET(a, in, len) \
  LP3(0x14e8, KRB5_TICKET *, d2i_KRB5_TICKET, KRB5_TICKET **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_TICKET(a, out) \
  LP2(0x14ee, int, i2d_KRB5_TICKET, KRB5_TICKET *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_TICKET_it() \
  LP0(0x14f4, const ASN1_ITEM *, KRB5_TICKET_it, \
  , AMISSL_BASE_NAME)

#define KRB5_APREQ_new() \
  LP0(0x14fa, KRB5_APREQ *, KRB5_APREQ_new, \
  , AMISSL_BASE_NAME)

#define KRB5_APREQ_free(a) \
  LP1NR(0x1500, KRB5_APREQ_free, KRB5_APREQ *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_APREQ(a, in, len) \
  LP3(0x1506, KRB5_APREQ *, d2i_KRB5_APREQ, KRB5_APREQ **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_APREQ(a, out) \
  LP2(0x150c, int, i2d_KRB5_APREQ, KRB5_APREQ *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_APREQ_it() \
  LP0(0x1512, const ASN1_ITEM *, KRB5_APREQ_it, \
  , AMISSL_BASE_NAME)

#define KRB5_CHECKSUM_new() \
  LP0(0x1518, KRB5_CHECKSUM *, KRB5_CHECKSUM_new, \
  , AMISSL_BASE_NAME)

#define KRB5_CHECKSUM_free(a) \
  LP1NR(0x151e, KRB5_CHECKSUM_free, KRB5_CHECKSUM *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_CHECKSUM(a, in, len) \
  LP3(0x1524, KRB5_CHECKSUM *, d2i_KRB5_CHECKSUM, KRB5_CHECKSUM **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_CHECKSUM(a, out) \
  LP2(0x152a, int, i2d_KRB5_CHECKSUM, KRB5_CHECKSUM *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_CHECKSUM_it() \
  LP0(0x1530, const ASN1_ITEM *, KRB5_CHECKSUM_it, \
  , AMISSL_BASE_NAME)

#define KRB5_ENCKEY_new() \
  LP0(0x1536, KRB5_ENCKEY *, KRB5_ENCKEY_new, \
  , AMISSL_BASE_NAME)

#define KRB5_ENCKEY_free(a) \
  LP1NR(0x153c, KRB5_ENCKEY_free, KRB5_ENCKEY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_ENCKEY(a, in, len) \
  LP3(0x1542, KRB5_ENCKEY *, d2i_KRB5_ENCKEY, KRB5_ENCKEY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_ENCKEY(a, out) \
  LP2(0x1548, int, i2d_KRB5_ENCKEY, KRB5_ENCKEY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_ENCKEY_it() \
  LP0(0x154e, const ASN1_ITEM *, KRB5_ENCKEY_it, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHDATA_new() \
  LP0(0x1554, KRB5_AUTHDATA *, KRB5_AUTHDATA_new, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHDATA_free(a) \
  LP1NR(0x155a, KRB5_AUTHDATA_free, KRB5_AUTHDATA *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_AUTHDATA(a, in, len) \
  LP3(0x1560, KRB5_AUTHDATA *, d2i_KRB5_AUTHDATA, KRB5_AUTHDATA **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_AUTHDATA(a, out) \
  LP2(0x1566, int, i2d_KRB5_AUTHDATA, KRB5_AUTHDATA *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHDATA_it() \
  LP0(0x156c, const ASN1_ITEM *, KRB5_AUTHDATA_it, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHENTBODY_new() \
  LP0(0x1572, KRB5_AUTHENTBODY *, KRB5_AUTHENTBODY_new, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHENTBODY_free(a) \
  LP1NR(0x1578, KRB5_AUTHENTBODY_free, KRB5_AUTHENTBODY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_AUTHENTBODY(a, in, len) \
  LP3(0x157e, KRB5_AUTHENTBODY *, d2i_KRB5_AUTHENTBODY, KRB5_AUTHENTBODY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_AUTHENTBODY(a, out) \
  LP2(0x1584, int, i2d_KRB5_AUTHENTBODY, KRB5_AUTHENTBODY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHENTBODY_it() \
  LP0(0x158a, const ASN1_ITEM *, KRB5_AUTHENTBODY_it, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHENT_new() \
  LP0(0x1590, KRB5_AUTHENT *, KRB5_AUTHENT_new, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHENT_free(a) \
  LP1NR(0x1596, KRB5_AUTHENT_free, KRB5_AUTHENT *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_KRB5_AUTHENT(a, in, len) \
  LP3(0x159c, KRB5_AUTHENT *, d2i_KRB5_AUTHENT, KRB5_AUTHENT **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_KRB5_AUTHENT(a, out) \
  LP2(0x15a2, int, i2d_KRB5_AUTHENT, KRB5_AUTHENT *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define KRB5_AUTHENT_it() \
  LP0(0x15a8, const ASN1_ITEM *, KRB5_AUTHENT_it, \
  , AMISSL_BASE_NAME)

#define lh_new(h, c) \
  LP2(0x15ae, LHASH *, lh_new, LHASH_HASH_FN_TYPE, h, d0, LHASH_COMP_FN_TYPE, c, d1, \
  , AMISSL_BASE_NAME)

#define lh_free(lh) \
  LP1NR(0x15b4, lh_free, LHASH *, lh, a0, \
  , AMISSL_BASE_NAME)

#define lh_insert(lh, data) \
  LP2(0x15ba, void *, lh_insert, LHASH *, lh, a0, const void *, data, a1, \
  , AMISSL_BASE_NAME)

#define lh_delete(lh, data) \
  LP2(0x15c0, void *, lh_delete, LHASH *, lh, a0, const void *, data, a1, \
  , AMISSL_BASE_NAME)

#define lh_retrieve(lh, data) \
  LP2(0x15c6, void *, lh_retrieve, LHASH *, lh, a0, const void *, data, a1, \
  , AMISSL_BASE_NAME)

#define lh_doall(lh, func) \
  LP2NR(0x15cc, lh_doall, LHASH *, lh, a0, LHASH_DOALL_FN_TYPE, func, d0, \
  , AMISSL_BASE_NAME)

#define lh_doall_arg(lh, func, arg) \
  LP3NR(0x15d2, lh_doall_arg, LHASH *, lh, a0, LHASH_DOALL_ARG_FN_TYPE, func, d0, void *, arg, a1, \
  , AMISSL_BASE_NAME)

#define lh_strhash(c) \
  LP1(0x15d8, unsigned long, lh_strhash, const char *, c, a0, \
  , AMISSL_BASE_NAME)

#define lh_num_items(lh) \
  LP1(0x15de, unsigned long, lh_num_items, const LHASH *, lh, a0, \
  , AMISSL_BASE_NAME)

#define lh_stats_bio(lh, out) \
  LP2NR(0x15e4, lh_stats_bio, const LHASH *, lh, a0, BIO *, out, a1, \
  , AMISSL_BASE_NAME)

#define lh_node_stats_bio(lh, out) \
  LP2NR(0x15ea, lh_node_stats_bio, const LHASH *, lh, a0, BIO *, out, a1, \
  , AMISSL_BASE_NAME)

#define lh_node_usage_stats_bio(lh, out) \
  LP2NR(0x15f0, lh_node_usage_stats_bio, const LHASH *, lh, a0, BIO *, out, a1, \
  , AMISSL_BASE_NAME)

#define OBJ_NAME_init() \
  LP0(0x15f6, int, OBJ_NAME_init, \
  , AMISSL_BASE_NAME)

#define OBJ_NAME_new_index(hash_func, cmp_func, free_func) \
  LP3FP(0x15fc, int, OBJ_NAME_new_index, __fpt, hash_func, a0, void *, cmp_func, a1, void *, free_func, a2, \
  , AMISSL_BASE_NAME, unsigned long (*__fpt)(const char *))

#define OBJ_NAME_get(name, type) \
  LP2(0x1602, const char *, OBJ_NAME_get, const char *, name, a0, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_NAME_add(name, type, data) \
  LP3(0x1608, int, OBJ_NAME_add, const char *, name, a0, LONG, type, d0, const char *, data, a1, \
  , AMISSL_BASE_NAME)

#define OBJ_NAME_remove(name, type) \
  LP2(0x160e, int, OBJ_NAME_remove, const char *, name, a0, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_NAME_cleanup(type) \
  LP1NR(0x1614, OBJ_NAME_cleanup, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_NAME_do_all(type, fn, arg) \
  LP3NRFP(0x161a, OBJ_NAME_do_all, LONG, type, d0, __fpt, fn, a0, void *, arg, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(const OBJ_NAME *, void *arg))

#define OBJ_NAME_do_all_sorted(type, fn, arg) \
  LP3NRFP(0x1620, OBJ_NAME_do_all_sorted, LONG, type, d0, __fpt, fn, a0, void *, arg, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(const OBJ_NAME *, void *arg))

#define OBJ_dup(o) \
  LP1(0x1626, ASN1_OBJECT *, OBJ_dup, const ASN1_OBJECT *, o, a0, \
  , AMISSL_BASE_NAME)

#define OBJ_nid2obj(n) \
  LP1(0x162c, ASN1_OBJECT *, OBJ_nid2obj, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_nid2ln(n) \
  LP1(0x1632, const char *, OBJ_nid2ln, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_nid2sn(n) \
  LP1(0x1638, const char *, OBJ_nid2sn, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_obj2nid(o) \
  LP1(0x163e, int, OBJ_obj2nid, const ASN1_OBJECT *, o, a0, \
  , AMISSL_BASE_NAME)

#define OBJ_txt2obj(s, no_name) \
  LP2(0x1644, ASN1_OBJECT *, OBJ_txt2obj, const char *, s, a0, LONG, no_name, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_obj2txt(buf, buf_len, a, no_name) \
  LP4(0x164a, int, OBJ_obj2txt, char *, buf, a0, LONG, buf_len, d0, const ASN1_OBJECT *, a, a1, LONG, no_name, d1, \
  , AMISSL_BASE_NAME)

#define OBJ_txt2nid(s) \
  LP1(0x1650, int, OBJ_txt2nid, const char *, s, a0, \
  , AMISSL_BASE_NAME)

#define OBJ_ln2nid(s) \
  LP1(0x1656, int, OBJ_ln2nid, const char *, s, a0, \
  , AMISSL_BASE_NAME)

#define OBJ_sn2nid(s) \
  LP1(0x165c, int, OBJ_sn2nid, const char *, s, a0, \
  , AMISSL_BASE_NAME)

#define OBJ_cmp(a, b) \
  LP2(0x1662, int, OBJ_cmp, const ASN1_OBJECT *, a, a0, const ASN1_OBJECT *, b, a1, \
  , AMISSL_BASE_NAME)

#define OBJ_bsearch(key, base, num, size, cmp) \
  LP5FP(0x1668, const char *, OBJ_bsearch, const char *, key, a0, const char *, base, a1, LONG, num, d0, LONG, size, d1, __fpt, cmp, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)(const void *, const void *))

#define OBJ_new_nid(num) \
  LP1(0x166e, int, OBJ_new_nid, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define OBJ_add_object(obj) \
  LP1(0x1674, int, OBJ_add_object, const ASN1_OBJECT *, obj, a0, \
  , AMISSL_BASE_NAME)

#define OBJ_create(oid, sn, ln) \
  LP3(0x167a, int, OBJ_create, const char *, oid, a0, const char *, sn, a1, const char *, ln, a2, \
  , AMISSL_BASE_NAME)

#define OBJ_cleanup() \
  LP0NR(0x1680, OBJ_cleanup, \
  , AMISSL_BASE_NAME)

#define OBJ_create_objects(in) \
  LP1(0x1686, int, OBJ_create_objects, BIO *, in, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_OBJ_strings() \
  LP0NR(0x168c, ERR_load_OBJ_strings, \
  , AMISSL_BASE_NAME)

#define OCSP_sendreq_bio(b, path, req) \
  LP3(0x1692, OCSP_RESPONSE *, OCSP_sendreq_bio, BIO *, b, a0, char *, path, a1, OCSP_REQUEST *, req, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_cert_to_id(dgst, subject, issuer) \
  LP3(0x1698, OCSP_CERTID *, OCSP_cert_to_id, const EVP_MD *, dgst, a0, X509 *, subject, a1, X509 *, issuer, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_cert_id_new(dgst, issuerName, issuerKey, serialNumber) \
  LP4(0x169e, OCSP_CERTID *, OCSP_cert_id_new, const EVP_MD *, dgst, a0, X509_NAME *, issuerName, a1, ASN1_BIT_STRING*, issuerKey, a2, ASN1_INTEGER *, serialNumber, a3, \
  , AMISSL_BASE_NAME)

#define OCSP_request_add0_id(req, cid) \
  LP2(0x16a4, OCSP_ONEREQ *, OCSP_request_add0_id, OCSP_REQUEST *, req, a0, OCSP_CERTID *, cid, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_request_add1_nonce(req, val, len) \
  LP3(0x16aa, int, OCSP_request_add1_nonce, OCSP_REQUEST *, req, a0, unsigned char *, val, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_basic_add1_nonce(resp, val, len) \
  LP3(0x16b0, int, OCSP_basic_add1_nonce, OCSP_BASICRESP *, resp, a0, unsigned char *, val, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_check_nonce(req, bs) \
  LP2(0x16b6, int, OCSP_check_nonce, OCSP_REQUEST *, req, a0, OCSP_BASICRESP *, bs, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_copy_nonce(resp, req) \
  LP2(0x16bc, int, OCSP_copy_nonce, OCSP_BASICRESP *, resp, a0, OCSP_REQUEST *, req, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_request_set1_name(req, nm) \
  LP2(0x16c2, int, OCSP_request_set1_name, OCSP_REQUEST *, req, a0, X509_NAME *, nm, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_request_add1_cert(req, cert) \
  LP2(0x16c8, int, OCSP_request_add1_cert, OCSP_REQUEST *, req, a0, X509 *, cert, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_request_sign(req, signer, key, dgst, certs, flags) \
  LP6(0x16ce, int, OCSP_request_sign, OCSP_REQUEST *, req, a0, X509 *, signer, a1, EVP_PKEY *, key, a2, const EVP_MD *, dgst, a3, STACK_OF(X509) *, certs, d0, unsigned long, flags, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_response_status(resp) \
  LP1(0x16d4, int, OCSP_response_status, OCSP_RESPONSE *, resp, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_response_get1_basic(resp) \
  LP1(0x16da, OCSP_BASICRESP *, OCSP_response_get1_basic, OCSP_RESPONSE *, resp, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_resp_count(bs) \
  LP1(0x16e0, int, OCSP_resp_count, OCSP_BASICRESP *, bs, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_resp_get0(bs, idx) \
  LP2(0x16e6, OCSP_SINGLERESP *, OCSP_resp_get0, OCSP_BASICRESP *, bs, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_resp_find(bs, id, last) \
  LP3(0x16ec, int, OCSP_resp_find, OCSP_BASICRESP *, bs, a0, OCSP_CERTID *, id, a1, LONG, last, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_single_get0_status(single, reason, revtime, thisupd, nextupd) \
  LP5(0x16f2, int, OCSP_single_get0_status, OCSP_SINGLERESP *, single, a0, int *, reason, a1, ASN1_GENERALIZEDTIME **, revtime, a2, ASN1_GENERALIZEDTIME **, thisupd, a3, ASN1_GENERALIZEDTIME **, nextupd, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_resp_find_status(bs, id, status, reason, revtime, thisupd, nextupd) \
  LP7(0x16f8, int, OCSP_resp_find_status, OCSP_BASICRESP *, bs, a0, OCSP_CERTID *, id, a1, int *, status, a2, int *, reason, a3, ASN1_GENERALIZEDTIME **, revtime, d0, ASN1_GENERALIZEDTIME **, thisupd, d1, ASN1_GENERALIZEDTIME **, nextupd, d2, \
  , AMISSL_BASE_NAME)

#define OCSP_check_validity(thisupd, nextupd, sec, maxsec) \
  LP4(0x16fe, int, OCSP_check_validity, ASN1_GENERALIZEDTIME *, thisupd, a0, ASN1_GENERALIZEDTIME *, nextupd, a1, long, sec, d0, long, maxsec, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_request_verify(req, certs, store, flags) \
  LP4(0x1704, int, OCSP_request_verify, OCSP_REQUEST *, req, a0, STACK_OF(X509) *, certs, a1, X509_STORE *, store, a2, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_parse_url(url, phost, pport, ppath, pssl) \
  LP5(0x170a, int, OCSP_parse_url, char *, url, a0, char **, phost, a1, char **, pport, a2, char **, ppath, a3, int *, pssl, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_id_issuer_cmp(a, b) \
  LP2(0x1710, int, OCSP_id_issuer_cmp, OCSP_CERTID *, a, a0, OCSP_CERTID *, b, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_id_cmp(a, b) \
  LP2(0x1716, int, OCSP_id_cmp, OCSP_CERTID *, a, a0, OCSP_CERTID *, b, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_request_onereq_count(req) \
  LP1(0x171c, int, OCSP_request_onereq_count, OCSP_REQUEST *, req, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_request_onereq_get0(req, i) \
  LP2(0x1722, OCSP_ONEREQ *, OCSP_request_onereq_get0, OCSP_REQUEST *, req, a0, LONG, i, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_onereq_get0_id(one) \
  LP1(0x1728, OCSP_CERTID *, OCSP_onereq_get0_id, OCSP_ONEREQ *, one, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_id_get0_info(piNameHash, pmd, pikeyHash, pserial, cid) \
  LP5(0x172e, int, OCSP_id_get0_info, ASN1_OCTET_STRING **, piNameHash, a0, ASN1_OBJECT **, pmd, a1, ASN1_OCTET_STRING **, pikeyHash, a2, ASN1_INTEGER **, pserial, a3, OCSP_CERTID *, cid, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_request_is_signed(req) \
  LP1(0x1734, int, OCSP_request_is_signed, OCSP_REQUEST *, req, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_response_create(status, bs) \
  LP2(0x173a, OCSP_RESPONSE *, OCSP_response_create, LONG, status, d0, OCSP_BASICRESP *, bs, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_basic_add1_status(rsp, cid, status, reason, revtime, thisupd, nextupd) \
  LP7(0x1740, OCSP_SINGLERESP *, OCSP_basic_add1_status, OCSP_BASICRESP *, rsp, a0, OCSP_CERTID *, cid, a1, LONG, status, d0, LONG, reason, d1, ASN1_TIME *, revtime, a2, ASN1_TIME *, thisupd, a3, ASN1_TIME *, nextupd, d2, \
  , AMISSL_BASE_NAME)

#define OCSP_basic_add1_cert(resp, cert) \
  LP2(0x1746, int, OCSP_basic_add1_cert, OCSP_BASICRESP *, resp, a0, X509 *, cert, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_basic_sign(brsp, signer, key, dgst, certs, flags) \
  LP6(0x174c, int, OCSP_basic_sign, OCSP_BASICRESP *, brsp, a0, X509 *, signer, a1, EVP_PKEY *, key, a2, const EVP_MD *, dgst, a3, STACK_OF(X509) *, certs, d0, unsigned long, flags, d1, \
  , AMISSL_BASE_NAME)

#define ASN1_STRING_encode(s, i2d, data, sk) \
  LP4FP(0x1752, ASN1_STRING *, ASN1_STRING_encode, ASN1_STRING *, s, a0, __fpt, i2d, a1, char *, data, a2, STACK_OF(ASN1_OBJECT) *, sk, a3, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define OCSP_crlID_new(url, n, tim) \
  LP3(0x1758, X509_EXTENSION *, OCSP_crlID_new, char *, url, a0, long *, n, a1, char *, tim, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_accept_responses_new(oids) \
  LP1(0x175e, X509_EXTENSION *, OCSP_accept_responses_new, char **, oids, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_archive_cutoff_new(tim) \
  LP1(0x1764, X509_EXTENSION *, OCSP_archive_cutoff_new, char*, tim, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_url_svcloc_new(issuer, urls) \
  LP2(0x176a, X509_EXTENSION *, OCSP_url_svcloc_new, X509_NAME*, issuer, a0, char **, urls, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_count(x) \
  LP1(0x1770, int, OCSP_REQUEST_get_ext_count, OCSP_REQUEST *, x, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x1776, int, OCSP_REQUEST_get_ext_by_NID, OCSP_REQUEST *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x177c, int, OCSP_REQUEST_get_ext_by_OBJ, OCSP_REQUEST *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x1782, int, OCSP_REQUEST_get_ext_by_critical, OCSP_REQUEST *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext(x, loc) \
  LP2(0x1788, X509_EXTENSION *, OCSP_REQUEST_get_ext, OCSP_REQUEST *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_delete_ext(x, loc) \
  LP2(0x178e, X509_EXTENSION *, OCSP_REQUEST_delete_ext, OCSP_REQUEST *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_get1_ext_d2i(x, nid, crit, idx) \
  LP4(0x1794, void *, OCSP_REQUEST_get1_ext_d2i, OCSP_REQUEST *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x179a, int, OCSP_REQUEST_add1_ext_i2d, OCSP_REQUEST *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_add_ext(x, ex, loc) \
  LP3(0x17a0, int, OCSP_REQUEST_add_ext, OCSP_REQUEST *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_count(x) \
  LP1(0x17a6, int, OCSP_ONEREQ_get_ext_count, OCSP_ONEREQ *, x, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x17ac, int, OCSP_ONEREQ_get_ext_by_NID, OCSP_ONEREQ *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x17b2, int, OCSP_ONEREQ_get_ext_by_OBJ, OCSP_ONEREQ *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x17b8, int, OCSP_ONEREQ_get_ext_by_critical, OCSP_ONEREQ *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext(x, loc) \
  LP2(0x17be, X509_EXTENSION *, OCSP_ONEREQ_get_ext, OCSP_ONEREQ *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_delete_ext(x, loc) \
  LP2(0x17c4, X509_EXTENSION *, OCSP_ONEREQ_delete_ext, OCSP_ONEREQ *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get1_ext_d2i(x, nid, crit, idx) \
  LP4(0x17ca, void *, OCSP_ONEREQ_get1_ext_d2i, OCSP_ONEREQ *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x17d0, int, OCSP_ONEREQ_add1_ext_i2d, OCSP_ONEREQ *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_add_ext(x, ex, loc) \
  LP3(0x17d6, int, OCSP_ONEREQ_add_ext, OCSP_ONEREQ *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_count(x) \
  LP1(0x17dc, int, OCSP_BASICRESP_get_ext_count, OCSP_BASICRESP *, x, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x17e2, int, OCSP_BASICRESP_get_ext_by_NID, OCSP_BASICRESP *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x17e8, int, OCSP_BASICRESP_get_ext_by_OBJ, OCSP_BASICRESP *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x17ee, int, OCSP_BASICRESP_get_ext_by_critical, OCSP_BASICRESP *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext(x, loc) \
  LP2(0x17f4, X509_EXTENSION *, OCSP_BASICRESP_get_ext, OCSP_BASICRESP *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_delete_ext(x, loc) \
  LP2(0x17fa, X509_EXTENSION *, OCSP_BASICRESP_delete_ext, OCSP_BASICRESP *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get1_ext_d2i(x, nid, crit, idx) \
  LP4(0x1800, void *, OCSP_BASICRESP_get1_ext_d2i, OCSP_BASICRESP *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x1806, int, OCSP_BASICRESP_add1_ext_i2d, OCSP_BASICRESP *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_add_ext(x, ex, loc) \
  LP3(0x180c, int, OCSP_BASICRESP_add_ext, OCSP_BASICRESP *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_count(x) \
  LP1(0x1812, int, OCSP_SINGLERESP_get_ext_count, OCSP_SINGLERESP *, x, a0, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x1818, int, OCSP_SINGLERESP_get_ext_by_NID, OCSP_SINGLERESP *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x181e, int, OCSP_SINGLERESP_get_ext_by_OBJ, OCSP_SINGLERESP *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x1824, int, OCSP_SINGLERESP_get_ext_by_critical, OCSP_SINGLERESP *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext(x, loc) \
  LP2(0x182a, X509_EXTENSION *, OCSP_SINGLERESP_get_ext, OCSP_SINGLERESP *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_delete_ext(x, loc) \
  LP2(0x1830, X509_EXTENSION *, OCSP_SINGLERESP_delete_ext, OCSP_SINGLERESP *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get1_ext_d2i(x, nid, crit, idx) \
  LP4(0x1836, void *, OCSP_SINGLERESP_get1_ext_d2i, OCSP_SINGLERESP *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x183c, int, OCSP_SINGLERESP_add1_ext_i2d, OCSP_SINGLERESP *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_add_ext(x, ex, loc) \
  LP3(0x1842, int, OCSP_SINGLERESP_add_ext, OCSP_SINGLERESP *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_new() \
  LP0(0x1848, OCSP_SINGLERESP *, OCSP_SINGLERESP_new, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_free(a) \
  LP1NR(0x184e, OCSP_SINGLERESP_free, OCSP_SINGLERESP *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_SINGLERESP(a, in, len) \
  LP3(0x1854, OCSP_SINGLERESP *, d2i_OCSP_SINGLERESP, OCSP_SINGLERESP **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_SINGLERESP(a, out) \
  LP2(0x185a, int, i2d_OCSP_SINGLERESP, OCSP_SINGLERESP *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_it() \
  LP0(0x1860, const ASN1_ITEM *, OCSP_SINGLERESP_it, \
  , AMISSL_BASE_NAME)

#define OCSP_CERTSTATUS_new() \
  LP0(0x1866, OCSP_CERTSTATUS *, OCSP_CERTSTATUS_new, \
  , AMISSL_BASE_NAME)

#define OCSP_CERTSTATUS_free(a) \
  LP1NR(0x186c, OCSP_CERTSTATUS_free, OCSP_CERTSTATUS *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_CERTSTATUS(a, in, len) \
  LP3(0x1872, OCSP_CERTSTATUS *, d2i_OCSP_CERTSTATUS, OCSP_CERTSTATUS **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_CERTSTATUS(a, out) \
  LP2(0x1878, int, i2d_OCSP_CERTSTATUS, OCSP_CERTSTATUS *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_CERTSTATUS_it() \
  LP0(0x187e, const ASN1_ITEM *, OCSP_CERTSTATUS_it, \
  , AMISSL_BASE_NAME)

#define OCSP_REVOKEDINFO_new() \
  LP0(0x1884, OCSP_REVOKEDINFO *, OCSP_REVOKEDINFO_new, \
  , AMISSL_BASE_NAME)

#define OCSP_REVOKEDINFO_free(a) \
  LP1NR(0x188a, OCSP_REVOKEDINFO_free, OCSP_REVOKEDINFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_REVOKEDINFO(a, in, len) \
  LP3(0x1890, OCSP_REVOKEDINFO *, d2i_OCSP_REVOKEDINFO, OCSP_REVOKEDINFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_REVOKEDINFO(a, out) \
  LP2(0x1896, int, i2d_OCSP_REVOKEDINFO, OCSP_REVOKEDINFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_REVOKEDINFO_it() \
  LP0(0x189c, const ASN1_ITEM *, OCSP_REVOKEDINFO_it, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_new() \
  LP0(0x18a2, OCSP_BASICRESP *, OCSP_BASICRESP_new, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_free(a) \
  LP1NR(0x18a8, OCSP_BASICRESP_free, OCSP_BASICRESP *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_BASICRESP(a, in, len) \
  LP3(0x18ae, OCSP_BASICRESP *, d2i_OCSP_BASICRESP, OCSP_BASICRESP **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_BASICRESP(a, out) \
  LP2(0x18b4, int, i2d_OCSP_BASICRESP, OCSP_BASICRESP *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_BASICRESP_it() \
  LP0(0x18ba, const ASN1_ITEM *, OCSP_BASICRESP_it, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPDATA_new() \
  LP0(0x18c0, OCSP_RESPDATA *, OCSP_RESPDATA_new, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPDATA_free(a) \
  LP1NR(0x18c6, OCSP_RESPDATA_free, OCSP_RESPDATA *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_RESPDATA(a, in, len) \
  LP3(0x18cc, OCSP_RESPDATA *, d2i_OCSP_RESPDATA, OCSP_RESPDATA **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_RESPDATA(a, out) \
  LP2(0x18d2, int, i2d_OCSP_RESPDATA, OCSP_RESPDATA *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPDATA_it() \
  LP0(0x18d8, const ASN1_ITEM *, OCSP_RESPDATA_it, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPID_new() \
  LP0(0x18de, OCSP_RESPID *, OCSP_RESPID_new, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPID_free(a) \
  LP1NR(0x18e4, OCSP_RESPID_free, OCSP_RESPID *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_RESPID(a, in, len) \
  LP3(0x18ea, OCSP_RESPID *, d2i_OCSP_RESPID, OCSP_RESPID **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_RESPID(a, out) \
  LP2(0x18f0, int, i2d_OCSP_RESPID, OCSP_RESPID *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPID_it() \
  LP0(0x18f6, const ASN1_ITEM *, OCSP_RESPID_it, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPONSE_new() \
  LP0(0x18fc, OCSP_RESPONSE *, OCSP_RESPONSE_new, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPONSE_free(a) \
  LP1NR(0x1902, OCSP_RESPONSE_free, OCSP_RESPONSE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_RESPONSE(a, in, len) \
  LP3(0x1908, OCSP_RESPONSE *, d2i_OCSP_RESPONSE, OCSP_RESPONSE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_RESPONSE(a, out) \
  LP2(0x190e, int, i2d_OCSP_RESPONSE, OCSP_RESPONSE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPONSE_it() \
  LP0(0x1914, const ASN1_ITEM *, OCSP_RESPONSE_it, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPBYTES_new() \
  LP0(0x191a, OCSP_RESPBYTES *, OCSP_RESPBYTES_new, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPBYTES_free(a) \
  LP1NR(0x1920, OCSP_RESPBYTES_free, OCSP_RESPBYTES *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_RESPBYTES(a, in, len) \
  LP3(0x1926, OCSP_RESPBYTES *, d2i_OCSP_RESPBYTES, OCSP_RESPBYTES **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_RESPBYTES(a, out) \
  LP2(0x192c, int, i2d_OCSP_RESPBYTES, OCSP_RESPBYTES *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPBYTES_it() \
  LP0(0x1932, const ASN1_ITEM *, OCSP_RESPBYTES_it, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_new() \
  LP0(0x1938, OCSP_ONEREQ *, OCSP_ONEREQ_new, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_free(a) \
  LP1NR(0x193e, OCSP_ONEREQ_free, OCSP_ONEREQ *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_ONEREQ(a, in, len) \
  LP3(0x1944, OCSP_ONEREQ *, d2i_OCSP_ONEREQ, OCSP_ONEREQ **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_ONEREQ(a, out) \
  LP2(0x194a, int, i2d_OCSP_ONEREQ, OCSP_ONEREQ *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_ONEREQ_it() \
  LP0(0x1950, const ASN1_ITEM *, OCSP_ONEREQ_it, \
  , AMISSL_BASE_NAME)

#define OCSP_CERTID_new() \
  LP0(0x1956, OCSP_CERTID *, OCSP_CERTID_new, \
  , AMISSL_BASE_NAME)

#define OCSP_CERTID_free(a) \
  LP1NR(0x195c, OCSP_CERTID_free, OCSP_CERTID *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_CERTID(a, in, len) \
  LP3(0x1962, OCSP_CERTID *, d2i_OCSP_CERTID, OCSP_CERTID **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_CERTID(a, out) \
  LP2(0x1968, int, i2d_OCSP_CERTID, OCSP_CERTID *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_CERTID_it() \
  LP0(0x196e, const ASN1_ITEM *, OCSP_CERTID_it, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_new() \
  LP0(0x1974, OCSP_REQUEST *, OCSP_REQUEST_new, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_free(a) \
  LP1NR(0x197a, OCSP_REQUEST_free, OCSP_REQUEST *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_REQUEST(a, in, len) \
  LP3(0x1980, OCSP_REQUEST *, d2i_OCSP_REQUEST, OCSP_REQUEST **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_REQUEST(a, out) \
  LP2(0x1986, int, i2d_OCSP_REQUEST, OCSP_REQUEST *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_it() \
  LP0(0x198c, const ASN1_ITEM *, OCSP_REQUEST_it, \
  , AMISSL_BASE_NAME)

#define OCSP_SIGNATURE_new() \
  LP0(0x1992, OCSP_SIGNATURE *, OCSP_SIGNATURE_new, \
  , AMISSL_BASE_NAME)

#define OCSP_SIGNATURE_free(a) \
  LP1NR(0x1998, OCSP_SIGNATURE_free, OCSP_SIGNATURE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_SIGNATURE(a, in, len) \
  LP3(0x199e, OCSP_SIGNATURE *, d2i_OCSP_SIGNATURE, OCSP_SIGNATURE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_SIGNATURE(a, out) \
  LP2(0x19a4, int, i2d_OCSP_SIGNATURE, OCSP_SIGNATURE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_SIGNATURE_it() \
  LP0(0x19aa, const ASN1_ITEM *, OCSP_SIGNATURE_it, \
  , AMISSL_BASE_NAME)

#define OCSP_REQINFO_new() \
  LP0(0x19b0, OCSP_REQINFO *, OCSP_REQINFO_new, \
  , AMISSL_BASE_NAME)

#define OCSP_REQINFO_free(a) \
  LP1NR(0x19b6, OCSP_REQINFO_free, OCSP_REQINFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_REQINFO(a, in, len) \
  LP3(0x19bc, OCSP_REQINFO *, d2i_OCSP_REQINFO, OCSP_REQINFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_REQINFO(a, out) \
  LP2(0x19c2, int, i2d_OCSP_REQINFO, OCSP_REQINFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_REQINFO_it() \
  LP0(0x19c8, const ASN1_ITEM *, OCSP_REQINFO_it, \
  , AMISSL_BASE_NAME)

#define OCSP_CRLID_new() \
  LP0(0x19ce, OCSP_CRLID *, OCSP_CRLID_new, \
  , AMISSL_BASE_NAME)

#define OCSP_CRLID_free(a) \
  LP1NR(0x19d4, OCSP_CRLID_free, OCSP_CRLID *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_CRLID(a, in, len) \
  LP3(0x19da, OCSP_CRLID *, d2i_OCSP_CRLID, OCSP_CRLID **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_CRLID(a, out) \
  LP2(0x19e0, int, i2d_OCSP_CRLID, OCSP_CRLID *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_CRLID_it() \
  LP0(0x19e6, const ASN1_ITEM *, OCSP_CRLID_it, \
  , AMISSL_BASE_NAME)

#define OCSP_SERVICELOC_new() \
  LP0(0x19ec, OCSP_SERVICELOC *, OCSP_SERVICELOC_new, \
  , AMISSL_BASE_NAME)

#define OCSP_SERVICELOC_free(a) \
  LP1NR(0x19f2, OCSP_SERVICELOC_free, OCSP_SERVICELOC *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OCSP_SERVICELOC(a, in, len) \
  LP3(0x19f8, OCSP_SERVICELOC *, d2i_OCSP_SERVICELOC, OCSP_SERVICELOC **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OCSP_SERVICELOC(a, out) \
  LP2(0x19fe, int, i2d_OCSP_SERVICELOC, OCSP_SERVICELOC *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OCSP_SERVICELOC_it() \
  LP0(0x1a04, const ASN1_ITEM *, OCSP_SERVICELOC_it, \
  , AMISSL_BASE_NAME)

#define OCSP_response_status_str(s) \
  LP1(0x1a0a, char *, OCSP_response_status_str, long, s, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_cert_status_str(s) \
  LP1(0x1a10, char *, OCSP_cert_status_str, long, s, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_crl_reason_str(s) \
  LP1(0x1a16, char *, OCSP_crl_reason_str, long, s, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_REQUEST_print(bp, a, flags) \
  LP3(0x1a1c, int, OCSP_REQUEST_print, BIO *, bp, a0, OCSP_REQUEST*, a, a1, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_RESPONSE_print(bp, o, flags) \
  LP3(0x1a22, int, OCSP_RESPONSE_print, BIO *, bp, a0, OCSP_RESPONSE*, o, a1, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define OCSP_basic_verify(bs, certs, st, flags) \
  LP4(0x1a28, int, OCSP_basic_verify, OCSP_BASICRESP *, bs, a0, STACK_OF(X509) *, certs, a1, X509_STORE *, st, a2, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define ERR_load_OCSP_strings() \
  LP0NR(0x1a2e, ERR_load_OCSP_strings, \
  , AMISSL_BASE_NAME)

#define PEM_get_EVP_CIPHER_INFO(header, cipher) \
  LP2(0x1a34, int, PEM_get_EVP_CIPHER_INFO, char *, header, a0, EVP_CIPHER_INFO *, cipher, a1, \
  , AMISSL_BASE_NAME)

#define PEM_do_header(cipher, data, len, callback, u) \
  LP5FP(0x1a3a, int, PEM_do_header, EVP_CIPHER_INFO *, cipher, a0, unsigned char *, data, a1, long *, len, a2, __fpt, callback, a3, void *, u, d0, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_read_bio(bp, name, header, data, len) \
  LP5(0x1a40, int, PEM_read_bio, BIO *, bp, a0, char **, name, a1, char **, header, a2, unsigned char **, data, a3, long *, len, d0, \
  , AMISSL_BASE_NAME)

#define PEM_write_bio(bp, name, hdr, data, len) \
  LP5(0x1a46, int, PEM_write_bio, BIO *, bp, a0, const char *, name, a1, char *, hdr, a2, unsigned char *, data, a3, long, len, d0, \
  , AMISSL_BASE_NAME)

#define PEM_bytes_read_bio(pdata, plen, pnm, name, bp, cb, u) \
  LP7FP(0x1a4c, int, PEM_bytes_read_bio, unsigned char **, pdata, a0, long *, plen, a1, char **, pnm, a2, const char *, name, a3, BIO *, bp, d0, __fpt, cb, d1, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_ASN1_read_bio(d2i, name, bp, x, cb, u) \
  LP6FP(0x1a52, char *, PEM_ASN1_read_bio, __fpt, d2i, a0, const char *, name, a1, BIO *, bp, a2, char **, x, a3, void *, cb, d0, void *, u, d1, \
  , AMISSL_BASE_NAME, char * (*__fpt)())

#define PEM_ASN1_write_bio(i2d, name, bp, x, enc, kstr, klen, cb, u) \
  LP9FP(0x1a58, int, PEM_ASN1_write_bio, __fpt, i2d, a0, const char *, name, a1, BIO *, bp, a2, char *, x, a3, const EVP_CIPHER *, enc, d0, unsigned char *, kstr, d1, LONG, klen, d2, void *, cb, d3, void *, u, d4, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define PEM_X509_INFO_read_bio(bp, sk, cb, u) \
  LP4FP(0x1a5e, STACK_OF(X509_INFO) *, PEM_X509_INFO_read_bio, BIO *, bp, a0, STACK_OF(X509_INFO) *, sk, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_X509_INFO_write_bio(bp, xi, enc, kstr, klen, cd, u) \
  LP7FP(0x1a64, int, PEM_X509_INFO_write_bio, BIO *, bp, a0, X509_INFO *, xi, a1, EVP_CIPHER *, enc, a2, unsigned char *, kstr, a3, LONG, klen, d0, __fpt, cd, d1, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_SealInit(ctx, type, md_type, ek, ekl, iv, pubk, npubk) \
  LP8(0x1a6a, int, PEM_SealInit, PEM_ENCODE_SEAL_CTX *, ctx, a0, EVP_CIPHER *, type, a1, EVP_MD *, md_type, a2, unsigned char **, ek, a3, int *, ekl, d0, unsigned char *, iv, d1, EVP_PKEY **, pubk, d2, LONG, npubk, d3, \
  , AMISSL_BASE_NAME)

#define PEM_SealUpdate(ctx, out, outl, in, inl) \
  LP5NR(0x1a70, PEM_SealUpdate, PEM_ENCODE_SEAL_CTX *, ctx, a0, unsigned char *, out, a1, int *, outl, a2, unsigned char *, in, a3, LONG, inl, d0, \
  , AMISSL_BASE_NAME)

#define PEM_SealFinal(ctx, sig, sigl, out, outl, priv) \
  LP6(0x1a76, int, PEM_SealFinal, PEM_ENCODE_SEAL_CTX *, ctx, a0, unsigned char *, sig, a1, int *, sigl, a2, unsigned char *, out, a3, int *, outl, d0, EVP_PKEY *, priv, d1, \
  , AMISSL_BASE_NAME)

#define PEM_SignInit(ctx, type) \
  LP2NR(0x1a7c, PEM_SignInit, EVP_MD_CTX *, ctx, a0, EVP_MD *, type, a1, \
  , AMISSL_BASE_NAME)

#define PEM_SignUpdate(ctx, d, cnt) \
  LP3NR(0x1a82, PEM_SignUpdate, EVP_MD_CTX *, ctx, a0, unsigned char *, d, a1, ULONG, cnt, d0, \
  , AMISSL_BASE_NAME)

#define PEM_SignFinal(ctx, sigret, siglen, pkey) \
  LP4(0x1a88, int, PEM_SignFinal, EVP_MD_CTX *, ctx, a0, unsigned char *, sigret, a1, unsigned int *, siglen, a2, EVP_PKEY *, pkey, a3, \
  , AMISSL_BASE_NAME)

#define PEM_def_callback(buf, num, w, key) \
  LP4(0x1a8e, int, PEM_def_callback, char *, buf, a0, LONG, num, d0, LONG, w, d1, void *, key, a1, \
  , AMISSL_BASE_NAME)

#define PEM_proc_type(buf, type) \
  LP2NR(0x1a94, PEM_proc_type, char *, buf, a0, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define PEM_dek_info(buf, type, len, str) \
  LP4NR(0x1a9a, PEM_dek_info, char *, buf, a0, const char *, type, a1, LONG, len, d0, char *, str, a2, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_X509(bp, x, cb, u) \
  LP4FP(0x1aa0, X509 *, PEM_read_bio_X509, BIO *, bp, a0, X509 **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_X509(bp, x) \
  LP2(0x1aa6, int, PEM_write_bio_X509, BIO *, bp, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_X509_AUX(bp, x, cb, u) \
  LP4FP(0x1aac, X509 *, PEM_read_bio_X509_AUX, BIO *, bp, a0, X509 **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_X509_AUX(bp, x) \
  LP2(0x1ab2, int, PEM_write_bio_X509_AUX, BIO *, bp, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_X509_REQ(bp, x, cb, u) \
  LP4FP(0x1ab8, X509_REQ *, PEM_read_bio_X509_REQ, BIO *, bp, a0, X509_REQ **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_X509_REQ(bp, x) \
  LP2(0x1abe, int, PEM_write_bio_X509_REQ, BIO *, bp, a0, X509_REQ *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_write_bio_X509_REQ_NEW(bp, x) \
  LP2(0x1ac4, int, PEM_write_bio_X509_REQ_NEW, BIO *, bp, a0, X509_REQ *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_X509_CRL(bp, x, cb, u) \
  LP4FP(0x1aca, X509_CRL *, PEM_read_bio_X509_CRL, BIO *, bp, a0, X509_CRL **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_X509_CRL(bp, x) \
  LP2(0x1ad0, int, PEM_write_bio_X509_CRL, BIO *, bp, a0, X509_CRL *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_PKCS7(bp, x, cb, u) \
  LP4FP(0x1ad6, PKCS7 *, PEM_read_bio_PKCS7, BIO *, bp, a0, PKCS7 **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_PKCS7(bp, x) \
  LP2(0x1adc, int, PEM_write_bio_PKCS7, BIO *, bp, a0, PKCS7 *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_NETSCAPE_CERT_SEQUENCE(bp, x, cb, u) \
  LP4FP(0x1ae2, NETSCAPE_CERT_SEQUENCE *, PEM_read_bio_NETSCAPE_CERT_SEQUENCE, BIO *, bp, a0, NETSCAPE_CERT_SEQUENCE **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_NETSCAPE_CERT_SEQUENCE(bp, x) \
  LP2(0x1ae8, int, PEM_write_bio_NETSCAPE_CERT_SEQUENCE, BIO *, bp, a0, NETSCAPE_CERT_SEQUENCE *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_PKCS8(bp, x, cb, u) \
  LP4FP(0x1aee, X509_SIG *, PEM_read_bio_PKCS8, BIO *, bp, a0, X509_SIG **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_PKCS8(bp, x) \
  LP2(0x1af4, int, PEM_write_bio_PKCS8, BIO *, bp, a0, X509_SIG *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_PKCS8_PRIV_KEY_INFO(bp, x, cb, u) \
  LP4FP(0x1afa, PKCS8_PRIV_KEY_INFO *, PEM_read_bio_PKCS8_PRIV_KEY_INFO, BIO *, bp, a0, PKCS8_PRIV_KEY_INFO **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp, x) \
  LP2(0x1b00, int, PEM_write_bio_PKCS8_PRIV_KEY_INFO, BIO *, bp, a0, PKCS8_PRIV_KEY_INFO *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_RSAPrivateKey(bp, x, cb, u) \
  LP4FP(0x1b06, RSA *, PEM_read_bio_RSAPrivateKey, BIO *, bp, a0, RSA **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_RSAPrivateKey(bp, x, enc, kstr, klen, cb, u) \
  LP7FP(0x1b0c, int, PEM_write_bio_RSAPrivateKey, BIO *, bp, a0, RSA *, x, a1, const EVP_CIPHER *, enc, a2, unsigned char *, kstr, a3, LONG, klen, d0, __fpt, cb, d1, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_read_bio_RSAPublicKey(bp, x, cb, u) \
  LP4FP(0x1b12, RSA *, PEM_read_bio_RSAPublicKey, BIO *, bp, a0, RSA **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_RSAPublicKey(bp, x) \
  LP2(0x1b18, int, PEM_write_bio_RSAPublicKey, BIO *, bp, a0, RSA *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_RSA_PUBKEY(bp, x, cb, u) \
  LP4FP(0x1b1e, RSA *, PEM_read_bio_RSA_PUBKEY, BIO *, bp, a0, RSA **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_RSA_PUBKEY(bp, x) \
  LP2(0x1b24, int, PEM_write_bio_RSA_PUBKEY, BIO *, bp, a0, RSA *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_DSAPrivateKey(bp, x, cb, u) \
  LP4FP(0x1b2a, DSA *, PEM_read_bio_DSAPrivateKey, BIO *, bp, a0, DSA **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_DSAPrivateKey(bp, x, enc, kstr, klen, cb, u) \
  LP7FP(0x1b30, int, PEM_write_bio_DSAPrivateKey, BIO *, bp, a0, DSA *, x, a1, const EVP_CIPHER *, enc, a2, unsigned char *, kstr, a3, LONG, klen, d0, __fpt, cb, d1, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_read_bio_DSA_PUBKEY(bp, x, cb, u) \
  LP4FP(0x1b36, DSA *, PEM_read_bio_DSA_PUBKEY, BIO *, bp, a0, DSA **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_DSA_PUBKEY(bp, x) \
  LP2(0x1b3c, int, PEM_write_bio_DSA_PUBKEY, BIO *, bp, a0, DSA *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_DSAparams(bp, x, cb, u) \
  LP4FP(0x1b42, DSA *, PEM_read_bio_DSAparams, BIO *, bp, a0, DSA **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_DSAparams(bp, x) \
  LP2(0x1b48, int, PEM_write_bio_DSAparams, BIO *, bp, a0, DSA *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_DHparams(bp, x, cb, u) \
  LP4FP(0x1b4e, DH *, PEM_read_bio_DHparams, BIO *, bp, a0, DH **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_DHparams(bp, x) \
  LP2(0x1b54, int, PEM_write_bio_DHparams, BIO *, bp, a0, DH *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_read_bio_PrivateKey(bp, x, cb, u) \
  LP4FP(0x1b5a, EVP_PKEY *, PEM_read_bio_PrivateKey, BIO *, bp, a0, EVP_PKEY **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_PrivateKey(bp, x, enc, kstr, klen, cb, u) \
  LP7FP(0x1b60, int, PEM_write_bio_PrivateKey, BIO *, bp, a0, EVP_PKEY *, x, a1, const EVP_CIPHER *, enc, a2, unsigned char *, kstr, a3, LONG, klen, d0, __fpt, cb, d1, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_read_bio_PUBKEY(bp, x, cb, u) \
  LP4FP(0x1b66, EVP_PKEY *, PEM_read_bio_PUBKEY, BIO *, bp, a0, EVP_PKEY **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_PUBKEY(bp, x) \
  LP2(0x1b6c, int, PEM_write_bio_PUBKEY, BIO *, bp, a0, EVP_PKEY *, x, a1, \
  , AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS8PrivateKey_nid(bp, x, nid, kstr, klen, cb, u) \
  LP7FP(0x1b72, int, PEM_write_bio_PKCS8PrivateKey_nid, BIO *, bp, a0, EVP_PKEY *, x, a1, LONG, nid, d0, char *, kstr, a2, LONG, klen, d1, __fpt, cb, a3, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define PEM_write_bio_PKCS8PrivateKey(a, b, c, d, a1, e, f) \
  LP7FP(0x1b78, int, PEM_write_bio_PKCS8PrivateKey, BIO *, a, a0, EVP_PKEY *, b, a1, const EVP_CIPHER *, c, a2, char *, d, a3, LONG, a1, d0, __fpt, e, d1, void *, f, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define i2d_PKCS8PrivateKey_bio(bp, x, enc, kstr, klen, cb, u) \
  LP7FP(0x1b7e, int, i2d_PKCS8PrivateKey_bio, BIO *, bp, a0, EVP_PKEY *, x, a1, const EVP_CIPHER *, enc, a2, char *, kstr, a3, LONG, klen, d0, __fpt, cb, d1, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define i2d_PKCS8PrivateKey_nid_bio(bp, x, nid, kstr, klen, cb, u) \
  LP7FP(0x1b84, int, i2d_PKCS8PrivateKey_nid_bio, BIO *, bp, a0, EVP_PKEY *, x, a1, LONG, nid, d0, char *, kstr, a2, LONG, klen, d1, __fpt, cb, a3, void *, u, d2, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define d2i_PKCS8PrivateKey_bio(bp, x, cb, u) \
  LP4FP(0x1b8a, EVP_PKEY *, d2i_PKCS8PrivateKey_bio, BIO *, bp, a0, EVP_PKEY **, x, a1, __fpt, cb, a2, void *, u, a3, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define ERR_load_PEM_strings() \
  LP0NR(0x1b90, ERR_load_PEM_strings, \
  , AMISSL_BASE_NAME)

#define PKCS12_x5092certbag(x509) \
  LP1(0x1b96, PKCS12_SAFEBAG *, PKCS12_x5092certbag, X509 *, x509, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_x509crl2certbag(crl) \
  LP1(0x1b9c, PKCS12_SAFEBAG *, PKCS12_x509crl2certbag, X509_CRL *, crl, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_certbag2x509(bag) \
  LP1(0x1ba2, X509 *, PKCS12_certbag2x509, PKCS12_SAFEBAG *, bag, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_certbag2x509crl(bag) \
  LP1(0x1ba8, X509_CRL *, PKCS12_certbag2x509crl, PKCS12_SAFEBAG *, bag, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_item_pack_safebag(obj, it, nid1, nid2) \
  LP4(0x1bae, PKCS12_SAFEBAG *, PKCS12_item_pack_safebag, void *, obj, a0, const ASN1_ITEM *, it, a1, LONG, nid1, d0, LONG, nid2, d1, \
  , AMISSL_BASE_NAME)

#define PKCS12_MAKE_KEYBAG(p8) \
  LP1(0x1bb4, PKCS12_SAFEBAG *, PKCS12_MAKE_KEYBAG, PKCS8_PRIV_KEY_INFO *, p8, a0, \
  , AMISSL_BASE_NAME)

#define PKCS8_decrypt(p8, pass, passlen) \
  LP3(0x1bba, PKCS8_PRIV_KEY_INFO *, PKCS8_decrypt, X509_SIG *, p8, a0, const char *, pass, a1, LONG, passlen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_decrypt_skey(bag, pass, passlen) \
  LP3(0x1bc0, PKCS8_PRIV_KEY_INFO *, PKCS12_decrypt_skey, PKCS12_SAFEBAG *, bag, a0, const char *, pass, a1, LONG, passlen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS8_encrypt(pbe_nid, cipher, pass, passlen, salt, saltlen, iter, p8) \
  LP8(0x1bc6, X509_SIG *, PKCS8_encrypt, LONG, pbe_nid, d0, const EVP_CIPHER *, cipher, a0, const char *, pass, a1, LONG, passlen, d1, unsigned char *, salt, a2, LONG, saltlen, d2, LONG, iter, d3, PKCS8_PRIV_KEY_INFO *, p8, a3, \
  , AMISSL_BASE_NAME)

#define PKCS12_MAKE_SHKEYBAG(pbe_nid, pass, passlen, salt, saltlen, iter, p8) \
  LP7(0x1bcc, PKCS12_SAFEBAG *, PKCS12_MAKE_SHKEYBAG, LONG, pbe_nid, d0, const char *, pass, a0, LONG, passlen, d1, unsigned char *, salt, a1, LONG, saltlen, d2, LONG, iter, d3, PKCS8_PRIV_KEY_INFO *, p8, a2, \
  , AMISSL_BASE_NAME)

#define PKCS12_pack_p7data(sk) \
  LP1(0x1bd2, PKCS7 *, PKCS12_pack_p7data, STACK_OF(PKCS12_SAFEBAG) *, sk, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_unpack_p7data(p7) \
  LP1(0x1bd8, STACK_OF(PKCS12_SAFEBAG) *, PKCS12_unpack_p7data, PKCS7 *, p7, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_pack_p7encdata(pbe_nid, pass, passlen, salt, saltlen, iter, bags) \
  LP7(0x1bde, PKCS7 *, PKCS12_pack_p7encdata, LONG, pbe_nid, d0, const char *, pass, a0, LONG, passlen, d1, unsigned char *, salt, a1, LONG, saltlen, d2, LONG, iter, d3, STACK_OF(PKCS12_SAFEBAG) *, bags, a2, \
  , AMISSL_BASE_NAME)

#define PKCS12_unpack_p7encdata(p7, pass, passlen) \
  LP3(0x1be4, STACK_OF(PKCS12_SAFEBAG) *, PKCS12_unpack_p7encdata, PKCS7 *, p7, a0, const char *, pass, a1, LONG, passlen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_pack_authsafes(p12, safes) \
  LP2(0x1bea, int, PKCS12_pack_authsafes, PKCS12 *, p12, a0, STACK_OF(PKCS7) *, safes, a1, \
  , AMISSL_BASE_NAME)

#define PKCS12_unpack_authsafes(p12) \
  LP1(0x1bf0, STACK_OF(PKCS7) *, PKCS12_unpack_authsafes, PKCS12 *, p12, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_add_localkeyid(bag, name, namelen) \
  LP3(0x1bf6, int, PKCS12_add_localkeyid, PKCS12_SAFEBAG *, bag, a0, unsigned char *, name, a1, LONG, namelen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_add_friendlyname_asc(bag, name, namelen) \
  LP3(0x1bfc, int, PKCS12_add_friendlyname_asc, PKCS12_SAFEBAG *, bag, a0, const char *, name, a1, LONG, namelen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_add_CSPName_asc(bag, name, namelen) \
  LP3(0x1c02, int, PKCS12_add_CSPName_asc, PKCS12_SAFEBAG *, bag, a0, const char *, name, a1, LONG, namelen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_add_friendlyname_uni(bag, name, namelen) \
  LP3(0x1c08, int, PKCS12_add_friendlyname_uni, PKCS12_SAFEBAG *, bag, a0, const unsigned char *, name, a1, LONG, namelen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS8_add_keyusage(p8, usage) \
  LP2(0x1c0e, int, PKCS8_add_keyusage, PKCS8_PRIV_KEY_INFO *, p8, a0, LONG, usage, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_get_attr_gen(attrs, attr_nid) \
  LP2(0x1c14, ASN1_TYPE *, PKCS12_get_attr_gen, STACK_OF(X509_ATTRIBUTE) *, attrs, a0, LONG, attr_nid, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_get_friendlyname(bag) \
  LP1(0x1c1a, char *, PKCS12_get_friendlyname, PKCS12_SAFEBAG *, bag, a0, \
  , AMISSL_BASE_NAME)

#define PKCS12_pbe_crypt(algor, pass, passlen, in, inlen, data, datalen, en_de) \
  LP8(0x1c20, unsigned char *, PKCS12_pbe_crypt, X509_ALGOR *, algor, a0, const char *, pass, a1, LONG, passlen, d0, unsigned char *, in, a2, LONG, inlen, d1, unsigned char **, data, a3, int *, datalen, d2, LONG, en_de, d3, \
  , AMISSL_BASE_NAME)

#define PKCS12_item_decrypt_d2i(algor, it, pass, passlen, oct, zbuf) \
  LP6(0x1c26, void *, PKCS12_item_decrypt_d2i, X509_ALGOR *, algor, a0, const ASN1_ITEM *, it, a1, const char *, pass, a2, LONG, passlen, d0, ASN1_OCTET_STRING *, oct, a3, LONG, zbuf, d1, \
  , AMISSL_BASE_NAME)

#define PKCS12_item_i2d_encrypt(algor, it, pass, passlen, obj, zbuf) \
  LP6(0x1c2c, ASN1_OCTET_STRING *, PKCS12_item_i2d_encrypt, X509_ALGOR *, algor, a0, const ASN1_ITEM *, it, a1, const char *, pass, a2, LONG, passlen, d0, void *, obj, a3, LONG, zbuf, d1, \
  , AMISSL_BASE_NAME)

#define PKCS12_init(mode) \
  LP1(0x1c32, PKCS12 *, PKCS12_init, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_key_gen_asc(pass, passlen, salt, saltlen, id, iter, n, out, md_type) \
  LP9(0x1c38, int, PKCS12_key_gen_asc, const char *, pass, a0, LONG, passlen, d0, unsigned char *, salt, a1, LONG, saltlen, d1, LONG, id, d2, LONG, iter, d3, LONG, n, d4, unsigned char *, out, a2, const EVP_MD *, md_type, a3, \
  , AMISSL_BASE_NAME)

#define PKCS12_key_gen_uni(pass, passlen, salt, saltlen, id, iter, n, out, md_type) \
  LP9(0x1c3e, int, PKCS12_key_gen_uni, unsigned char *, pass, a0, LONG, passlen, d0, unsigned char *, salt, a1, LONG, saltlen, d1, LONG, id, d2, LONG, iter, d3, LONG, n, d4, unsigned char *, out, a2, const EVP_MD *, md_type, a3, \
  , AMISSL_BASE_NAME)

#define PKCS12_PBE_keyivgen(ctx, pass, passlen, param, cipher, md_type, en_de) \
  LP7(0x1c44, int, PKCS12_PBE_keyivgen, EVP_CIPHER_CTX *, ctx, a0, const char *, pass, a1, LONG, passlen, d0, ASN1_TYPE *, param, a2, const EVP_CIPHER *, cipher, a3, const EVP_MD *, md_type, d1, LONG, en_de, d2, \
  , AMISSL_BASE_NAME)

#define PKCS12_gen_mac(p12, pass, passlen, mac, maclen) \
  LP5(0x1c4a, int, PKCS12_gen_mac, PKCS12 *, p12, a0, const char *, pass, a1, LONG, passlen, d0, unsigned char *, mac, a2, unsigned int *, maclen, a3, \
  , AMISSL_BASE_NAME)

#define PKCS12_verify_mac(p12, pass, passlen) \
  LP3(0x1c50, int, PKCS12_verify_mac, PKCS12 *, p12, a0, const char *, pass, a1, LONG, passlen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_set_mac(p12, pass, passlen, salt, saltlen, iter, md_type) \
  LP7(0x1c56, int, PKCS12_set_mac, PKCS12 *, p12, a0, const char *, pass, a1, LONG, passlen, d0, unsigned char *, salt, a2, LONG, saltlen, d1, LONG, iter, d2, const EVP_MD *, md_type, a3, \
  , AMISSL_BASE_NAME)

#define PKCS12_setup_mac(p12, iter, salt, saltlen, md_type) \
  LP5(0x1c5c, int, PKCS12_setup_mac, PKCS12 *, p12, a0, LONG, iter, d0, unsigned char *, salt, a1, LONG, saltlen, d1, const EVP_MD *, md_type, a2, \
  , AMISSL_BASE_NAME)

#define asc2uni(asc, asclen, uni, unilen) \
  LP4(0x1c62, unsigned char *, asc2uni, const char *, asc, a0, LONG, asclen, d0, unsigned char **, uni, a1, int *, unilen, a2, \
  , AMISSL_BASE_NAME)

#define uni2asc(uni, unilen) \
  LP2(0x1c68, char *, uni2asc, unsigned char *, uni, a0, LONG, unilen, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_new() \
  LP0(0x1c6e, PKCS12 *, PKCS12_new, \
  , AMISSL_BASE_NAME)

#define PKCS12_free(a) \
  LP1NR(0x1c74, PKCS12_free, PKCS12 *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS12(a, in, len) \
  LP3(0x1c7a, PKCS12 *, d2i_PKCS12, PKCS12 **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS12(a, out) \
  LP2(0x1c80, int, i2d_PKCS12, PKCS12 *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS12_it() \
  LP0(0x1c86, const ASN1_ITEM *, PKCS12_it, \
  , AMISSL_BASE_NAME)

#define PKCS12_MAC_DATA_new() \
  LP0(0x1c8c, PKCS12_MAC_DATA *, PKCS12_MAC_DATA_new, \
  , AMISSL_BASE_NAME)

#define PKCS12_MAC_DATA_free(a) \
  LP1NR(0x1c92, PKCS12_MAC_DATA_free, PKCS12_MAC_DATA *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS12_MAC_DATA(a, in, len) \
  LP3(0x1c98, PKCS12_MAC_DATA *, d2i_PKCS12_MAC_DATA, PKCS12_MAC_DATA **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS12_MAC_DATA(a, out) \
  LP2(0x1c9e, int, i2d_PKCS12_MAC_DATA, PKCS12_MAC_DATA *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS12_MAC_DATA_it() \
  LP0(0x1ca4, const ASN1_ITEM *, PKCS12_MAC_DATA_it, \
  , AMISSL_BASE_NAME)

#define PKCS12_SAFEBAG_new() \
  LP0(0x1caa, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_new, \
  , AMISSL_BASE_NAME)

#define PKCS12_SAFEBAG_free(a) \
  LP1NR(0x1cb0, PKCS12_SAFEBAG_free, PKCS12_SAFEBAG *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS12_SAFEBAG(a, in, len) \
  LP3(0x1cb6, PKCS12_SAFEBAG *, d2i_PKCS12_SAFEBAG, PKCS12_SAFEBAG **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS12_SAFEBAG(a, out) \
  LP2(0x1cbc, int, i2d_PKCS12_SAFEBAG, PKCS12_SAFEBAG *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS12_SAFEBAG_it() \
  LP0(0x1cc2, const ASN1_ITEM *, PKCS12_SAFEBAG_it, \
  , AMISSL_BASE_NAME)

#define PKCS12_BAGS_new() \
  LP0(0x1cc8, PKCS12_BAGS *, PKCS12_BAGS_new, \
  , AMISSL_BASE_NAME)

#define PKCS12_BAGS_free(a) \
  LP1NR(0x1cce, PKCS12_BAGS_free, PKCS12_BAGS *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS12_BAGS(a, in, len) \
  LP3(0x1cd4, PKCS12_BAGS *, d2i_PKCS12_BAGS, PKCS12_BAGS **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS12_BAGS(a, out) \
  LP2(0x1cda, int, i2d_PKCS12_BAGS, PKCS12_BAGS *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS12_BAGS_it() \
  LP0(0x1ce0, const ASN1_ITEM *, PKCS12_BAGS_it, \
  , AMISSL_BASE_NAME)

#define PKCS12_SAFEBAGS_it() \
  LP0(0x1ce6, const ASN1_ITEM *, PKCS12_SAFEBAGS_it, \
  , AMISSL_BASE_NAME)

#define PKCS12_AUTHSAFES_it() \
  LP0(0x1cec, const ASN1_ITEM *, PKCS12_AUTHSAFES_it, \
  , AMISSL_BASE_NAME)

#define PKCS12_PBE_add() \
  LP0NR(0x1cf2, PKCS12_PBE_add, \
  , AMISSL_BASE_NAME)

#define PKCS12_parse(p12, pass, pkey, cert, ca) \
  LP5(0x1cf8, int, PKCS12_parse, PKCS12 *, p12, a0, const char *, pass, a1, EVP_PKEY **, pkey, a2, X509 **, cert, a3, STACK_OF(X509) **, ca, d0, \
  , AMISSL_BASE_NAME)

#define PKCS12_create(pass, name, pkey, cert, ca, nid_key, nid_cert, iter, mac_iter, keytype) \
  LP10(0x1cfe, PKCS12 *, PKCS12_create, char *, pass, a0, char *, name, a1, EVP_PKEY *, pkey, a2, X509 *, cert, a3, STACK_OF(X509) *, ca, d0, LONG, nid_key, d1, LONG, nid_cert, d2, LONG, iter, d3, LONG, mac_iter, d4, LONG, keytype, d5, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS12_bio(bp, p12) \
  LP2(0x1d04, int, i2d_PKCS12_bio, BIO *, bp, a0, PKCS12 *, p12, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS12_bio(bp, p12) \
  LP2(0x1d0a, PKCS12 *, d2i_PKCS12_bio, BIO *, bp, a0, PKCS12 **, p12, a1, \
  , AMISSL_BASE_NAME)

#define PKCS12_newpass(p12, oldpass, newpass) \
  LP3(0x1d10, int, PKCS12_newpass, PKCS12 *, p12, a0, char *, oldpass, a1, char *, newpass, a2, \
  , AMISSL_BASE_NAME)

#define ERR_load_PKCS12_strings() \
  LP0NR(0x1d16, ERR_load_PKCS12_strings, \
  , AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_digest(data, type, md, len) \
  LP4(0x1d1c, int, PKCS7_ISSUER_AND_SERIAL_digest, PKCS7_ISSUER_AND_SERIAL *, data, a0, const EVP_MD *, type, a1, unsigned char *, md, a2, unsigned int *, len, a3, \
  , AMISSL_BASE_NAME)

#define PKCS7_dup(p7) \
  LP1(0x1d22, PKCS7 *, PKCS7_dup, PKCS7 *, p7, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_bio(bp, p7) \
  LP2(0x1d28, PKCS7 *, d2i_PKCS7_bio, BIO *, bp, a0, PKCS7 **, p7, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_bio(bp, p7) \
  LP2(0x1d2e, int, i2d_PKCS7_bio, BIO *, bp, a0, PKCS7 *, p7, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_new() \
  LP0(0x1d34, PKCS7_ISSUER_AND_SERIAL *, PKCS7_ISSUER_AND_SERIAL_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_free(a) \
  LP1NR(0x1d3a, PKCS7_ISSUER_AND_SERIAL_free, PKCS7_ISSUER_AND_SERIAL *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_ISSUER_AND_SERIAL(a, in, len) \
  LP3(0x1d40, PKCS7_ISSUER_AND_SERIAL *, d2i_PKCS7_ISSUER_AND_SERIAL, PKCS7_ISSUER_AND_SERIAL **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_ISSUER_AND_SERIAL(a, out) \
  LP2(0x1d46, int, i2d_PKCS7_ISSUER_AND_SERIAL, PKCS7_ISSUER_AND_SERIAL *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_it() \
  LP0(0x1d4c, const ASN1_ITEM *, PKCS7_ISSUER_AND_SERIAL_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_new() \
  LP0(0x1d52, PKCS7_SIGNER_INFO *, PKCS7_SIGNER_INFO_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_free(a) \
  LP1NR(0x1d58, PKCS7_SIGNER_INFO_free, PKCS7_SIGNER_INFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_SIGNER_INFO(a, in, len) \
  LP3(0x1d5e, PKCS7_SIGNER_INFO *, d2i_PKCS7_SIGNER_INFO, PKCS7_SIGNER_INFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_SIGNER_INFO(a, out) \
  LP2(0x1d64, int, i2d_PKCS7_SIGNER_INFO, PKCS7_SIGNER_INFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_it() \
  LP0(0x1d6a, const ASN1_ITEM *, PKCS7_SIGNER_INFO_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_new() \
  LP0(0x1d70, PKCS7_RECIP_INFO *, PKCS7_RECIP_INFO_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_free(a) \
  LP1NR(0x1d76, PKCS7_RECIP_INFO_free, PKCS7_RECIP_INFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_RECIP_INFO(a, in, len) \
  LP3(0x1d7c, PKCS7_RECIP_INFO *, d2i_PKCS7_RECIP_INFO, PKCS7_RECIP_INFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_RECIP_INFO(a, out) \
  LP2(0x1d82, int, i2d_PKCS7_RECIP_INFO, PKCS7_RECIP_INFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_it() \
  LP0(0x1d88, const ASN1_ITEM *, PKCS7_RECIP_INFO_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNED_new() \
  LP0(0x1d8e, PKCS7_SIGNED *, PKCS7_SIGNED_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNED_free(a) \
  LP1NR(0x1d94, PKCS7_SIGNED_free, PKCS7_SIGNED *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_SIGNED(a, in, len) \
  LP3(0x1d9a, PKCS7_SIGNED *, d2i_PKCS7_SIGNED, PKCS7_SIGNED **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_SIGNED(a, out) \
  LP2(0x1da0, int, i2d_PKCS7_SIGNED, PKCS7_SIGNED *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNED_it() \
  LP0(0x1da6, const ASN1_ITEM *, PKCS7_SIGNED_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENC_CONTENT_new() \
  LP0(0x1dac, PKCS7_ENC_CONTENT *, PKCS7_ENC_CONTENT_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENC_CONTENT_free(a) \
  LP1NR(0x1db2, PKCS7_ENC_CONTENT_free, PKCS7_ENC_CONTENT *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_ENC_CONTENT(a, in, len) \
  LP3(0x1db8, PKCS7_ENC_CONTENT *, d2i_PKCS7_ENC_CONTENT, PKCS7_ENC_CONTENT **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_ENC_CONTENT(a, out) \
  LP2(0x1dbe, int, i2d_PKCS7_ENC_CONTENT, PKCS7_ENC_CONTENT *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENC_CONTENT_it() \
  LP0(0x1dc4, const ASN1_ITEM *, PKCS7_ENC_CONTENT_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENVELOPE_new() \
  LP0(0x1dca, PKCS7_ENVELOPE *, PKCS7_ENVELOPE_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENVELOPE_free(a) \
  LP1NR(0x1dd0, PKCS7_ENVELOPE_free, PKCS7_ENVELOPE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_ENVELOPE(a, in, len) \
  LP3(0x1dd6, PKCS7_ENVELOPE *, d2i_PKCS7_ENVELOPE, PKCS7_ENVELOPE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_ENVELOPE(a, out) \
  LP2(0x1ddc, int, i2d_PKCS7_ENVELOPE, PKCS7_ENVELOPE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENVELOPE_it() \
  LP0(0x1de2, const ASN1_ITEM *, PKCS7_ENVELOPE_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGN_ENVELOPE_new() \
  LP0(0x1de8, PKCS7_SIGN_ENVELOPE *, PKCS7_SIGN_ENVELOPE_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGN_ENVELOPE_free(a) \
  LP1NR(0x1dee, PKCS7_SIGN_ENVELOPE_free, PKCS7_SIGN_ENVELOPE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_SIGN_ENVELOPE(a, in, len) \
  LP3(0x1df4, PKCS7_SIGN_ENVELOPE *, d2i_PKCS7_SIGN_ENVELOPE, PKCS7_SIGN_ENVELOPE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_SIGN_ENVELOPE(a, out) \
  LP2(0x1dfa, int, i2d_PKCS7_SIGN_ENVELOPE, PKCS7_SIGN_ENVELOPE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGN_ENVELOPE_it() \
  LP0(0x1e00, const ASN1_ITEM *, PKCS7_SIGN_ENVELOPE_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_DIGEST_new() \
  LP0(0x1e06, PKCS7_DIGEST *, PKCS7_DIGEST_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_DIGEST_free(a) \
  LP1NR(0x1e0c, PKCS7_DIGEST_free, PKCS7_DIGEST *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_DIGEST(a, in, len) \
  LP3(0x1e12, PKCS7_DIGEST *, d2i_PKCS7_DIGEST, PKCS7_DIGEST **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_DIGEST(a, out) \
  LP2(0x1e18, int, i2d_PKCS7_DIGEST, PKCS7_DIGEST *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_DIGEST_it() \
  LP0(0x1e1e, const ASN1_ITEM *, PKCS7_DIGEST_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENCRYPT_new() \
  LP0(0x1e24, PKCS7_ENCRYPT *, PKCS7_ENCRYPT_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENCRYPT_free(a) \
  LP1NR(0x1e2a, PKCS7_ENCRYPT_free, PKCS7_ENCRYPT *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7_ENCRYPT(a, in, len) \
  LP3(0x1e30, PKCS7_ENCRYPT *, d2i_PKCS7_ENCRYPT, PKCS7_ENCRYPT **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7_ENCRYPT(a, out) \
  LP2(0x1e36, int, i2d_PKCS7_ENCRYPT, PKCS7_ENCRYPT *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_ENCRYPT_it() \
  LP0(0x1e3c, const ASN1_ITEM *, PKCS7_ENCRYPT_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_new() \
  LP0(0x1e42, PKCS7 *, PKCS7_new, \
  , AMISSL_BASE_NAME)

#define PKCS7_free(a) \
  LP1NR(0x1e48, PKCS7_free, PKCS7 *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS7(a, in, len) \
  LP3(0x1e4e, PKCS7 *, d2i_PKCS7, PKCS7 **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS7(a, out) \
  LP2(0x1e54, int, i2d_PKCS7, PKCS7 *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_it() \
  LP0(0x1e5a, const ASN1_ITEM *, PKCS7_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_ATTR_SIGN_it() \
  LP0(0x1e60, const ASN1_ITEM *, PKCS7_ATTR_SIGN_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_ATTR_VERIFY_it() \
  LP0(0x1e66, const ASN1_ITEM *, PKCS7_ATTR_VERIFY_it, \
  , AMISSL_BASE_NAME)

#define PKCS7_ctrl(p7, cmd, larg, parg) \
  LP4(0x1e6c, long, PKCS7_ctrl, PKCS7 *, p7, a0, LONG, cmd, d0, long, larg, d1, char *, parg, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_set_type(p7, type) \
  LP2(0x1e72, int, PKCS7_set_type, PKCS7 *, p7, a0, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_set_content(p7, p7_data) \
  LP2(0x1e78, int, PKCS7_set_content, PKCS7 *, p7, a0, PKCS7 *, p7_data, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_set(p7i, x509, pkey, dgst) \
  LP4(0x1e7e, int, PKCS7_SIGNER_INFO_set, PKCS7_SIGNER_INFO *, p7i, a0, X509 *, x509, a1, EVP_PKEY *, pkey, a2, const EVP_MD *, dgst, a3, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_signer(p7, p7i) \
  LP2(0x1e84, int, PKCS7_add_signer, PKCS7 *, p7, a0, PKCS7_SIGNER_INFO *, p7i, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_certificate(p7, x509) \
  LP2(0x1e8a, int, PKCS7_add_certificate, PKCS7 *, p7, a0, X509 *, x509, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_crl(p7, x509) \
  LP2(0x1e90, int, PKCS7_add_crl, PKCS7 *, p7, a0, X509_CRL *, x509, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_content_new(p7, nid) \
  LP2(0x1e96, int, PKCS7_content_new, PKCS7 *, p7, a0, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_dataVerify(cert_store, ctx, bio, p7, si) \
  LP5(0x1e9c, int, PKCS7_dataVerify, X509_STORE *, cert_store, a0, X509_STORE_CTX *, ctx, a1, BIO *, bio, a2, PKCS7 *, p7, a3, PKCS7_SIGNER_INFO *, si, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_signatureVerify(bio, p7, si, x509) \
  LP4(0x1ea2, int, PKCS7_signatureVerify, BIO *, bio, a0, PKCS7 *, p7, a1, PKCS7_SIGNER_INFO *, si, a2, X509 *, x509, a3, \
  , AMISSL_BASE_NAME)

#define PKCS7_dataInit(p7, bio) \
  LP2(0x1ea8, BIO *, PKCS7_dataInit, PKCS7 *, p7, a0, BIO *, bio, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_dataFinal(p7, bio) \
  LP2(0x1eae, int, PKCS7_dataFinal, PKCS7 *, p7, a0, BIO *, bio, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_dataDecode(p7, pkey, in_bio, pcert) \
  LP4(0x1eb4, BIO *, PKCS7_dataDecode, PKCS7 *, p7, a0, EVP_PKEY *, pkey, a1, BIO *, in_bio, a2, X509 *, pcert, a3, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_signature(p7, x509, pkey, dgst) \
  LP4(0x1eba, PKCS7_SIGNER_INFO *, PKCS7_add_signature, PKCS7 *, p7, a0, X509 *, x509, a1, EVP_PKEY *, pkey, a2, const EVP_MD *, dgst, a3, \
  , AMISSL_BASE_NAME)

#define PKCS7_cert_from_signer_info(p7, si) \
  LP2(0x1ec0, X509 *, PKCS7_cert_from_signer_info, PKCS7 *, p7, a0, PKCS7_SIGNER_INFO *, si, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_get_signer_info(p7) \
  LP1(0x1ec6, STACK_OF(PKCS7_SIGNER_INFO) *, PKCS7_get_signer_info, PKCS7 *, p7, a0, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_recipient(p7, x509) \
  LP2(0x1ecc, PKCS7_RECIP_INFO *, PKCS7_add_recipient, PKCS7 *, p7, a0, X509 *, x509, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_recipient_info(p7, ri) \
  LP2(0x1ed2, int, PKCS7_add_recipient_info, PKCS7 *, p7, a0, PKCS7_RECIP_INFO *, ri, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_set(p7i, x509) \
  LP2(0x1ed8, int, PKCS7_RECIP_INFO_set, PKCS7_RECIP_INFO *, p7i, a0, X509 *, x509, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_set_cipher(p7, cipher) \
  LP2(0x1ede, int, PKCS7_set_cipher, PKCS7 *, p7, a0, const EVP_CIPHER *, cipher, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_get_issuer_and_serial(p7, idx) \
  LP2(0x1ee4, PKCS7_ISSUER_AND_SERIAL *, PKCS7_get_issuer_and_serial, PKCS7 *, p7, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_digest_from_attributes(sk) \
  LP1(0x1eea, ASN1_OCTET_STRING *, PKCS7_digest_from_attributes, STACK_OF(X509_ATTRIBUTE) *, sk, a0, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_signed_attribute(p7si, nid, type, data) \
  LP4(0x1ef0, int, PKCS7_add_signed_attribute, PKCS7_SIGNER_INFO *, p7si, a0, LONG, nid, d0, LONG, type, d1, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_attribute(p7si, nid, atrtype, value) \
  LP4(0x1ef6, int, PKCS7_add_attribute, PKCS7_SIGNER_INFO *, p7si, a0, LONG, nid, d0, LONG, atrtype, d1, void *, value, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_get_attribute(si, nid) \
  LP2(0x1efc, ASN1_TYPE *, PKCS7_get_attribute, PKCS7_SIGNER_INFO *, si, a0, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_get_signed_attribute(si, nid) \
  LP2(0x1f02, ASN1_TYPE *, PKCS7_get_signed_attribute, PKCS7_SIGNER_INFO *, si, a0, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_set_signed_attributes(p7si, sk) \
  LP2(0x1f08, int, PKCS7_set_signed_attributes, PKCS7_SIGNER_INFO *, p7si, a0, STACK_OF(X509_ATTRIBUTE) *, sk, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_set_attributes(p7si, sk) \
  LP2(0x1f0e, int, PKCS7_set_attributes, PKCS7_SIGNER_INFO *, p7si, a0, STACK_OF(X509_ATTRIBUTE) *, sk, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_sign(signcert, pkey, certs, data, flags) \
  LP5(0x1f14, PKCS7 *, PKCS7_sign, X509 *, signcert, a0, EVP_PKEY *, pkey, a1, STACK_OF(X509) *, certs, a2, BIO *, data, a3, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_verify(p7, certs, store, indata, out, flags) \
  LP6(0x1f1a, int, PKCS7_verify, PKCS7 *, p7, a0, STACK_OF(X509) *, certs, a1, X509_STORE *, store, a2, BIO *, indata, a3, BIO *, out, d0, LONG, flags, d1, \
  , AMISSL_BASE_NAME)

#define PKCS7_get0_signers(p7, certs, flags) \
  LP3(0x1f20, STACK_OF(X509) *, PKCS7_get0_signers, PKCS7 *, p7, a0, STACK_OF(X509) *, certs, a1, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_encrypt(certs, in, cipher, flags) \
  LP4(0x1f26, PKCS7 *, PKCS7_encrypt, STACK_OF(X509) *, certs, a0, BIO *, in, a1, const EVP_CIPHER *, cipher, a2, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_decrypt(p7, pkey, cert, data, flags) \
  LP5(0x1f2c, int, PKCS7_decrypt, PKCS7 *, p7, a0, EVP_PKEY *, pkey, a1, X509 *, cert, a2, BIO *, data, a3, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define PKCS7_add_attrib_smimecap(si, cap) \
  LP2(0x1f32, int, PKCS7_add_attrib_smimecap, PKCS7_SIGNER_INFO *, si, a0, STACK_OF(X509_ALGOR) *, cap, a1, \
  , AMISSL_BASE_NAME)

#define PKCS7_get_smimecap(si) \
  LP1(0x1f38, STACK_OF(X509_ALGOR) *, PKCS7_get_smimecap, PKCS7_SIGNER_INFO *, si, a0, \
  , AMISSL_BASE_NAME)

#define PKCS7_simple_smimecap(sk, nid, arg) \
  LP3(0x1f3e, int, PKCS7_simple_smimecap, STACK_OF(X509_ALGOR) *, sk, a0, LONG, nid, d0, LONG, arg, d1, \
  , AMISSL_BASE_NAME)

#define SMIME_write_PKCS7(bio, p7, data, flags) \
  LP4(0x1f44, int, SMIME_write_PKCS7, BIO *, bio, a0, PKCS7 *, p7, a1, BIO *, data, a2, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define SMIME_read_PKCS7(bio, bcont) \
  LP2(0x1f4a, PKCS7 *, SMIME_read_PKCS7, BIO *, bio, a0, BIO **, bcont, a1, \
  , AMISSL_BASE_NAME)

#define SMIME_crlf_copy(in, out, flags) \
  LP3(0x1f50, int, SMIME_crlf_copy, BIO *, in, a0, BIO *, out, a1, LONG, flags, d0, \
  , AMISSL_BASE_NAME)

#define SMIME_text(in, out) \
  LP2(0x1f56, int, SMIME_text, BIO *, in, a0, BIO *, out, a1, \
  , AMISSL_BASE_NAME)

#define ERR_load_PKCS7_strings() \
  LP0NR(0x1f5c, ERR_load_PKCS7_strings, \
  , AMISSL_BASE_NAME)

#define RAND_set_rand_method(meth) \
  LP1(0x1f62, int, RAND_set_rand_method, const RAND_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define RAND_get_rand_method() \
  LP0(0x1f68, const RAND_METHOD *, RAND_get_rand_method, \
  , AMISSL_BASE_NAME)

#define RAND_SSLeay() \
  LP0(0x1f6e, RAND_METHOD *, RAND_SSLeay, \
  , AMISSL_BASE_NAME)

#define RAND_cleanup() \
  LP0NR(0x1f74, RAND_cleanup, \
  , AMISSL_BASE_NAME)

#define RAND_bytes(buf, num) \
  LP2(0x1f7a, int, RAND_bytes, unsigned char *, buf, a0, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define RAND_pseudo_bytes(buf, num) \
  LP2(0x1f80, int, RAND_pseudo_bytes, unsigned char *, buf, a0, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define RAND_seed(buf, num) \
  LP2NR(0x1f86, RAND_seed, const void *, buf, a0, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define RAND_add(buf, num, entropy) \
  LP3NR(0x1f8c, RAND_add, const void *, buf, a0, LONG, num, d0, float, entropy, d1, \
  , AMISSL_BASE_NAME)

#define RAND_load_file(file, max_bytes) \
  LP2(0x1f92, int, RAND_load_file, const char *, file, a0, long, max_bytes, d0, \
  , AMISSL_BASE_NAME)

#define RAND_write_file(file) \
  LP1(0x1f98, int, RAND_write_file, const char *, file, a0, \
  , AMISSL_BASE_NAME)

#define RAND_file_name(file, num) \
  LP2(0x1f9e, const char *, RAND_file_name, char *, file, a0, ULONG, num, d0, \
  , AMISSL_BASE_NAME)

#define RAND_status() \
  LP0(0x1fa4, int, RAND_status, \
  , AMISSL_BASE_NAME)

#define RAND_query_egd_bytes(path, buf, bytes) \
  LP3(0x1faa, int, RAND_query_egd_bytes, const char *, path, a0, unsigned char *, buf, a1, LONG, bytes, d0, \
  , AMISSL_BASE_NAME)

#define RAND_egd(path) \
  LP1(0x1fb0, int, RAND_egd, const char *, path, a0, \
  , AMISSL_BASE_NAME)

#define RAND_egd_bytes(path, bytes) \
  LP2(0x1fb6, int, RAND_egd_bytes, const char *, path, a0, LONG, bytes, d0, \
  , AMISSL_BASE_NAME)

#define RAND_poll() \
  LP0(0x1fbc, int, RAND_poll, \
  , AMISSL_BASE_NAME)

#define ERR_load_RAND_strings() \
  LP0NR(0x1fc2, ERR_load_RAND_strings, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_msg_callback(ctx, cb) \
  LP2NRFP(0x1fc8, SSL_CTX_set_msg_callback, SSL_CTX *, ctx, a0, __fpt, cb, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(int write_p, int version, int content_type, const void *buf, size_t len, SSL *ssl, void *arg))

#define SSL_set_msg_callback(ssl, cb) \
  LP2NRFP(0x1fce, SSL_set_msg_callback, SSL *, ssl, a0, __fpt, cb, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(int write_p, int version, int content_type, const void *buf, size_t len, SSL *ssl, void *arg))

#define SSL_CTX_sessions(ctx) \
  LP1(0x1fd4, struct lhash_st *, SSL_CTX_sessions, SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_finished(s, buf, count) \
  LP3(0x1fda, size_t, SSL_get_finished, const SSL *, s, a0, void *, buf, a1, ULONG, count, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_peer_finished(s, buf, count) \
  LP3(0x1fe0, size_t, SSL_get_peer_finished, const SSL *, s, a0, void *, buf, a1, ULONG, count, d0, \
  , AMISSL_BASE_NAME)

#define BIO_f_ssl() \
  LP0(0x1fe6, BIO_METHOD *, BIO_f_ssl, \
  , AMISSL_BASE_NAME)

#define BIO_new_ssl(ctx, client) \
  LP2(0x1fec, BIO *, BIO_new_ssl, SSL_CTX *, ctx, a0, LONG, client, d0, \
  , AMISSL_BASE_NAME)

#define BIO_new_ssl_connect(ctx) \
  LP1(0x1ff2, BIO *, BIO_new_ssl_connect, SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define BIO_new_buffer_ssl_connect(ctx) \
  LP1(0x1ff8, BIO *, BIO_new_buffer_ssl_connect, SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define BIO_ssl_copy_session_id(to, from) \
  LP2(0x1ffe, int, BIO_ssl_copy_session_id, BIO *, to, a0, BIO *, from, a1, \
  , AMISSL_BASE_NAME)

#define BIO_ssl_shutdown(ssl_bio) \
  LP1NR(0x2004, BIO_ssl_shutdown, BIO *, ssl_bio, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_cipher_list(a, str) \
  LP2(0x200a, int, SSL_CTX_set_cipher_list, SSL_CTX *, a, a0, const char *, str, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_new(meth) \
  LP1(0x2010, SSL_CTX *, SSL_CTX_new, SSL_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_free(a) \
  LP1NR(0x2016, SSL_CTX_free, SSL_CTX *, a, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_timeout(ctx, t) \
  LP2(0x201c, long, SSL_CTX_set_timeout, SSL_CTX *, ctx, a0, long, t, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_timeout(ctx) \
  LP1(0x2022, long, SSL_CTX_get_timeout, const SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_cert_store(a) \
  LP1(0x2028, X509_STORE *, SSL_CTX_get_cert_store, const SSL_CTX *, a, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_cert_store(a, b) \
  LP2NR(0x202e, SSL_CTX_set_cert_store, SSL_CTX *, a, a0, X509_STORE *, b, a1, \
  , AMISSL_BASE_NAME)

#define SSL_want(s) \
  LP1(0x2034, int, SSL_want, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_clear(s) \
  LP1(0x203a, int, SSL_clear, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_flush_sessions(ctx, tm) \
  LP2NR(0x2040, SSL_CTX_flush_sessions, SSL_CTX *, ctx, a0, long, tm, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_current_cipher(s) \
  LP1(0x2046, SSL_CIPHER *, SSL_get_current_cipher, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_bits(c, alg_bits) \
  LP2(0x204c, int, SSL_CIPHER_get_bits, const SSL_CIPHER *, c, a0, int *, alg_bits, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_version(c) \
  LP1(0x2052, char *, SSL_CIPHER_get_version, const SSL_CIPHER *, c, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_name(c) \
  LP1(0x2058, const char *, SSL_CIPHER_get_name, const SSL_CIPHER *, c, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_mac(cipher) \
  LP1(0x205e, const char *, SSL_CIPHER_get_mac, SSL_CIPHER *, cipher, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_encryption(cipher) \
  LP1(0x2064, const char *, SSL_CIPHER_get_encryption, SSL_CIPHER *, cipher, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_authentication(cipher) \
  LP1(0x206a, const char *, SSL_CIPHER_get_authentication, SSL_CIPHER *, cipher, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_key_exchange(cipher) \
  LP1(0x2070, const char *, SSL_CIPHER_get_key_exchange, SSL_CIPHER *, cipher, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_get_export(cipher) \
  LP1(0x2076, const char *, SSL_CIPHER_get_export, SSL_CIPHER *, cipher, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_fd(s) \
  LP1(0x207c, int, SSL_get_fd, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_rfd(s) \
  LP1(0x2082, int, SSL_get_rfd, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_wfd(s) \
  LP1(0x2088, int, SSL_get_wfd, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_cipher_list(s, n) \
  LP2(0x208e, const char *, SSL_get_cipher_list, const SSL *, s, a0, LONG, n, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_shared_ciphers(s, buf, len) \
  LP3(0x2094, char *, SSL_get_shared_ciphers, const SSL *, s, a0, char *, buf, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_read_ahead(s) \
  LP1(0x209a, int, SSL_get_read_ahead, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_pending(s) \
  LP1(0x20a0, int, SSL_pending, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_fd(s, fd) \
  LP2(0x20a6, int, SSL_set_fd, SSL *, s, a0, LONG, fd, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_rfd(s, fd) \
  LP2(0x20ac, int, SSL_set_rfd, SSL *, s, a0, LONG, fd, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_wfd(s, fd) \
  LP2(0x20b2, int, SSL_set_wfd, SSL *, s, a0, LONG, fd, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_bio(s, rbio, wbio) \
  LP3NR(0x20b8, SSL_set_bio, SSL *, s, a0, BIO *, rbio, a1, BIO *, wbio, a2, \
  , AMISSL_BASE_NAME)

#define SSL_get_rbio(s) \
  LP1(0x20be, BIO *, SSL_get_rbio, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_wbio(s) \
  LP1(0x20c4, BIO *, SSL_get_wbio, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_cipher_list(s, str) \
  LP2(0x20ca, int, SSL_set_cipher_list, SSL *, s, a0, const char *, str, a1, \
  , AMISSL_BASE_NAME)

#define SSL_set_read_ahead(s, yes) \
  LP2NR(0x20d0, SSL_set_read_ahead, SSL *, s, a0, LONG, yes, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_verify_mode(s) \
  LP1(0x20d6, int, SSL_get_verify_mode, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_verify_depth(s) \
  LP1(0x20dc, int, SSL_get_verify_depth, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_verify_callback(s) \
  LP1(0x20e2, int (*)(int, X509_STORE_CTX *), SSL_get_verify_callback, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_verify(s, mode, callback) \
  LP3NRFP(0x20e8, SSL_set_verify, SSL *, s, a0, LONG, mode, d0, __fpt, callback, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(int ok, X509_STORE_CTX *ctx))

#define SSL_set_verify_depth(s, depth) \
  LP2NR(0x20ee, SSL_set_verify_depth, SSL *, s, a0, LONG, depth, d0, \
  , AMISSL_BASE_NAME)

#define SSL_use_RSAPrivateKey(ssl, rsa) \
  LP2(0x20f4, int, SSL_use_RSAPrivateKey, SSL *, ssl, a0, RSA *, rsa, a1, \
  , AMISSL_BASE_NAME)

#define SSL_use_RSAPrivateKey_ASN1(ssl, d, len) \
  LP3(0x20fa, int, SSL_use_RSAPrivateKey_ASN1, SSL *, ssl, a0, unsigned char *, d, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define SSL_use_PrivateKey(ssl, pkey) \
  LP2(0x2100, int, SSL_use_PrivateKey, SSL *, ssl, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define SSL_use_PrivateKey_ASN1(pk, ssl, d, len) \
  LP4(0x2106, int, SSL_use_PrivateKey_ASN1, LONG, pk, d0, SSL *, ssl, a0, unsigned char *, d, a1, long, len, d1, \
  , AMISSL_BASE_NAME)

#define SSL_use_certificate(ssl, x) \
  LP2(0x210c, int, SSL_use_certificate, SSL *, ssl, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define SSL_use_certificate_ASN1(ssl, d, len) \
  LP3(0x2112, int, SSL_use_certificate_ASN1, SSL *, ssl, a0, unsigned char *, d, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define SSL_use_RSAPrivateKey_file(ssl, file, type) \
  LP3(0x2118, int, SSL_use_RSAPrivateKey_file, SSL *, ssl, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSL_use_PrivateKey_file(ssl, file, type) \
  LP3(0x211e, int, SSL_use_PrivateKey_file, SSL *, ssl, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSL_use_certificate_file(ssl, file, type) \
  LP3(0x2124, int, SSL_use_certificate_file, SSL *, ssl, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_RSAPrivateKey_file(ctx, file, type) \
  LP3(0x212a, int, SSL_CTX_use_RSAPrivateKey_file, SSL_CTX *, ctx, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_PrivateKey_file(ctx, file, type) \
  LP3(0x2130, int, SSL_CTX_use_PrivateKey_file, SSL_CTX *, ctx, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate_file(ctx, file, type) \
  LP3(0x2136, int, SSL_CTX_use_certificate_file, SSL_CTX *, ctx, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate_chain_file(ctx, file) \
  LP2(0x213c, int, SSL_CTX_use_certificate_chain_file, SSL_CTX *, ctx, a0, const char *, file, a1, \
  , AMISSL_BASE_NAME)

#define SSL_load_client_CA_file(file) \
  LP1(0x2142, STACK_OF(X509_NAME) *, SSL_load_client_CA_file, const char *, file, a0, \
  , AMISSL_BASE_NAME)

#define SSL_add_file_cert_subjects_to_stack(stackCAs, file) \
  LP2(0x2148, int, SSL_add_file_cert_subjects_to_stack, STACK_OF(X509_NAME) *, stackCAs, a0, const char *, file, a1, \
  , AMISSL_BASE_NAME)

#define SSL_add_dir_cert_subjects_to_stack(stackCAs, dir) \
  LP2(0x214e, int, SSL_add_dir_cert_subjects_to_stack, STACK_OF(X509_NAME) *, stackCAs, a0, const char *, dir, a1, \
  , AMISSL_BASE_NAME)

#define SSL_load_error_strings() \
  LP0NR(0x2154, SSL_load_error_strings, \
  , AMISSL_BASE_NAME)

#define SSL_state_string(s) \
  LP1(0x215a, const char *, SSL_state_string, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_rstate_string(s) \
  LP1(0x2160, const char *, SSL_rstate_string, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_state_string_long(s) \
  LP1(0x2166, const char *, SSL_state_string_long, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_rstate_string_long(s) \
  LP1(0x216c, const char *, SSL_rstate_string_long, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_get_time(s) \
  LP1(0x2172, long, SSL_SESSION_get_time, const SSL_SESSION *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_set_time(s, t) \
  LP2(0x2178, long, SSL_SESSION_set_time, SSL_SESSION *, s, a0, long, t, d0, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_get_timeout(s) \
  LP1(0x217e, long, SSL_SESSION_get_timeout, const SSL_SESSION *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_set_timeout(s, t) \
  LP2(0x2184, long, SSL_SESSION_set_timeout, SSL_SESSION *, s, a0, long, t, d0, \
  , AMISSL_BASE_NAME)

#define SSL_copy_session_id(to, from) \
  LP2NR(0x218a, SSL_copy_session_id, SSL *, to, a0, const SSL *, from, a1, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_new() \
  LP0(0x2190, SSL_SESSION *, SSL_SESSION_new, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_hash(a) \
  LP1(0x2196, unsigned long, SSL_SESSION_hash, const SSL_SESSION *, a, a0, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_cmp(a, b) \
  LP2(0x219c, int, SSL_SESSION_cmp, const SSL_SESSION *, a, a0, const SSL_SESSION *, b, a1, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_print(fp, ses) \
  LP2(0x21a2, int, SSL_SESSION_print, BIO *, fp, a0, const SSL_SESSION *, ses, a1, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_free(ses) \
  LP1NR(0x21a8, SSL_SESSION_free, SSL_SESSION *, ses, a0, \
  , AMISSL_BASE_NAME)

#define i2d_SSL_SESSION(in, pp) \
  LP2(0x21ae, int, i2d_SSL_SESSION, SSL_SESSION *, in, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define SSL_set_session(to, session) \
  LP2(0x21b4, int, SSL_set_session, SSL *, to, a0, SSL_SESSION *, session, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_add_session(s, c) \
  LP2(0x21ba, int, SSL_CTX_add_session, SSL_CTX *, s, a0, SSL_SESSION *, c, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_remove_session(a1, c) \
  LP2(0x21c0, int, SSL_CTX_remove_session, SSL_CTX *, a1, a0, SSL_SESSION *, c, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_generate_session_id(a, b) \
  LP2(0x21c6, int, SSL_CTX_set_generate_session_id, SSL_CTX *, a, a0, GEN_SESSION_CB, b, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_generate_session_id(a, b) \
  LP2(0x21cc, int, SSL_set_generate_session_id, SSL *, a, a0, GEN_SESSION_CB, b, d0, \
  , AMISSL_BASE_NAME)

#define SSL_has_matching_session_id(ssl, id, id_len) \
  LP3(0x21d2, int, SSL_has_matching_session_id, const SSL *, ssl, a0, const unsigned char *, id, a1, ULONG, id_len, d0, \
  , AMISSL_BASE_NAME)

#define d2i_SSL_SESSION(a, pp, length) \
  LP3(0x21d8, SSL_SESSION *, d2i_SSL_SESSION, SSL_SESSION **, a, a0, const unsigned char *const *, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_peer_certificate(s) \
  LP1(0x21de, X509 *, SSL_get_peer_certificate, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_peer_cert_chain(s) \
  LP1(0x21e4, STACK_OF(X509) *, SSL_get_peer_cert_chain, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_verify_mode(ctx) \
  LP1(0x21ea, int, SSL_CTX_get_verify_mode, const SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_verify_depth(ctx) \
  LP1(0x21f0, int, SSL_CTX_get_verify_depth, const SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_verify_callback(ctx) \
  LP1(0x21f6, int (*)(int, X509_STORE_CTX *), SSL_CTX_get_verify_callback, const SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_verify(ctx, mode, callback) \
  LP3NRFP(0x21fc, SSL_CTX_set_verify, SSL_CTX *, ctx, a0, LONG, mode, d0, __fpt, callback, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(int, X509_STORE_CTX *))

#define SSL_CTX_set_verify_depth(ctx, depth) \
  LP2NR(0x2202, SSL_CTX_set_verify_depth, SSL_CTX *, ctx, a0, LONG, depth, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_cert_verify_callback(ctx, cb, arg) \
  LP3NRFP(0x2208, SSL_CTX_set_cert_verify_callback, SSL_CTX *, ctx, a0, __fpt, cb, a1, void *, arg, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)(X509_STORE_CTX *, void *))

#define SSL_CTX_use_RSAPrivateKey(ctx, rsa) \
  LP2(0x220e, int, SSL_CTX_use_RSAPrivateKey, SSL_CTX *, ctx, a0, RSA *, rsa, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_RSAPrivateKey_ASN1(ctx, d, len) \
  LP3(0x2214, int, SSL_CTX_use_RSAPrivateKey_ASN1, SSL_CTX *, ctx, a0, unsigned char *, d, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_PrivateKey(ctx, pkey) \
  LP2(0x221a, int, SSL_CTX_use_PrivateKey, SSL_CTX *, ctx, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_PrivateKey_ASN1(pk, ctx, d, len) \
  LP4(0x2220, int, SSL_CTX_use_PrivateKey_ASN1, LONG, pk, d0, SSL_CTX *, ctx, a0, unsigned char *, d, a1, long, len, d1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate(ctx, x) \
  LP2(0x2226, int, SSL_CTX_use_certificate, SSL_CTX *, ctx, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate_ASN1(ctx, len, d) \
  LP3(0x222c, int, SSL_CTX_use_certificate_ASN1, SSL_CTX *, ctx, a0, LONG, len, d0, unsigned char *, d, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_default_passwd_cb(ctx, cb) \
  LP2NRFP(0x2232, SSL_CTX_set_default_passwd_cb, SSL_CTX *, ctx, a0, __fpt, cb, a1, \
  , AMISSL_BASE_NAME, pem_password_cb * (*__fpt)(char *buf, int size, int rwflag, void *userdata))

#define SSL_CTX_set_default_passwd_cb_userdata(ctx, u) \
  LP2NR(0x2238, SSL_CTX_set_default_passwd_cb_userdata, SSL_CTX *, ctx, a0, void *, u, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_check_private_key(ctx) \
  LP1(0x223e, int, SSL_CTX_check_private_key, const SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_check_private_key(ctx) \
  LP1(0x2244, int, SSL_check_private_key, const SSL *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_session_id_context(ctx, sid_ctx, sid_ctx_len) \
  LP3(0x224a, int, SSL_CTX_set_session_id_context, SSL_CTX *, ctx, a0, const unsigned char *, sid_ctx, a1, ULONG, sid_ctx_len, d0, \
  , AMISSL_BASE_NAME)

#define SSL_new(ctx) \
  LP1(0x2250, SSL *, SSL_new, SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_session_id_context(ssl, sid_ctx, sid_ctx_len) \
  LP3(0x2256, int, SSL_set_session_id_context, SSL *, ssl, a0, const unsigned char *, sid_ctx, a1, ULONG, sid_ctx_len, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_purpose(s, purpose) \
  LP2(0x225c, int, SSL_CTX_set_purpose, SSL_CTX *, s, a0, LONG, purpose, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_purpose(s, purpose) \
  LP2(0x2262, int, SSL_set_purpose, SSL *, s, a0, LONG, purpose, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_trust(s, trust) \
  LP2(0x2268, int, SSL_CTX_set_trust, SSL_CTX *, s, a0, LONG, trust, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_trust(s, trust) \
  LP2(0x226e, int, SSL_set_trust, SSL *, s, a0, LONG, trust, d0, \
  , AMISSL_BASE_NAME)

#define SSL_free(ssl) \
  LP1NR(0x2274, SSL_free, SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_accept(ssl) \
  LP1(0x227a, int, SSL_accept, SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_connect(ssl) \
  LP1(0x2280, int, SSL_connect, SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_read(ssl, buf, num) \
  LP3(0x2286, int, SSL_read, SSL *, ssl, a0, void *, buf, a1, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define SSL_peek(ssl, buf, num) \
  LP3(0x228c, int, SSL_peek, SSL *, ssl, a0, void *, buf, a1, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define SSL_write(ssl, buf, num) \
  LP3(0x2292, int, SSL_write, SSL *, ssl, a0, const void *, buf, a1, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define SSL_ctrl(ssl, cmd, larg, parg) \
  LP4(0x2298, long, SSL_ctrl, SSL *, ssl, a0, LONG, cmd, d0, long, larg, d1, void *, parg, a1, \
  , AMISSL_BASE_NAME)

#define SSL_callback_ctrl(a, a1, b) \
  LP3FP(0x229e, long, SSL_callback_ctrl, SSL *, a, a0, LONG, a1, d0, __fpt, b, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)())

#define SSL_CTX_ctrl(ctx, cmd, larg, parg) \
  LP4(0x22a4, long, SSL_CTX_ctrl, SSL_CTX *, ctx, a0, LONG, cmd, d0, long, larg, d1, void *, parg, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_callback_ctrl(a1, a2, a3) \
  LP3FP(0x22aa, long, SSL_CTX_callback_ctrl, SSL_CTX *, a1, a0, LONG, a2, d0, __fpt, a3, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)())

#define SSL_get_error(s, ret_code) \
  LP2(0x22b0, int, SSL_get_error, const SSL *, s, a0, LONG, ret_code, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_version(s) \
  LP1(0x22b6, const char *, SSL_get_version, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_ssl_version(ctx, meth) \
  LP2(0x22bc, int, SSL_CTX_set_ssl_version, SSL_CTX *, ctx, a0, SSL_METHOD *, meth, a1, \
  , AMISSL_BASE_NAME)

#define SSLv2_method() \
  LP0(0x22c2, SSL_METHOD *, SSLv2_method, \
  , AMISSL_BASE_NAME)

#define SSLv2_server_method() \
  LP0(0x22c8, SSL_METHOD *, SSLv2_server_method, \
  , AMISSL_BASE_NAME)

#define SSLv2_client_method() \
  LP0(0x22ce, SSL_METHOD *, SSLv2_client_method, \
  , AMISSL_BASE_NAME)

#define SSLv3_method() \
  LP0(0x22d4, SSL_METHOD *, SSLv3_method, \
  , AMISSL_BASE_NAME)

#define SSLv3_server_method() \
  LP0(0x22da, SSL_METHOD *, SSLv3_server_method, \
  , AMISSL_BASE_NAME)

#define SSLv3_client_method() \
  LP0(0x22e0, SSL_METHOD *, SSLv3_client_method, \
  , AMISSL_BASE_NAME)

#define SSLv23_method() \
  LP0(0x22e6, SSL_METHOD *, SSLv23_method, \
  , AMISSL_BASE_NAME)

#define SSLv23_server_method() \
  LP0(0x22ec, SSL_METHOD *, SSLv23_server_method, \
  , AMISSL_BASE_NAME)

#define SSLv23_client_method() \
  LP0(0x22f2, SSL_METHOD *, SSLv23_client_method, \
  , AMISSL_BASE_NAME)

#define TLSv1_method() \
  LP0(0x22f8, SSL_METHOD *, TLSv1_method, \
  , AMISSL_BASE_NAME)

#define TLSv1_server_method() \
  LP0(0x22fe, SSL_METHOD *, TLSv1_server_method, \
  , AMISSL_BASE_NAME)

#define TLSv1_client_method() \
  LP0(0x2304, SSL_METHOD *, TLSv1_client_method, \
  , AMISSL_BASE_NAME)

#define SSL_get_ciphers(s) \
  LP1(0x230a, STACK_OF(SSL_CIPHER) *, SSL_get_ciphers, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_do_handshake(s) \
  LP1(0x2310, int, SSL_do_handshake, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_renegotiate(s) \
  LP1(0x2316, int, SSL_renegotiate, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_renegotiate_pending(s) \
  LP1(0x231c, int, SSL_renegotiate_pending, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_shutdown(s) \
  LP1(0x2322, int, SSL_shutdown, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_ssl_method(s) \
  LP1(0x2328, SSL_METHOD *, SSL_get_ssl_method, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_ssl_method(s, method) \
  LP2(0x232e, int, SSL_set_ssl_method, SSL *, s, a0, SSL_METHOD *, method, a1, \
  , AMISSL_BASE_NAME)

#define SSL_alert_type_string_long(value) \
  LP1(0x2334, const char *, SSL_alert_type_string_long, LONG, value, d0, \
  , AMISSL_BASE_NAME)

#define SSL_alert_type_string(value) \
  LP1(0x233a, const char *, SSL_alert_type_string, LONG, value, d0, \
  , AMISSL_BASE_NAME)

#define SSL_alert_desc_string_long(value) \
  LP1(0x2340, const char *, SSL_alert_desc_string_long, LONG, value, d0, \
  , AMISSL_BASE_NAME)

#define SSL_alert_desc_string(value) \
  LP1(0x2346, const char *, SSL_alert_desc_string, LONG, value, d0, \
  , AMISSL_BASE_NAME)

#define SSL_set_client_CA_list(s, name_list) \
  LP2NR(0x234c, SSL_set_client_CA_list, SSL *, s, a0, STACK_OF(X509_NAME) *, name_list, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_client_CA_list(ctx, name_list) \
  LP2NR(0x2352, SSL_CTX_set_client_CA_list, SSL_CTX *, ctx, a0, STACK_OF(X509_NAME) *, name_list, a1, \
  , AMISSL_BASE_NAME)

#define SSL_get_client_CA_list(s) \
  LP1(0x2358, STACK_OF(X509_NAME) *, SSL_get_client_CA_list, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_client_CA_list(s) \
  LP1(0x235e, STACK_OF(X509_NAME) *, SSL_CTX_get_client_CA_list, const SSL_CTX *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_add_client_CA(ssl, x) \
  LP2(0x2364, int, SSL_add_client_CA, SSL *, ssl, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_add_client_CA(ctx, x) \
  LP2(0x236a, int, SSL_CTX_add_client_CA, SSL_CTX *, ctx, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define SSL_set_connect_state(s) \
  LP1NR(0x2370, SSL_set_connect_state, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_accept_state(s) \
  LP1NR(0x2376, SSL_set_accept_state, SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_default_timeout(s) \
  LP1(0x237c, long, SSL_get_default_timeout, const SSL *, s, a0, \
  , AMISSL_BASE_NAME)

#define SSL_library_init() \
  LP0(0x2382, int, SSL_library_init, \
  , AMISSL_BASE_NAME)

#define SSL_CIPHER_description(a1, buf, size) \
  LP3(0x2388, char *, SSL_CIPHER_description, SSL_CIPHER *, a1, a0, char *, buf, a1, LONG, size, d0, \
  , AMISSL_BASE_NAME)

#define SSL_dup_CA_list(sk) \
  LP1(0x238e, STACK_OF(X509_NAME) *, SSL_dup_CA_list, STACK_OF(X509_NAME) *, sk, a0, \
  , AMISSL_BASE_NAME)

#define SSL_dup(ssl) \
  LP1(0x2394, SSL *, SSL_dup, SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_certificate(ssl) \
  LP1(0x239a, X509 *, SSL_get_certificate, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_privatekey(ssl) \
  LP1(0x23a0, struct evp_pkey_st *, SSL_get_privatekey, SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_quiet_shutdown(ctx, mode) \
  LP2NR(0x23a6, SSL_CTX_set_quiet_shutdown, SSL_CTX *, ctx, a0, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_quiet_shutdown(ctx) \
  LP1(0x23ac, int, SSL_CTX_get_quiet_shutdown, const SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_quiet_shutdown(ssl, mode) \
  LP2NR(0x23b2, SSL_set_quiet_shutdown, SSL *, ssl, a0, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_quiet_shutdown(ssl) \
  LP1(0x23b8, int, SSL_get_quiet_shutdown, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_shutdown(ssl, mode) \
  LP2NR(0x23be, SSL_set_shutdown, SSL *, ssl, a0, LONG, mode, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_shutdown(ssl) \
  LP1(0x23c4, int, SSL_get_shutdown, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_version(ssl) \
  LP1(0x23ca, int, SSL_version, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_default_verify_paths(ctx) \
  LP1(0x23d0, int, SSL_CTX_set_default_verify_paths, SSL_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_load_verify_locations(ctx, CAfile, CApath) \
  LP3(0x23d6, int, SSL_CTX_load_verify_locations, SSL_CTX *, ctx, a0, const char *, CAfile, a1, const char *, CApath, a2, \
  , AMISSL_BASE_NAME)

#define SSL_get_session(ssl) \
  LP1(0x23dc, SSL_SESSION *, SSL_get_session, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get1_session(ssl) \
  LP1(0x23e2, SSL_SESSION *, SSL_get1_session, SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_get_SSL_CTX(ssl) \
  LP1(0x23e8, SSL_CTX *, SSL_get_SSL_CTX, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_info_callback(ssl, cb) \
  LP2NRFP(0x23ee, SSL_set_info_callback, SSL *, ssl, a0, __fpt, cb, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(const SSL *ssl, int type, int val))

#define SSL_get_info_callback(ssl) \
  LP1(0x23f4, void (*)(const SSL *ssl, int type, int val), SSL_get_info_callback, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_state(ssl) \
  LP1(0x23fa, int, SSL_state, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_verify_result(ssl, v) \
  LP2NR(0x2400, SSL_set_verify_result, SSL *, ssl, a0, long, v, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_verify_result(ssl) \
  LP1(0x2406, long, SSL_get_verify_result, const SSL *, ssl, a0, \
  , AMISSL_BASE_NAME)

#define SSL_set_ex_data(ssl, idx, data) \
  LP3(0x240c, int, SSL_set_ex_data, SSL *, ssl, a0, LONG, idx, d0, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define SSL_get_ex_data(ssl, idx) \
  LP2(0x2412, void *, SSL_get_ex_data, const SSL *, ssl, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define SSL_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x2418, int, SSL_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define SSL_SESSION_set_ex_data(ss, idx, data) \
  LP3(0x241e, int, SSL_SESSION_set_ex_data, SSL_SESSION *, ss, a0, LONG, idx, d0, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_get_ex_data(ss, idx) \
  LP2(0x2424, void *, SSL_SESSION_get_ex_data, const SSL_SESSION *, ss, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define SSL_SESSION_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x242a, int, SSL_SESSION_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define SSL_CTX_set_ex_data(ssl, idx, data) \
  LP3(0x2430, int, SSL_CTX_set_ex_data, SSL_CTX *, ssl, a0, LONG, idx, d0, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_ex_data(ssl, idx) \
  LP2(0x2436, void *, SSL_CTX_get_ex_data, const SSL_CTX *, ssl, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x243c, int, SSL_CTX_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define SSL_get_ex_data_X509_STORE_CTX_idx() \
  LP0(0x2442, int, SSL_get_ex_data_X509_STORE_CTX_idx, \
  , AMISSL_BASE_NAME)

#define SSL_CTX_set_tmp_rsa_callback(ctx, cb) \
  LP2NRFP(0x2448, SSL_CTX_set_tmp_rsa_callback, SSL_CTX *, ctx, a0, __fpt, cb, a1, \
  , AMISSL_BASE_NAME, RSA * (*__fpt)(SSL *ssl, int is_export, int keylength))

#define SSL_set_tmp_rsa_callback(ssl, cb) \
  LP2NRFP(0x244e, SSL_set_tmp_rsa_callback, SSL *, ssl, a0, __fpt, cb, a1, \
  , AMISSL_BASE_NAME, RSA * (*__fpt)(SSL *ssl, int is_export, int keylength))

#define SSL_CTX_set_tmp_dh_callback(ctx, dh) \
  LP2NRFP(0x2454, SSL_CTX_set_tmp_dh_callback, SSL_CTX *, ctx, a0, __fpt, dh, a1, \
  , AMISSL_BASE_NAME, DH * (*__fpt)(SSL *ssl, int is_export, int keylength))

#define SSL_set_tmp_dh_callback(ssl, dh) \
  LP2NRFP(0x245a, SSL_set_tmp_dh_callback, SSL *, ssl, a0, __fpt, dh, a1, \
  , AMISSL_BASE_NAME, DH * (*__fpt)(SSL *ssl, int is_export, int keylength))

#define SSL_COMP_add_compression_method(id, cm) \
  LP2(0x2460, int, SSL_COMP_add_compression_method, LONG, id, d0, COMP_METHOD *, cm, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_SSL_strings() \
  LP0NR(0x2466, ERR_load_SSL_strings, \
  , AMISSL_BASE_NAME)

#define sk_num(a) \
  LP1(0x246c, int, sk_num, const STACK *, a, a0, \
  , AMISSL_BASE_NAME)

#define sk_value(a, b) \
  LP2(0x2472, char *, sk_value, const STACK *, a, a0, LONG, b, d0, \
  , AMISSL_BASE_NAME)

#define sk_set(a, b, c) \
  LP3(0x2478, char *, sk_set, STACK *, a, a0, LONG, b, d0, char *, c, a1, \
  , AMISSL_BASE_NAME)

#define sk_new(cmp) \
  LP1FP(0x247e, STACK *, sk_new, __fpt, cmp, a0, \
  , AMISSL_BASE_NAME, int (*__fpt)(const char *const *, const char *const *))

#define sk_new_null() \
  LP0(0x2484, STACK *, sk_new_null, \
  , AMISSL_BASE_NAME)

#define sk_free(a) \
  LP1NR(0x248a, sk_free, STACK *, a, a0, \
  , AMISSL_BASE_NAME)

#define sk_pop_free(st, func) \
  LP2NRFP(0x2490, sk_pop_free, STACK *, st, a0, __fpt, func, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(void *))

#define sk_insert(sk, data, where) \
  LP3(0x2496, int, sk_insert, STACK *, sk, a0, char *, data, a1, LONG, where, d0, \
  , AMISSL_BASE_NAME)

#define sk_delete(st, loc) \
  LP2(0x249c, char *, sk_delete, STACK *, st, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define sk_delete_ptr(st, p) \
  LP2(0x24a2, char *, sk_delete_ptr, STACK *, st, a0, char *, p, a1, \
  , AMISSL_BASE_NAME)

#define sk_find(st, data) \
  LP2(0x24a8, int, sk_find, STACK *, st, a0, char *, data, a1, \
  , AMISSL_BASE_NAME)

#define sk_push(st, data) \
  LP2(0x24ae, int, sk_push, STACK *, st, a0, char *, data, a1, \
  , AMISSL_BASE_NAME)

#define sk_unshift(st, data) \
  LP2(0x24b4, int, sk_unshift, STACK *, st, a0, char *, data, a1, \
  , AMISSL_BASE_NAME)

#define sk_shift(st) \
  LP1(0x24ba, char *, sk_shift, STACK *, st, a0, \
  , AMISSL_BASE_NAME)

#define sk_pop(st) \
  LP1(0x24c0, char *, sk_pop, STACK *, st, a0, \
  , AMISSL_BASE_NAME)

#define sk_zero(st) \
  LP1NR(0x24c6, sk_zero, STACK *, st, a0, \
  , AMISSL_BASE_NAME)

#define sk_set_cmp_func(sk, c) \
  LP2FP(0x24cc, int (*)(const char *const *, const char *const *), sk_set_cmp_func, STACK *, sk, a0, __fpt, c, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(const char *const *, const char *const *))

#define sk_dup(st) \
  LP1(0x24d2, STACK *, sk_dup, STACK *, st, a0, \
  , AMISSL_BASE_NAME)

#define sk_sort(st) \
  LP1NR(0x24d8, sk_sort, STACK *, st, a0, \
  , AMISSL_BASE_NAME)

#define sk_is_sorted(st) \
  LP1(0x24de, int, sk_is_sorted, const STACK *, st, a0, \
  , AMISSL_BASE_NAME)

#define ms_time_new() \
  LP0(0x24e4, char *, ms_time_new, \
  , AMISSL_BASE_NAME)

#define ms_time_free(a) \
  LP1NR(0x24ea, ms_time_free, char *, a, a0, \
  , AMISSL_BASE_NAME)

#define ms_time_get(a) \
  LP1NR(0x24f0, ms_time_get, char *, a, a0, \
  , AMISSL_BASE_NAME)

#define ms_time_diff(start, end) \
  LP2(0x24f6, double, ms_time_diff, char *, start, a0, char *, end, a1, \
  , AMISSL_BASE_NAME)

#define ms_time_cmp(ap, bp) \
  LP2(0x24fc, int, ms_time_cmp, char *, ap, a0, char *, bp, a1, \
  , AMISSL_BASE_NAME)

#define TXT_DB_read(in, num) \
  LP2(0x2502, TXT_DB *, TXT_DB_read, BIO *, in, a0, LONG, num, d0, \
  , AMISSL_BASE_NAME)

#define TXT_DB_write(out, db) \
  LP2(0x2508, long, TXT_DB_write, BIO *, out, a0, TXT_DB *, db, a1, \
  , AMISSL_BASE_NAME)

#define TXT_DB_create_index(db, field, qual, hash, cmp) \
  LP5FP(0x250e, int, TXT_DB_create_index, TXT_DB *, db, a0, LONG, field, d0, __fpt, qual, a1, LHASH_HASH_FN_TYPE, hash, d1, LHASH_COMP_FN_TYPE, cmp, d2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define TXT_DB_free(db) \
  LP1NR(0x2514, TXT_DB_free, TXT_DB *, db, a0, \
  , AMISSL_BASE_NAME)

#define TXT_DB_get_by_index(db, idx, value) \
  LP3(0x251a, char **, TXT_DB_get_by_index, TXT_DB *, db, a0, LONG, idx, d0, char **, value, a1, \
  , AMISSL_BASE_NAME)

#define TXT_DB_insert(db, value) \
  LP2(0x2520, int, TXT_DB_insert, TXT_DB *, db, a0, char **, value, a1, \
  , AMISSL_BASE_NAME)

#define UI_new() \
  LP0(0x2526, UI *, UI_new, \
  , AMISSL_BASE_NAME)

#define UI_new_method(method) \
  LP1(0x252c, UI *, UI_new_method, const UI_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define UI_free(ui) \
  LP1NR(0x2532, UI_free, UI *, ui, a0, \
  , AMISSL_BASE_NAME)

#define UI_add_input_string(ui, prompt, flags, result_buf, minsize, maxsize) \
  LP6(0x2538, int, UI_add_input_string, UI *, ui, a0, const char *, prompt, a1, LONG, flags, d0, char *, result_buf, a2, LONG, minsize, d1, LONG, maxsize, d2, \
  , AMISSL_BASE_NAME)

#define UI_dup_input_string(ui, prompt, flags, result_buf, minsize, maxsize) \
  LP6(0x253e, int, UI_dup_input_string, UI *, ui, a0, const char *, prompt, a1, LONG, flags, d0, char *, result_buf, a2, LONG, minsize, d1, LONG, maxsize, d2, \
  , AMISSL_BASE_NAME)

#define UI_add_verify_string(ui, prompt, flags, result_buf, minsize, maxsize, test_buf) \
  LP7(0x2544, int, UI_add_verify_string, UI *, ui, a0, const char *, prompt, a1, LONG, flags, d0, char *, result_buf, a2, LONG, minsize, d1, LONG, maxsize, d2, const char *, test_buf, a3, \
  , AMISSL_BASE_NAME)

#define UI_dup_verify_string(ui, prompt, flags, result_buf, minsize, maxsize, test_buf) \
  LP7(0x254a, int, UI_dup_verify_string, UI *, ui, a0, const char *, prompt, a1, LONG, flags, d0, char *, result_buf, a2, LONG, minsize, d1, LONG, maxsize, d2, const char *, test_buf, a3, \
  , AMISSL_BASE_NAME)

#define UI_add_input_boolean(ui, prompt, action_desc, ok_chars, cancel_chars, flags, result_buf) \
  LP7(0x2550, int, UI_add_input_boolean, UI *, ui, a0, const char *, prompt, a1, const char *, action_desc, a2, const char *, ok_chars, a3, const char *, cancel_chars, d0, LONG, flags, d1, char *, result_buf, d2, \
  , AMISSL_BASE_NAME)

#define UI_dup_input_boolean(ui, prompt, action_desc, ok_chars, cancel_chars, flags, result_buf) \
  LP7(0x2556, int, UI_dup_input_boolean, UI *, ui, a0, const char *, prompt, a1, const char *, action_desc, a2, const char *, ok_chars, a3, const char *, cancel_chars, d0, LONG, flags, d1, char *, result_buf, d2, \
  , AMISSL_BASE_NAME)

#define UI_add_info_string(ui, text) \
  LP2(0x255c, int, UI_add_info_string, UI *, ui, a0, const char *, text, a1, \
  , AMISSL_BASE_NAME)

#define UI_dup_info_string(ui, text) \
  LP2(0x2562, int, UI_dup_info_string, UI *, ui, a0, const char *, text, a1, \
  , AMISSL_BASE_NAME)

#define UI_add_error_string(ui, text) \
  LP2(0x2568, int, UI_add_error_string, UI *, ui, a0, const char *, text, a1, \
  , AMISSL_BASE_NAME)

#define UI_dup_error_string(ui, text) \
  LP2(0x256e, int, UI_dup_error_string, UI *, ui, a0, const char *, text, a1, \
  , AMISSL_BASE_NAME)

#define UI_construct_prompt(ui_method, object_desc, object_name) \
  LP3(0x2574, char *, UI_construct_prompt, UI *, ui_method, a0, const char *, object_desc, a1, const char *, object_name, a2, \
  , AMISSL_BASE_NAME)

#define UI_add_user_data(ui, user_data) \
  LP2(0x257a, void *, UI_add_user_data, UI *, ui, a0, void *, user_data, a1, \
  , AMISSL_BASE_NAME)

#define UI_get0_user_data(ui) \
  LP1(0x2580, void *, UI_get0_user_data, UI *, ui, a0, \
  , AMISSL_BASE_NAME)

#define UI_get0_result(ui, i) \
  LP2(0x2586, const char *, UI_get0_result, UI *, ui, a0, LONG, i, d0, \
  , AMISSL_BASE_NAME)

#define UI_process(ui) \
  LP1(0x258c, int, UI_process, UI *, ui, a0, \
  , AMISSL_BASE_NAME)

#define UI_ctrl(ui, cmd, i, p, f) \
  LP5FP(0x2592, int, UI_ctrl, UI *, ui, a0, LONG, cmd, d0, long, i, d1, void *, p, a1, __fpt, f, a2, \
  , AMISSL_BASE_NAME, void (*__fpt)())

#define UI_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x2598, int, UI_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define UI_set_ex_data(r, idx, arg) \
  LP3(0x259e, int, UI_set_ex_data, UI *, r, a0, LONG, idx, d0, void *, arg, a1, \
  , AMISSL_BASE_NAME)

#define UI_get_ex_data(r, idx) \
  LP2(0x25a4, void *, UI_get_ex_data, UI *, r, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define UI_set_default_method(meth) \
  LP1NR(0x25aa, UI_set_default_method, const UI_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define UI_get_default_method() \
  LP0(0x25b0, const UI_METHOD *, UI_get_default_method, \
  , AMISSL_BASE_NAME)

#define UI_get_method(ui) \
  LP1(0x25b6, const UI_METHOD *, UI_get_method, UI *, ui, a0, \
  , AMISSL_BASE_NAME)

#define UI_set_method(ui, meth) \
  LP2(0x25bc, const UI_METHOD *, UI_set_method, UI *, ui, a0, const UI_METHOD *, meth, a1, \
  , AMISSL_BASE_NAME)

#define UI_OpenSSL() \
  LP0(0x25c2, UI_METHOD *, UI_OpenSSL, \
  , AMISSL_BASE_NAME)

#define UI_create_method(name) \
  LP1(0x25c8, UI_METHOD *, UI_create_method, char *, name, a0, \
  , AMISSL_BASE_NAME)

#define UI_destroy_method(ui_method) \
  LP1NR(0x25ce, UI_destroy_method, UI_METHOD *, ui_method, a0, \
  , AMISSL_BASE_NAME)

#define UI_method_set_opener(method, opener) \
  LP2FP(0x25d4, int, UI_method_set_opener, UI_METHOD *, method, a0, __fpt, opener, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(UI *ui))

#define UI_method_set_writer(method, writer) \
  LP2FP(0x25da, int, UI_method_set_writer, UI_METHOD *, method, a0, __fpt, writer, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(UI *ui, UI_STRING *uis))

#define UI_method_set_flusher(method, flusher) \
  LP2FP(0x25e0, int, UI_method_set_flusher, UI_METHOD *, method, a0, __fpt, flusher, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(UI *ui))

#define UI_method_set_reader(method, reader) \
  LP2FP(0x25e6, int, UI_method_set_reader, UI_METHOD *, method, a0, __fpt, reader, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(UI *ui, UI_STRING *uis))

#define UI_method_set_closer(method, closer) \
  LP2FP(0x25ec, int, UI_method_set_closer, UI_METHOD *, method, a0, __fpt, closer, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(UI *ui))

#define UI_method_get_opener(method) \
  LP1(0x25f2, int (*)(UI*), UI_method_get_opener, UI_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define UI_method_get_writer(method) \
  LP1(0x25f8, int (*)(UI*, UI_STRING*), UI_method_get_writer, UI_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define UI_method_get_flusher(method) \
  LP1(0x25fe, int (*)(UI*), UI_method_get_flusher, UI_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define UI_method_get_reader(method) \
  LP1(0x2604, int (*)(UI*, UI_STRING*), UI_method_get_reader, UI_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define UI_method_get_closer(method) \
  LP1(0x260a, int (*)(UI*), UI_method_get_closer, UI_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define UI_get_string_type(uis) \
  LP1(0x2610, enum UI_string_types, UI_get_string_type, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get_input_flags(uis) \
  LP1(0x2616, int, UI_get_input_flags, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get0_output_string(uis) \
  LP1(0x261c, const char *, UI_get0_output_string, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get0_action_string(uis) \
  LP1(0x2622, const char *, UI_get0_action_string, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get0_result_string(uis) \
  LP1(0x2628, const char *, UI_get0_result_string, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get0_test_string(uis) \
  LP1(0x262e, const char *, UI_get0_test_string, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get_result_minsize(uis) \
  LP1(0x2634, int, UI_get_result_minsize, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_get_result_maxsize(uis) \
  LP1(0x263a, int, UI_get_result_maxsize, UI_STRING *, uis, a0, \
  , AMISSL_BASE_NAME)

#define UI_set_result(ui, uis, result) \
  LP3(0x2640, int, UI_set_result, UI *, ui, a0, UI_STRING *, uis, a1, const char *, result, a2, \
  , AMISSL_BASE_NAME)

#define UI_UTIL_read_pw_string(buf, length, prompt, verify) \
  LP4(0x2646, int, UI_UTIL_read_pw_string, char *, buf, a0, LONG, length, d0, const char *, prompt, a1, LONG, verify, d1, \
  , AMISSL_BASE_NAME)

#define UI_UTIL_read_pw(buf, buff, size, prompt, verify) \
  LP5(0x264c, int, UI_UTIL_read_pw, char *, buf, a0, char *, buff, a1, LONG, size, d0, const char *, prompt, a2, LONG, verify, d1, \
  , AMISSL_BASE_NAME)

#define ERR_load_UI_strings() \
  LP0NR(0x2652, ERR_load_UI_strings, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_read_pw_string(buf, length, prompt, verify) \
  LP4(0x2658, int, _ossl_old_des_read_pw_string, char *, buf, a0, LONG, length, d0, const char *, prompt, a1, LONG, verify, d1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_read_pw(buf, buff, size, prompt, verify) \
  LP5(0x265e, int, _ossl_old_des_read_pw, char *, buf, a0, char *, buff, a1, LONG, size, d0, const char *, prompt, a2, LONG, verify, d1, \
  , AMISSL_BASE_NAME)

#define X509_verify_cert_error_string(n) \
  LP1(0x2664, const char *, X509_verify_cert_error_string, long, n, d0, \
  , AMISSL_BASE_NAME)

#define X509_verify(a, r) \
  LP2(0x266a, int, X509_verify, X509 *, a, a0, EVP_PKEY *, r, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_verify(a, r) \
  LP2(0x2670, int, X509_REQ_verify, X509_REQ *, a, a0, EVP_PKEY *, r, a1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_verify(a, r) \
  LP2(0x2676, int, X509_CRL_verify, X509_CRL *, a, a0, EVP_PKEY *, r, a1, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_verify(a, r) \
  LP2(0x267c, int, NETSCAPE_SPKI_verify, NETSCAPE_SPKI *, a, a0, EVP_PKEY *, r, a1, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_b64_decode(str, len) \
  LP2(0x2682, NETSCAPE_SPKI *, NETSCAPE_SPKI_b64_decode, const char *, str, a0, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_b64_encode(x) \
  LP1(0x2688, char *, NETSCAPE_SPKI_b64_encode, NETSCAPE_SPKI *, x, a0, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_get_pubkey(x) \
  LP1(0x268e, EVP_PKEY *, NETSCAPE_SPKI_get_pubkey, NETSCAPE_SPKI *, x, a0, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_set_pubkey(x, pkey) \
  LP2(0x2694, int, NETSCAPE_SPKI_set_pubkey, NETSCAPE_SPKI *, x, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_print(out, spki) \
  LP2(0x269a, int, NETSCAPE_SPKI_print, BIO *, out, a0, NETSCAPE_SPKI *, spki, a1, \
  , AMISSL_BASE_NAME)

#define X509_signature_print(bp, alg, sig) \
  LP3(0x26a0, int, X509_signature_print, BIO *, bp, a0, X509_ALGOR *, alg, a1, ASN1_STRING *, sig, a2, \
  , AMISSL_BASE_NAME)

#define X509_sign(x, pkey, md) \
  LP3(0x26a6, int, X509_sign, X509 *, x, a0, EVP_PKEY *, pkey, a1, const EVP_MD *, md, a2, \
  , AMISSL_BASE_NAME)

#define X509_REQ_sign(x, pkey, md) \
  LP3(0x26ac, int, X509_REQ_sign, X509_REQ *, x, a0, EVP_PKEY *, pkey, a1, const EVP_MD *, md, a2, \
  , AMISSL_BASE_NAME)

#define X509_CRL_sign(x, pkey, md) \
  LP3(0x26b2, int, X509_CRL_sign, X509_CRL *, x, a0, EVP_PKEY *, pkey, a1, const EVP_MD *, md, a2, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_sign(x, pkey, md) \
  LP3(0x26b8, int, NETSCAPE_SPKI_sign, NETSCAPE_SPKI *, x, a0, EVP_PKEY *, pkey, a1, const EVP_MD *, md, a2, \
  , AMISSL_BASE_NAME)

#define X509_pubkey_digest(data, type, md, len) \
  LP4(0x26be, int, X509_pubkey_digest, const X509 *, data, a0, const EVP_MD *, type, a1, unsigned char *, md, a2, unsigned int *, len, a3, \
  , AMISSL_BASE_NAME)

#define X509_digest(data, type, md, len) \
  LP4(0x26c4, int, X509_digest, const X509 *, data, a0, const EVP_MD *, type, a1, unsigned char *, md, a2, unsigned int *, len, a3, \
  , AMISSL_BASE_NAME)

#define X509_CRL_digest(data, type, md, len) \
  LP4(0x26ca, int, X509_CRL_digest, const X509_CRL *, data, a0, const EVP_MD *, type, a1, unsigned char *, md, a2, unsigned int *, len, a3, \
  , AMISSL_BASE_NAME)

#define X509_REQ_digest(data, type, md, len) \
  LP4(0x26d0, int, X509_REQ_digest, const X509_REQ *, data, a0, const EVP_MD *, type, a1, unsigned char *, md, a2, unsigned int *, len, a3, \
  , AMISSL_BASE_NAME)

#define X509_NAME_digest(data, type, md, len) \
  LP4(0x26d6, int, X509_NAME_digest, const X509_NAME *, data, a0, const EVP_MD *, type, a1, unsigned char *, md, a2, unsigned int *, len, a3, \
  , AMISSL_BASE_NAME)

#define d2i_X509_bio(bp, x509) \
  LP2(0x26dc, X509 *, d2i_X509_bio, BIO *, bp, a0, X509 **, x509, a1, \
  , AMISSL_BASE_NAME)

#define i2d_X509_bio(bp, x509) \
  LP2(0x26e2, int, i2d_X509_bio, BIO *, bp, a0, X509 *, x509, a1, \
  , AMISSL_BASE_NAME)

#define d2i_X509_CRL_bio(bp, crl) \
  LP2(0x26e8, X509_CRL *, d2i_X509_CRL_bio, BIO *, bp, a0, X509_CRL **, crl, a1, \
  , AMISSL_BASE_NAME)

#define i2d_X509_CRL_bio(bp, crl) \
  LP2(0x26ee, int, i2d_X509_CRL_bio, BIO *, bp, a0, X509_CRL *, crl, a1, \
  , AMISSL_BASE_NAME)

#define d2i_X509_REQ_bio(bp, req) \
  LP2(0x26f4, X509_REQ *, d2i_X509_REQ_bio, BIO *, bp, a0, X509_REQ **, req, a1, \
  , AMISSL_BASE_NAME)

#define i2d_X509_REQ_bio(bp, req) \
  LP2(0x26fa, int, i2d_X509_REQ_bio, BIO *, bp, a0, X509_REQ *, req, a1, \
  , AMISSL_BASE_NAME)

#define d2i_RSAPrivateKey_bio(bp, rsa) \
  LP2(0x2700, RSA *, d2i_RSAPrivateKey_bio, BIO *, bp, a0, RSA **, rsa, a1, \
  , AMISSL_BASE_NAME)

#define i2d_RSAPrivateKey_bio(bp, rsa) \
  LP2(0x2706, int, i2d_RSAPrivateKey_bio, BIO *, bp, a0, RSA *, rsa, a1, \
  , AMISSL_BASE_NAME)

#define d2i_RSAPublicKey_bio(bp, rsa) \
  LP2(0x270c, RSA *, d2i_RSAPublicKey_bio, BIO *, bp, a0, RSA **, rsa, a1, \
  , AMISSL_BASE_NAME)

#define i2d_RSAPublicKey_bio(bp, rsa) \
  LP2(0x2712, int, i2d_RSAPublicKey_bio, BIO *, bp, a0, RSA *, rsa, a1, \
  , AMISSL_BASE_NAME)

#define d2i_RSA_PUBKEY_bio(bp, rsa) \
  LP2(0x2718, RSA *, d2i_RSA_PUBKEY_bio, BIO *, bp, a0, RSA **, rsa, a1, \
  , AMISSL_BASE_NAME)

#define i2d_RSA_PUBKEY_bio(bp, rsa) \
  LP2(0x271e, int, i2d_RSA_PUBKEY_bio, BIO *, bp, a0, RSA *, rsa, a1, \
  , AMISSL_BASE_NAME)

#define d2i_DSA_PUBKEY_bio(bp, dsa) \
  LP2(0x2724, DSA *, d2i_DSA_PUBKEY_bio, BIO *, bp, a0, DSA **, dsa, a1, \
  , AMISSL_BASE_NAME)

#define i2d_DSA_PUBKEY_bio(bp, dsa) \
  LP2(0x272a, int, i2d_DSA_PUBKEY_bio, BIO *, bp, a0, DSA *, dsa, a1, \
  , AMISSL_BASE_NAME)

#define d2i_DSAPrivateKey_bio(bp, dsa) \
  LP2(0x2730, DSA *, d2i_DSAPrivateKey_bio, BIO *, bp, a0, DSA **, dsa, a1, \
  , AMISSL_BASE_NAME)

#define i2d_DSAPrivateKey_bio(bp, dsa) \
  LP2(0x2736, int, i2d_DSAPrivateKey_bio, BIO *, bp, a0, DSA *, dsa, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS8_bio(bp, p8) \
  LP2(0x273c, X509_SIG *, d2i_PKCS8_bio, BIO *, bp, a0, X509_SIG **, p8, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS8_bio(bp, p8) \
  LP2(0x2742, int, i2d_PKCS8_bio, BIO *, bp, a0, X509_SIG *, p8, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf) \
  LP2(0x2748, PKCS8_PRIV_KEY_INFO *, d2i_PKCS8_PRIV_KEY_INFO_bio, BIO *, bp, a0, PKCS8_PRIV_KEY_INFO **, p8inf, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf) \
  LP2(0x274e, int, i2d_PKCS8_PRIV_KEY_INFO_bio, BIO *, bp, a0, PKCS8_PRIV_KEY_INFO *, p8inf, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS8PrivateKeyInfo_bio(bp, key) \
  LP2(0x2754, int, i2d_PKCS8PrivateKeyInfo_bio, BIO *, bp, a0, EVP_PKEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PrivateKey_bio(bp, pkey) \
  LP2(0x275a, int, i2d_PrivateKey_bio, BIO *, bp, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PrivateKey_bio(bp, a) \
  LP2(0x2760, EVP_PKEY *, d2i_PrivateKey_bio, BIO *, bp, a0, EVP_PKEY **, a, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PUBKEY_bio(bp, pkey) \
  LP2(0x2766, int, i2d_PUBKEY_bio, BIO *, bp, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PUBKEY_bio(bp, a) \
  LP2(0x276c, EVP_PKEY *, d2i_PUBKEY_bio, BIO *, bp, a0, EVP_PKEY **, a, a1, \
  , AMISSL_BASE_NAME)

#define X509_dup(x509) \
  LP1(0x2772, X509 *, X509_dup, X509 *, x509, a0, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_dup(xa) \
  LP1(0x2778, X509_ATTRIBUTE *, X509_ATTRIBUTE_dup, X509_ATTRIBUTE *, xa, a0, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_dup(ex) \
  LP1(0x277e, X509_EXTENSION *, X509_EXTENSION_dup, X509_EXTENSION *, ex, a0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_dup(crl) \
  LP1(0x2784, X509_CRL *, X509_CRL_dup, X509_CRL *, crl, a0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_dup(req) \
  LP1(0x278a, X509_REQ *, X509_REQ_dup, X509_REQ *, req, a0, \
  , AMISSL_BASE_NAME)

#define X509_ALGOR_dup(xn) \
  LP1(0x2790, X509_ALGOR *, X509_ALGOR_dup, X509_ALGOR *, xn, a0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_dup(xn) \
  LP1(0x2796, X509_NAME *, X509_NAME_dup, X509_NAME *, xn, a0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_dup(ne) \
  LP1(0x279c, X509_NAME_ENTRY *, X509_NAME_ENTRY_dup, X509_NAME_ENTRY *, ne, a0, \
  , AMISSL_BASE_NAME)

#define X509_cmp_time(s, t) \
  LP2(0x27a2, int, X509_cmp_time, ASN1_TIME *, s, a0, time_t *, t, a1, \
  , AMISSL_BASE_NAME)

#define X509_cmp_current_time(s) \
  LP1(0x27a8, int, X509_cmp_current_time, ASN1_TIME *, s, a0, \
  , AMISSL_BASE_NAME)

#define X509_time_adj(s, adj, t) \
  LP3(0x27ae, ASN1_TIME *, X509_time_adj, ASN1_TIME *, s, a0, long, adj, d0, time_t *, t, a1, \
  , AMISSL_BASE_NAME)

#define X509_gmtime_adj(s, adj) \
  LP2(0x27b4, ASN1_TIME *, X509_gmtime_adj, ASN1_TIME *, s, a0, long, adj, d0, \
  , AMISSL_BASE_NAME)

#define X509_get_default_cert_area() \
  LP0(0x27ba, const char *, X509_get_default_cert_area, \
  , AMISSL_BASE_NAME)

#define X509_get_default_cert_dir() \
  LP0(0x27c0, const char *, X509_get_default_cert_dir, \
  , AMISSL_BASE_NAME)

#define X509_get_default_cert_file() \
  LP0(0x27c6, const char *, X509_get_default_cert_file, \
  , AMISSL_BASE_NAME)

#define X509_get_default_cert_dir_env() \
  LP0(0x27cc, const char *, X509_get_default_cert_dir_env, \
  , AMISSL_BASE_NAME)

#define X509_get_default_cert_file_env() \
  LP0(0x27d2, const char *, X509_get_default_cert_file_env, \
  , AMISSL_BASE_NAME)

#define X509_get_default_private_dir() \
  LP0(0x27d8, const char *, X509_get_default_private_dir, \
  , AMISSL_BASE_NAME)

#define X509_to_X509_REQ(x, pkey, md) \
  LP3(0x27de, X509_REQ *, X509_to_X509_REQ, X509 *, x, a0, EVP_PKEY *, pkey, a1, const EVP_MD *, md, a2, \
  , AMISSL_BASE_NAME)

#define X509_REQ_to_X509(r, days, pkey) \
  LP3(0x27e4, X509 *, X509_REQ_to_X509, X509_REQ *, r, a0, LONG, days, d0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define X509_ALGOR_new() \
  LP0(0x27ea, X509_ALGOR *, X509_ALGOR_new, \
  , AMISSL_BASE_NAME)

#define X509_ALGOR_free(a) \
  LP1NR(0x27f0, X509_ALGOR_free, X509_ALGOR *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_ALGOR(a, in, len) \
  LP3(0x27f6, X509_ALGOR *, d2i_X509_ALGOR, X509_ALGOR **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_ALGOR(a, out) \
  LP2(0x27fc, int, i2d_X509_ALGOR, X509_ALGOR *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_ALGOR_it() \
  LP0(0x2802, const ASN1_ITEM *, X509_ALGOR_it, \
  , AMISSL_BASE_NAME)

#define X509_VAL_new() \
  LP0(0x2808, X509_VAL *, X509_VAL_new, \
  , AMISSL_BASE_NAME)

#define X509_VAL_free(a) \
  LP1NR(0x280e, X509_VAL_free, X509_VAL *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_VAL(a, in, len) \
  LP3(0x2814, X509_VAL *, d2i_X509_VAL, X509_VAL **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_VAL(a, out) \
  LP2(0x281a, int, i2d_X509_VAL, X509_VAL *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_VAL_it() \
  LP0(0x2820, const ASN1_ITEM *, X509_VAL_it, \
  , AMISSL_BASE_NAME)

#define X509_PUBKEY_new() \
  LP0(0x2826, X509_PUBKEY *, X509_PUBKEY_new, \
  , AMISSL_BASE_NAME)

#define X509_PUBKEY_free(a) \
  LP1NR(0x282c, X509_PUBKEY_free, X509_PUBKEY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_PUBKEY(a, in, len) \
  LP3(0x2832, X509_PUBKEY *, d2i_X509_PUBKEY, X509_PUBKEY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_PUBKEY(a, out) \
  LP2(0x2838, int, i2d_X509_PUBKEY, X509_PUBKEY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_PUBKEY_it() \
  LP0(0x283e, const ASN1_ITEM *, X509_PUBKEY_it, \
  , AMISSL_BASE_NAME)

#define X509_PUBKEY_set(x, pkey) \
  LP2(0x2844, int, X509_PUBKEY_set, X509_PUBKEY **, x, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define X509_PUBKEY_get(key) \
  LP1(0x284a, EVP_PKEY *, X509_PUBKEY_get, X509_PUBKEY *, key, a0, \
  , AMISSL_BASE_NAME)

#define X509_get_pubkey_parameters(pkey, chain) \
  LP2(0x2850, int, X509_get_pubkey_parameters, EVP_PKEY *, pkey, a0, STACK_OF(X509) *, chain, a1, \
  , AMISSL_BASE_NAME)

#define i2d_PUBKEY(a, pp) \
  LP2(0x2856, int, i2d_PUBKEY, EVP_PKEY *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_PUBKEY(a, pp, length) \
  LP3(0x285c, EVP_PKEY *, d2i_PUBKEY, EVP_PKEY **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define i2d_RSA_PUBKEY(a, pp) \
  LP2(0x2862, int, i2d_RSA_PUBKEY, RSA *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_RSA_PUBKEY(a, pp, length) \
  LP3(0x2868, RSA *, d2i_RSA_PUBKEY, RSA **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define i2d_DSA_PUBKEY(a, pp) \
  LP2(0x286e, int, i2d_DSA_PUBKEY, DSA *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_DSA_PUBKEY(a, pp, length) \
  LP3(0x2874, DSA *, d2i_DSA_PUBKEY, DSA **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define X509_SIG_new() \
  LP0(0x287a, X509_SIG *, X509_SIG_new, \
  , AMISSL_BASE_NAME)

#define X509_SIG_free(a) \
  LP1NR(0x2880, X509_SIG_free, X509_SIG *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_SIG(a, in, len) \
  LP3(0x2886, X509_SIG *, d2i_X509_SIG, X509_SIG **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_SIG(a, out) \
  LP2(0x288c, int, i2d_X509_SIG, X509_SIG *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_SIG_it() \
  LP0(0x2892, const ASN1_ITEM *, X509_SIG_it, \
  , AMISSL_BASE_NAME)

#define X509_REQ_INFO_new() \
  LP0(0x2898, X509_REQ_INFO *, X509_REQ_INFO_new, \
  , AMISSL_BASE_NAME)

#define X509_REQ_INFO_free(a) \
  LP1NR(0x289e, X509_REQ_INFO_free, X509_REQ_INFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_REQ_INFO(a, in, len) \
  LP3(0x28a4, X509_REQ_INFO *, d2i_X509_REQ_INFO, X509_REQ_INFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_REQ_INFO(a, out) \
  LP2(0x28aa, int, i2d_X509_REQ_INFO, X509_REQ_INFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_INFO_it() \
  LP0(0x28b0, const ASN1_ITEM *, X509_REQ_INFO_it, \
  , AMISSL_BASE_NAME)

#define X509_REQ_new() \
  LP0(0x28b6, X509_REQ *, X509_REQ_new, \
  , AMISSL_BASE_NAME)

#define X509_REQ_free(a) \
  LP1NR(0x28bc, X509_REQ_free, X509_REQ *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_REQ(a, in, len) \
  LP3(0x28c2, X509_REQ *, d2i_X509_REQ, X509_REQ **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_REQ(a, out) \
  LP2(0x28c8, int, i2d_X509_REQ, X509_REQ *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_it() \
  LP0(0x28ce, const ASN1_ITEM *, X509_REQ_it, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_new() \
  LP0(0x28d4, X509_ATTRIBUTE *, X509_ATTRIBUTE_new, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_free(a) \
  LP1NR(0x28da, X509_ATTRIBUTE_free, X509_ATTRIBUTE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_ATTRIBUTE(a, in, len) \
  LP3(0x28e0, X509_ATTRIBUTE *, d2i_X509_ATTRIBUTE, X509_ATTRIBUTE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_ATTRIBUTE(a, out) \
  LP2(0x28e6, int, i2d_X509_ATTRIBUTE, X509_ATTRIBUTE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_it() \
  LP0(0x28ec, const ASN1_ITEM *, X509_ATTRIBUTE_it, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create(nid, atrtype, value) \
  LP3(0x28f2, X509_ATTRIBUTE *, X509_ATTRIBUTE_create, LONG, nid, d0, LONG, atrtype, d1, void *, value, a0, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_new() \
  LP0(0x28f8, X509_EXTENSION *, X509_EXTENSION_new, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_free(a) \
  LP1NR(0x28fe, X509_EXTENSION_free, X509_EXTENSION *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_EXTENSION(a, in, len) \
  LP3(0x2904, X509_EXTENSION *, d2i_X509_EXTENSION, X509_EXTENSION **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_EXTENSION(a, out) \
  LP2(0x290a, int, i2d_X509_EXTENSION, X509_EXTENSION *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_it() \
  LP0(0x2910, const ASN1_ITEM *, X509_EXTENSION_it, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_new() \
  LP0(0x2916, X509_NAME_ENTRY *, X509_NAME_ENTRY_new, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_free(a) \
  LP1NR(0x291c, X509_NAME_ENTRY_free, X509_NAME_ENTRY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_NAME_ENTRY(a, in, len) \
  LP3(0x2922, X509_NAME_ENTRY *, d2i_X509_NAME_ENTRY, X509_NAME_ENTRY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_NAME_ENTRY(a, out) \
  LP2(0x2928, int, i2d_X509_NAME_ENTRY, X509_NAME_ENTRY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_it() \
  LP0(0x292e, const ASN1_ITEM *, X509_NAME_ENTRY_it, \
  , AMISSL_BASE_NAME)

#define X509_NAME_new() \
  LP0(0x2934, X509_NAME *, X509_NAME_new, \
  , AMISSL_BASE_NAME)

#define X509_NAME_free(a) \
  LP1NR(0x293a, X509_NAME_free, X509_NAME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_NAME(a, in, len) \
  LP3(0x2940, X509_NAME *, d2i_X509_NAME, X509_NAME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_NAME(a, out) \
  LP2(0x2946, int, i2d_X509_NAME, X509_NAME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_it() \
  LP0(0x294c, const ASN1_ITEM *, X509_NAME_it, \
  , AMISSL_BASE_NAME)

#define X509_NAME_set(xn, name) \
  LP2(0x2952, int, X509_NAME_set, X509_NAME **, xn, a0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_CINF_new() \
  LP0(0x2958, X509_CINF *, X509_CINF_new, \
  , AMISSL_BASE_NAME)

#define X509_CINF_free(a) \
  LP1NR(0x295e, X509_CINF_free, X509_CINF *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_CINF(a, in, len) \
  LP3(0x2964, X509_CINF *, d2i_X509_CINF, X509_CINF **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_CINF(a, out) \
  LP2(0x296a, int, i2d_X509_CINF, X509_CINF *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_CINF_it() \
  LP0(0x2970, const ASN1_ITEM *, X509_CINF_it, \
  , AMISSL_BASE_NAME)

#define X509_new() \
  LP0(0x2976, X509 *, X509_new, \
  , AMISSL_BASE_NAME)

#define X509_free(a) \
  LP1NR(0x297c, X509_free, X509 *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509(a, in, len) \
  LP3(0x2982, X509 *, d2i_X509, X509 **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509(a, out) \
  LP2(0x2988, int, i2d_X509, X509 *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_it() \
  LP0(0x298e, const ASN1_ITEM *, X509_it, \
  , AMISSL_BASE_NAME)

#define X509_CERT_AUX_new() \
  LP0(0x2994, X509_CERT_AUX *, X509_CERT_AUX_new, \
  , AMISSL_BASE_NAME)

#define X509_CERT_AUX_free(a) \
  LP1NR(0x299a, X509_CERT_AUX_free, X509_CERT_AUX *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_CERT_AUX(a, in, len) \
  LP3(0x29a0, X509_CERT_AUX *, d2i_X509_CERT_AUX, X509_CERT_AUX **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_CERT_AUX(a, out) \
  LP2(0x29a6, int, i2d_X509_CERT_AUX, X509_CERT_AUX *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_CERT_AUX_it() \
  LP0(0x29ac, const ASN1_ITEM *, X509_CERT_AUX_it, \
  , AMISSL_BASE_NAME)

#define X509_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x29b2, int, X509_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define X509_set_ex_data(r, idx, arg) \
  LP3(0x29b8, int, X509_set_ex_data, X509 *, r, a0, LONG, idx, d0, void *, arg, a1, \
  , AMISSL_BASE_NAME)

#define X509_get_ex_data(r, idx) \
  LP2(0x29be, void *, X509_get_ex_data, X509 *, r, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_AUX(a, pp) \
  LP2(0x29c4, int, i2d_X509_AUX, X509 *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_X509_AUX(a, pp, length) \
  LP3(0x29ca, X509 *, d2i_X509_AUX, X509 **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define X509_alias_set1(x, name, len) \
  LP3(0x29d0, int, X509_alias_set1, X509 *, x, a0, unsigned char *, name, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define X509_keyid_set1(x, id, len) \
  LP3(0x29d6, int, X509_keyid_set1, X509 *, x, a0, unsigned char *, id, a1, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define X509_alias_get0(x, len) \
  LP2(0x29dc, unsigned char *, X509_alias_get0, X509 *, x, a0, int *, len, a1, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_set_default(trust) \
  LP1FP(0x29e2, int (*)(int, X509 *, int), X509_TRUST_set_default, __fpt, trust, a0, \
  , AMISSL_BASE_NAME, int (*__fpt)(int, X509 *, int))

#define X509_TRUST_set(t, trust) \
  LP2(0x29e8, int, X509_TRUST_set, int *, t, a0, LONG, trust, d0, \
  , AMISSL_BASE_NAME)

#define X509_add1_trust_object(x, obj) \
  LP2(0x29ee, int, X509_add1_trust_object, X509 *, x, a0, ASN1_OBJECT *, obj, a1, \
  , AMISSL_BASE_NAME)

#define X509_add1_reject_object(x, obj) \
  LP2(0x29f4, int, X509_add1_reject_object, X509 *, x, a0, ASN1_OBJECT *, obj, a1, \
  , AMISSL_BASE_NAME)

#define X509_trust_clear(x) \
  LP1NR(0x29fa, X509_trust_clear, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_reject_clear(x) \
  LP1NR(0x2a00, X509_reject_clear, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_new() \
  LP0(0x2a06, X509_REVOKED *, X509_REVOKED_new, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_free(a) \
  LP1NR(0x2a0c, X509_REVOKED_free, X509_REVOKED *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_REVOKED(a, in, len) \
  LP3(0x2a12, X509_REVOKED *, d2i_X509_REVOKED, X509_REVOKED **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_REVOKED(a, out) \
  LP2(0x2a18, int, i2d_X509_REVOKED, X509_REVOKED *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_it() \
  LP0(0x2a1e, const ASN1_ITEM *, X509_REVOKED_it, \
  , AMISSL_BASE_NAME)

#define X509_CRL_INFO_new() \
  LP0(0x2a24, X509_CRL_INFO *, X509_CRL_INFO_new, \
  , AMISSL_BASE_NAME)

#define X509_CRL_INFO_free(a) \
  LP1NR(0x2a2a, X509_CRL_INFO_free, X509_CRL_INFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_CRL_INFO(a, in, len) \
  LP3(0x2a30, X509_CRL_INFO *, d2i_X509_CRL_INFO, X509_CRL_INFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_CRL_INFO(a, out) \
  LP2(0x2a36, int, i2d_X509_CRL_INFO, X509_CRL_INFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_INFO_it() \
  LP0(0x2a3c, const ASN1_ITEM *, X509_CRL_INFO_it, \
  , AMISSL_BASE_NAME)

#define X509_CRL_new() \
  LP0(0x2a42, X509_CRL *, X509_CRL_new, \
  , AMISSL_BASE_NAME)

#define X509_CRL_free(a) \
  LP1NR(0x2a48, X509_CRL_free, X509_CRL *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_X509_CRL(a, in, len) \
  LP3(0x2a4e, X509_CRL *, d2i_X509_CRL, X509_CRL **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_CRL(a, out) \
  LP2(0x2a54, int, i2d_X509_CRL, X509_CRL *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_it() \
  LP0(0x2a5a, const ASN1_ITEM *, X509_CRL_it, \
  , AMISSL_BASE_NAME)

#define X509_CRL_add0_revoked(crl, rev) \
  LP2(0x2a60, int, X509_CRL_add0_revoked, X509_CRL *, crl, a0, X509_REVOKED *, rev, a1, \
  , AMISSL_BASE_NAME)

#define X509_PKEY_new() \
  LP0(0x2a66, X509_PKEY *, X509_PKEY_new, \
  , AMISSL_BASE_NAME)

#define X509_PKEY_free(a) \
  LP1NR(0x2a6c, X509_PKEY_free, X509_PKEY *, a, a0, \
  , AMISSL_BASE_NAME)

#define i2d_X509_PKEY(a, pp) \
  LP2(0x2a72, int, i2d_X509_PKEY, X509_PKEY *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_X509_PKEY(a, pp, length) \
  LP3(0x2a78, X509_PKEY *, d2i_X509_PKEY, X509_PKEY **, a, a0, unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_new() \
  LP0(0x2a7e, NETSCAPE_SPKI *, NETSCAPE_SPKI_new, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_free(a) \
  LP1NR(0x2a84, NETSCAPE_SPKI_free, NETSCAPE_SPKI *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_NETSCAPE_SPKI(a, in, len) \
  LP3(0x2a8a, NETSCAPE_SPKI *, d2i_NETSCAPE_SPKI, NETSCAPE_SPKI **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_NETSCAPE_SPKI(a, out) \
  LP2(0x2a90, int, i2d_NETSCAPE_SPKI, NETSCAPE_SPKI *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_it() \
  LP0(0x2a96, const ASN1_ITEM *, NETSCAPE_SPKI_it, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKAC_new() \
  LP0(0x2a9c, NETSCAPE_SPKAC *, NETSCAPE_SPKAC_new, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKAC_free(a) \
  LP1NR(0x2aa2, NETSCAPE_SPKAC_free, NETSCAPE_SPKAC *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_NETSCAPE_SPKAC(a, in, len) \
  LP3(0x2aa8, NETSCAPE_SPKAC *, d2i_NETSCAPE_SPKAC, NETSCAPE_SPKAC **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_NETSCAPE_SPKAC(a, out) \
  LP2(0x2aae, int, i2d_NETSCAPE_SPKAC, NETSCAPE_SPKAC *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_SPKAC_it() \
  LP0(0x2ab4, const ASN1_ITEM *, NETSCAPE_SPKAC_it, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_CERT_SEQUENCE_new() \
  LP0(0x2aba, NETSCAPE_CERT_SEQUENCE *, NETSCAPE_CERT_SEQUENCE_new, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_CERT_SEQUENCE_free(a) \
  LP1NR(0x2ac0, NETSCAPE_CERT_SEQUENCE_free, NETSCAPE_CERT_SEQUENCE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_NETSCAPE_CERT_SEQUENCE(a, in, len) \
  LP3(0x2ac6, NETSCAPE_CERT_SEQUENCE *, d2i_NETSCAPE_CERT_SEQUENCE, NETSCAPE_CERT_SEQUENCE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_NETSCAPE_CERT_SEQUENCE(a, out) \
  LP2(0x2acc, int, i2d_NETSCAPE_CERT_SEQUENCE, NETSCAPE_CERT_SEQUENCE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define NETSCAPE_CERT_SEQUENCE_it() \
  LP0(0x2ad2, const ASN1_ITEM *, NETSCAPE_CERT_SEQUENCE_it, \
  , AMISSL_BASE_NAME)

#define X509_INFO_new() \
  LP0(0x2ad8, X509_INFO *, X509_INFO_new, \
  , AMISSL_BASE_NAME)

#define X509_INFO_free(a) \
  LP1NR(0x2ade, X509_INFO_free, X509_INFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_oneline(a, buf, size) \
  LP3(0x2ae4, char *, X509_NAME_oneline, X509_NAME *, a, a0, char *, buf, a1, LONG, size, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_verify(i2d, algor1, signature, data, pkey) \
  LP5FP(0x2aea, int, ASN1_verify, __fpt, i2d, a0, X509_ALGOR *, algor1, a1, ASN1_BIT_STRING *, signature, a2, char *, data, a3, EVP_PKEY *, pkey, d0, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_digest(i2d, type, data, md, len) \
  LP5FP(0x2af0, int, ASN1_digest, __fpt, i2d, a0, const EVP_MD *, type, a1, char *, data, a2, unsigned char *, md, a3, unsigned int *, len, d0, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_sign(i2d, algor1, algor2, signature, data, pkey, type) \
  LP7FP(0x2af6, int, ASN1_sign, __fpt, i2d, a0, X509_ALGOR *, algor1, a1, X509_ALGOR *, algor2, a2, ASN1_BIT_STRING *, signature, a3, char *, data, d0, EVP_PKEY *, pkey, d1, const EVP_MD *, type, d2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_item_digest(it, type, data, md, len) \
  LP5(0x2afc, int, ASN1_item_digest, const ASN1_ITEM *, it, a0, const EVP_MD *, type, a1, void *, data, a2, unsigned char *, md, a3, unsigned int *, len, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_item_verify(it, algor1, signature, data, pkey) \
  LP5(0x2b02, int, ASN1_item_verify, const ASN1_ITEM *, it, a0, X509_ALGOR *, algor1, a1, ASN1_BIT_STRING *, signature, a2, void *, data, a3, EVP_PKEY *, pkey, d0, \
  , AMISSL_BASE_NAME)

#define ASN1_item_sign(it, algor1, algor2, signature, data, pkey, type) \
  LP7(0x2b08, int, ASN1_item_sign, const ASN1_ITEM *, it, a0, X509_ALGOR *, algor1, a1, X509_ALGOR *, algor2, a2, ASN1_BIT_STRING *, signature, a3, void *, data, d0, EVP_PKEY *, pkey, d1, const EVP_MD *, type, d2, \
  , AMISSL_BASE_NAME)

#define X509_set_version(x, version) \
  LP2(0x2b0e, int, X509_set_version, X509 *, x, a0, long, version, d0, \
  , AMISSL_BASE_NAME)

#define X509_set_serialNumber(x, serial) \
  LP2(0x2b14, int, X509_set_serialNumber, X509 *, x, a0, ASN1_INTEGER *, serial, a1, \
  , AMISSL_BASE_NAME)

#define X509_get_serialNumber(x) \
  LP1(0x2b1a, ASN1_INTEGER *, X509_get_serialNumber, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_set_issuer_name(x, name) \
  LP2(0x2b20, int, X509_set_issuer_name, X509 *, x, a0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_get_issuer_name(a) \
  LP1(0x2b26, X509_NAME *, X509_get_issuer_name, X509 *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_set_subject_name(x, name) \
  LP2(0x2b2c, int, X509_set_subject_name, X509 *, x, a0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_get_subject_name(a) \
  LP1(0x2b32, X509_NAME *, X509_get_subject_name, X509 *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_set_notBefore(x, tm) \
  LP2(0x2b38, int, X509_set_notBefore, X509 *, x, a0, ASN1_TIME *, tm, a1, \
  , AMISSL_BASE_NAME)

#define X509_set_notAfter(x, tm) \
  LP2(0x2b3e, int, X509_set_notAfter, X509 *, x, a0, ASN1_TIME *, tm, a1, \
  , AMISSL_BASE_NAME)

#define X509_set_pubkey(x, pkey) \
  LP2(0x2b44, int, X509_set_pubkey, X509 *, x, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define X509_get_pubkey(x) \
  LP1(0x2b4a, EVP_PKEY *, X509_get_pubkey, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_get0_pubkey_bitstr(x) \
  LP1(0x2b50, ASN1_BIT_STRING *, X509_get0_pubkey_bitstr, const X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_certificate_type(x, pubkey) \
  LP2(0x2b56, int, X509_certificate_type, X509 *, x, a0, EVP_PKEY *, pubkey, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_set_version(x, version) \
  LP2(0x2b5c, int, X509_REQ_set_version, X509_REQ *, x, a0, long, version, d0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_set_subject_name(req, name) \
  LP2(0x2b62, int, X509_REQ_set_subject_name, X509_REQ *, req, a0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_set_pubkey(x, pkey) \
  LP2(0x2b68, int, X509_REQ_set_pubkey, X509_REQ *, x, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_pubkey(req) \
  LP1(0x2b6e, EVP_PKEY *, X509_REQ_get_pubkey, X509_REQ *, req, a0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_extension_nid(nid) \
  LP1(0x2b74, int, X509_REQ_extension_nid, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_extension_nids() \
  LP0(0x2b7a, int *, X509_REQ_get_extension_nids, \
  , AMISSL_BASE_NAME)

#define X509_REQ_set_extension_nids(nids) \
  LP1NR(0x2b80, X509_REQ_set_extension_nids, int *, nids, a0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_extensions(req) \
  LP1(0x2b86, STACK_OF(X509_EXTENSION) *, X509_REQ_get_extensions, X509_REQ *, req, a0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_add_extensions_nid(req, exts, nid) \
  LP3(0x2b8c, int, X509_REQ_add_extensions_nid, X509_REQ *, req, a0, STACK_OF(X509_EXTENSION) *, exts, a1, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_add_extensions(req, exts) \
  LP2(0x2b92, int, X509_REQ_add_extensions, X509_REQ *, req, a0, STACK_OF(X509_EXTENSION) *, exts, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_attr_count(req) \
  LP1(0x2b98, int, X509_REQ_get_attr_count, const X509_REQ *, req, a0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_attr_by_NID(req, nid, lastpos) \
  LP3(0x2b9e, int, X509_REQ_get_attr_by_NID, const X509_REQ *, req, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_attr_by_OBJ(req, obj, lastpos) \
  LP3(0x2ba4, int, X509_REQ_get_attr_by_OBJ, const X509_REQ *, req, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get_attr(req, loc) \
  LP2(0x2baa, X509_ATTRIBUTE *, X509_REQ_get_attr, const X509_REQ *, req, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_delete_attr(req, loc) \
  LP2(0x2bb0, X509_ATTRIBUTE *, X509_REQ_delete_attr, X509_REQ *, req, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_add1_attr(req, attr) \
  LP2(0x2bb6, int, X509_REQ_add1_attr, X509_REQ *, req, a0, X509_ATTRIBUTE *, attr, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_add1_attr_by_OBJ(req, obj, type, bytes, len) \
  LP5(0x2bbc, int, X509_REQ_add1_attr_by_OBJ, X509_REQ *, req, a0, const ASN1_OBJECT *, obj, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_add1_attr_by_NID(req, nid, type, bytes, len) \
  LP5(0x2bc2, int, X509_REQ_add1_attr_by_NID, X509_REQ *, req, a0, LONG, nid, d0, LONG, type, d1, const unsigned char *, bytes, a1, LONG, len, d2, \
  , AMISSL_BASE_NAME)

#define X509_REQ_add1_attr_by_txt(req, attrname, type, bytes, len) \
  LP5(0x2bc8, int, X509_REQ_add1_attr_by_txt, X509_REQ *, req, a0, const char *, attrname, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_set_version(x, version) \
  LP2(0x2bce, int, X509_CRL_set_version, X509_CRL *, x, a0, long, version, d0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_set_issuer_name(x, name) \
  LP2(0x2bd4, int, X509_CRL_set_issuer_name, X509_CRL *, x, a0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_set_lastUpdate(x, tm) \
  LP2(0x2bda, int, X509_CRL_set_lastUpdate, X509_CRL *, x, a0, ASN1_TIME *, tm, a1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_set_nextUpdate(x, tm) \
  LP2(0x2be0, int, X509_CRL_set_nextUpdate, X509_CRL *, x, a0, ASN1_TIME *, tm, a1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_sort(crl) \
  LP1(0x2be6, int, X509_CRL_sort, X509_CRL *, crl, a0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_set_serialNumber(x, serial) \
  LP2(0x2bec, int, X509_REVOKED_set_serialNumber, X509_REVOKED *, x, a0, ASN1_INTEGER *, serial, a1, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_set_revocationDate(r, tm) \
  LP2(0x2bf2, int, X509_REVOKED_set_revocationDate, X509_REVOKED *, r, a0, ASN1_TIME *, tm, a1, \
  , AMISSL_BASE_NAME)

#define X509_check_private_key(x509, pkey) \
  LP2(0x2bf8, int, X509_check_private_key, X509 *, x509, a0, EVP_PKEY *, pkey, a1, \
  , AMISSL_BASE_NAME)

#define X509_issuer_and_serial_cmp(a, b) \
  LP2(0x2bfe, int, X509_issuer_and_serial_cmp, const X509 *, a, a0, const X509 *, b, a1, \
  , AMISSL_BASE_NAME)

#define X509_issuer_and_serial_hash(a) \
  LP1(0x2c04, unsigned long, X509_issuer_and_serial_hash, X509 *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_issuer_name_cmp(a, b) \
  LP2(0x2c0a, int, X509_issuer_name_cmp, const X509 *, a, a0, const X509 *, b, a1, \
  , AMISSL_BASE_NAME)

#define X509_issuer_name_hash(a) \
  LP1(0x2c10, unsigned long, X509_issuer_name_hash, X509 *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_subject_name_cmp(a, b) \
  LP2(0x2c16, int, X509_subject_name_cmp, const X509 *, a, a0, const X509 *, b, a1, \
  , AMISSL_BASE_NAME)

#define X509_subject_name_hash(x) \
  LP1(0x2c1c, unsigned long, X509_subject_name_hash, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_cmp(a, b) \
  LP2(0x2c22, int, X509_cmp, const X509 *, a, a0, const X509 *, b, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_cmp(a, b) \
  LP2(0x2c28, int, X509_NAME_cmp, const X509_NAME *, a, a0, const X509_NAME *, b, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_hash(x) \
  LP1(0x2c2e, unsigned long, X509_NAME_hash, X509_NAME *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_cmp(a, b) \
  LP2(0x2c34, int, X509_CRL_cmp, const X509_CRL *, a, a0, const X509_CRL *, b, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_print(bp, name, obase) \
  LP3(0x2c3a, int, X509_NAME_print, BIO *, bp, a0, X509_NAME *, name, a1, LONG, obase, d0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_print_ex(out, nm, indent, flags) \
  LP4(0x2c40, int, X509_NAME_print_ex, BIO *, out, a0, X509_NAME *, nm, a1, LONG, indent, d0, unsigned long, flags, d1, \
  , AMISSL_BASE_NAME)

#define X509_print_ex(bp, x, nmflag, cflag) \
  LP4(0x2c46, int, X509_print_ex, BIO *, bp, a0, X509 *, x, a1, unsigned long, nmflag, d0, unsigned long, cflag, d1, \
  , AMISSL_BASE_NAME)

#define X509_print(bp, x) \
  LP2(0x2c4c, int, X509_print, BIO *, bp, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_ocspid_print(bp, x) \
  LP2(0x2c52, int, X509_ocspid_print, BIO *, bp, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_CERT_AUX_print(bp, x, indent) \
  LP3(0x2c58, int, X509_CERT_AUX_print, BIO *, bp, a0, X509_CERT_AUX *, x, a1, LONG, indent, d0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_print(bp, x) \
  LP2(0x2c5e, int, X509_CRL_print, BIO *, bp, a0, X509_CRL *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_print_ex(bp, x, nmflag, cflag) \
  LP4(0x2c64, int, X509_REQ_print_ex, BIO *, bp, a0, X509_REQ *, x, a1, unsigned long, nmflag, d0, unsigned long, cflag, d1, \
  , AMISSL_BASE_NAME)

#define X509_REQ_print(bp, req) \
  LP2(0x2c6a, int, X509_REQ_print, BIO *, bp, a0, X509_REQ *, req, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_entry_count(name) \
  LP1(0x2c70, int, X509_NAME_entry_count, X509_NAME *, name, a0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_get_text_by_NID(name, nid, buf, len) \
  LP4(0x2c76, int, X509_NAME_get_text_by_NID, X509_NAME *, name, a0, LONG, nid, d0, char *, buf, a1, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_get_text_by_OBJ(name, obj, buf, len) \
  LP4(0x2c7c, int, X509_NAME_get_text_by_OBJ, X509_NAME *, name, a0, ASN1_OBJECT *, obj, a1, char *, buf, a2, LONG, len, d0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_get_index_by_NID(name, nid, lastpos) \
  LP3(0x2c82, int, X509_NAME_get_index_by_NID, X509_NAME *, name, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_get_index_by_OBJ(name, obj, lastpos) \
  LP3(0x2c88, int, X509_NAME_get_index_by_OBJ, X509_NAME *, name, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_get_entry(name, loc) \
  LP2(0x2c8e, X509_NAME_ENTRY *, X509_NAME_get_entry, X509_NAME *, name, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_delete_entry(name, loc) \
  LP2(0x2c94, X509_NAME_ENTRY *, X509_NAME_delete_entry, X509_NAME *, name, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_add_entry(name, ne, loc, set) \
  LP4(0x2c9a, int, X509_NAME_add_entry, X509_NAME *, name, a0, X509_NAME_ENTRY *, ne, a1, LONG, loc, d0, LONG, set, d1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_add_entry_by_OBJ(name, obj, type, bytes, len, loc, set) \
  LP7(0x2ca0, int, X509_NAME_add_entry_by_OBJ, X509_NAME *, name, a0, ASN1_OBJECT *, obj, a1, LONG, type, d0, unsigned char *, bytes, a2, LONG, len, d1, LONG, loc, d2, LONG, set, d3, \
  , AMISSL_BASE_NAME)

#define X509_NAME_add_entry_by_NID(name, nid, type, bytes, len, loc, set) \
  LP7(0x2ca6, int, X509_NAME_add_entry_by_NID, X509_NAME *, name, a0, LONG, nid, d0, LONG, type, d1, unsigned char *, bytes, a1, LONG, len, d2, LONG, loc, d3, LONG, set, d4, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_create_by_txt(ne, field, type, bytes, len) \
  LP5(0x2cac, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_txt, X509_NAME_ENTRY **, ne, a0, const char *, field, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_create_by_NID(ne, nid, type, bytes, len) \
  LP5(0x2cb2, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_NID, X509_NAME_ENTRY **, ne, a0, LONG, nid, d0, LONG, type, d1, unsigned char *, bytes, a1, LONG, len, d2, \
  , AMISSL_BASE_NAME)

#define X509_NAME_add_entry_by_txt(name, field, type, bytes, len, loc, set) \
  LP7(0x2cb8, int, X509_NAME_add_entry_by_txt, X509_NAME *, name, a0, const char *, field, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, LONG, loc, d2, LONG, set, d3, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_create_by_OBJ(ne, obj, type, bytes, len) \
  LP5(0x2cbe, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_OBJ, X509_NAME_ENTRY **, ne, a0, ASN1_OBJECT *, obj, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_set_object(ne, obj) \
  LP2(0x2cc4, int, X509_NAME_ENTRY_set_object, X509_NAME_ENTRY *, ne, a0, ASN1_OBJECT *, obj, a1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_set_data(ne, type, bytes, len) \
  LP4(0x2cca, int, X509_NAME_ENTRY_set_data, X509_NAME_ENTRY *, ne, a0, LONG, type, d0, const unsigned char *, bytes, a1, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_get_object(ne) \
  LP1(0x2cd0, ASN1_OBJECT *, X509_NAME_ENTRY_get_object, X509_NAME_ENTRY *, ne, a0, \
  , AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_get_data(ne) \
  LP1(0x2cd6, ASN1_STRING *, X509_NAME_ENTRY_get_data, X509_NAME_ENTRY *, ne, a0, \
  , AMISSL_BASE_NAME)

#define X509v3_get_ext_count(x) \
  LP1(0x2cdc, int, X509v3_get_ext_count, const STACK_OF(X509_EXTENSION) *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509v3_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x2ce2, int, X509v3_get_ext_by_NID, const STACK_OF(X509_EXTENSION) *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509v3_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x2ce8, int, X509v3_get_ext_by_OBJ, const STACK_OF(X509_EXTENSION) *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509v3_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x2cee, int, X509v3_get_ext_by_critical, const STACK_OF(X509_EXTENSION) *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509v3_get_ext(x, loc) \
  LP2(0x2cf4, X509_EXTENSION *, X509v3_get_ext, const STACK_OF(X509_EXTENSION) *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509v3_delete_ext(x, loc) \
  LP2(0x2cfa, X509_EXTENSION *, X509v3_delete_ext, STACK_OF(X509_EXTENSION) *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509v3_add_ext(x, ex, loc) \
  LP3(0x2d00, STACK_OF(X509_EXTENSION) *, X509v3_add_ext, STACK_OF(X509_EXTENSION) **, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_get_ext_count(x) \
  LP1(0x2d06, int, X509_get_ext_count, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x2d0c, int, X509_get_ext_by_NID, X509 *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x2d12, int, X509_get_ext_by_OBJ, X509 *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x2d18, int, X509_get_ext_by_critical, X509 *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_get_ext(x, loc) \
  LP2(0x2d1e, X509_EXTENSION *, X509_get_ext, X509 *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_delete_ext(x, loc) \
  LP2(0x2d24, X509_EXTENSION *, X509_delete_ext, X509 *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_add_ext(x, ex, loc) \
  LP3(0x2d2a, int, X509_add_ext, X509 *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_get_ext_d2i(x, nid, crit, idx) \
  LP4(0x2d30, void *, X509_get_ext_d2i, X509 *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define X509_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x2d36, int, X509_add1_ext_i2d, X509 *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define X509_CRL_get_ext_count(x) \
  LP1(0x2d3c, int, X509_CRL_get_ext_count, X509_CRL *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x2d42, int, X509_CRL_get_ext_by_NID, X509_CRL *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x2d48, int, X509_CRL_get_ext_by_OBJ, X509_CRL *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x2d4e, int, X509_CRL_get_ext_by_critical, X509_CRL *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_CRL_get_ext(x, loc) \
  LP2(0x2d54, X509_EXTENSION *, X509_CRL_get_ext, X509_CRL *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_delete_ext(x, loc) \
  LP2(0x2d5a, X509_EXTENSION *, X509_CRL_delete_ext, X509_CRL *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_add_ext(x, ex, loc) \
  LP3(0x2d60, int, X509_CRL_add_ext, X509_CRL *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_CRL_get_ext_d2i(x, nid, crit, idx) \
  LP4(0x2d66, void *, X509_CRL_get_ext_d2i, X509_CRL *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define X509_CRL_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x2d6c, int, X509_CRL_add1_ext_i2d, X509_CRL *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_count(x) \
  LP1(0x2d72, int, X509_REVOKED_get_ext_count, X509_REVOKED *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_by_NID(x, nid, lastpos) \
  LP3(0x2d78, int, X509_REVOKED_get_ext_by_NID, X509_REVOKED *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_by_OBJ(x, obj, lastpos) \
  LP3(0x2d7e, int, X509_REVOKED_get_ext_by_OBJ, X509_REVOKED *, x, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_by_critical(x, crit, lastpos) \
  LP3(0x2d84, int, X509_REVOKED_get_ext_by_critical, X509_REVOKED *, x, a0, LONG, crit, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext(x, loc) \
  LP2(0x2d8a, X509_EXTENSION *, X509_REVOKED_get_ext, X509_REVOKED *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_delete_ext(x, loc) \
  LP2(0x2d90, X509_EXTENSION *, X509_REVOKED_delete_ext, X509_REVOKED *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_add_ext(x, ex, loc) \
  LP3(0x2d96, int, X509_REVOKED_add_ext, X509_REVOKED *, x, a0, X509_EXTENSION *, ex, a1, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_d2i(x, nid, crit, idx) \
  LP4(0x2d9c, void *, X509_REVOKED_get_ext_d2i, X509_REVOKED *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define X509_REVOKED_add1_ext_i2d(x, nid, value, crit, flags) \
  LP5(0x2da2, int, X509_REVOKED_add1_ext_i2d, X509_REVOKED *, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_create_by_NID(ex, nid, crit, data) \
  LP4(0x2da8, X509_EXTENSION *, X509_EXTENSION_create_by_NID, X509_EXTENSION **, ex, a0, LONG, nid, d0, LONG, crit, d1, ASN1_OCTET_STRING *, data, a1, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_create_by_OBJ(ex, obj, crit, data) \
  LP4(0x2dae, X509_EXTENSION *, X509_EXTENSION_create_by_OBJ, X509_EXTENSION **, ex, a0, ASN1_OBJECT *, obj, a1, LONG, crit, d0, ASN1_OCTET_STRING *, data, a2, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_set_object(ex, obj) \
  LP2(0x2db4, int, X509_EXTENSION_set_object, X509_EXTENSION *, ex, a0, ASN1_OBJECT *, obj, a1, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_set_critical(ex, crit) \
  LP2(0x2dba, int, X509_EXTENSION_set_critical, X509_EXTENSION *, ex, a0, LONG, crit, d0, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_set_data(ex, data) \
  LP2(0x2dc0, int, X509_EXTENSION_set_data, X509_EXTENSION *, ex, a0, ASN1_OCTET_STRING *, data, a1, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_get_object(ex) \
  LP1(0x2dc6, ASN1_OBJECT *, X509_EXTENSION_get_object, X509_EXTENSION *, ex, a0, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_get_data(ne) \
  LP1(0x2dcc, ASN1_OCTET_STRING *, X509_EXTENSION_get_data, X509_EXTENSION *, ne, a0, \
  , AMISSL_BASE_NAME)

#define X509_EXTENSION_get_critical(ex) \
  LP1(0x2dd2, int, X509_EXTENSION_get_critical, X509_EXTENSION *, ex, a0, \
  , AMISSL_BASE_NAME)

#define X509at_get_attr_count(x) \
  LP1(0x2dd8, int, X509at_get_attr_count, const STACK_OF(X509_ATTRIBUTE) *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509at_get_attr_by_NID(x, nid, lastpos) \
  LP3(0x2dde, int, X509at_get_attr_by_NID, const STACK_OF(X509_ATTRIBUTE) *, x, a0, LONG, nid, d0, LONG, lastpos, d1, \
  , AMISSL_BASE_NAME)

#define X509at_get_attr_by_OBJ(sk, obj, lastpos) \
  LP3(0x2de4, int, X509at_get_attr_by_OBJ, const STACK_OF(X509_ATTRIBUTE) *, sk, a0, ASN1_OBJECT *, obj, a1, LONG, lastpos, d0, \
  , AMISSL_BASE_NAME)

#define X509at_get_attr(x, loc) \
  LP2(0x2dea, X509_ATTRIBUTE *, X509at_get_attr, const STACK_OF(X509_ATTRIBUTE) *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509at_delete_attr(x, loc) \
  LP2(0x2df0, X509_ATTRIBUTE *, X509at_delete_attr, STACK_OF(X509_ATTRIBUTE) *, x, a0, LONG, loc, d0, \
  , AMISSL_BASE_NAME)

#define X509at_add1_attr(x, attr) \
  LP2(0x2df6, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr, STACK_OF(X509_ATTRIBUTE) **, x, a0, X509_ATTRIBUTE *, attr, a1, \
  , AMISSL_BASE_NAME)

#define X509at_add1_attr_by_OBJ(x, obj, type, bytes, len) \
  LP5(0x2dfc, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_OBJ, STACK_OF(X509_ATTRIBUTE) **, x, a0, const ASN1_OBJECT *, obj, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509at_add1_attr_by_NID(x, nid, type, bytes, len) \
  LP5(0x2e02, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_NID, STACK_OF(X509_ATTRIBUTE) **, x, a0, LONG, nid, d0, LONG, type, d1, const unsigned char *, bytes, a1, LONG, len, d2, \
  , AMISSL_BASE_NAME)

#define X509at_add1_attr_by_txt(x, attrname, type, bytes, len) \
  LP5(0x2e08, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_txt, STACK_OF(X509_ATTRIBUTE) **, x, a0, const char *, attrname, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create_by_NID(attr, nid, atrtype, data, len) \
  LP5(0x2e0e, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_NID, X509_ATTRIBUTE **, attr, a0, LONG, nid, d0, LONG, atrtype, d1, const void *, data, a1, LONG, len, d2, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create_by_OBJ(attr, obj, atrtype, data, len) \
  LP5(0x2e14, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_OBJ, X509_ATTRIBUTE **, attr, a0, const ASN1_OBJECT *, obj, a1, LONG, atrtype, d0, const void *, data, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create_by_txt(attr, atrname, type, bytes, len) \
  LP5(0x2e1a, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_txt, X509_ATTRIBUTE **, attr, a0, const char *, atrname, a1, LONG, type, d0, const unsigned char *, bytes, a2, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_set1_object(attr, obj) \
  LP2(0x2e20, int, X509_ATTRIBUTE_set1_object, X509_ATTRIBUTE *, attr, a0, const ASN1_OBJECT *, obj, a1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_set1_data(attr, attrtype, data, len) \
  LP4(0x2e26, int, X509_ATTRIBUTE_set1_data, X509_ATTRIBUTE *, attr, a0, LONG, attrtype, d0, const void *, data, a1, LONG, len, d1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_get0_data(attr, idx, atrtype, data) \
  LP4(0x2e2c, void *, X509_ATTRIBUTE_get0_data, X509_ATTRIBUTE *, attr, a0, LONG, idx, d0, LONG, atrtype, d1, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_count(attr) \
  LP1(0x2e32, int, X509_ATTRIBUTE_count, X509_ATTRIBUTE *, attr, a0, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_get0_object(attr) \
  LP1(0x2e38, ASN1_OBJECT *, X509_ATTRIBUTE_get0_object, X509_ATTRIBUTE *, attr, a0, \
  , AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_get0_type(attr, idx) \
  LP2(0x2e3e, ASN1_TYPE *, X509_ATTRIBUTE_get0_type, X509_ATTRIBUTE *, attr, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define X509_verify_cert(ctx) \
  LP1(0x2e44, int, X509_verify_cert, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_find_by_issuer_and_serial(sk, name, serial) \
  LP3(0x2e4a, X509 *, X509_find_by_issuer_and_serial, STACK_OF(X509) *, sk, a0, X509_NAME *, name, a1, ASN1_INTEGER *, serial, a2, \
  , AMISSL_BASE_NAME)

#define X509_find_by_subject(sk, name) \
  LP2(0x2e50, X509 *, X509_find_by_subject, STACK_OF(X509) *, sk, a0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define PBEPARAM_new() \
  LP0(0x2e56, PBEPARAM *, PBEPARAM_new, \
  , AMISSL_BASE_NAME)

#define PBEPARAM_free(a) \
  LP1NR(0x2e5c, PBEPARAM_free, PBEPARAM *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PBEPARAM(a, in, len) \
  LP3(0x2e62, PBEPARAM *, d2i_PBEPARAM, PBEPARAM **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PBEPARAM(a, out) \
  LP2(0x2e68, int, i2d_PBEPARAM, PBEPARAM *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PBEPARAM_it() \
  LP0(0x2e6e, const ASN1_ITEM *, PBEPARAM_it, \
  , AMISSL_BASE_NAME)

#define PBE2PARAM_new() \
  LP0(0x2e74, PBE2PARAM *, PBE2PARAM_new, \
  , AMISSL_BASE_NAME)

#define PBE2PARAM_free(a) \
  LP1NR(0x2e7a, PBE2PARAM_free, PBE2PARAM *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PBE2PARAM(a, in, len) \
  LP3(0x2e80, PBE2PARAM *, d2i_PBE2PARAM, PBE2PARAM **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PBE2PARAM(a, out) \
  LP2(0x2e86, int, i2d_PBE2PARAM, PBE2PARAM *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PBE2PARAM_it() \
  LP0(0x2e8c, const ASN1_ITEM *, PBE2PARAM_it, \
  , AMISSL_BASE_NAME)

#define PBKDF2PARAM_new() \
  LP0(0x2e92, PBKDF2PARAM *, PBKDF2PARAM_new, \
  , AMISSL_BASE_NAME)

#define PBKDF2PARAM_free(a) \
  LP1NR(0x2e98, PBKDF2PARAM_free, PBKDF2PARAM *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PBKDF2PARAM(a, in, len) \
  LP3(0x2e9e, PBKDF2PARAM *, d2i_PBKDF2PARAM, PBKDF2PARAM **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PBKDF2PARAM(a, out) \
  LP2(0x2ea4, int, i2d_PBKDF2PARAM, PBKDF2PARAM *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PBKDF2PARAM_it() \
  LP0(0x2eaa, const ASN1_ITEM *, PBKDF2PARAM_it, \
  , AMISSL_BASE_NAME)

#define PKCS5_pbe_set(alg, iter, salt, saltlen) \
  LP4(0x2eb0, X509_ALGOR *, PKCS5_pbe_set, LONG, alg, d0, LONG, iter, d1, unsigned char *, salt, a0, LONG, saltlen, d2, \
  , AMISSL_BASE_NAME)

#define PKCS5_pbe2_set(cipher, iter, salt, saltlen) \
  LP4(0x2eb6, X509_ALGOR *, PKCS5_pbe2_set, const EVP_CIPHER *, cipher, a0, LONG, iter, d0, unsigned char *, salt, a1, LONG, saltlen, d1, \
  , AMISSL_BASE_NAME)

#define PKCS8_PRIV_KEY_INFO_new() \
  LP0(0x2ebc, PKCS8_PRIV_KEY_INFO *, PKCS8_PRIV_KEY_INFO_new, \
  , AMISSL_BASE_NAME)

#define PKCS8_PRIV_KEY_INFO_free(a) \
  LP1NR(0x2ec2, PKCS8_PRIV_KEY_INFO_free, PKCS8_PRIV_KEY_INFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKCS8_PRIV_KEY_INFO(a, in, len) \
  LP3(0x2ec8, PKCS8_PRIV_KEY_INFO *, d2i_PKCS8_PRIV_KEY_INFO, PKCS8_PRIV_KEY_INFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKCS8_PRIV_KEY_INFO(a, out) \
  LP2(0x2ece, int, i2d_PKCS8_PRIV_KEY_INFO, PKCS8_PRIV_KEY_INFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKCS8_PRIV_KEY_INFO_it() \
  LP0(0x2ed4, const ASN1_ITEM *, PKCS8_PRIV_KEY_INFO_it, \
  , AMISSL_BASE_NAME)

#define EVP_PKCS82PKEY(p8) \
  LP1(0x2eda, EVP_PKEY *, EVP_PKCS82PKEY, PKCS8_PRIV_KEY_INFO *, p8, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY2PKCS8(pkey) \
  LP1(0x2ee0, PKCS8_PRIV_KEY_INFO *, EVP_PKEY2PKCS8, EVP_PKEY *, pkey, a0, \
  , AMISSL_BASE_NAME)

#define EVP_PKEY2PKCS8_broken(pkey, broken) \
  LP2(0x2ee6, PKCS8_PRIV_KEY_INFO *, EVP_PKEY2PKCS8_broken, EVP_PKEY *, pkey, a0, LONG, broken, d0, \
  , AMISSL_BASE_NAME)

#define PKCS8_set_broken(p8, broken) \
  LP2(0x2eec, PKCS8_PRIV_KEY_INFO *, PKCS8_set_broken, PKCS8_PRIV_KEY_INFO *, p8, a0, LONG, broken, d0, \
  , AMISSL_BASE_NAME)

#define X509_check_trust(x, id, flags) \
  LP3(0x2ef2, int, X509_check_trust, X509 *, x, a0, LONG, id, d0, LONG, flags, d1, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_get_count() \
  LP0(0x2ef8, int, X509_TRUST_get_count, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_get0(idx) \
  LP1(0x2efe, X509_TRUST *, X509_TRUST_get0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_get_by_id(id) \
  LP1(0x2f04, int, X509_TRUST_get_by_id, LONG, id, d0, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_add(id, flags, ck, name, arg1, arg2) \
  LP6FP(0x2f0a, int, X509_TRUST_add, LONG, id, d0, LONG, flags, d1, __fpt, ck, a0, char *, name, a1, LONG, arg1, d2, void *, arg2, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)(X509_TRUST *, X509 *, int))

#define X509_TRUST_cleanup() \
  LP0NR(0x2f10, X509_TRUST_cleanup, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_get_flags(xp) \
  LP1(0x2f16, int, X509_TRUST_get_flags, X509_TRUST *, xp, a0, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_get0_name(xp) \
  LP1(0x2f1c, char *, X509_TRUST_get0_name, X509_TRUST *, xp, a0, \
  , AMISSL_BASE_NAME)

#define X509_TRUST_get_trust(xp) \
  LP1(0x2f22, int, X509_TRUST_get_trust, X509_TRUST *, xp, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_X509_strings() \
  LP0NR(0x2f28, ERR_load_X509_strings, \
  , AMISSL_BASE_NAME)

#define X509_OBJECT_idx_by_subject(h, type, name) \
  LP3(0x2f2e, int, X509_OBJECT_idx_by_subject, STACK_OF(X509_OBJECT) *, h, a0, LONG, type, d0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_OBJECT_retrieve_by_subject(h, type, name) \
  LP3(0x2f34, X509_OBJECT *, X509_OBJECT_retrieve_by_subject, STACK_OF(X509_OBJECT) *, h, a0, LONG, type, d0, X509_NAME *, name, a1, \
  , AMISSL_BASE_NAME)

#define X509_OBJECT_retrieve_match(h, x) \
  LP2(0x2f3a, X509_OBJECT *, X509_OBJECT_retrieve_match, STACK_OF(X509_OBJECT) *, h, a0, X509_OBJECT *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_OBJECT_up_ref_count(a) \
  LP1NR(0x2f40, X509_OBJECT_up_ref_count, X509_OBJECT *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_OBJECT_free_contents(a) \
  LP1NR(0x2f46, X509_OBJECT_free_contents, X509_OBJECT *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_new() \
  LP0(0x2f4c, X509_STORE *, X509_STORE_new, \
  , AMISSL_BASE_NAME)

#define X509_STORE_free(v) \
  LP1NR(0x2f52, X509_STORE_free, X509_STORE *, v, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_set_flags(ctx, flags) \
  LP2NR(0x2f58, X509_STORE_set_flags, X509_STORE *, ctx, a0, long, flags, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_set_purpose(ctx, purpose) \
  LP2(0x2f5e, int, X509_STORE_set_purpose, X509_STORE *, ctx, a0, LONG, purpose, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_set_trust(ctx, trust) \
  LP2(0x2f64, int, X509_STORE_set_trust, X509_STORE *, ctx, a0, LONG, trust, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_new() \
  LP0(0x2f6a, X509_STORE_CTX *, X509_STORE_CTX_new, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get1_issuer(issuer, ctx, x) \
  LP3(0x2f70, int, X509_STORE_CTX_get1_issuer, X509 **, issuer, a0, X509_STORE_CTX *, ctx, a1, X509 *, x, a2, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_free(ctx) \
  LP1NR(0x2f76, X509_STORE_CTX_free, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_init(ctx, store, x509, chain) \
  LP4(0x2f7c, int, X509_STORE_CTX_init, X509_STORE_CTX *, ctx, a0, X509_STORE *, store, a1, X509 *, x509, a2, STACK_OF(X509) *, chain, a3, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_trusted_stack(ctx, sk) \
  LP2NR(0x2f82, X509_STORE_CTX_trusted_stack, X509_STORE_CTX *, ctx, a0, STACK_OF(X509) *, sk, a1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_cleanup(ctx) \
  LP1NR(0x2f88, X509_STORE_CTX_cleanup, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_add_lookup(v, m) \
  LP2(0x2f8e, X509_LOOKUP *, X509_STORE_add_lookup, X509_STORE *, v, a0, X509_LOOKUP_METHOD *, m, a1, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_hash_dir() \
  LP0(0x2f94, X509_LOOKUP_METHOD *, X509_LOOKUP_hash_dir, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_file() \
  LP0(0x2f9a, X509_LOOKUP_METHOD *, X509_LOOKUP_file, \
  , AMISSL_BASE_NAME)

#define X509_STORE_add_cert(ctx, x) \
  LP2(0x2fa0, int, X509_STORE_add_cert, X509_STORE *, ctx, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_add_crl(ctx, x) \
  LP2(0x2fa6, int, X509_STORE_add_crl, X509_STORE *, ctx, a0, X509_CRL *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_get_by_subject(vs, type, name, ret) \
  LP4(0x2fac, int, X509_STORE_get_by_subject, X509_STORE_CTX *, vs, a0, LONG, type, d0, X509_NAME *, name, a1, X509_OBJECT *, ret, a2, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_ctrl(ctx, cmd, argc, argl, ret) \
  LP5(0x2fb2, int, X509_LOOKUP_ctrl, X509_LOOKUP *, ctx, a0, LONG, cmd, d0, const char *, argc, a1, long, argl, d1, char **, ret, a2, \
  , AMISSL_BASE_NAME)

#define X509_load_cert_file(ctx, file, type) \
  LP3(0x2fb8, int, X509_load_cert_file, X509_LOOKUP *, ctx, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define X509_load_crl_file(ctx, file, type) \
  LP3(0x2fbe, int, X509_load_crl_file, X509_LOOKUP *, ctx, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define X509_load_cert_crl_file(ctx, file, type) \
  LP3(0x2fc4, int, X509_load_cert_crl_file, X509_LOOKUP *, ctx, a0, const char *, file, a1, LONG, type, d0, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_new(method) \
  LP1(0x2fca, X509_LOOKUP *, X509_LOOKUP_new, X509_LOOKUP_METHOD *, method, a0, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_free(ctx) \
  LP1NR(0x2fd0, X509_LOOKUP_free, X509_LOOKUP *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_init(ctx) \
  LP1(0x2fd6, int, X509_LOOKUP_init, X509_LOOKUP *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_by_subject(ctx, type, name, ret) \
  LP4(0x2fdc, int, X509_LOOKUP_by_subject, X509_LOOKUP *, ctx, a0, LONG, type, d0, X509_NAME *, name, a1, X509_OBJECT *, ret, a2, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_by_issuer_serial(ctx, type, name, serial, ret) \
  LP5(0x2fe2, int, X509_LOOKUP_by_issuer_serial, X509_LOOKUP *, ctx, a0, LONG, type, d0, X509_NAME *, name, a1, ASN1_INTEGER *, serial, a2, X509_OBJECT *, ret, a3, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_by_fingerprint(ctx, type, bytes, len, ret) \
  LP5(0x2fe8, int, X509_LOOKUP_by_fingerprint, X509_LOOKUP *, ctx, a0, LONG, type, d0, unsigned char *, bytes, a1, LONG, len, d1, X509_OBJECT *, ret, a2, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_by_alias(ctx, type, str, len, ret) \
  LP5(0x2fee, int, X509_LOOKUP_by_alias, X509_LOOKUP *, ctx, a0, LONG, type, d0, char *, str, a1, LONG, len, d1, X509_OBJECT *, ret, a2, \
  , AMISSL_BASE_NAME)

#define X509_LOOKUP_shutdown(ctx) \
  LP1(0x2ff4, int, X509_LOOKUP_shutdown, X509_LOOKUP *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_load_locations(ctx, file, dir) \
  LP3(0x2ffa, int, X509_STORE_load_locations, X509_STORE *, ctx, a0, const char *, file, a1, const char *, dir, a2, \
  , AMISSL_BASE_NAME)

#define X509_STORE_set_default_paths(ctx) \
  LP1(0x3000, int, X509_STORE_set_default_paths, X509_STORE *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x3006, int, X509_STORE_CTX_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define X509_STORE_CTX_set_ex_data(ctx, idx, data) \
  LP3(0x300c, int, X509_STORE_CTX_set_ex_data, X509_STORE_CTX *, ctx, a0, LONG, idx, d0, void *, data, a1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_ex_data(ctx, idx) \
  LP2(0x3012, void *, X509_STORE_CTX_get_ex_data, X509_STORE_CTX *, ctx, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_error(ctx) \
  LP1(0x3018, int, X509_STORE_CTX_get_error, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_error(ctx, s) \
  LP2NR(0x301e, X509_STORE_CTX_set_error, X509_STORE_CTX *, ctx, a0, LONG, s, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_error_depth(ctx) \
  LP1(0x3024, int, X509_STORE_CTX_get_error_depth, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_current_cert(ctx) \
  LP1(0x302a, X509 *, X509_STORE_CTX_get_current_cert, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_chain(ctx) \
  LP1(0x3030, STACK_OF(X509) *, X509_STORE_CTX_get_chain, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_get1_chain(ctx) \
  LP1(0x3036, STACK_OF(X509) *, X509_STORE_CTX_get1_chain, X509_STORE_CTX *, ctx, a0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_cert(c, x) \
  LP2NR(0x303c, X509_STORE_CTX_set_cert, X509_STORE_CTX *, c, a0, X509 *, x, a1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_chain(c, sk) \
  LP2NR(0x3042, X509_STORE_CTX_set_chain, X509_STORE_CTX *, c, a0, STACK_OF(X509) *, sk, a1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_purpose(ctx, purpose) \
  LP2(0x3048, int, X509_STORE_CTX_set_purpose, X509_STORE_CTX *, ctx, a0, LONG, purpose, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_trust(ctx, trust) \
  LP2(0x304e, int, X509_STORE_CTX_set_trust, X509_STORE_CTX *, ctx, a0, LONG, trust, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_purpose_inherit(ctx, def_purpose, purpose, trust) \
  LP4(0x3054, int, X509_STORE_CTX_purpose_inherit, X509_STORE_CTX *, ctx, a0, LONG, def_purpose, d0, LONG, purpose, d1, LONG, trust, d2, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_flags(ctx, flags) \
  LP2NR(0x305a, X509_STORE_CTX_set_flags, X509_STORE_CTX *, ctx, a0, long, flags, d0, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_time(ctx, flags, t) \
  LP3NR(0x3060, X509_STORE_CTX_set_time, X509_STORE_CTX *, ctx, a0, long, flags, d0, time_t, t, d1, \
  , AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_verify_cb(ctx, verify_cb) \
  LP2NRFP(0x3066, X509_STORE_CTX_set_verify_cb, X509_STORE_CTX *, ctx, a0, __fpt, verify_cb, a1, \
  , AMISSL_BASE_NAME, int (*__fpt)(int, X509_STORE_CTX *))

#define BASIC_CONSTRAINTS_new() \
  LP0(0x306c, BASIC_CONSTRAINTS *, BASIC_CONSTRAINTS_new, \
  , AMISSL_BASE_NAME)

#define BASIC_CONSTRAINTS_free(a) \
  LP1NR(0x3072, BASIC_CONSTRAINTS_free, BASIC_CONSTRAINTS *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_BASIC_CONSTRAINTS(a, in, len) \
  LP3(0x3078, BASIC_CONSTRAINTS *, d2i_BASIC_CONSTRAINTS, BASIC_CONSTRAINTS **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_BASIC_CONSTRAINTS(a, out) \
  LP2(0x307e, int, i2d_BASIC_CONSTRAINTS, BASIC_CONSTRAINTS *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define BASIC_CONSTRAINTS_it() \
  LP0(0x3084, const ASN1_ITEM *, BASIC_CONSTRAINTS_it, \
  , AMISSL_BASE_NAME)

#define SXNET_new() \
  LP0(0x308a, SXNET *, SXNET_new, \
  , AMISSL_BASE_NAME)

#define SXNET_free(a) \
  LP1NR(0x3090, SXNET_free, SXNET *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_SXNET(a, in, len) \
  LP3(0x3096, SXNET *, d2i_SXNET, SXNET **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_SXNET(a, out) \
  LP2(0x309c, int, i2d_SXNET, SXNET *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define SXNET_it() \
  LP0(0x30a2, const ASN1_ITEM *, SXNET_it, \
  , AMISSL_BASE_NAME)

#define SXNETID_new() \
  LP0(0x30a8, SXNETID *, SXNETID_new, \
  , AMISSL_BASE_NAME)

#define SXNETID_free(a) \
  LP1NR(0x30ae, SXNETID_free, SXNETID *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_SXNETID(a, in, len) \
  LP3(0x30b4, SXNETID *, d2i_SXNETID, SXNETID **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_SXNETID(a, out) \
  LP2(0x30ba, int, i2d_SXNETID, SXNETID *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define SXNETID_it() \
  LP0(0x30c0, const ASN1_ITEM *, SXNETID_it, \
  , AMISSL_BASE_NAME)

#define SXNET_add_id_asc(psx, zone, user, userlen) \
  LP4(0x30c6, int, SXNET_add_id_asc, SXNET **, psx, a0, char *, zone, a1, char *, user, a2, LONG, userlen, d0, \
  , AMISSL_BASE_NAME)

#define SXNET_add_id_ulong(psx, lzone, user, userlen) \
  LP4(0x30cc, int, SXNET_add_id_ulong, SXNET **, psx, a0, unsigned long, lzone, d0, char *, user, a1, LONG, userlen, d1, \
  , AMISSL_BASE_NAME)

#define SXNET_add_id_INTEGER(psx, izone, user, userlen) \
  LP4(0x30d2, int, SXNET_add_id_INTEGER, SXNET **, psx, a0, ASN1_INTEGER *, izone, a1, char *, user, a2, LONG, userlen, d0, \
  , AMISSL_BASE_NAME)

#define SXNET_get_id_asc(sx, zone) \
  LP2(0x30d8, ASN1_OCTET_STRING *, SXNET_get_id_asc, SXNET *, sx, a0, char *, zone, a1, \
  , AMISSL_BASE_NAME)

#define SXNET_get_id_ulong(sx, lzone) \
  LP2(0x30de, ASN1_OCTET_STRING *, SXNET_get_id_ulong, SXNET *, sx, a0, unsigned long, lzone, d0, \
  , AMISSL_BASE_NAME)

#define SXNET_get_id_INTEGER(sx, zone) \
  LP2(0x30e4, ASN1_OCTET_STRING *, SXNET_get_id_INTEGER, SXNET *, sx, a0, ASN1_INTEGER *, zone, a1, \
  , AMISSL_BASE_NAME)

#define AUTHORITY_KEYID_new() \
  LP0(0x30ea, AUTHORITY_KEYID *, AUTHORITY_KEYID_new, \
  , AMISSL_BASE_NAME)

#define AUTHORITY_KEYID_free(a) \
  LP1NR(0x30f0, AUTHORITY_KEYID_free, AUTHORITY_KEYID *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_AUTHORITY_KEYID(a, in, len) \
  LP3(0x30f6, AUTHORITY_KEYID *, d2i_AUTHORITY_KEYID, AUTHORITY_KEYID **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_AUTHORITY_KEYID(a, out) \
  LP2(0x30fc, int, i2d_AUTHORITY_KEYID, AUTHORITY_KEYID *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define AUTHORITY_KEYID_it() \
  LP0(0x3102, const ASN1_ITEM *, AUTHORITY_KEYID_it, \
  , AMISSL_BASE_NAME)

#define PKEY_USAGE_PERIOD_new() \
  LP0(0x3108, PKEY_USAGE_PERIOD *, PKEY_USAGE_PERIOD_new, \
  , AMISSL_BASE_NAME)

#define PKEY_USAGE_PERIOD_free(a) \
  LP1NR(0x310e, PKEY_USAGE_PERIOD_free, PKEY_USAGE_PERIOD *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PKEY_USAGE_PERIOD(a, in, len) \
  LP3(0x3114, PKEY_USAGE_PERIOD *, d2i_PKEY_USAGE_PERIOD, PKEY_USAGE_PERIOD **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PKEY_USAGE_PERIOD(a, out) \
  LP2(0x311a, int, i2d_PKEY_USAGE_PERIOD, PKEY_USAGE_PERIOD *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PKEY_USAGE_PERIOD_it() \
  LP0(0x3120, const ASN1_ITEM *, PKEY_USAGE_PERIOD_it, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAME_new() \
  LP0(0x3126, GENERAL_NAME *, GENERAL_NAME_new, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAME_free(a) \
  LP1NR(0x312c, GENERAL_NAME_free, GENERAL_NAME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_GENERAL_NAME(a, in, len) \
  LP3(0x3132, GENERAL_NAME *, d2i_GENERAL_NAME, GENERAL_NAME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_GENERAL_NAME(a, out) \
  LP2(0x3138, int, i2d_GENERAL_NAME, GENERAL_NAME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAME_it() \
  LP0(0x313e, const ASN1_ITEM *, GENERAL_NAME_it, \
  , AMISSL_BASE_NAME)

#define i2v_GENERAL_NAME(method, gen, ret) \
  LP3(0x3144, STACK_OF(CONF_VALUE) *, i2v_GENERAL_NAME, X509V3_EXT_METHOD *, method, a0, GENERAL_NAME *, gen, a1, STACK_OF(CONF_VALUE) *, ret, a2, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAME_print(out, gen) \
  LP2(0x314a, int, GENERAL_NAME_print, BIO *, out, a0, GENERAL_NAME *, gen, a1, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAMES_new() \
  LP0(0x3150, GENERAL_NAMES *, GENERAL_NAMES_new, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAMES_free(a) \
  LP1NR(0x3156, GENERAL_NAMES_free, GENERAL_NAMES *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_GENERAL_NAMES(a, in, len) \
  LP3(0x315c, GENERAL_NAMES *, d2i_GENERAL_NAMES, GENERAL_NAMES **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_GENERAL_NAMES(a, out) \
  LP2(0x3162, int, i2d_GENERAL_NAMES, GENERAL_NAMES *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define GENERAL_NAMES_it() \
  LP0(0x3168, const ASN1_ITEM *, GENERAL_NAMES_it, \
  , AMISSL_BASE_NAME)

#define i2v_GENERAL_NAMES(method, gen, extlist) \
  LP3(0x316e, STACK_OF(CONF_VALUE) *, i2v_GENERAL_NAMES, X509V3_EXT_METHOD *, method, a0, GENERAL_NAMES *, gen, a1, STACK_OF(CONF_VALUE) *, extlist, a2, \
  , AMISSL_BASE_NAME)

#define v2i_GENERAL_NAMES(method, ctx, nval) \
  LP3(0x3174, GENERAL_NAMES *, v2i_GENERAL_NAMES, X509V3_EXT_METHOD *, method, a0, X509V3_CTX *, ctx, a1, STACK_OF(CONF_VALUE) *, nval, a2, \
  , AMISSL_BASE_NAME)

#define OTHERNAME_new() \
  LP0(0x317a, OTHERNAME *, OTHERNAME_new, \
  , AMISSL_BASE_NAME)

#define OTHERNAME_free(a) \
  LP1NR(0x3180, OTHERNAME_free, OTHERNAME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_OTHERNAME(a, in, len) \
  LP3(0x3186, OTHERNAME *, d2i_OTHERNAME, OTHERNAME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_OTHERNAME(a, out) \
  LP2(0x318c, int, i2d_OTHERNAME, OTHERNAME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define OTHERNAME_it() \
  LP0(0x3192, const ASN1_ITEM *, OTHERNAME_it, \
  , AMISSL_BASE_NAME)

#define EDIPARTYNAME_new() \
  LP0(0x3198, EDIPARTYNAME *, EDIPARTYNAME_new, \
  , AMISSL_BASE_NAME)

#define EDIPARTYNAME_free(a) \
  LP1NR(0x319e, EDIPARTYNAME_free, EDIPARTYNAME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_EDIPARTYNAME(a, in, len) \
  LP3(0x31a4, EDIPARTYNAME *, d2i_EDIPARTYNAME, EDIPARTYNAME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_EDIPARTYNAME(a, out) \
  LP2(0x31aa, int, i2d_EDIPARTYNAME, EDIPARTYNAME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define EDIPARTYNAME_it() \
  LP0(0x31b0, const ASN1_ITEM *, EDIPARTYNAME_it, \
  , AMISSL_BASE_NAME)

#define i2s_ASN1_OCTET_STRING(method, ia5) \
  LP2(0x31b6, char *, i2s_ASN1_OCTET_STRING, X509V3_EXT_METHOD *, method, a0, ASN1_OCTET_STRING *, ia5, a1, \
  , AMISSL_BASE_NAME)

#define s2i_ASN1_OCTET_STRING(method, ctx, str) \
  LP3(0x31bc, ASN1_OCTET_STRING *, s2i_ASN1_OCTET_STRING, X509V3_EXT_METHOD *, method, a0, X509V3_CTX *, ctx, a1, char *, str, a2, \
  , AMISSL_BASE_NAME)

#define EXTENDED_KEY_USAGE_new() \
  LP0(0x31c2, EXTENDED_KEY_USAGE *, EXTENDED_KEY_USAGE_new, \
  , AMISSL_BASE_NAME)

#define EXTENDED_KEY_USAGE_free(a) \
  LP1NR(0x31c8, EXTENDED_KEY_USAGE_free, EXTENDED_KEY_USAGE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_EXTENDED_KEY_USAGE(a, in, len) \
  LP3(0x31ce, EXTENDED_KEY_USAGE *, d2i_EXTENDED_KEY_USAGE, EXTENDED_KEY_USAGE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_EXTENDED_KEY_USAGE(a, out) \
  LP2(0x31d4, int, i2d_EXTENDED_KEY_USAGE, EXTENDED_KEY_USAGE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define EXTENDED_KEY_USAGE_it() \
  LP0(0x31da, const ASN1_ITEM *, EXTENDED_KEY_USAGE_it, \
  , AMISSL_BASE_NAME)

#define i2a_ACCESS_DESCRIPTION(bp, a) \
  LP2(0x31e0, int, i2a_ACCESS_DESCRIPTION, BIO *, bp, a0, ACCESS_DESCRIPTION*, a, a1, \
  , AMISSL_BASE_NAME)

#define CERTIFICATEPOLICIES_new() \
  LP0(0x31e6, CERTIFICATEPOLICIES *, CERTIFICATEPOLICIES_new, \
  , AMISSL_BASE_NAME)

#define CERTIFICATEPOLICIES_free(a) \
  LP1NR(0x31ec, CERTIFICATEPOLICIES_free, CERTIFICATEPOLICIES *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_CERTIFICATEPOLICIES(a, in, len) \
  LP3(0x31f2, CERTIFICATEPOLICIES *, d2i_CERTIFICATEPOLICIES, CERTIFICATEPOLICIES **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_CERTIFICATEPOLICIES(a, out) \
  LP2(0x31f8, int, i2d_CERTIFICATEPOLICIES, CERTIFICATEPOLICIES *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define CERTIFICATEPOLICIES_it() \
  LP0(0x31fe, const ASN1_ITEM *, CERTIFICATEPOLICIES_it, \
  , AMISSL_BASE_NAME)

#define POLICYINFO_new() \
  LP0(0x3204, POLICYINFO *, POLICYINFO_new, \
  , AMISSL_BASE_NAME)

#define POLICYINFO_free(a) \
  LP1NR(0x320a, POLICYINFO_free, POLICYINFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_POLICYINFO(a, in, len) \
  LP3(0x3210, POLICYINFO *, d2i_POLICYINFO, POLICYINFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_POLICYINFO(a, out) \
  LP2(0x3216, int, i2d_POLICYINFO, POLICYINFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define POLICYINFO_it() \
  LP0(0x321c, const ASN1_ITEM *, POLICYINFO_it, \
  , AMISSL_BASE_NAME)

#define POLICYQUALINFO_new() \
  LP0(0x3222, POLICYQUALINFO *, POLICYQUALINFO_new, \
  , AMISSL_BASE_NAME)

#define POLICYQUALINFO_free(a) \
  LP1NR(0x3228, POLICYQUALINFO_free, POLICYQUALINFO *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_POLICYQUALINFO(a, in, len) \
  LP3(0x322e, POLICYQUALINFO *, d2i_POLICYQUALINFO, POLICYQUALINFO **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_POLICYQUALINFO(a, out) \
  LP2(0x3234, int, i2d_POLICYQUALINFO, POLICYQUALINFO *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define POLICYQUALINFO_it() \
  LP0(0x323a, const ASN1_ITEM *, POLICYQUALINFO_it, \
  , AMISSL_BASE_NAME)

#define USERNOTICE_new() \
  LP0(0x3240, USERNOTICE *, USERNOTICE_new, \
  , AMISSL_BASE_NAME)

#define USERNOTICE_free(a) \
  LP1NR(0x3246, USERNOTICE_free, USERNOTICE *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_USERNOTICE(a, in, len) \
  LP3(0x324c, USERNOTICE *, d2i_USERNOTICE, USERNOTICE **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_USERNOTICE(a, out) \
  LP2(0x3252, int, i2d_USERNOTICE, USERNOTICE *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define USERNOTICE_it() \
  LP0(0x3258, const ASN1_ITEM *, USERNOTICE_it, \
  , AMISSL_BASE_NAME)

#define NOTICEREF_new() \
  LP0(0x325e, NOTICEREF *, NOTICEREF_new, \
  , AMISSL_BASE_NAME)

#define NOTICEREF_free(a) \
  LP1NR(0x3264, NOTICEREF_free, NOTICEREF *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_NOTICEREF(a, in, len) \
  LP3(0x326a, NOTICEREF *, d2i_NOTICEREF, NOTICEREF **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_NOTICEREF(a, out) \
  LP2(0x3270, int, i2d_NOTICEREF, NOTICEREF *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define NOTICEREF_it() \
  LP0(0x3276, const ASN1_ITEM *, NOTICEREF_it, \
  , AMISSL_BASE_NAME)

#define CRL_DIST_POINTS_new() \
  LP0(0x327c, CRL_DIST_POINTS *, CRL_DIST_POINTS_new, \
  , AMISSL_BASE_NAME)

#define CRL_DIST_POINTS_free(a) \
  LP1NR(0x3282, CRL_DIST_POINTS_free, CRL_DIST_POINTS *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_CRL_DIST_POINTS(a, in, len) \
  LP3(0x3288, CRL_DIST_POINTS *, d2i_CRL_DIST_POINTS, CRL_DIST_POINTS **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_CRL_DIST_POINTS(a, out) \
  LP2(0x328e, int, i2d_CRL_DIST_POINTS, CRL_DIST_POINTS *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define CRL_DIST_POINTS_it() \
  LP0(0x3294, const ASN1_ITEM *, CRL_DIST_POINTS_it, \
  , AMISSL_BASE_NAME)

#define DIST_POINT_new() \
  LP0(0x329a, DIST_POINT *, DIST_POINT_new, \
  , AMISSL_BASE_NAME)

#define DIST_POINT_free(a) \
  LP1NR(0x32a0, DIST_POINT_free, DIST_POINT *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_DIST_POINT(a, in, len) \
  LP3(0x32a6, DIST_POINT *, d2i_DIST_POINT, DIST_POINT **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_DIST_POINT(a, out) \
  LP2(0x32ac, int, i2d_DIST_POINT, DIST_POINT *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define DIST_POINT_it() \
  LP0(0x32b2, const ASN1_ITEM *, DIST_POINT_it, \
  , AMISSL_BASE_NAME)

#define DIST_POINT_NAME_new() \
  LP0(0x32b8, DIST_POINT_NAME *, DIST_POINT_NAME_new, \
  , AMISSL_BASE_NAME)

#define DIST_POINT_NAME_free(a) \
  LP1NR(0x32be, DIST_POINT_NAME_free, DIST_POINT_NAME *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_DIST_POINT_NAME(a, in, len) \
  LP3(0x32c4, DIST_POINT_NAME *, d2i_DIST_POINT_NAME, DIST_POINT_NAME **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_DIST_POINT_NAME(a, out) \
  LP2(0x32ca, int, i2d_DIST_POINT_NAME, DIST_POINT_NAME *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define DIST_POINT_NAME_it() \
  LP0(0x32d0, const ASN1_ITEM *, DIST_POINT_NAME_it, \
  , AMISSL_BASE_NAME)

#define ACCESS_DESCRIPTION_new() \
  LP0(0x32d6, ACCESS_DESCRIPTION *, ACCESS_DESCRIPTION_new, \
  , AMISSL_BASE_NAME)

#define ACCESS_DESCRIPTION_free(a) \
  LP1NR(0x32dc, ACCESS_DESCRIPTION_free, ACCESS_DESCRIPTION *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_ACCESS_DESCRIPTION(a, in, len) \
  LP3(0x32e2, ACCESS_DESCRIPTION *, d2i_ACCESS_DESCRIPTION, ACCESS_DESCRIPTION **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_ACCESS_DESCRIPTION(a, out) \
  LP2(0x32e8, int, i2d_ACCESS_DESCRIPTION, ACCESS_DESCRIPTION *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define ACCESS_DESCRIPTION_it() \
  LP0(0x32ee, const ASN1_ITEM *, ACCESS_DESCRIPTION_it, \
  , AMISSL_BASE_NAME)

#define AUTHORITY_INFO_ACCESS_new() \
  LP0(0x32f4, AUTHORITY_INFO_ACCESS *, AUTHORITY_INFO_ACCESS_new, \
  , AMISSL_BASE_NAME)

#define AUTHORITY_INFO_ACCESS_free(a) \
  LP1NR(0x32fa, AUTHORITY_INFO_ACCESS_free, AUTHORITY_INFO_ACCESS *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_AUTHORITY_INFO_ACCESS(a, in, len) \
  LP3(0x3300, AUTHORITY_INFO_ACCESS *, d2i_AUTHORITY_INFO_ACCESS, AUTHORITY_INFO_ACCESS **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_AUTHORITY_INFO_ACCESS(a, out) \
  LP2(0x3306, int, i2d_AUTHORITY_INFO_ACCESS, AUTHORITY_INFO_ACCESS *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define AUTHORITY_INFO_ACCESS_it() \
  LP0(0x330c, const ASN1_ITEM *, AUTHORITY_INFO_ACCESS_it, \
  , AMISSL_BASE_NAME)

#define v2i_GENERAL_NAME(method, ctx, cnf) \
  LP3(0x3312, GENERAL_NAME *, v2i_GENERAL_NAME, X509V3_EXT_METHOD *, method, a0, X509V3_CTX *, ctx, a1, CONF_VALUE *, cnf, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_conf_free(val) \
  LP1NR(0x3318, X509V3_conf_free, CONF_VALUE *, val, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_nconf_nid(conf, ctx, ext_nid, value) \
  LP4(0x331e, X509_EXTENSION *, X509V3_EXT_nconf_nid, CONF *, conf, a0, X509V3_CTX *, ctx, a1, LONG, ext_nid, d0, char *, value, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_nconf(conf, ctx, name, value) \
  LP4(0x3324, X509_EXTENSION *, X509V3_EXT_nconf, CONF *, conf, a0, X509V3_CTX *, ctx, a1, char *, name, a2, char *, value, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_add_nconf_sk(conf, ctx, section, sk) \
  LP4(0x332a, int, X509V3_EXT_add_nconf_sk, CONF *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, STACK_OF(X509_EXTENSION) **, sk, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_add_nconf(conf, ctx, section, cert) \
  LP4(0x3330, int, X509V3_EXT_add_nconf, CONF *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, X509 *, cert, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_REQ_add_nconf(conf, ctx, section, req) \
  LP4(0x3336, int, X509V3_EXT_REQ_add_nconf, CONF *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, X509_REQ *, req, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_CRL_add_nconf(conf, ctx, section, crl) \
  LP4(0x333c, int, X509V3_EXT_CRL_add_nconf, CONF *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, X509_CRL *, crl, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_conf_nid(conf, ctx, ext_nid, value) \
  LP4(0x3342, X509_EXTENSION *, X509V3_EXT_conf_nid, LHASH *, conf, a0, X509V3_CTX *, ctx, a1, LONG, ext_nid, d0, char *, value, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_conf(conf, ctx, name, value) \
  LP4(0x3348, X509_EXTENSION *, X509V3_EXT_conf, LHASH *, conf, a0, X509V3_CTX *, ctx, a1, char *, name, a2, char *, value, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_add_conf(conf, ctx, section, cert) \
  LP4(0x334e, int, X509V3_EXT_add_conf, LHASH *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, X509 *, cert, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_REQ_add_conf(conf, ctx, section, req) \
  LP4(0x3354, int, X509V3_EXT_REQ_add_conf, LHASH *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, X509_REQ *, req, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_CRL_add_conf(conf, ctx, section, crl) \
  LP4(0x335a, int, X509V3_EXT_CRL_add_conf, LHASH *, conf, a0, X509V3_CTX *, ctx, a1, char *, section, a2, X509_CRL *, crl, a3, \
  , AMISSL_BASE_NAME)

#define X509V3_add_value_bool_nf(name, asn1_bool, extlist) \
  LP3(0x3360, int, X509V3_add_value_bool_nf, char *, name, a0, LONG, asn1_bool, d0, STACK_OF(CONF_VALUE) **, extlist, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_get_value_bool(value, asn1_bool) \
  LP2(0x3366, int, X509V3_get_value_bool, CONF_VALUE *, value, a0, int *, asn1_bool, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_get_value_int(value, aint) \
  LP2(0x336c, int, X509V3_get_value_int, CONF_VALUE *, value, a0, ASN1_INTEGER **, aint, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_set_nconf(ctx, conf) \
  LP2NR(0x3372, X509V3_set_nconf, X509V3_CTX *, ctx, a0, CONF *, conf, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_set_conf_lhash(ctx, lhash) \
  LP2NR(0x3378, X509V3_set_conf_lhash, X509V3_CTX *, ctx, a0, LHASH *, lhash, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_get_string(ctx, name, section) \
  LP3(0x337e, char *, X509V3_get_string, X509V3_CTX *, ctx, a0, char *, name, a1, char *, section, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_get_section(ctx, section) \
  LP2(0x3384, STACK_OF(CONF_VALUE) *, X509V3_get_section, X509V3_CTX *, ctx, a0, char *, section, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_string_free(ctx, str) \
  LP2NR(0x338a, X509V3_string_free, X509V3_CTX *, ctx, a0, char *, str, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_section_free(ctx, section) \
  LP2NR(0x3390, X509V3_section_free, X509V3_CTX *, ctx, a0, STACK_OF(CONF_VALUE) *, section, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_set_ctx(ctx, issuer, subject, req, crl, flags) \
  LP6NR(0x3396, X509V3_set_ctx, X509V3_CTX *, ctx, a0, X509 *, issuer, a1, X509 *, subject, a2, X509_REQ *, req, a3, X509_CRL *, crl, d0, LONG, flags, d1, \
  , AMISSL_BASE_NAME)

#define X509V3_add_value(name, value, extlist) \
  LP3(0x339c, int, X509V3_add_value, const char *, name, a0, const char *, value, a1, STACK_OF(CONF_VALUE) **, extlist, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_add_value_uchar(name, value, extlist) \
  LP3(0x33a2, int, X509V3_add_value_uchar, const char *, name, a0, const unsigned char *, value, a1, STACK_OF(CONF_VALUE) **, extlist, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_add_value_bool(name, asn1_bool, extlist) \
  LP3(0x33a8, int, X509V3_add_value_bool, const char *, name, a0, LONG, asn1_bool, d0, STACK_OF(CONF_VALUE) **, extlist, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_add_value_int(name, aint, extlist) \
  LP3(0x33ae, int, X509V3_add_value_int, const char *, name, a0, ASN1_INTEGER *, aint, a1, STACK_OF(CONF_VALUE) **, extlist, a2, \
  , AMISSL_BASE_NAME)

#define i2s_ASN1_INTEGER(meth, aint) \
  LP2(0x33b4, char *, i2s_ASN1_INTEGER, X509V3_EXT_METHOD *, meth, a0, ASN1_INTEGER *, aint, a1, \
  , AMISSL_BASE_NAME)

#define s2i_ASN1_INTEGER(meth, value) \
  LP2(0x33ba, ASN1_INTEGER *, s2i_ASN1_INTEGER, X509V3_EXT_METHOD *, meth, a0, char *, value, a1, \
  , AMISSL_BASE_NAME)

#define i2s_ASN1_ENUMERATED(meth, aint) \
  LP2(0x33c0, char *, i2s_ASN1_ENUMERATED, X509V3_EXT_METHOD *, meth, a0, ASN1_ENUMERATED *, aint, a1, \
  , AMISSL_BASE_NAME)

#define i2s_ASN1_ENUMERATED_TABLE(meth, aint) \
  LP2(0x33c6, char *, i2s_ASN1_ENUMERATED_TABLE, X509V3_EXT_METHOD *, meth, a0, ASN1_ENUMERATED *, aint, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_add(ext) \
  LP1(0x33cc, int, X509V3_EXT_add, X509V3_EXT_METHOD *, ext, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_add_list(extlist) \
  LP1(0x33d2, int, X509V3_EXT_add_list, X509V3_EXT_METHOD *, extlist, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_add_alias(nid_to, nid_from) \
  LP2(0x33d8, int, X509V3_EXT_add_alias, LONG, nid_to, d0, LONG, nid_from, d1, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_cleanup() \
  LP0NR(0x33de, X509V3_EXT_cleanup, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_get(ext) \
  LP1(0x33e4, X509V3_EXT_METHOD *, X509V3_EXT_get, X509_EXTENSION *, ext, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_get_nid(nid) \
  LP1(0x33ea, X509V3_EXT_METHOD *, X509V3_EXT_get_nid, LONG, nid, d0, \
  , AMISSL_BASE_NAME)

#define X509V3_add_standard_extensions() \
  LP0(0x33f0, int, X509V3_add_standard_extensions, \
  , AMISSL_BASE_NAME)

#define X509V3_parse_list(line) \
  LP1(0x33f6, STACK_OF(CONF_VALUE) *, X509V3_parse_list, const char *, line, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_d2i(ext) \
  LP1(0x33fc, void *, X509V3_EXT_d2i, X509_EXTENSION *, ext, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_get_d2i(x, nid, crit, idx) \
  LP4(0x3402, void *, X509V3_get_d2i, STACK_OF(X509_EXTENSION) *, x, a0, LONG, nid, d0, int *, crit, a1, int *, idx, a2, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_i2d(ext_nid, crit, ext_struc) \
  LP3(0x3408, X509_EXTENSION *, X509V3_EXT_i2d, LONG, ext_nid, d0, LONG, crit, d1, void *, ext_struc, a0, \
  , AMISSL_BASE_NAME)

#define X509V3_add1_i2d(x, nid, value, crit, flags) \
  LP5(0x340e, int, X509V3_add1_i2d, STACK_OF(X509_EXTENSION) **, x, a0, LONG, nid, d0, void *, value, a1, LONG, crit, d1, unsigned long, flags, d2, \
  , AMISSL_BASE_NAME)

#define hex_to_string(buffer, len) \
  LP2(0x3414, char *, hex_to_string, unsigned char *, buffer, a0, long, len, d0, \
  , AMISSL_BASE_NAME)

#define string_to_hex(str, len) \
  LP2(0x341a, unsigned char *, string_to_hex, char *, str, a0, long *, len, a1, \
  , AMISSL_BASE_NAME)

#define name_cmp(name, cmp) \
  LP2(0x3420, int, name_cmp, const char *, name, a0, const char *, cmp, a1, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_val_prn(out, val, indent, ml) \
  LP4NR(0x3426, X509V3_EXT_val_prn, BIO *, out, a0, STACK_OF(CONF_VALUE) *, val, a1, LONG, indent, d0, LONG, ml, d1, \
  , AMISSL_BASE_NAME)

#define X509V3_EXT_print(out, ext, flag, indent) \
  LP4(0x342c, int, X509V3_EXT_print, BIO *, out, a0, X509_EXTENSION *, ext, a1, unsigned long, flag, d0, LONG, indent, d1, \
  , AMISSL_BASE_NAME)

#define X509V3_extensions_print(out, title, exts, flag, indent) \
  LP5(0x3432, int, X509V3_extensions_print, BIO *, out, a0, char *, title, a1, STACK_OF(X509_EXTENSION) *, exts, a2, unsigned long, flag, d0, LONG, indent, d1, \
  , AMISSL_BASE_NAME)

#define X509_check_purpose(x, id, ca) \
  LP3(0x3438, int, X509_check_purpose, X509 *, x, a0, LONG, id, d0, LONG, ca, d1, \
  , AMISSL_BASE_NAME)

#define X509_supported_extension(ex) \
  LP1(0x343e, int, X509_supported_extension, X509_EXTENSION *, ex, a0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_set(p, purpose) \
  LP2(0x3444, int, X509_PURPOSE_set, int *, p, a0, LONG, purpose, d0, \
  , AMISSL_BASE_NAME)

#define X509_check_issued(issuer, subject) \
  LP2(0x344a, int, X509_check_issued, X509 *, issuer, a0, X509 *, subject, a1, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get_count() \
  LP0(0x3450, int, X509_PURPOSE_get_count, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get0(idx) \
  LP1(0x3456, X509_PURPOSE *, X509_PURPOSE_get0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get_by_sname(sname) \
  LP1(0x345c, int, X509_PURPOSE_get_by_sname, char *, sname, a0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get_by_id(id) \
  LP1(0x3462, int, X509_PURPOSE_get_by_id, LONG, id, d0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_add(id, trust, flags, ck, name, sname, arg) \
  LP7FP(0x3468, int, X509_PURPOSE_add, LONG, id, d0, LONG, trust, d1, LONG, flags, d2, __fpt, ck, a0, char *, name, a1, char *, sname, a2, void *, arg, a3, \
  , AMISSL_BASE_NAME, int (*__fpt)(const X509_PURPOSE *, const X509 *, int))

#define X509_PURPOSE_get0_name(xp) \
  LP1(0x346e, char *, X509_PURPOSE_get0_name, X509_PURPOSE *, xp, a0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get0_sname(xp) \
  LP1(0x3474, char *, X509_PURPOSE_get0_sname, X509_PURPOSE *, xp, a0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get_trust(xp) \
  LP1(0x347a, int, X509_PURPOSE_get_trust, X509_PURPOSE *, xp, a0, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_cleanup() \
  LP0NR(0x3480, X509_PURPOSE_cleanup, \
  , AMISSL_BASE_NAME)

#define X509_PURPOSE_get_id(a) \
  LP1(0x3486, int, X509_PURPOSE_get_id, X509_PURPOSE *, a, a0, \
  , AMISSL_BASE_NAME)

#define X509_get1_email(x) \
  LP1(0x348c, STACK *, X509_get1_email, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_REQ_get1_email(x) \
  LP1(0x3492, STACK *, X509_REQ_get1_email, X509_REQ *, x, a0, \
  , AMISSL_BASE_NAME)

#define X509_email_free(sk) \
  LP1NR(0x3498, X509_email_free, STACK *, sk, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_X509V3_strings() \
  LP0NR(0x349e, ERR_load_X509V3_strings, \
  , AMISSL_BASE_NAME)

#define AES_options() \
  LP0(0x34a4, const char *, AES_options, \
  , AMISSL_BASE_NAME)

#define AES_set_encrypt_key(userKey, bits, key) \
  LP3(0x34aa, int, AES_set_encrypt_key, const unsigned char *, userKey, a0, const LONG, bits, d0, AES_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define AES_set_decrypt_key(userKey, bits, key) \
  LP3(0x34b0, int, AES_set_decrypt_key, const unsigned char *, userKey, a0, const LONG, bits, d0, AES_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define AES_encrypt(in, out, key) \
  LP3NR(0x34b6, AES_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const AES_KEY *, key, a2, \
  , AMISSL_BASE_NAME)

#define AES_decrypt(in, out, key) \
  LP3NR(0x34bc, AES_decrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const AES_KEY *, key, a2, \
  , AMISSL_BASE_NAME)

#define AES_ecb_encrypt(in, out, key, enc) \
  LP4NR(0x34c2, AES_ecb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const AES_KEY *, key, a2, const LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define AES_cbc_encrypt(in, out, length, key, ivec, enc) \
  LP6NR(0x34c8, AES_cbc_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const unsigned long, length, d0, const AES_KEY *, key, a2, unsigned char *, ivec, a3, const LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define AES_cfb128_encrypt(in, out, length, key, ivec, num, enc) \
  LP7NR(0x34ce, AES_cfb128_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const unsigned long, length, d0, const AES_KEY *, key, a2, unsigned char *, ivec, a3, int *, num, d1, const LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define AES_cfb1_encrypt(in, out, length, key, ivec, num, enc) \
  LP7NR(0x34d4, AES_cfb1_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const unsigned long, length, d0, const AES_KEY *, key, a2, unsigned char *, ivec, a3, int *, num, d1, const LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define AES_cfb8_encrypt(in, out, length, key, ivec, num, enc) \
  LP7NR(0x34da, AES_cfb8_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const unsigned long, length, d0, const AES_KEY *, key, a2, unsigned char *, ivec, a3, int *, num, d1, const LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define AES_cfbr_encrypt_block(in, out, nbits, key, ivec, enc) \
  LP6NR(0x34e0, AES_cfbr_encrypt_block, const unsigned char *, in, a0, unsigned char *, out, a1, const LONG, nbits, d0, const AES_KEY *, key, a2, unsigned char *, ivec, a3, const LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define AES_ofb128_encrypt(in, out, length, key, ivec, num) \
  LP6NR(0x34e6, AES_ofb128_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const unsigned long, length, d0, const AES_KEY *, key, a2, unsigned char *, ivec, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define AES_ctr128_encrypt(in, out, length, key, ivec, ecount_buf, num) \
  LP7NR(0x34ec, AES_ctr128_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const unsigned long, length, d0, const AES_KEY *, key, a2, ULONG, ivec, d1, ULONG, ecount_buf, d2, unsigned int *, num, a3, \
  , AMISSL_BASE_NAME)

#define BF_set_key(key, len, data) \
  LP3NR(0x34f2, BF_set_key, BF_KEY *, key, a0, LONG, len, d0, const unsigned char *, data, a1, \
  , AMISSL_BASE_NAME)

#define BF_encrypt(data, key) \
  LP2NR(0x34f8, BF_encrypt, BF_LONG *, data, a0, const BF_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define BF_decrypt(data, key) \
  LP2NR(0x34fe, BF_decrypt, BF_LONG *, data, a0, const BF_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define BF_ecb_encrypt(in, out, key, enc) \
  LP4NR(0x3504, BF_ecb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, const BF_KEY *, key, a2, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define BF_cbc_encrypt(in, out, length, schedule, ivec, enc) \
  LP6NR(0x350a, BF_cbc_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, const BF_KEY *, schedule, a2, unsigned char *, ivec, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define BF_cfb64_encrypt(in, out, length, schedule, ivec, num, enc) \
  LP7NR(0x3510, BF_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, const BF_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define BF_ofb64_encrypt(in, out, length, schedule, ivec, num) \
  LP6NR(0x3516, BF_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, const BF_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define BF_options() \
  LP0(0x351c, const char *, BF_options, \
  , AMISSL_BASE_NAME)

#define CAST_set_key(key, len, data) \
  LP3NR(0x3522, CAST_set_key, CAST_KEY *, key, a0, LONG, len, d0, const unsigned char *, data, a1, \
  , AMISSL_BASE_NAME)

#define CAST_ecb_encrypt(in, out, key, enc) \
  LP4NR(0x3528, CAST_ecb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, CAST_KEY *, key, a2, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define CAST_encrypt(data, key) \
  LP2NR(0x352e, CAST_encrypt, CAST_LONG *, data, a0, CAST_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define CAST_decrypt(data, key) \
  LP2NR(0x3534, CAST_decrypt, CAST_LONG *, data, a0, CAST_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define CAST_cbc_encrypt(in, out, length, ks, iv, enc) \
  LP6NR(0x353a, CAST_cbc_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, CAST_KEY *, ks, a2, unsigned char *, iv, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define CAST_cfb64_encrypt(in, out, length, schedule, ivec, num, enc) \
  LP7NR(0x3540, CAST_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, CAST_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define CAST_ofb64_encrypt(in, out, length, schedule, ivec, num) \
  LP6NR(0x3546, CAST_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, CAST_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define _shadow_DES_check_key() \
  LP0(0x354c, int *, _shadow_DES_check_key, \
  , AMISSL_BASE_NAME)

#define _shadow_DES_rw_mode() \
  LP0(0x3552, int *, _shadow_DES_rw_mode, \
  , AMISSL_BASE_NAME)

#define DES_options() \
  LP0(0x3558, const char *, DES_options, \
  , AMISSL_BASE_NAME)

#define DES_ecb3_encrypt(input, output, ks1, ks2, ks3, enc) \
  LP6NR(0x355e, DES_ecb3_encrypt, const unsigned char *, input, a0, unsigned char *, output, a1, DES_key_schedule *, ks1, a2, DES_key_schedule *, ks2, a3, DES_key_schedule *, ks3, d0, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define DES_cbc_cksum(input, output, length, schedule, ivec) \
  LP5(0x3564, DES_LONG, DES_cbc_cksum, const unsigned char *, input, a0, DES_cblock *, output, a1, long, length, d0, DES_key_schedule *, schedule, a2, const_DES_cblock *, ivec, a3, \
  , AMISSL_BASE_NAME)

#define DES_cbc_encrypt(input, output, length, schedule, ivec, enc) \
  LP6NR(0x356a, DES_cbc_encrypt, const unsigned char *, input, a0, unsigned char *, output, a1, long, length, d0, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define DES_ncbc_encrypt(input, output, length, schedule, ivec, enc) \
  LP6NR(0x3570, DES_ncbc_encrypt, const unsigned char *, input, a0, unsigned char *, output, a1, long, length, d0, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define DES_xcbc_encrypt(input, output, length, schedule, ivec, inw, outw, enc) \
  LP8NR(0x3576, DES_xcbc_encrypt, const unsigned char *, input, a0, unsigned char *, output, a1, long, length, d0, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, const_DES_cblock *, inw, d1, const_DES_cblock *, outw, d2, LONG, enc, d3, \
  , AMISSL_BASE_NAME)

#define DES_cfb_encrypt(in, out, numbits, length, schedule, ivec, enc) \
  LP7NR(0x357c, DES_cfb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, LONG, numbits, d0, long, length, d1, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define DES_ecb_encrypt(input, output, ks, enc) \
  LP4NR(0x3582, DES_ecb_encrypt, const_DES_cblock *, input, a0, DES_cblock *, output, a1, DES_key_schedule *, ks, a2, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define DES_encrypt1(data, ks, enc) \
  LP3NR(0x3588, DES_encrypt1, DES_LONG *, data, a0, DES_key_schedule *, ks, a1, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define DES_encrypt2(data, ks, enc) \
  LP3NR(0x358e, DES_encrypt2, DES_LONG *, data, a0, DES_key_schedule *, ks, a1, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define DES_encrypt3(data, ks1, ks2, ks3) \
  LP4NR(0x3594, DES_encrypt3, DES_LONG *, data, a0, DES_key_schedule *, ks1, a1, DES_key_schedule *, ks2, a2, DES_key_schedule *, ks3, a3, \
  , AMISSL_BASE_NAME)

#define DES_decrypt3(data, ks1, ks2, ks3) \
  LP4NR(0x359a, DES_decrypt3, DES_LONG *, data, a0, DES_key_schedule *, ks1, a1, DES_key_schedule *, ks2, a2, DES_key_schedule *, ks3, a3, \
  , AMISSL_BASE_NAME)

#define DES_ede3_cbc_encrypt(input, output, length, ks1, ks2, ks3, ivec, enc) \
  LP8NR(0x35a0, DES_ede3_cbc_encrypt, const unsigned char *, input, a0, unsigned char *, output, a1, long, length, d0, DES_key_schedule *, ks1, a2, DES_key_schedule *, ks2, a3, DES_key_schedule *, ks3, d1, DES_cblock *, ivec, d2, LONG, enc, d3, \
  , AMISSL_BASE_NAME)

#define DES_ede3_cbcm_encrypt(in, out, length, ks1, ks2, ks3, ivec1, ivec2, enc) \
  LP9NR(0x35a6, DES_ede3_cbcm_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, DES_key_schedule *, ks1, a2, DES_key_schedule *, ks2, a3, DES_key_schedule *, ks3, d1, DES_cblock *, ivec1, d2, DES_cblock *, ivec2, d3, LONG, enc, d4, \
  , AMISSL_BASE_NAME)

#define DES_ede3_cfb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num, enc) \
  LP9NR(0x35ac, DES_ede3_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, DES_key_schedule *, ks1, a2, DES_key_schedule *, ks2, a3, DES_key_schedule *, ks3, d1, DES_cblock *, ivec, d2, int *, num, d3, LONG, enc, d4, \
  , AMISSL_BASE_NAME)

#define DES_ede3_cfb_encrypt(in, out, numbits, length, ks1, ks2, ks3, ivec, enc) \
  LP9NR(0x35b2, DES_ede3_cfb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, LONG, numbits, d0, long, length, d1, DES_key_schedule *, ks1, a2, DES_key_schedule *, ks2, a3, DES_key_schedule *, ks3, d2, DES_cblock *, ivec, d3, LONG, enc, d4, \
  , AMISSL_BASE_NAME)

#define DES_ede3_ofb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num) \
  LP8NR(0x35b8, DES_ede3_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, DES_key_schedule *, ks1, a2, DES_key_schedule *, ks2, a3, DES_key_schedule *, ks3, d1, DES_cblock *, ivec, d2, int *, num, d3, \
  , AMISSL_BASE_NAME)

#define DES_xwhite_in2out(DES_key, in_white, out_white) \
  LP3NR(0x35be, DES_xwhite_in2out, const_DES_cblock *, DES_key, a0, const_DES_cblock *, in_white, a1, DES_cblock *, out_white, a2, \
  , AMISSL_BASE_NAME)

#define DES_enc_read(fd, buf, len, sched, iv) \
  LP5(0x35c4, int, DES_enc_read, LONG, fd, d0, void *, buf, a0, LONG, len, d1, DES_key_schedule *, sched, a1, DES_cblock *, iv, a2, \
  , AMISSL_BASE_NAME)

#define DES_enc_write(fd, buf, len, sched, iv) \
  LP5(0x35ca, int, DES_enc_write, LONG, fd, d0, const void *, buf, a0, LONG, len, d1, DES_key_schedule *, sched, a1, DES_cblock *, iv, a2, \
  , AMISSL_BASE_NAME)

#define DES_fcrypt(buf, salt, ret) \
  LP3(0x35d0, char *, DES_fcrypt, const char *, buf, a0, const char *, salt, a1, char *, ret, a2, \
  , AMISSL_BASE_NAME)

#define DES_crypt(buf, salt) \
  LP2(0x35d6, char *, DES_crypt, const char *, buf, a0, const char *, salt, a1, \
  , AMISSL_BASE_NAME)

#define DES_ofb_encrypt(in, out, numbits, length, schedule, ivec) \
  LP6NR(0x35dc, DES_ofb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, LONG, numbits, d0, long, length, d1, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, \
  , AMISSL_BASE_NAME)

#define DES_pcbc_encrypt(input, output, length, schedule, ivec, enc) \
  LP6NR(0x35e2, DES_pcbc_encrypt, const unsigned char *, input, a0, unsigned char *, output, a1, long, length, d0, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define DES_quad_cksum(input, output, length, out_count, seed) \
  LP5(0x35e8, DES_LONG, DES_quad_cksum, const unsigned char *, input, a0, DES_cblock *, output, a1, long, length, d0, LONG, out_count, d1, DES_cblock *, seed, a2, \
  , AMISSL_BASE_NAME)

#define DES_random_key(ret) \
  LP1(0x35ee, int, DES_random_key, DES_cblock *, ret, a0, \
  , AMISSL_BASE_NAME)

#define DES_set_odd_parity(key) \
  LP1NR(0x35f4, DES_set_odd_parity, DES_cblock *, key, a0, \
  , AMISSL_BASE_NAME)

#define DES_check_key_parity(key) \
  LP1(0x35fa, int, DES_check_key_parity, const_DES_cblock *, key, a0, \
  , AMISSL_BASE_NAME)

#define DES_is_weak_key(key) \
  LP1(0x3600, int, DES_is_weak_key, const_DES_cblock *, key, a0, \
  , AMISSL_BASE_NAME)

#define DES_set_key(key, schedule) \
  LP2(0x3606, int, DES_set_key, const_DES_cblock *, key, a0, DES_key_schedule *, schedule, a1, \
  , AMISSL_BASE_NAME)

#define DES_key_sched(key, schedule) \
  LP2(0x360c, int, DES_key_sched, const_DES_cblock *, key, a0, DES_key_schedule *, schedule, a1, \
  , AMISSL_BASE_NAME)

#define DES_set_key_checked(key, schedule) \
  LP2(0x3612, int, DES_set_key_checked, const_DES_cblock *, key, a0, DES_key_schedule *, schedule, a1, \
  , AMISSL_BASE_NAME)

#define DES_set_key_unchecked(key, schedule) \
  LP2NR(0x3618, DES_set_key_unchecked, const_DES_cblock *, key, a0, DES_key_schedule *, schedule, a1, \
  , AMISSL_BASE_NAME)

#define DES_string_to_key(str, key) \
  LP2NR(0x361e, DES_string_to_key, const char *, str, a0, DES_cblock *, key, a1, \
  , AMISSL_BASE_NAME)

#define DES_string_to_2keys(str, key1, key2) \
  LP3NR(0x3624, DES_string_to_2keys, const char *, str, a0, DES_cblock *, key1, a1, DES_cblock *, key2, a2, \
  , AMISSL_BASE_NAME)

#define DES_cfb64_encrypt(in, out, length, schedule, ivec, num, enc) \
  LP7NR(0x362a, DES_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, int *, num, d1, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define DES_ofb64_encrypt(in, out, length, schedule, ivec, num) \
  LP6NR(0x3630, DES_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, DES_key_schedule *, schedule, a2, DES_cblock *, ivec, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define DES_read_password(key, prompt, verify) \
  LP3(0x3636, int, DES_read_password, DES_cblock *, key, a0, const char *, prompt, a1, LONG, verify, d0, \
  , AMISSL_BASE_NAME)

#define DES_read_2passwords(key1, key2, prompt, verify) \
  LP4(0x363c, int, DES_read_2passwords, DES_cblock *, key1, a0, DES_cblock *, key2, a1, const char *, prompt, a2, LONG, verify, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_options() \
  LP0(0x3642, const char *, _ossl_old_des_options, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ecb3_encrypt(input, output, ks1, ks2, ks3, enc) \
  LP6NR(0x3648, _ossl_old_des_ecb3_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, _ossl_old_des_key_schedule, ks1, d0, _ossl_old_des_key_schedule, ks2, d1, _ossl_old_des_key_schedule, ks3, d2, LONG, enc, d3, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_cbc_cksum(input, output, length, schedule, ivec) \
  LP5(0x364e, DES_LONG, _ossl_old_des_cbc_cksum, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_cbc_encrypt(input, output, length, schedule, ivec, enc) \
  LP6NR(0x3654, _ossl_old_des_cbc_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ncbc_encrypt(input, output, length, schedule, ivec, enc) \
  LP6NR(0x365a, _ossl_old_des_ncbc_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_xcbc_encrypt(input, output, length, schedule, ivec, inw, outw, enc) \
  LP8NR(0x3660, _ossl_old_des_xcbc_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, _ossl_old_des_cblock *, inw, a3, _ossl_old_des_cblock *, outw, d2, LONG, enc, d3, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_cfb_encrypt(in, out, numbits, length, schedule, ivec, enc) \
  LP7NR(0x3666, _ossl_old_des_cfb_encrypt, unsigned char *, in, a0, unsigned char *, out, a1, LONG, numbits, d0, long, length, d1, _ossl_old_des_key_schedule, schedule, d2, _ossl_old_des_cblock *, ivec, a2, LONG, enc, d3, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ecb_encrypt(input, output, ks, enc) \
  LP4NR(0x366c, _ossl_old_des_ecb_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, _ossl_old_des_key_schedule, ks, d0, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_encrypt(data, ks, enc) \
  LP3NR(0x3672, _ossl_old_des_encrypt, DES_LONG *, data, a0, _ossl_old_des_key_schedule, ks, d0, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_encrypt2(data, ks, enc) \
  LP3NR(0x3678, _ossl_old_des_encrypt2, DES_LONG *, data, a0, _ossl_old_des_key_schedule, ks, d0, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_encrypt3(data, ks1, ks2, ks3) \
  LP4NR(0x367e, _ossl_old_des_encrypt3, DES_LONG *, data, a0, _ossl_old_des_key_schedule, ks1, d0, _ossl_old_des_key_schedule, ks2, d1, _ossl_old_des_key_schedule, ks3, d2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_decrypt3(data, ks1, ks2, ks3) \
  LP4NR(0x3684, _ossl_old_des_decrypt3, DES_LONG *, data, a0, _ossl_old_des_key_schedule, ks1, d0, _ossl_old_des_key_schedule, ks2, d1, _ossl_old_des_key_schedule, ks3, d2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ede3_cbc_encrypt(input, output, length, ks1, ks2, ks3, ivec, enc) \
  LP8NR(0x368a, _ossl_old_des_ede3_cbc_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, _ossl_old_des_key_schedule, ks1, d1, _ossl_old_des_key_schedule, ks2, d2, _ossl_old_des_key_schedule, ks3, d3, _ossl_old_des_cblock *, ivec, a2, LONG, enc, d4, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ede3_cfb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num, enc) \
  LP9NR(0x3690, _ossl_old_des_ede3_cfb64_encrypt, unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, _ossl_old_des_key_schedule, ks1, d1, _ossl_old_des_key_schedule, ks2, d2, _ossl_old_des_key_schedule, ks3, d3, _ossl_old_des_cblock *, ivec, a2, int *, num, a3, LONG, enc, d4, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ede3_ofb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num) \
  LP8NR(0x3696, _ossl_old_des_ede3_ofb64_encrypt, unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, _ossl_old_des_key_schedule, ks1, d1, _ossl_old_des_key_schedule, ks2, d2, _ossl_old_des_key_schedule, ks3, d3, _ossl_old_des_cblock *, ivec, a2, int *, num, a3, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_xwhite_in2out(des_key, in_white, out_white) \
  LP3NR(0x369c, _ossl_old_des_xwhite_in2out, _ossl_old_des_cblock *, des_key, a0, _ossl_old_des_cblock *, in_white, a1, _ossl_old_des_cblock *, out_white, a2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_enc_read(fd, buf, len, sched, iv) \
  LP5(0x36a2, int, _ossl_old_des_enc_read, LONG, fd, d0, char *, buf, a0, LONG, len, d1, _ossl_old_des_key_schedule, sched, d2, _ossl_old_des_cblock *, iv, a1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_enc_write(fd, buf, len, sched, iv) \
  LP5(0x36a8, int, _ossl_old_des_enc_write, LONG, fd, d0, char *, buf, a0, LONG, len, d1, _ossl_old_des_key_schedule, sched, d2, _ossl_old_des_cblock *, iv, a1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_fcrypt(buf, salt, ret) \
  LP3(0x36ae, char *, _ossl_old_des_fcrypt, const char *, buf, a0, const char *, salt, a1, char *, ret, a2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_crypt(buf, salt) \
  LP2(0x36b4, char *, _ossl_old_des_crypt, const char *, buf, a0, const char *, salt, a1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_crypt(buf, salt) \
  LP2(0x36ba, char *, _ossl_old_crypt, const char *, buf, a0, const char *, salt, a1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ofb_encrypt(in, out, numbits, length, schedule, ivec) \
  LP6NR(0x36c0, _ossl_old_des_ofb_encrypt, unsigned char *, in, a0, unsigned char *, out, a1, LONG, numbits, d0, long, length, d1, _ossl_old_des_key_schedule, schedule, d2, _ossl_old_des_cblock *, ivec, a2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_pcbc_encrypt(input, output, length, schedule, ivec, enc) \
  LP6NR(0x36c6, _ossl_old_des_pcbc_encrypt, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_quad_cksum(input, output, length, out_count, seed) \
  LP5(0x36cc, DES_LONG, _ossl_old_des_quad_cksum, _ossl_old_des_cblock *, input, a0, _ossl_old_des_cblock *, output, a1, long, length, d0, LONG, out_count, d1, _ossl_old_des_cblock *, seed, a2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_random_seed(key) \
  LP1NR(0x36d2, _ossl_old_des_random_seed, _ossl_old_des_cblock, key, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_random_key(ret) \
  LP1NR(0x36d8, _ossl_old_des_random_key, _ossl_old_des_cblock, ret, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_read_password(key, prompt, verify) \
  LP3(0x36de, int, _ossl_old_des_read_password, _ossl_old_des_cblock *, key, a0, const char *, prompt, a1, LONG, verify, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_read_2passwords(key1, key2, prompt, verify) \
  LP4(0x36e4, int, _ossl_old_des_read_2passwords, _ossl_old_des_cblock *, key1, a0, _ossl_old_des_cblock *, key2, a1, const char *, prompt, a2, LONG, verify, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_set_odd_parity(key) \
  LP1NR(0x36ea, _ossl_old_des_set_odd_parity, _ossl_old_des_cblock *, key, a0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_is_weak_key(key) \
  LP1(0x36f0, int, _ossl_old_des_is_weak_key, _ossl_old_des_cblock *, key, a0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_set_key(key, schedule) \
  LP2(0x36f6, int, _ossl_old_des_set_key, _ossl_old_des_cblock *, key, a0, _ossl_old_des_key_schedule, schedule, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_key_sched(key, schedule) \
  LP2(0x36fc, int, _ossl_old_des_key_sched, _ossl_old_des_cblock *, key, a0, _ossl_old_des_key_schedule, schedule, d0, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_string_to_key(str, key) \
  LP2NR(0x3702, _ossl_old_des_string_to_key, char *, str, a0, _ossl_old_des_cblock *, key, a1, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_string_to_2keys(str, key1, key2) \
  LP3NR(0x3708, _ossl_old_des_string_to_2keys, char *, str, a0, _ossl_old_des_cblock *, key1, a1, _ossl_old_des_cblock *, key2, a2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_cfb64_encrypt(in, out, length, schedule, ivec, num, enc) \
  LP7NR(0x370e, _ossl_old_des_cfb64_encrypt, unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, int *, num, a3, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define _ossl_old_des_ofb64_encrypt(in, out, length, schedule, ivec, num) \
  LP6NR(0x3714, _ossl_old_des_ofb64_encrypt, unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, _ossl_old_des_key_schedule, schedule, d1, _ossl_old_des_cblock *, ivec, a2, int *, num, a3, \
  , AMISSL_BASE_NAME)

#define _ossl_096_des_random_seed(key) \
  LP1NR(0x371a, _ossl_096_des_random_seed, des_cblock *, key, a0, \
  , AMISSL_BASE_NAME)

#define DH_OpenSSL() \
  LP0(0x3720, const DH_METHOD *, DH_OpenSSL, \
  , AMISSL_BASE_NAME)

#define DH_set_default_method(meth) \
  LP1NR(0x3726, DH_set_default_method, const DH_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define DH_get_default_method() \
  LP0(0x372c, const DH_METHOD *, DH_get_default_method, \
  , AMISSL_BASE_NAME)

#define DH_set_method(dh, meth) \
  LP2(0x3732, int, DH_set_method, DH *, dh, a0, const DH_METHOD *, meth, a1, \
  , AMISSL_BASE_NAME)

#define DH_new_method(engine) \
  LP1(0x3738, DH *, DH_new_method, ENGINE *, engine, a0, \
  , AMISSL_BASE_NAME)

#define DH_new() \
  LP0(0x373e, DH *, DH_new, \
  , AMISSL_BASE_NAME)

#define DH_free(dh) \
  LP1NR(0x3744, DH_free, DH *, dh, a0, \
  , AMISSL_BASE_NAME)

#define DH_up_ref(dh) \
  LP1(0x374a, int, DH_up_ref, DH *, dh, a0, \
  , AMISSL_BASE_NAME)

#define DH_size(dh) \
  LP1(0x3750, int, DH_size, const DH *, dh, a0, \
  , AMISSL_BASE_NAME)

#define DH_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x3756, int, DH_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define DH_set_ex_data(d, idx, arg) \
  LP3(0x375c, int, DH_set_ex_data, DH *, d, a0, LONG, idx, d0, void *, arg, a1, \
  , AMISSL_BASE_NAME)

#define DH_get_ex_data(d, idx) \
  LP2(0x3762, void *, DH_get_ex_data, DH *, d, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define DH_generate_parameters(prime_len, generator, callback, cb_arg) \
  LP4FP(0x3768, DH *, DH_generate_parameters, LONG, prime_len, d0, LONG, generator, d1, __fpt, callback, a0, void *, cb_arg, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(int, int, void *))

#define DH_check(dh, codes) \
  LP2(0x376e, int, DH_check, const DH *, dh, a0, int *, codes, a1, \
  , AMISSL_BASE_NAME)

#define DH_generate_key(dh) \
  LP1(0x3774, int, DH_generate_key, DH *, dh, a0, \
  , AMISSL_BASE_NAME)

#define DH_compute_key(key, pub_key, dh) \
  LP3(0x377a, int, DH_compute_key, unsigned char *, key, a0, const BIGNUM *, pub_key, a1, DH *, dh, a2, \
  , AMISSL_BASE_NAME)

#define d2i_DHparams(a, pp, length) \
  LP3(0x3780, DH *, d2i_DHparams, DH **, a, a0, const unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define i2d_DHparams(a, pp) \
  LP2(0x3786, int, i2d_DHparams, const DH *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define DHparams_print(bp, x) \
  LP2(0x378c, int, DHparams_print, BIO *, bp, a0, const DH *, x, a1, \
  , AMISSL_BASE_NAME)

#define ERR_load_DH_strings() \
  LP0NR(0x3792, ERR_load_DH_strings, \
  , AMISSL_BASE_NAME)

#define DSA_SIG_new() \
  LP0(0x3798, DSA_SIG *, DSA_SIG_new, \
  , AMISSL_BASE_NAME)

#define DSA_SIG_free(a) \
  LP1NR(0x379e, DSA_SIG_free, DSA_SIG *, a, a0, \
  , AMISSL_BASE_NAME)

#define i2d_DSA_SIG(a, pp) \
  LP2(0x37a4, int, i2d_DSA_SIG, const DSA_SIG *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define d2i_DSA_SIG(v, pp, length) \
  LP3(0x37aa, DSA_SIG *, d2i_DSA_SIG, DSA_SIG **, v, a0, const unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define DSA_do_sign(dgst, dlen, dsa) \
  LP3(0x37b0, DSA_SIG *, DSA_do_sign, const unsigned char *, dgst, a0, LONG, dlen, d0, DSA *, dsa, a1, \
  , AMISSL_BASE_NAME)

#define DSA_do_verify(dgst, dgst_len, sig, dsa) \
  LP4(0x37b6, int, DSA_do_verify, const unsigned char *, dgst, a0, LONG, dgst_len, d0, DSA_SIG *, sig, a1, DSA *, dsa, a2, \
  , AMISSL_BASE_NAME)

#define DSA_OpenSSL() \
  LP0(0x37bc, const DSA_METHOD *, DSA_OpenSSL, \
  , AMISSL_BASE_NAME)

#define DSA_set_default_method(a) \
  LP1NR(0x37c2, DSA_set_default_method, const DSA_METHOD *, a, a0, \
  , AMISSL_BASE_NAME)

#define DSA_get_default_method() \
  LP0(0x37c8, const DSA_METHOD *, DSA_get_default_method, \
  , AMISSL_BASE_NAME)

#define DSA_set_method(dsa, a) \
  LP2(0x37ce, int, DSA_set_method, DSA *, dsa, a0, const DSA_METHOD *, a, a1, \
  , AMISSL_BASE_NAME)

#define DSA_new() \
  LP0(0x37d4, DSA *, DSA_new, \
  , AMISSL_BASE_NAME)

#define DSA_new_method(engine) \
  LP1(0x37da, DSA *, DSA_new_method, ENGINE *, engine, a0, \
  , AMISSL_BASE_NAME)

#define DSA_free(r) \
  LP1NR(0x37e0, DSA_free, DSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define DSA_up_ref(r) \
  LP1(0x37e6, int, DSA_up_ref, DSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define DSA_size(a) \
  LP1(0x37ec, int, DSA_size, const DSA *, a, a0, \
  , AMISSL_BASE_NAME)

#define DSA_sign_setup(dsa, ctx_in, kinvp, rp) \
  LP4(0x37f2, int, DSA_sign_setup, DSA *, dsa, a0, BN_CTX *, ctx_in, a1, BIGNUM **, kinvp, a2, BIGNUM **, rp, a3, \
  , AMISSL_BASE_NAME)

#define DSA_sign(type, dgst, dlen, sig, siglen, dsa) \
  LP6(0x37f8, int, DSA_sign, LONG, type, d0, const unsigned char *, dgst, a0, LONG, dlen, d1, unsigned char *, sig, a1, unsigned int *, siglen, a2, DSA *, dsa, a3, \
  , AMISSL_BASE_NAME)

#define DSA_verify(type, dgst, dgst_len, sigbuf, siglen, dsa) \
  LP6(0x37fe, int, DSA_verify, LONG, type, d0, const unsigned char *, dgst, a0, LONG, dgst_len, d1, const unsigned char *, sigbuf, a1, LONG, siglen, d2, DSA *, dsa, a2, \
  , AMISSL_BASE_NAME)

#define DSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x3804, int, DSA_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define DSA_set_ex_data(d, idx, arg) \
  LP3(0x380a, int, DSA_set_ex_data, DSA *, d, a0, LONG, idx, d0, void *, arg, a1, \
  , AMISSL_BASE_NAME)

#define DSA_get_ex_data(d, idx) \
  LP2(0x3810, void *, DSA_get_ex_data, DSA *, d, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define d2i_DSAPublicKey(a, pp, length) \
  LP3(0x3816, DSA *, d2i_DSAPublicKey, DSA **, a, a0, const unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define d2i_DSAPrivateKey(a, pp, length) \
  LP3(0x381c, DSA *, d2i_DSAPrivateKey, DSA **, a, a0, const unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define d2i_DSAparams(a, pp, length) \
  LP3(0x3822, DSA *, d2i_DSAparams, DSA **, a, a0, const unsigned char **, pp, a1, long, length, d0, \
  , AMISSL_BASE_NAME)

#define DSA_generate_parameters(bits, seed, seed_len, counter_ret, h_ret, callback, cb_arg) \
  LP7FP(0x3828, DSA *, DSA_generate_parameters, LONG, bits, d0, unsigned char *, seed, a0, LONG, seed_len, d1, int *, counter_ret, a1, unsigned long *, h_ret, a2, __fpt, callback, a3, void *, cb_arg, d2, \
  , AMISSL_BASE_NAME, void (*__fpt)(int, int, void *))

#define DSA_generate_key(a) \
  LP1(0x382e, int, DSA_generate_key, DSA *, a, a0, \
  , AMISSL_BASE_NAME)

#define i2d_DSAPublicKey(a, pp) \
  LP2(0x3834, int, i2d_DSAPublicKey, const DSA *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define i2d_DSAPrivateKey(a, pp) \
  LP2(0x383a, int, i2d_DSAPrivateKey, const DSA *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define i2d_DSAparams(a, pp) \
  LP2(0x3840, int, i2d_DSAparams, const DSA *, a, a0, unsigned char **, pp, a1, \
  , AMISSL_BASE_NAME)

#define DSAparams_print(bp, x) \
  LP2(0x3846, int, DSAparams_print, BIO *, bp, a0, const DSA *, x, a1, \
  , AMISSL_BASE_NAME)

#define DSA_print(bp, x, off) \
  LP3(0x384c, int, DSA_print, BIO *, bp, a0, const DSA *, x, a1, LONG, off, d0, \
  , AMISSL_BASE_NAME)

#define DSA_dup_DH(r) \
  LP1(0x3852, DH *, DSA_dup_DH, const DSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_DSA_strings() \
  LP0NR(0x3858, ERR_load_DSA_strings, \
  , AMISSL_BASE_NAME)

#define idea_options() \
  LP0(0x385e, const char *, idea_options, \
  , AMISSL_BASE_NAME)

#define idea_ecb_encrypt(in, out, ks) \
  LP3NR(0x3864, idea_ecb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, IDEA_KEY_SCHEDULE *, ks, a2, \
  , AMISSL_BASE_NAME)

#define idea_set_encrypt_key(key, ks) \
  LP2NR(0x386a, idea_set_encrypt_key, const unsigned char *, key, a0, IDEA_KEY_SCHEDULE *, ks, a1, \
  , AMISSL_BASE_NAME)

#define idea_set_decrypt_key(ek, dk) \
  LP2NR(0x3870, idea_set_decrypt_key, IDEA_KEY_SCHEDULE *, ek, a0, IDEA_KEY_SCHEDULE *, dk, a1, \
  , AMISSL_BASE_NAME)

#define idea_cbc_encrypt(in, out, length, ks, iv, enc) \
  LP6NR(0x3876, idea_cbc_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, IDEA_KEY_SCHEDULE *, ks, a2, unsigned char *, iv, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define idea_cfb64_encrypt(in, out, length, ks, iv, num, enc) \
  LP7NR(0x387c, idea_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, IDEA_KEY_SCHEDULE *, ks, a2, unsigned char *, iv, a3, int *, num, d1, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define idea_ofb64_encrypt(in, out, length, ks, iv, num) \
  LP6NR(0x3882, idea_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, IDEA_KEY_SCHEDULE *, ks, a2, unsigned char *, iv, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define idea_encrypt(in, ks) \
  LP2NR(0x3888, idea_encrypt, unsigned long *, in, a0, IDEA_KEY_SCHEDULE *, ks, a1, \
  , AMISSL_BASE_NAME)

#define MD2_options() \
  LP0(0x388e, const char *, MD2_options, \
  , AMISSL_BASE_NAME)

#define MD2_Init(c) \
  LP1(0x3894, int, MD2_Init, MD2_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define MD2_Update(c, data, len) \
  LP3(0x389a, int, MD2_Update, MD2_CTX *, c, a0, const unsigned char *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define MD2_Final(md, c) \
  LP2(0x38a0, int, MD2_Final, unsigned char *, md, a0, MD2_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define MD2(d, n, md) \
  LP3(0x38a6, unsigned char *, MD2, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define MD4_Init(c) \
  LP1(0x38ac, int, MD4_Init, MD4_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define MD4_Update(c, data, len) \
  LP3(0x38b2, int, MD4_Update, MD4_CTX *, c, a0, const void *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define MD4_Final(md, c) \
  LP2(0x38b8, int, MD4_Final, unsigned char *, md, a0, MD4_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define MD4(d, n, md) \
  LP3(0x38be, unsigned char *, MD4, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define MD4_Transform(c, b) \
  LP2NR(0x38c4, MD4_Transform, MD4_CTX *, c, a0, const unsigned char *, b, a1, \
  , AMISSL_BASE_NAME)

#define MD5_Init(c) \
  LP1(0x38ca, int, MD5_Init, MD5_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define MD5_Update(c, data, len) \
  LP3(0x38d0, int, MD5_Update, MD5_CTX *, c, a0, const void *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define MD5_Final(md, c) \
  LP2(0x38d6, int, MD5_Final, unsigned char *, md, a0, MD5_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define MD5(d, n, md) \
  LP3(0x38dc, unsigned char *, MD5, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define MD5_Transform(c, b) \
  LP2NR(0x38e2, MD5_Transform, MD5_CTX *, c, a0, const unsigned char *, b, a1, \
  , AMISSL_BASE_NAME)

#define MDC2_Init(c) \
  LP1(0x38e8, int, MDC2_Init, MDC2_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define MDC2_Update(c, data, len) \
  LP3(0x38ee, int, MDC2_Update, MDC2_CTX *, c, a0, const unsigned char *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define MDC2_Final(md, c) \
  LP2(0x38f4, int, MDC2_Final, unsigned char *, md, a0, MDC2_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define MDC2(d, n, md) \
  LP3(0x38fa, unsigned char *, MDC2, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define RC2_set_key(key, len, data, bits) \
  LP4NR(0x3900, RC2_set_key, RC2_KEY *, key, a0, LONG, len, d0, const unsigned char *, data, a1, LONG, bits, d1, \
  , AMISSL_BASE_NAME)

#define RC2_ecb_encrypt(in, out, key, enc) \
  LP4NR(0x3906, RC2_ecb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, RC2_KEY *, key, a2, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define RC2_encrypt(data, key) \
  LP2NR(0x390c, RC2_encrypt, unsigned long *, data, a0, RC2_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define RC2_decrypt(data, key) \
  LP2NR(0x3912, RC2_decrypt, unsigned long *, data, a0, RC2_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define RC2_cbc_encrypt(in, out, length, ks, iv, enc) \
  LP6NR(0x3918, RC2_cbc_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, RC2_KEY *, ks, a2, unsigned char *, iv, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define RC2_cfb64_encrypt(in, out, length, schedule, ivec, num, enc) \
  LP7NR(0x391e, RC2_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, RC2_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define RC2_ofb64_encrypt(in, out, length, schedule, ivec, num) \
  LP6NR(0x3924, RC2_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, RC2_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define RC4_options() \
  LP0(0x392a, const char *, RC4_options, \
  , AMISSL_BASE_NAME)

#define RC4_set_key(key, len, data) \
  LP3NR(0x3930, RC4_set_key, RC4_KEY *, key, a0, LONG, len, d0, const unsigned char *, data, a1, \
  , AMISSL_BASE_NAME)

#define RC4(key, len, indata, outdata) \
  LP4NR(0x3936, RC4, RC4_KEY *, key, a0, unsigned long, len, d0, const unsigned char *, indata, a1, unsigned char *, outdata, a2, \
  , AMISSL_BASE_NAME)

#define RC5_32_set_key(key, len, data, rounds) \
  LP4NR(0x393c, RC5_32_set_key, RC5_32_KEY *, key, a0, LONG, len, d0, const unsigned char *, data, a1, LONG, rounds, d1, \
  , AMISSL_BASE_NAME)

#define RC5_32_ecb_encrypt(in, out, key, enc) \
  LP4NR(0x3942, RC5_32_ecb_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, RC5_32_KEY *, key, a2, LONG, enc, d0, \
  , AMISSL_BASE_NAME)

#define RC5_32_encrypt(data, key) \
  LP2NR(0x3948, RC5_32_encrypt, unsigned long *, data, a0, RC5_32_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define RC5_32_decrypt(data, key) \
  LP2NR(0x394e, RC5_32_decrypt, unsigned long *, data, a0, RC5_32_KEY *, key, a1, \
  , AMISSL_BASE_NAME)

#define RC5_32_cbc_encrypt(in, out, length, ks, iv, enc) \
  LP6NR(0x3954, RC5_32_cbc_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, RC5_32_KEY *, ks, a2, unsigned char *, iv, a3, LONG, enc, d1, \
  , AMISSL_BASE_NAME)

#define RC5_32_cfb64_encrypt(in, out, length, schedule, ivec, num, enc) \
  LP7NR(0x395a, RC5_32_cfb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, RC5_32_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, LONG, enc, d2, \
  , AMISSL_BASE_NAME)

#define RC5_32_ofb64_encrypt(in, out, length, schedule, ivec, num) \
  LP6NR(0x3960, RC5_32_ofb64_encrypt, const unsigned char *, in, a0, unsigned char *, out, a1, long, length, d0, RC5_32_KEY *, schedule, a2, unsigned char *, ivec, a3, int *, num, d1, \
  , AMISSL_BASE_NAME)

#define RIPEMD160_Init(c) \
  LP1(0x3966, int, RIPEMD160_Init, RIPEMD160_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define RIPEMD160_Update(c, data, len) \
  LP3(0x396c, int, RIPEMD160_Update, RIPEMD160_CTX *, c, a0, const void *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define RIPEMD160_Final(md, c) \
  LP2(0x3972, int, RIPEMD160_Final, unsigned char *, md, a0, RIPEMD160_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define RIPEMD160(d, n, md) \
  LP3(0x3978, unsigned char *, RIPEMD160, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define RIPEMD160_Transform(c, b) \
  LP2NR(0x397e, RIPEMD160_Transform, RIPEMD160_CTX *, c, a0, const unsigned char *, b, a1, \
  , AMISSL_BASE_NAME)

#define RSA_new() \
  LP0(0x3984, RSA *, RSA_new, \
  , AMISSL_BASE_NAME)

#define RSA_new_method(engine) \
  LP1(0x398a, RSA *, RSA_new_method, ENGINE *, engine, a0, \
  , AMISSL_BASE_NAME)

#define RSA_size(a) \
  LP1(0x3990, int, RSA_size, const RSA *, a, a0, \
  , AMISSL_BASE_NAME)

#define RSA_generate_key(bits, e, callback, cb_arg) \
  LP4FP(0x3996, RSA *, RSA_generate_key, LONG, bits, d0, unsigned long, e, d1, __fpt, callback, a0, void *, cb_arg, a1, \
  , AMISSL_BASE_NAME, void (*__fpt)(int, int, void *))

#define RSA_check_key(a) \
  LP1(0x399c, int, RSA_check_key, const RSA *, a, a0, \
  , AMISSL_BASE_NAME)

#define RSA_public_encrypt(flen, from, to, rsa, padding) \
  LP5(0x39a2, int, RSA_public_encrypt, LONG, flen, d0, const unsigned char *, from, a0, unsigned char *, to, a1, RSA *, rsa, a2, LONG, padding, d1, \
  , AMISSL_BASE_NAME)

#define RSA_private_encrypt(flen, from, to, rsa, padding) \
  LP5(0x39a8, int, RSA_private_encrypt, LONG, flen, d0, const unsigned char *, from, a0, unsigned char *, to, a1, RSA *, rsa, a2, LONG, padding, d1, \
  , AMISSL_BASE_NAME)

#define RSA_public_decrypt(flen, from, to, rsa, padding) \
  LP5(0x39ae, int, RSA_public_decrypt, LONG, flen, d0, const unsigned char *, from, a0, unsigned char *, to, a1, RSA *, rsa, a2, LONG, padding, d1, \
  , AMISSL_BASE_NAME)

#define RSA_private_decrypt(flen, from, to, rsa, padding) \
  LP5(0x39b4, int, RSA_private_decrypt, LONG, flen, d0, const unsigned char *, from, a0, unsigned char *, to, a1, RSA *, rsa, a2, LONG, padding, d1, \
  , AMISSL_BASE_NAME)

#define RSA_free(r) \
  LP1NR(0x39ba, RSA_free, RSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define RSA_up_ref(r) \
  LP1(0x39c0, int, RSA_up_ref, RSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define RSA_flags(r) \
  LP1(0x39c6, int, RSA_flags, const RSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define RSA_set_default_method(meth) \
  LP1NR(0x39cc, RSA_set_default_method, const RSA_METHOD *, meth, a0, \
  , AMISSL_BASE_NAME)

#define RSA_get_default_method() \
  LP0(0x39d2, const RSA_METHOD *, RSA_get_default_method, \
  , AMISSL_BASE_NAME)

#define RSA_get_method(rsa) \
  LP1(0x39d8, const RSA_METHOD *, RSA_get_method, const RSA *, rsa, a0, \
  , AMISSL_BASE_NAME)

#define RSA_set_method(rsa, meth) \
  LP2(0x39de, int, RSA_set_method, RSA *, rsa, a0, const RSA_METHOD *, meth, a1, \
  , AMISSL_BASE_NAME)

#define RSA_memory_lock(r) \
  LP1(0x39e4, int, RSA_memory_lock, RSA *, r, a0, \
  , AMISSL_BASE_NAME)

#define RSA_PKCS1_SSLeay() \
  LP0(0x39ea, const RSA_METHOD *, RSA_PKCS1_SSLeay, \
  , AMISSL_BASE_NAME)

#define RSA_null_method() \
  LP0(0x39f0, const RSA_METHOD *, RSA_null_method, \
  , AMISSL_BASE_NAME)

#define d2i_RSAPublicKey(a, in, len) \
  LP3(0x39f6, RSA *, d2i_RSAPublicKey, RSA **, a, a0, const unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_RSAPublicKey(a, out) \
  LP2(0x39fc, int, i2d_RSAPublicKey, const RSA *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define RSAPublicKey_it() \
  LP0(0x3a02, const ASN1_ITEM *, RSAPublicKey_it, \
  , AMISSL_BASE_NAME)

#define d2i_RSAPrivateKey(a, in, len) \
  LP3(0x3a08, RSA *, d2i_RSAPrivateKey, RSA **, a, a0, const unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_RSAPrivateKey(a, out) \
  LP2(0x3a0e, int, i2d_RSAPrivateKey, const RSA *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define RSAPrivateKey_it() \
  LP0(0x3a14, const ASN1_ITEM *, RSAPrivateKey_it, \
  , AMISSL_BASE_NAME)

#define RSA_print(bp, r, offset) \
  LP3(0x3a1a, int, RSA_print, BIO *, bp, a0, const RSA *, r, a1, LONG, offset, d0, \
  , AMISSL_BASE_NAME)

#define i2d_RSA_NET(a, pp, cb, sgckey) \
  LP4FP(0x3a20, int, i2d_RSA_NET, const RSA *, a, a0, unsigned char **, pp, a1, __fpt, cb, a2, LONG, sgckey, d0, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define d2i_RSA_NET(a, pp, length, cb, sgckey) \
  LP5FP(0x3a26, RSA *, d2i_RSA_NET, RSA **, a, a0, const unsigned char **, pp, a1, long, length, d0, __fpt, cb, a2, LONG, sgckey, d1, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define i2d_Netscape_RSA(a, pp, cb) \
  LP3FP(0x3a2c, int, i2d_Netscape_RSA, const RSA *, a, a0, unsigned char **, pp, a1, __fpt, cb, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define d2i_Netscape_RSA(a, pp, length, cb) \
  LP4FP(0x3a32, RSA *, d2i_Netscape_RSA, RSA **, a, a0, const unsigned char **, pp, a1, long, length, d0, __fpt, cb, a2, \
  , AMISSL_BASE_NAME, int (*__fpt)())

#define RSA_sign(type, m, m_length, sigret, siglen, rsa) \
  LP6(0x3a38, int, RSA_sign, LONG, type, d0, const unsigned char *, m, a0, ULONG, m_length, d1, unsigned char *, sigret, a1, unsigned int *, siglen, a2, RSA *, rsa, a3, \
  , AMISSL_BASE_NAME)

#define RSA_verify(type, m, m_length, sigbuf, siglen, rsa) \
  LP6(0x3a3e, int, RSA_verify, LONG, type, d0, const unsigned char *, m, a0, ULONG, m_length, d1, unsigned char *, sigbuf, a1, ULONG, siglen, d2, RSA *, rsa, a2, \
  , AMISSL_BASE_NAME)

#define RSA_sign_ASN1_OCTET_STRING(type, m, m_length, sigret, siglen, rsa) \
  LP6(0x3a44, int, RSA_sign_ASN1_OCTET_STRING, LONG, type, d0, const unsigned char *, m, a0, ULONG, m_length, d1, unsigned char *, sigret, a1, unsigned int *, siglen, a2, RSA *, rsa, a3, \
  , AMISSL_BASE_NAME)

#define RSA_verify_ASN1_OCTET_STRING(type, m, m_length, sigbuf, siglen, rsa) \
  LP6(0x3a4a, int, RSA_verify_ASN1_OCTET_STRING, LONG, type, d0, const unsigned char *, m, a0, ULONG, m_length, d1, unsigned char *, sigbuf, a1, ULONG, siglen, d2, RSA *, rsa, a2, \
  , AMISSL_BASE_NAME)

#define RSA_blinding_on(rsa, ctx) \
  LP2(0x3a50, int, RSA_blinding_on, RSA *, rsa, a0, BN_CTX *, ctx, a1, \
  , AMISSL_BASE_NAME)

#define RSA_blinding_off(rsa) \
  LP1NR(0x3a56, RSA_blinding_off, RSA *, rsa, a0, \
  , AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_type_1(to, tlen, f, fl) \
  LP4(0x3a5c, int, RSA_padding_add_PKCS1_type_1, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, \
  , AMISSL_BASE_NAME)

#define RSA_padding_check_PKCS1_type_1(to, tlen, f, fl, rsa_len) \
  LP5(0x3a62, int, RSA_padding_check_PKCS1_type_1, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, LONG, rsa_len, d2, \
  , AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_type_2(to, tlen, f, fl) \
  LP4(0x3a68, int, RSA_padding_add_PKCS1_type_2, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, \
  , AMISSL_BASE_NAME)

#define RSA_padding_check_PKCS1_type_2(to, tlen, f, fl, rsa_len) \
  LP5(0x3a6e, int, RSA_padding_check_PKCS1_type_2, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, LONG, rsa_len, d2, \
  , AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_OAEP(to, tlen, f, fl, p, pl) \
  LP6(0x3a74, int, RSA_padding_add_PKCS1_OAEP, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, const unsigned char *, p, a2, LONG, pl, d2, \
  , AMISSL_BASE_NAME)

#define RSA_padding_check_PKCS1_OAEP(to, tlen, f, fl, rsa_len, p, pl) \
  LP7(0x3a7a, int, RSA_padding_check_PKCS1_OAEP, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, LONG, rsa_len, d2, const unsigned char *, p, a2, LONG, pl, d3, \
  , AMISSL_BASE_NAME)

#define RSA_padding_add_SSLv23(to, tlen, f, fl) \
  LP4(0x3a80, int, RSA_padding_add_SSLv23, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, \
  , AMISSL_BASE_NAME)

#define RSA_padding_check_SSLv23(to, tlen, f, fl, rsa_len) \
  LP5(0x3a86, int, RSA_padding_check_SSLv23, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, LONG, rsa_len, d2, \
  , AMISSL_BASE_NAME)

#define RSA_padding_add_none(to, tlen, f, fl) \
  LP4(0x3a8c, int, RSA_padding_add_none, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, \
  , AMISSL_BASE_NAME)

#define RSA_padding_check_none(to, tlen, f, fl, rsa_len) \
  LP5(0x3a92, int, RSA_padding_check_none, unsigned char *, to, a0, LONG, tlen, d0, const unsigned char *, f, a1, LONG, fl, d1, LONG, rsa_len, d2, \
  , AMISSL_BASE_NAME)

#define RSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func) \
  LP5FP(0x3a98, int, RSA_get_ex_new_index, long, argl, d0, void *, argp, a0, __fpt, new_func, a1, void *, dup_func, a2, void *, free_func, a3, \
  , AMISSL_BASE_NAME, CRYPTO_EX_new * (*__fpt)())

#define RSA_set_ex_data(r, idx, arg) \
  LP3(0x3a9e, int, RSA_set_ex_data, RSA *, r, a0, LONG, idx, d0, void *, arg, a1, \
  , AMISSL_BASE_NAME)

#define RSA_get_ex_data(r, idx) \
  LP2(0x3aa4, void *, RSA_get_ex_data, const RSA *, r, a0, LONG, idx, d0, \
  , AMISSL_BASE_NAME)

#define RSAPublicKey_dup(rsa) \
  LP1(0x3aaa, RSA *, RSAPublicKey_dup, RSA *, rsa, a0, \
  , AMISSL_BASE_NAME)

#define RSAPrivateKey_dup(rsa) \
  LP1(0x3ab0, RSA *, RSAPrivateKey_dup, RSA *, rsa, a0, \
  , AMISSL_BASE_NAME)

#define ERR_load_RSA_strings() \
  LP0NR(0x3ab6, ERR_load_RSA_strings, \
  , AMISSL_BASE_NAME)

#define SHA_Init(c) \
  LP1(0x3abc, int, SHA_Init, SHA_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define SHA_Update(c, data, len) \
  LP3(0x3ac2, int, SHA_Update, SHA_CTX *, c, a0, const void *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define SHA_Final(md, c) \
  LP2(0x3ac8, int, SHA_Final, unsigned char *, md, a0, SHA_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define SHA(d, n, md) \
  LP3(0x3ace, unsigned char *, SHA, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define SHA_Transform(c, data) \
  LP2NR(0x3ad4, SHA_Transform, SHA_CTX *, c, a0, const unsigned char *, data, a1, \
  , AMISSL_BASE_NAME)

#define SHA1_Init(c) \
  LP1(0x3ada, int, SHA1_Init, SHA_CTX *, c, a0, \
  , AMISSL_BASE_NAME)

#define SHA1_Update(c, data, len) \
  LP3(0x3ae0, int, SHA1_Update, SHA_CTX *, c, a0, const void *, data, a1, unsigned long, len, d0, \
  , AMISSL_BASE_NAME)

#define SHA1_Final(md, c) \
  LP2(0x3ae6, int, SHA1_Final, unsigned char *, md, a0, SHA_CTX *, c, a1, \
  , AMISSL_BASE_NAME)

#define SHA1(d, n, md) \
  LP3(0x3aec, unsigned char *, SHA1, const unsigned char *, d, a0, unsigned long, n, d0, unsigned char *, md, a1, \
  , AMISSL_BASE_NAME)

#define SHA1_Transform(c, data) \
  LP2NR(0x3af2, SHA1_Transform, SHA_CTX *, c, a0, const unsigned char *, data, a1, \
  , AMISSL_BASE_NAME)

#define HMAC_CTX_set_flags(ctx, flags) \
  LP2NR(0x3b04, HMAC_CTX_set_flags, HMAC_CTX *, ctx, a0, unsigned long, flags, d0, \
  , AMISSL_BASE_NAME)

#define X509_check_ca(x) \
  LP1(0x3b0a, int, X509_check_ca, X509 *, x, a0, \
  , AMISSL_BASE_NAME)

#define PROXY_POLICY_new() \
  LP0(0x3b10, PROXY_POLICY *, PROXY_POLICY_new, \
  , AMISSL_BASE_NAME)

#define PROXY_POLICY_free(a) \
  LP1NR(0x3b16, PROXY_POLICY_free, PROXY_POLICY *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PROXY_POLICY(a, in, len) \
  LP3(0x3b1c, PROXY_POLICY *, d2i_PROXY_POLICY, PROXY_POLICY **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PROXY_POLICY(a, out) \
  LP2(0x3b22, int, i2d_PROXY_POLICY, PROXY_POLICY *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PROXY_POLICY_it() \
  LP0(0x3b28, const ASN1_ITEM *, PROXY_POLICY_it, \
  , AMISSL_BASE_NAME)

#define PROXY_CERT_INFO_EXTENSION_new() \
  LP0(0x3b2e, PROXY_CERT_INFO_EXTENSION *, PROXY_CERT_INFO_EXTENSION_new, \
  , AMISSL_BASE_NAME)

#define PROXY_CERT_INFO_EXTENSION_free(a) \
  LP1NR(0x3b34, PROXY_CERT_INFO_EXTENSION_free, PROXY_CERT_INFO_EXTENSION *, a, a0, \
  , AMISSL_BASE_NAME)

#define d2i_PROXY_CERT_INFO_EXTENSION(a, in, len) \
  LP3(0x3b3a, PROXY_CERT_INFO_EXTENSION *, d2i_PROXY_CERT_INFO_EXTENSION, PROXY_CERT_INFO_EXTENSION **, a, a0, unsigned char **, in, a1, long, len, d0, \
  , AMISSL_BASE_NAME)

#define i2d_PROXY_CERT_INFO_EXTENSION(a, out) \
  LP2(0x3b40, int, i2d_PROXY_CERT_INFO_EXTENSION, PROXY_CERT_INFO_EXTENSION *, a, a0, unsigned char **, out, a1, \
  , AMISSL_BASE_NAME)

#define PROXY_CERT_INFO_EXTENSION_it() \
  LP0(0x3b46, const ASN1_ITEM *, PROXY_CERT_INFO_EXTENSION_it, \
  , AMISSL_BASE_NAME)

#endif /*  _INLINE_AMISSL_H  */
