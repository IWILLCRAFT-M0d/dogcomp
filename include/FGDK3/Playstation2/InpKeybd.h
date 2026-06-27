#ifndef INPKEYBD_H
#define INPKEYBD_H

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Inpdev.h"

class InputKeyboard_Device : public InputDevice_Device {
    public:
        InputKeyboard_Device();
        //
        //
        virtual ~InputKeyboard_Device();
        //
        //
};

extern void * const InputKeyboard_StdInit_UsedModules[];

Status InputKeyboard_InternalInitialise();
void InputKeyboard_InternalFinalise();
Status InputKeyboard_Initialise();
void InputKeyboard_Finalise();

void InputKeyboard_SuspendThread();
void InputKeyboard_ResumeThread();

#endif
