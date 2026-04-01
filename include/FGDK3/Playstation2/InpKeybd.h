#ifndef INPKEYBD_H
#define INPKEYBD_H

#include <ee/eekernel.h>

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Inpdev.h"

class InputKeyboard_Device : public InputDevice_Device {
    public:
        InputKeyboard_Device();
        virtual ~InputKeyboard_Device();
};

extern void * const InputKeyboard_StdInit_UsedModules[];

Status InputKeyboard_InternalInitialise(void);
void InputKeyboard_InternalFinalise(void);
Status InputKeyboard_Initialise(void);
void InputKeyboard_Finalise(void);

void InputKeyboard_SuspendThread(void);
void InputKeyboard_ResumeThread(void);

#endif
