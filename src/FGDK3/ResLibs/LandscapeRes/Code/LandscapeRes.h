#ifndef LANDSCAPERES_H
#define LANDSCAPERES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

extern void * const LandscapeRes_StdInit_UsedModules[];

Status LandscapeRes_InternalInitialise(void);
void LandscapeRes_InternalFinalise(void);
Status LandscapeRes_Initialise(void);
void LandscapeRes_Finalise(void);

#endif

