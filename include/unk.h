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
} s_0044EB68_1E0;

typedef struct {
    int             unk0[120];
    s_0044EB68_1E0* unk1E0;
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

/*struct Resource_Generic {
    int unk0;
    int unk4;
    int unk8;
    void* unkC;

    Resource_Generic();
    virtual ~Resource_Generic();
};

struct Texture_Resources : public Resource_Generic {

    int unk14;
    Texture_Resources();
    virtual ~Texture_Resources();
};*/

// Replace struct for class `Game_Document` and move to a proper file.
extern s_0044EB68* TheGame;

#ifdef __cplusplus
extern "C" {
#endif


void func_001ACFC8(void);
void func_001AD180(void);
void func_001AD560(void);
void func_001C8120(void);
void func_001D4650(void);
void func_001D6A10(void);
void func_001DA1B8(void);
void func_001DA3E8(void);
void func_001DD518(void);
void func_001DEF10(void);

int func_002C8358(s_func_002C8358* arg0);

void func_002967C8(int* arg0, int arg1);
void func_00247B88(int*);
int func_002963F8();
int func_002964C0();
void IOPMem_Finalise();
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

