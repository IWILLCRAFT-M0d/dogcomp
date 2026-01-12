#ifndef INPDEV_H
#define INPDEV_H

#include "FGDK3/Playstation2/Thread.h"

Status InputDevice_InternalInitialise(void);
void InputDevice_InternalFinalise(void);
Status InputDevice_Initialise(void);
void InputDevice_Finalise(void);

#endif
