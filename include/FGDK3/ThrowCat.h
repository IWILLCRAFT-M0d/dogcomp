#ifndef THROWCAT_H
#define THROWCAT_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const ThrowCatch_StdInit_UsedModules[];

Status ThrowCatch_InternalInitialise();
void ThrowCatch_InternalFinalise();
Status ThrowCatch_Initialise();
void ThrowCatch_Finalise();

void ThrowCatch_DefiniteThrow(Status);

#endif
