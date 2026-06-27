#ifndef INPEVENT_H
#define INPEVENT_H

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/TimSrv.h"

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
    public:
        // virtual ? func_002FA810
};



#endif
