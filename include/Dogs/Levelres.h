#ifndef LEVELRES_H
#define LEVELRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

extern void * const LevelRes_StdInit_UsedModules[];

Status LevelRes_InternalInitialise(void);
void LevelRes_InternalFinalise(void);
Status LevelRes_Initialise(void);
void LevelRes_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
char * func_001E5810(void);
#ifdef __cplusplus
}
#endif

#endif

