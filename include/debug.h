// TODO: add standard c/cpp headers to include
extern "C" {
    #include "stdarg.h"
}
#ifndef DEBUG_H
#define DEBUG_H


// This doesn't belong here
extern "C"
{
void Exit(int);
}

namespace Console{
	void Break();
};

#endif

extern "C" void func_002D5958(char*,...);
void InterfaceError(char* name, int line);
void DDE_FatalError(char* message,...);
