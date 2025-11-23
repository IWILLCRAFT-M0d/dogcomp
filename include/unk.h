#ifndef UNK_H
#define UNK_H

// Unknown data and functions.

typedef struct {
    int unk0[17];
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    int unk64;
    float unk68;
    int unk6C;
    int unk70;
    int unk74;
} s_func_002C31D0;

typedef struct {
    int unk0[471];
    int unk75C;
} s_func_002C8358;


typedef struct {
    int unk0[321];
    int unk504;
} s_0044EB68;

extern s_0044EB68* D_0044EB68;

#ifdef __cplusplus
extern "C" {
#endif

void func_001A0B90(int, char*, int);
void func_001A12A0(char arg0, int arg1);
int func_002C8358(s_func_002C8358* arg0);
void func_002967C8(int* arg0, int arg1);
void func_00247B88(int*);
void func_002966F0();
void func_003481C8(int);
s_func_002C31D0* func_002C31D0(s_func_002C31D0* arg0);
void func_002C3D80();
void func_002C57E8(void);
void func_002C6480(void);
void func_002C6488(void);
void func_002C6490(void);
void func_002C8360(void);

#ifdef __cplusplus
}
#endif


#endif
