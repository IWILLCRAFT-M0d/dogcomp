#ifndef TEXT_001B07A8_H
#define TEXT_001B07A8_H

//#include "Dogs/Game.h"

typedef struct {
    void* unk0;
    void* unk4;
    void* unk8;
    void* unkC;
    float unk10;
    int unk14;
} s_func_001B07A8;

typedef struct  {
    void* unk0;
    int unk4;
    int unk8;
    float unkC;
} s_func_001B0B90;

typedef struct {

} s_func_001B11E0;

#ifdef __cplusplus
extern "C" {
#endif

void func_001B08A0(s_func_001B07A8*, int);
s_func_001B07A8* func_001B07A8(s_func_001B07A8*, void*, void*, float);
s_func_001B0B90* func_001B0B90(s_func_001B0B90*, float);

#ifdef __cplusplus
}
#endif

#endif
