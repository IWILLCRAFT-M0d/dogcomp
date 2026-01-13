#ifndef INPKEYBD_H
#define INPKEYBD_H

#include <ee/eekernel.h>

#include "FGDK3/Playstation2/Thread.h"

//sifManager header goes here
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Inpdev.h"

Status InputKeyboard_InternalInitialise(void);

#ifdef __cplusplus
extern "C" {
#endif
    void func_002F8E40(void);
    void func_002F8E68(void);
#ifdef __cplusplus
}
#endif

#endif
