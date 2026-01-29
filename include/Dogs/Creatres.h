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

#ifdef __cplusplus
extern "C" {
#endif
char * func_001AD308(void);
char * func_001AD318(void);
#ifdef __cplusplus
}
#endif

#endif
