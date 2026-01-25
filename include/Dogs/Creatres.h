#ifndef CREATRES_H
#define CREATRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

extern void * const Creatres_StdInit_UsedModules[];

Status Creatres_InternalInitialise(void);
void Creatres_InternalFinalise(void);
Status Creatres_Initialise(void);
void Creatres_Finalise(void);

#endif
