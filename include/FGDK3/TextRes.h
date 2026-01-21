#ifndef TEXTRES_H
#define TEXTRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

Status TextRes_InternalInitialise(void);
void TextRes_InternalFinalise(void);
Status TextRes_Initialise(void);
void TextRes_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
void func_0026C4E0(void*, void*);
#ifdef __cplusplus
}
#endif

#endif
