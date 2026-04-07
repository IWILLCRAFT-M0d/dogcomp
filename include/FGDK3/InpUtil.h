#ifndef INPUTIL_H
#define INPUTIL_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Inpevent.h"
#include "FGDK3/Playstation2/InpKeybd.h"
#include "FGDK3/Playstation2/InpMouse.h"
// other headers go here
#include "FGDK3/Playstation2/InpJoys1.h"
#include "FGDK3/Playstation2/InpJoy5.h"
// other headers go here

extern void * const InputUtil_StdInit_UsedModules[];

Status InputUtil_InternalInitialise();
void InputUtil_InternalFinalise();
Status InputUtil_Initialise();
void InputUtil_Finalise();

#endif
