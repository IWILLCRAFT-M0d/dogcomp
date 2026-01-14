#ifndef INPMOUSE_H
#define INPMOUSE_H

#include "FGDK3/Playstation2/Thread.h"

//sifmanager header goes here
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Inpdev.h"
#include "FGDK3/Playstation2/InpKeybd.h"

Status InputMouse_InternalInitialise(void);
void InputMouse_InternalFinalise(void);

#ifdef __cplusplus
extern "C" {
#endif
    void func_002F8760(void);
    void func_002F8788(void);

#ifdef __cplusplus
}
#endif

#endif
