#ifndef OBJECTS_H
#define OBJECTS_H

#include "FGDK3/Playstation2/Thread.h"
#include "SimObj.h"

extern void * const Objects_StdInit_UsedModules[];


Status Objects_InternalInitialise();
void Objects_InternalFinalise();
Status Objects_Initialise();
void Objects_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
void func_001EB100(SimObj_Universe* arg0, short* arg1, void* arg2, void* arg3, void* arg4, short arg5, void* arg6, short arg7); // unfinished
#ifdef __cplusplus
}
#endif

#endif /* OBJECTS_H */
