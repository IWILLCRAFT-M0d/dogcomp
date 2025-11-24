#ifndef DEBUG_H
#define DEBUG_H
// TODO: add standard c/cpp headers to include

#ifdef __cplusplus
extern "C" {
#endif

#include <ee_gcc/gcc-lib/stdarg.h>

void Exit(int); // This doesn't belong here. It's from Sony's SDK.
void func_002963D0(void);
void func_002D5958(char*,...);
void InterfaceError(char* name, int line);
void DDE_FatalError(char* message,...);

#ifdef __cplusplus
}
#endif


namespace Console{
	void Break();
    void Parse();
    void Patch();
    int RenderActorName();
    int RenderHoldingPoints();
    int RenderCarryHandles();
    void Quit();
};

#endif
