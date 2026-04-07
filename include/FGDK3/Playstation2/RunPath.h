#ifndef RUNPATH_H
#define RUNPATH_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/File_CD.h"

extern void * const RunPath_StdInit_UsedModules[];

Status RunPath_InternalInitialise();
void RunPath_InternalFinalise();
Status RunPath_Initialise();
void RunPath_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
char * func_00272FF0(void);

#ifdef __cplusplus
}
#endif

#endif
