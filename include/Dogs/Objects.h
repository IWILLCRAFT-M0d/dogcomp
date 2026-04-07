#ifndef OBJECTS_H
#define OBJECTS_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const Objects_StdInit_UsedModules[];


Status Objects_InternalInitialise();
void Objects_InternalFinalise();
Status Objects_Initialise();
void Objects_Finalise();

#endif
