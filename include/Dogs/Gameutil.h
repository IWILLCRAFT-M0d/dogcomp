#ifndef GAMEUTIL_H
#define GAMEUTIL_H

#include "FGDK3/Playstation2/Thread.h"

// overlay header? goes here
#include "FGDK3/Inpevent.h"

Status Gameutil_InternalInitialise(void);
void Gameutil_InternalFinalise(void);
Status Gameutil_Initialise(void);
void Gameutil_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
int func_001DBD50(int);
void func_001DD518(void);
#ifdef __cplusplus
}
#endif

#endif
