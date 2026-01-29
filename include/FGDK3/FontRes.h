#ifndef FONTRES_H
#define FONTRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

extern void * const FontRes_StdInit_UsedModules[];

Status FontRes_InternalInitialise(void);
void FontRes_InternalFinalise(void);
Status FontRes_Initialise(void);
void FontRes_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
char * func_002D6B88(void);
#ifdef __cplusplus
}
#endif

#endif
