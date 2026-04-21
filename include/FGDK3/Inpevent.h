#ifndef INPEVENT_H
#define INPEVENT_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/TimSrv.h"
#include "FGDK3/Inpdev.h"
#include "FGDK3/ThrowCat.h"

extern void * const InputEvent_StdInit_UsedModules[];

Status InputEvent_InternalInitialise();
void InputEvent_InternalFinalise();
Status InputEvent_Initialise();
void InputEvent_Finalise();

class InputDevice_ChangeCatcher {

};

namespace InputEvent_ValueInstance {
    class LocalTimer : public TimSrv_Timer {
        public:
            // virtual ? 002fb768
    };
};

class InputEvent_Device : public InputDevice_ChangeCatcher {

};



#endif
