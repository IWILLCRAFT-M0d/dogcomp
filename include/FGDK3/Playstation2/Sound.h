#ifndef PS2SOUND_H
#define PS2SOUND_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/SoundManager.h"
#include "FGDK3/Playstation2/Music.h"

extern void * const Sound_StdInit_UsedModules[];

Status Sound_InternalInitialise(void);
void Sound_InternalFinalise(void);
Status Sound_Initialise(void);
void Sound_Finalise(void);

#endif
