#ifndef INPJOY5_H
#define INPJOY5_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/Controller.h"

extern void * const InputJoy5_StdInit_UsedModules[];

Status InputJoy5_InternalInitialise(void);
void InputJoy5_InternalFinalise(void);
Status InputJoy5_Initialise(void);
void InputJoy5_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
    void func_002F94E0(void);
    void func_002F9520(void);

    Status func_002F94A8(void);
    Status func_002F94E8(void);
#ifdef __cplusplus
}
#endif

#endif
