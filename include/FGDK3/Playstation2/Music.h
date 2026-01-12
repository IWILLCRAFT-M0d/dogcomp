#ifndef MUSIC_H
#define MUSIC_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/IOPMem.h"
//sifManager header goes here
//soundManager header goes here
//Music_ObjectService header goes here
#include "FGDK3/Playstation2/RunPath.h"
//StdMem header goes here

Status Music_InternalInitialise(void);
void Music_InternalFinalise(void);
Status Music_Initialise(void);
void Music_Finalise(void);

#endif

