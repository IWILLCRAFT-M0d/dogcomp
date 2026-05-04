#ifndef IOPMEM_H
#define IOPMEM_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const IOPMem_StdInit_UsedModules[];

Status IOPMem_InternalInitialise();
void IOPMem_InternalFinalise();
Status IOPMem_Initialise();
void IOPMem_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
void func_002967C8(void* arg0, int arg1);
#ifdef __cplusplus
}
#endif

#endif /* IOPMEM_H */
