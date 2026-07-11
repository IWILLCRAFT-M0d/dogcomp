#ifndef DEBUG_H
#define DEBUG_H
// TODO: add standard c/cpp headers to include
#include <stdarg.h>
#include <eekernel.h>

#ifdef __cplusplus
extern "C" {
#endif
// FIXME: These functions might need to be C++ instead of C
void func_002D5958(const char*, va_list);

/**
 * @note Name taken from RCT3 symbols.
 */
void InterfaceError(char* file, int line);

/**
 * @note Name taken from RCT3 symbols.
 */
void DDE_FatalError(const char* message, ...);

#ifdef __cplusplus
}
#endif


#endif
