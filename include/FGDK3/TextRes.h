#ifndef TEXTRES_H
#define TEXTRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

//#include "unk.h"
#include "resource_unk.h"

extern void * const TextRes_StdInit_UsedModules[];

Status TextRes_InternalInitialise();
void TextRes_InternalFinalise();
Status TextRes_Initialise();
void TextRes_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
void func_0026C4E0(void*, char*);
#ifdef __cplusplus
}
#endif

class Text_Resources : public Resource<char> {

};

#endif
