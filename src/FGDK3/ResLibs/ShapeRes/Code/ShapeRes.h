#ifndef SHAPERES_H
#define SHAPERES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

extern void * const ShapeRes_StdInit_UsedModules[];

Status ShapeRes_InternalInitialise(void);
void ShapeRes_InternalFinalise(void);
Status ShapeRes_Initialise(void);
void ShapeRes_Finalise(void);

#endif
