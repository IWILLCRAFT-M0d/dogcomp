#ifndef LANDSCAPERES_H
#define LANDSCAPERES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

extern void * const LandscapeRes_StdInit_UsedModules[];

Status LandscapeRes_InternalInitialise();
void LandscapeRes_InternalFinalise();
Status LandscapeRes_Initialise();
void LandscapeRes_Finalise();

class DogsTaleLand_Resources /* : public Resource<Landscape_Land> */ {

};

#ifdef __cplusplus
extern "C" {
#endif
char* func_0031F408(void);
char* func_0031F418(void);
#ifdef __cplusplus
}
#endif

#endif

