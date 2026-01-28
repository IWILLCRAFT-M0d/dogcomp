#ifndef IOPMEM_H
#define IOPMEM_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/sifManager.h"

extern void * const IOPMem_StdInit_UsedModules[];

Status IOPMem_InternalInitialise(void);
void IOPMem_InternalFinalise(void);
Status IOPMem_Initialise(void);
void IOPMem_Finalise(void);

#endif
