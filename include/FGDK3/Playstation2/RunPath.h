#ifndef RUNPATH_H
#define RUNPATH_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const RunPath_StdInit_UsedModules[];

Status RunPath_InternalInitialise();
void RunPath_InternalFinalise();
Status RunPath_Initialise();
void RunPath_Finalise();

char* RunPath_Get();

#endif
