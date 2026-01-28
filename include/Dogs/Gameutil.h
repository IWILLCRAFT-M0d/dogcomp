#ifndef GAMEUTIL_H
#define GAMEUTIL_H

#include "FGDK3/Playstation2/Thread.h"

// overlay header? goes here
#include "FGDK3/Inpevent.h"

Status Gameutil_InternalInitialise(void);
void Gameutil_InternalFinalise(void);
Status Gameutil_Initialise(void);
void Gameutil_Finalise(void);

#endif
