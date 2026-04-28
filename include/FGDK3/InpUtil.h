#ifndef INPUTIL_H
#define INPUTIL_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const InputUtil_StdInit_UsedModules[];

Status InputUtil_InternalInitialise();
void InputUtil_InternalFinalise();
Status InputUtil_Initialise();
void InputUtil_Finalise();

#endif
