#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const SoundManager_StdInit_UsedModules[];

Status SoundManager_InternalInitialise();
void SoundManager_InternalFinalise();
Status SoundManager_Initialise();
void SoundManager_Finalise();

#endif
