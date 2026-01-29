#ifndef RELRECV_H
#define RELRECV_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

extern void * const RelRecv_StdInit_UsedModules[];

Status RelRecv_InternalInitialise(void);
void RelRecv_InternalFinalise(void);
Status RelRecv_Initialise(void);
void RelRecv_Finalise(void);

#endif
