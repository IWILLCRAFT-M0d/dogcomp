#ifndef DEBUG_H
#define DEBUG_H
// TODO: add standard c/cpp headers to include

#ifdef __cplusplus
extern "C" {
#endif

#include <stdarg.h>
#include <eekernel.h>

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
