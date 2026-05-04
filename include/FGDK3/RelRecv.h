#ifndef RELRECV_H
#define RELRECV_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const RelRecv_StdInit_UsedModules[];

Status RelRecv_InternalInitialise();
void RelRecv_InternalFinalise();
Status RelRecv_Initialise();
void RelRecv_Finalise();

#endif
