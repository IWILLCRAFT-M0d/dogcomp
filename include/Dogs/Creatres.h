#ifndef CREATRES_H
#define CREATRES_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const Creatres_StdInit_UsedModules[];

Status Creatres_InternalInitialise();
void Creatres_InternalFinalise();
Status Creatres_Initialise();
void Creatres_Finalise();

class Creature_Resources /**/ {

};

#ifdef __cplusplus
extern "C" {
#endif
char * func_001AD308(void);
char * func_001AD318(void);
#ifdef __cplusplus
}
#endif

#endif
