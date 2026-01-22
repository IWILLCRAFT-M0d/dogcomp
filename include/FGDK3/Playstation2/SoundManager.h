#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include "FGDK3/Playstation2/Thread.h"

Status SoundManager_InternalInitialise(void);
void SoundManager_InternalFinalise(void);
Status SoundManager_Initialise(void);
void SoundManager_Finalise(void);

#endif
