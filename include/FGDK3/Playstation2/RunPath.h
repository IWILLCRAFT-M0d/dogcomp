#ifndef RUNPATH_H
#define RUNPATH_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const RunPath_StdInit_UsedModules[];

Status RunPath_InternalInitialise();
void RunPath_InternalFinalise();
Status RunPath_Initialise();
void RunPath_Finalise();

/**
 * @note Name taken from RCT3 symbols.
 */
const char* RunPath_Get();

#endif
