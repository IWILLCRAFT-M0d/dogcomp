#ifndef GAMEUTIL_H
#define GAMEUTIL_H

#include "FGDK3/Playstation2/Thread.h"

// overlay header? goes here
#include "FGDK3/Inpevent.h"

Status Gameutil_InternalInitialise();
void Gameutil_InternalFinalise();
Status Gameutil_Initialise();
void Gameutil_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
int func_001DBD50(int);
void func_001DD518(void);
#ifdef __cplusplus
}
#endif

#endif
