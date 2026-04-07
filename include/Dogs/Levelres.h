#ifndef LEVELRES_H
#define LEVELRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

#include "unk.h"

extern void * const LevelRes_StdInit_UsedModules[];

Status LevelRes_InternalInitialise();
void LevelRes_InternalFinalise();
Status LevelRes_Initialise();
void LevelRes_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
char * func_001E5810(void);
#ifdef __cplusplus
}
#endif

class Level_Description {

};

class Level_Resources : Resource<Level_Description> {

};

#endif

