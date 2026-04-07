#ifndef LANDSCAPE_H
#define LANDSCAPE_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const Landscape_StdInit_UsedModules[];

Status Landscape_InternalInitialise();
void Landscape_InternalFinalise();
Status Landscape_Initialise();
void Landscape_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
void func_001DEF10(void);
void func_001E5008(void);

#ifdef __cplusplus
}
#endif

#endif
