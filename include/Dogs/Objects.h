#ifndef OBJECTS_H
#define OBJECTS_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const Objects_StdInit_UsedModules[];


Status Objects_InternalInitialise(void);
void Objects_InternalFinalise(void);
Status Objects_Initialise(void);
void Objects_Finalise(void);

#endif
