#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/RunPath.h"

extern void * const SoundManager_StdInit_UsedModules[];

Status SoundManager_InternalInitialise(void);
void SoundManager_InternalFinalise(void);
Status SoundManager_Initialise(void);
void SoundManager_Finalise(void);

#endif
