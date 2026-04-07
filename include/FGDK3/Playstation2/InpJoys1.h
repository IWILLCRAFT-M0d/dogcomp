#ifndef INPJOYS1_H
#define INPYJOYS1_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/TimSrv.h"
#include "FGDK3/Inpdev.h"
#include "FGDK3/ThrowCat.h"

extern void * const InputJoystick1_StdInit_UsedModules[];

Status InputJoystick1_InternalInitialise();
void InputJoystick1_InternalFinalise();
Status InputJoystick1_Initialise();
void InputJoystick1_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
    void func_002F9018(void);
    void func_002F93C0(void);
    void func_002F9400(void);
#ifdef __cplusplus
}
#endif

#endif
