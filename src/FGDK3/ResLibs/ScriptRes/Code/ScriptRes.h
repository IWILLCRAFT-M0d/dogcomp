#ifndef SCRIPTRES_H
#define SCRIPTRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

extern void * const ScriptRes_StdInit_UsedModules[];

Status ScriptRes_InternalInitialise(void);
void ScriptRes_InternalFinalise(void);
Status ScriptRes_Initialise(void);
void ScriptRes_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
void func_0031CB30(void);
int func_0031CB68(int, int);
void func_0031E8C0(void);
int func_0031E8C8(void);
int func_0031E8D8(void);
int func_0031E8E0(void);
void func_0031E8E8(void);
int func_0031E910(void);
int func_0031E918(void);
int func_0031E920(void);
void func_0031E928(void);
int func_0031E930(void);
int func_0031E938(void);
float func_0031E940(void);
void func_0031E950(void);
int func_0031E958(void);
int func_0031E960(void);
int func_0031E968(void);
int func_0031E970(void);
int func_0031E978(void);
int func_0031E980(void);
int func_0031E988(void);
int func_0031E990(void);
int func_0031E998(void);
int func_0031E9A0(void);
void func_0031E9A8(void);
void func_0031E9B0(void);
void func_0031E9B8(void);
void func_0031E9C0(void);
void func_0031E9C8(void);
int func_0031E9D0(void);
int func_0031E9D8(void);
int func_0031E9E0(void);
int func_0031E9E8(void);
int func_0031E9F0(void);
int func_0031E9F8(void);
void func_0031EA00(void);
int func_0031EA08(void);
void func_0031EA10(void);
void func_0031EA18(void);
void func_0031EA20(void);

void func_0031EA28(void);
void func_0031EA30(void);
void func_0031EA38(void);
int func_0031EA40(void);
void func_0031EA48(void);
#ifdef __cplusplus
}
#endif

class ScriptHeader {
};

#endif
