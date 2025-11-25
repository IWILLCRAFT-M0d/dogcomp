#ifndef UNK_H
#define UNK_H

// Unknown data and functions.

typedef struct {
    int   unk0[17];
    int   unk44;
    int   unk48;
    int   unk4C;
    int   unk50;
    int   unk54;
    int   unk58;
    int   unk5C;
    int   unk60;
    int   unk64;
    float unk68;
    int   unk6C;
    int   unk70;
    int   unk74;
} s_func_002C31D0;

typedef struct {
    int unk0[471];
    int unk75C;
} s_func_002C8358;

typedef struct {
  /* 0x000 */ int   unk0[5];
  /* 0x014 */ bool  unk14;       // Fog enabled
  /* 0x018 */ int   unk18[4];   
  /* 0x028 */ int   unk28;       // Fog color
  /* 0x02C */ int   unk2C;       // Fog color
  /* 0x030 */ int   unk30;       // Fog color
  /* 0x034 */ float fogDistance; // Fog distance
  /* 0x038 */ bool  unk38;       // DOF
  /* 0x03C */ bool  unk3C;       // DOF
} s_0044EB68_sub;

typedef struct {
    int             unk0[120];
    s_0044EB68_sub* unk1E0;
    int             unk1E4[190];
    int             m_renderOrient;
    int             m_renderRadius;
    int             m_renderActorName;
    int             m_renderHoldingPoints;
    int             m_renderCarryHandles;
    int             m_renderHitSpheres;
    int             unk4F4[4];
    int             unk504;
} s_0044EB68;

// Replace struct for class `Game_Document` and move to a proper file.
extern s_0044EB68* TheGame;

#ifdef __cplusplus
extern "C" {
#endif

void func_001A0B90(int, char*, int);
void func_001A0D80(int, int, int); 


void func_001A12A0(char arg0, int arg1);
void func_001A12D8(char arg0, int arg1);
void func_001A1310(char arg0, int arg1);
void func_001A1348(char arg0, int arg1);
void func_001A1380(char arg0, int arg1);
void func_001A13B8(char arg0, int arg1);
void func_001A13F0(char arg0, int arg1);
void func_001A1428(char arg0, int arg1);
void func_001A1460(char arg0, int arg1);
void func_001A1498(char arg0, int arg1);
void func_001A14D0(char arg0, int arg1);
void func_001A1508(char arg0, int arg1);
void func_001A1540(char arg0, int arg1);
void func_001A1578(char arg0, int arg1);
void func_001A15B0(char arg0, int arg1);
void func_001A15E8(char arg0, int arg1);
void func_001A1620(char arg0, int arg1);
void func_001A1658(char arg0, int arg1);
void func_001A1690(char arg0, int arg1);
void func_001A16C8(char arg0, int arg1);
void func_001A1700(char arg0, int arg1);
void func_001A1738(char arg0, int arg1);
void func_001A1770(char arg0, int arg1);
void func_001A17A8(char arg0, int arg1);
void func_001A17E0(char arg0, int arg1);
void func_001A1818(char arg0, int arg1);
void func_001A1850(char arg0, int arg1);
void func_001A1888(char arg0, int arg1);
void func_001A18C0(char arg0, int arg1);
void func_001A18F8(char arg0, int arg1);
void func_001A1930(char arg0, int arg1);
void func_001A1968(char arg0, int arg1);
void func_001A19A0(char arg0, int arg1);
void func_001A19D8(char arg0, int arg1);
void func_001A1A10(char arg0, int arg1);
void func_001A1A48(char arg0, int arg1);
void func_001A1A80(char arg0, int arg1);
void func_001A1AB8(char arg0, int arg1);
void func_001A1AF0(char arg0, int arg1);
void func_001A1B28(char arg0, int arg1);
void func_001A1B60(char arg0, int arg1);


void func_001A1B98(char arg0, int arg1);
void func_001A1BC8(char arg0, int arg1);
void func_001A1BF8(char arg0, int arg1);
void func_001A1C28(char arg0, int arg1);
void func_001A1C58(char arg0, int arg1);
void func_001A1C88(char arg0, int arg1);
void func_001A1CB8(char arg0, int arg1);
void func_001A1CE8(char arg0, int arg1);
void func_001A1D18(char arg0, int arg1);
void func_001A1D48(char arg0, int arg1);
void func_001A1D78(char arg0, int arg1);
void func_001A1DA8(char arg0, int arg1);
void func_001A1DD8(char arg0, int arg1);
void func_001A1E08(char arg0, int arg1);
void func_001A1E38(char arg0, int arg1);
void func_001A1E68(char arg0, int arg1);
void func_001A1E98(char arg0, int arg1);




int func_002C8358(s_func_002C8358* arg0);
void func_002967C8(int* arg0, int arg1);
void func_00247B88(int*);
int func_002963F8();
int func_002964C0();
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

