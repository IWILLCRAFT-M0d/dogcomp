#ifndef IOPMEM_H
#define IOPMEM_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const IOPMem_StdInit_UsedModules[];

Status IOPMem_InternalInitialise();
void IOPMem_InternalFinalise();
Status IOPMem_Initialise();
void IOPMem_Finalise();

#endif
