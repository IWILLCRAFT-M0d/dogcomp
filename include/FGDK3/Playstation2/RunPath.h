#ifndef RUNPATH_H
#define RUNPATH_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/File_CD.h"

extern void * const RunPath_StdInit_UsedModules[];

Status RunPath_InternalInitialise(void);
void RunPath_InternalFinalise(void);
Status RunPath_Initialise(void);
void RunPath_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
char * func_00272FF0(void);

#ifdef __cplusplus
}
#endif

#endif
