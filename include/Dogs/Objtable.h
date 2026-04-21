#ifndef OBJTABLE_H
#define OBJTABLE_H

#include "FGDK3/Playstation2/Thread.h"

typedef struct {
    int unk0;
    int unk4;
} s_func_001EC630;

typedef struct {
    char unk[0x10];
    int unk10;
} s_D_004533D4;

extern void * const Objtable_StdInit_UsedModules[];

Status Objtable_InternalInitialise();
void Objtable_InternalFinalise();
Status Objtable_Initialise();
void Objtable_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
s_func_001EC630* func_001EC630(s_func_001EC630*);
void func_001EC8D8();
#ifdef __cplusplus
}
#endif

#endif
