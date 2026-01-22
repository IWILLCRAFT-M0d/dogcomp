#ifndef INPDEV_H
#define INPDEV_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const InputDevice_StdInit_UsedModules[];

Status InputDevice_InternalInitialise(void);
void InputDevice_InternalFinalise(void);
Status InputDevice_Initialise(void);
void InputDevice_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
    void func_002FBCA0(void);
    void func_002FBCA8(void);
    void func_002FBB70(void);
    void func_002FBB78(void);
#ifdef __cplusplus
}
#endif

#endif
