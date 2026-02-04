#ifndef UNK_H
#define UNK_H

#include <stdlib.h>
#include "FGDK3/Playstation2/Thread.h"
// Unknown data and functions.

typedef struct {
    int unk0;
    char unk4[4];
    void* unk8;
} s_func_00187490;


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

struct Resource_Generic {
    int m_unk0;
    int m_unk4;
    int m_unk8;
    StdInit_ClientBase m_unkC;

    Resource_Generic();
    virtual ~Resource_Generic();
};

struct Mien {
    int unk0;
    int unk4;
    int unk8;
    float unkC;
    int unk10;
    int unk14;       // 0x14 - Missing field
    int unk18;
    int unk1C;
    float unk20;
    int unk24;       // 0x24 - Missing field

    Mien();
    virtual ~Mien();
};

// Replace struct for class `Game_Document` and move to a proper file.
extern s_0044EB68* TheGame;

class Game_Document {
    public:
        char m_unk[1450]; // temporary
    Game_Document(float, float);
    virtual ~Game_Document();

};

class GameShell {
    public:
        int unk4;
        float m_fps;
        float m_gamespeed;
        int unk1C;
    GameShell(float, float);
    virtual ~GameShell();
};

class StdAllocator {
    public:
        void* Alloc(size_t nbytes);
        void Free(void* ptr);
        void* MemAlign(size_t alignment, size_t size);
};

class GE_RenderHardware {
    public:
        float m_unk0;
        int m_unk4;
    GE_RenderHardware();
    virtual ~GE_RenderHardware();
    virtual void func_002CA950();
};

class GE_PrimCache {
    public:
        char m_unk0;
        char m_unk1;
        short m_unk2;
        int m_unk4;
        int m_unk8;
        int m_unkC;
        int m_unk10;
        int m_unk14;
    GE_PrimCache(char, short, int, int, int, void*, int);
    virtual ~GE_PrimCache();
};

class GE_PrimVertices {
    public:
        int m_unk0;
        int m_unk4;
        short m_unk8;
        short m_unkA;
        int m_unkC;


    GE_PrimVertices(int, int, int);
    virtual ~GE_PrimVertices();
};

class GE_PrimIndices {
    public:
        short m_unk0;
        char m_unk2;
        char m_unk3;
        int m_unk4;
        int m_unk8;
    GE_PrimIndices(int, char, int);
    virtual ~GE_PrimIndices();
};



#ifdef __cplusplus
extern "C" {
#endif
void func_00187490(s_func_00187490* arg0, void* dest, void* arg2, size_t arg3);

void func_001ACFC8(void);
//void func_001AD180(void);
void func_001AD560(void);
void func_001C8120(void);
void func_001D4650(void);
void func_001D6A10(void);
void func_001DA1B8(void);
void func_001DD518(void);
void func_001DEF10(void);

int func_002C8358(s_func_002C8358* arg0);

void func_002967C8(void* arg0, int arg1);
void func_00247B88(int*);
int func_002963F8();
int func_002964C0();

//void func_003481C8(int);
s_func_002C31D0* func_002C31D0(s_func_002C31D0* arg0);
void func_002C3D80();
void func_002C57E8(void);
void func_002C6480(void);
void func_002C6488(void);
void func_002C6490(void);
void func_002C8360(void);
int func_001D95B0(void);
int func_001D9A50(void);
int func_001D9B20(void);
int func_001D9BF0(void);
int func_001D9FB0(void);

// text_001E14F8
void func_001E5008(void);
void func_001ED248(void);
void func_001F1FF8(void);
void func_001F8628(void);
int func_001FC7E8(void);
int func_001E72D0(void);
void func_00222EC8(void);
void func_00222F08(void);
void func_00222F48(void);
void func_00222F88(void);
void func_00222FF8(void);
void func_00223038(void);
void func_00223078(void);
void func_002230F0(void);
void func_00223130(void);
void func_002231A0(void);
void func_002231E0(void);
void func_00223220(void);
void func_00223298(void);
void func_002232D8(void);
void func_00223318(void);
void func_00223358(void);
void func_002233C8(void);
void func_00223408(void);
void func_00223448(void);
void func_00223488(void);
void func_002234F8(void);
void func_00223538(void);
void func_00223578(void);
void func_002235B8(void);
void func_00223628(void);
void func_00223698(void);
void func_002236D8(void);
void func_00223748(void);
void func_002237B8(void);
void func_00223828(void);
void func_00223868(void);
void func_002238A8(void);
void func_002238E8(void);
void func_00223958(void);
void func_002239C8(void);
void func_00223A08(void);
void func_00223A48(void);
void func_00223A88(void);
void func_00223B00(void);
void func_00223B78(void);
void func_00223CA0(void);
void func_00223D10(void);
void func_00223D50(void);
void func_00223D90(void);
void func_00223E00(void);
void func_00223E70(void);
void func_00223EE0(void);
void func_00223F20(void);
void func_00223F90(void);
void func_00223FD0(void);
void func_00224010(void);
void func_00224050(void);
void func_00224090(void);
void func_002240D0(void);
void func_00224110(void);
void func_00224150(void);
void func_002241D0(void);

void func_002FBEE8(void);

// text_0026C5C8
void func_0026F8B8(void);
float func_002704F8(void);
void func_002717B8(void);
void func_00271EF8(void);
int func_00275520(void);
void func_002757E8(void);
void func_00275AF8(void);
int func_00275B00(void);
void func_00275B08(void);
void func_00275E88(void);
int func_00275F98(void);
int func_00275FA0(void);
void func_00275FA8(void);
void func_00275FB0(void);
void func_0027C4E8(void);

// text_00150120

int func_00168B60(void);
void func_00168B68(void);
void func_00168B70(void);
void func_00168B78(void);
void func_00168B80(void);
int func_00168C50(void);
int func_00168C58(void);

int func_00188400(void);
void func_00188408(void);
int func_00188450(void);
int func_00188458(void);
int func_00188460(void);
int func_00188468(void);
int func_00188470(void);
int func_00188478(void);
int func_00188480(void);
int func_00188488(void);
float func_00188490(void);
int func_001884E8(void);
void func_0018B978(void);
int func_0018D840(void);
int func_0018D848(void);
int func_0018D850(void);
int func_0018D858(void);
int func_0018D860(void);

// text_00288B30
int func_002C6498(void);

// text_0024BED8
void func_00262F70(void);
void func_00262F78(void);
void func_00262F80(void);
void func_00262F88(void);
void func_00262F90(void);
int func_00263640(void);

// text_001AB700
int func_001ACFC0(void);

//void func_00247D28(void*);

void func_00139048(void);
int func_00274B00(char* name);
int func_00275288(int arg0, int arg1, int ovlType, int arg3);
void func_002757F0(void);
char* func_002D7738(int);
void func_002D7980(void);
Status func_002FBEB0(void);
int func_0030ACA8(char*, int);
int func_0030ACD0(char*, unsigned int);

void func_002D5D58(void);

Status func_001D5E90(void);
Status func_0026CFD0(unsigned int, char*, int);
Status func_0026CFF8(int, char*,char* ,int);

int func_001DBD50(int);
#ifdef __cplusplus
}
#endif

void IOPMem_Finalise(void);

Status SimObj_InternalInitialise(void);
void SimObj_InternalFinalise(void);
Status SimObj_Initialise(void);
void SimObj_Finalise(void);

Status StdMem_Initialise(void);

#endif

