#ifndef INPDEV_H
#define INPDEV_H

#include "FGDK3/Playstation2/Thread.h"

class InputDevice_Device {
    public:

        void func_002FBCA0();
        void func_002FBCA8();
        InputDevice_Device(int, int, int, int, int, int);
        virtual ~InputDevice_Device();
        virtual void func_002FBB70();
        virtual void func_002FBB78();
};

extern void * const InputDevice_StdInit_UsedModules[];

Status InputDevice_InternalInitialise();
void InputDevice_InternalFinalise();
Status InputDevice_Initialise();
void InputDevice_Finalise();


#endif
