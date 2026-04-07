#ifndef INPMOUSE_H
#define INPMOUSE_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Inpdev.h"
#include "FGDK3/Playstation2/InpKeybd.h"

class InputMouse_Device : public InputDevice_Device {
    public:
        int unk28;
        InputMouse_Device();
        virtual ~InputMouse_Device();
};

extern void * const InputMouse_StdInit_UsedModules[];

Status InputMouse_InternalInitialise();
void InputMouse_InternalFinalise();
Status InputMouse_Initialise();
void InputMouse_Finalise();

void InputMouse_SuspendThread();
void InputMouse_ResumeThread();


#endif
