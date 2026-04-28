#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Inpdev.h"


typedef struct {
	int unk0;
	int unk4;
	int unk8;
	char unkC;
	int unk10[2];
	int unk18;
} s_func_002FC270;


class Controller_Device /*: public InputDevice_Device*/ {
	public:

};

#ifdef __cplusplus
extern "C" {
#endif
s_func_002FC270* func_002FC270(s_func_002FC270* arg0);
#ifdef __cplusplus
}
#endif

extern void * const Controller_StdInit_UsedModules[];

Status Controller_InternalInitialise();
void Controller_InternalFinalise();
Status Controller_Initialise();
void Controller_Finalise();

void Controller_SuspendThread();
void Controller_ResumeThread();

#endif
