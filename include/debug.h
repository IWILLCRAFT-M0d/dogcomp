#ifndef DEBUG_H
#define DEBUG_H
// TODO: add standard c/cpp headers to include
#include <stdarg.h>
#include <eekernel.h>

#ifdef __cplusplus
extern "C" {
#endif

void func_002D5958(const char*, va_list);
void InterfaceError(char* file, int line);
void DDE_FatalError(const char* message, ...);

#ifdef __cplusplus
}
#endif


#endif
