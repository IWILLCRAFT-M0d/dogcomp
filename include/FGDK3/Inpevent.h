#ifndef INPEVENT_H
#define INPEVENT_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/TimSrv.h"
#include "FGDK3/Inpdev.h"
#include "FGDK3/ThrowCat.h"

extern void * const InputEvent_StdInit_UsedModules[];

Status InputEvent_InternalInitialise(void);
void InputEvent_InternalFinalise(void);
Status InputEvent_Initialise(void);
void InputEvent_Finalise(void);

#endif
