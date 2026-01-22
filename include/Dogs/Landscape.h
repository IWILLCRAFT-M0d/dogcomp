#ifndef LANDSCAPE_H
#define LANDSCAPE_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const Landscape_StdInit_UsedModules[];

Status Landscape_InternalInitialise(void);
void Landscape_InternalFinalise(void);
Status Landscape_Initialise(void);
void Landscape_Finalise(void);
#endif
