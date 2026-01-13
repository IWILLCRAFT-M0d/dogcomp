#ifndef INPEVENT_H
#define INPEVENT_H

#include "FGDK3/Playstation2/Thread.h"

//timsrv header goes here
#include "FGDK3/Inpdev.h"
#include "FGDK3/ThrowCat.h"

Status InputEvent_InternalInitialise(void);
void InputEvent_InternalFinalise(void);

#endif
