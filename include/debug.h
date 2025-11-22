#ifndef DEBUG_H
#define DEBUG_H
// TODO: add standard c/cpp headers to include
extern "C" {
    #include "stdarg.h"
}



extern "C"
{
void Exit(int); // This doesn't belong here. It's from Sony's SDK.

void func_002D5958(char*,...);
void InterfaceError(char* name, int line);
void DDE_FatalError(char* message,...);
}

namespace Console{
	void Break();
};

#endif
