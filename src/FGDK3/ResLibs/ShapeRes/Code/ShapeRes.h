#ifndef SHAPERES_H
#define SHAPERES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

#include "unk.h"

extern void * const ShapeRes_StdInit_UsedModules[];

Status ShapeRes_InternalInitialise();
void ShapeRes_InternalFinalise();
Status ShapeRes_Initialise();
void ShapeRes_Finalise();

class Shape_Resources /*: Resource<ShapeData>*/ {

};


#ifdef __cplusplus
extern "C" {
#endif
char* func_0031F148(void);
char* func_0031F158(void);
#ifdef __cplusplus
}
#endif

#endif
