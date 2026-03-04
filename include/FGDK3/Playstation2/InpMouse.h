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

Status InputMouse_InternalInitialise(void);
void InputMouse_InternalFinalise(void);
Status InputMouse_Initialise(void);
void InputMouse_Finalise(void);



#ifdef __cplusplus
extern "C" {
#endif
    void func_002F8760(void);
    void func_002F8788(void);

#ifdef __cplusplus
}
#endif

#endif
