#ifndef SOUNDRES_H
#define SOUNDRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"
#include "FGDK3/Playstation2/Sound.h"

extern void * const SoundRes_StdInit_UsedModules[];

Status SoundRes_InternalInitialise(void);
void SoundRes_InternalFinalise(void);
Status SoundRes_Initialise(void);
void SoundRes_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
char * func_0024BA70(void);
char * func_0024BE68(void);
#ifdef __cplusplus
}
#endif

#endif
