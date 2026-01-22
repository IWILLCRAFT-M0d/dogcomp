#ifndef THROWCAT_H
#define THROWCAT_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const ThrowCatch_StdInit_UsedModules[];

Status ThrowCatch_InternalInitialise(void);
void ThrowCatch_InternalFinalise(void);
Status ThrowCatch_Initialise(void);
void ThrowCatch_Finalise(void);

#endif
