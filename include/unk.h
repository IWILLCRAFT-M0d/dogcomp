#ifndef UNK_H
#define UNK_H

#include <stdlib.h>
#include "FGDK3/Playstation2/Thread.h"

#include "Dogs/SimObj.h"
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
} s_0044EB68; // Game_Document

/*
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

template <typename T> struct Resource : Resource_Generic {
    virtual int bar();
};

class ShapeData {

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


struct ShapeParams {
    int unk0;
    int unk1;
    ShapeParams() {
        unk0 = 0;
        unk1 = 1;
    }
};
struct ShapeParams_Dynamic : public ShapeParams {
    ShapeParams_Dynamic();
    ShapeParams_Dynamic(int);
    virtual ~ShapeParams_Dynamic();
};



class ShapeInstance {
    public:

    ShapeInstance();
    virtual ~ShapeInstance();
};

struct GE_DMAPktRc1i69 {
    GE_DMAPktRc1i69();
    virtual ~GE_DMAPktRc1i69();
};

struct Action {
    int unk0;
    Action();
    virtual ~Action();
    virtual void func_002462a8() = 0;
};

struct Resource_LayoutUnit {
    int unk0;
    void* unk4;
    Resource_LayoutUnit(void*);
    virtual ~Resource_LayoutUnit();
};
/*
struct Resource_LayoutOverlay : public Resource_LayoutUnit {
    int unkC;
    void* unk10;

}*/


struct Resource_LayoutGroup : public Resource_LayoutUnit {
    int unkC;
    void* unk10;
    Resource_LayoutGroup(void*, int, void*);
    virtual ~Resource_LayoutGroup();
};
/*
class FileSystemDisc {
};

class FileSystemDisc_CD : public FileSystemDisc {
};

class FileSystemDiscRoot : public FileSystemDisc {
};
*/

/*
class StorageDevice {
};

class StorageDevice_MemCard : public StorageDevice {
    public:
        StorageDevice_MemCard(int card);
};
*/

/*
class Widget_Desktop : public Widget_Border {
};
*/

class StorageDevice {

};

namespace File {
    struct Access {
        int unk0;
        Access(void);
        virtual ~Access();
    };
};

namespace FileFind {
    class Access {
        public:
            Access(void);
            virtual ~Access();
    };
};

class File_FileDescriptor : public File::Access {
    public:
        int m_fd;
        int unkC;
        File_FileDescriptor(int fd);
        virtual ~File_FileDescriptor();
        void func_00314890(void);
        int func_003148E8(void);
};

// class GE_TextureStylePkt {
//     public:
//         int unk4;
//         char unk5;
//         short unk6;
//         int unk8;
//         int unk10;
//         GE_TextureStylePkt(void);
//         virtual ~GE_TextureStylePkt();
// };

class GE_PS2PrimVertices : public GE_PrimVertices {
    public:
        int unk18;
        int unk34;
        GE_PS2PrimVertices(void);

        virtual ~GE_PS2PrimVertices();
        void func_002A5880(void);
};

#ifdef __cplusplus
extern "C" {
#endif

void func_00187490(s_func_00187490* arg0, void* dest, int arg2, size_t arg3);
void func_0018B978(void);
// bookmetaphor
void func_00196418(void);
void func_0019E378(void);
int func_0019E3A8(void);
int func_0019E3B0(void);

//void func_001AD180(void);
void func_001AD560(void);
void func_001C8120(void);
void func_001D4650(void);
void func_001D6A10(void);


void func_001DEF10(void);
void func_002C0340(void);
int func_002C8358(s_func_002C8358* arg0);

void func_002967C8(void* arg0, int arg1);
void func_00247B88(int*);
unsigned int func_002684E8(unsigned int, unsigned int);
unsigned int func_002684F8(unsigned int, unsigned int);
Status func_0026CF60(void);
Status func_0026CF98(void);
int func_0026D120(void);
int func_002963F8();
int func_002964C0();
int func_002A48A8(void);
int func_002A48B0(void);
void func_002BF2D0(void);
//void func_003481C8(int);
s_func_002C31D0* func_002C31D0(s_func_002C31D0* arg0);
void func_002C3D80();
void func_002C57E8(void);
void func_002C6480(void);
void func_002C6488(void);
void func_002C6490(void);
void func_002C8360(void);
void func_002C9408(void);
void func_002C9410(void);
int func_002C9F08(void);
int func_002C9F10(void);
void func_002C9FB0(void);
void func_002C9FB8(void);
int func_002C9FC0(void);
int func_002CA958(void);


// text_001E14F8
void func_001E5008(void);

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
void func_0022BB88(void);
int func_0022BCC8(void);
void func_0022D2C8(void);
int func_0022D2D8(void);
void func_0022D340(void);
int func_0022D350(void);
void func_0022D3B8(void);
int func_0022D3C8(void);
void func_0022D460(void);
int func_0022D470(void);

void func_002FBEE8(void);

// text_0026C5C8
void func_002606D0(void);
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

int func_0018D840(void);
int func_0018D848(void);
int func_0018D850(void);
int func_0018D858(void);
int func_0018D860(void);

// text_00288B30
int func_002C6498(void);

// FGDK3/Code/Widget
void func_00262F70(void);
void func_00262F78(void);
void func_00262F80(void);
void func_00262F88(void);
void func_00262F90(void);
int func_00263640(void);

// text_001AB700


//void func_00247D28(void*);


int func_00274B00(char* name);
int func_00275288(int arg0, int arg1, int ovlType, int arg3);
void func_002757F0(void);
int func_00290D08(void);
void func_00291770(void);
void func_00291778(void);
void func_002963E8(void);
int func_002963F0(void);
int func_00296478(void);
int func_00296480(int);
int func_0029A610(void);
int func_0029A600(int, int);
int func_0029A618(void);
void func_0029A620(void);
void func_0029A628(void);
void func_0029AA28(void);
void func_0029AA30(void);
int func_002A1A58(void);
int func_002A1A60(void);
void func_002A1A68(void);
void func_002A1A70(void);
float func_002A1B70(void);
int func_002A1B80(void);
int func_002A1B88(void);
void func_002A1B90(void);
void func_002A1B98(void);
void func_002A1BA8(void);
void func_002A1BB8(void);
void func_002A1BC8(void);
void func_002A5A50(void);
int func_002A6598(void);
int func_002A65C0(void);
int func_002A65C8(void);
void func_002A65D0(void);
void func_002AC220(void);
int func_002AC4A8(void);
char* func_002D7738(int);
int func_002DF488(void);
int func_002DF9D8(void);
void func_002DFA18(void);

float func_002EFEE0(float, float, float, float, float);
int func_002F0E50(void);
int func_002F14B0(void);
int func_002F34F0(void);
int func_002F36A0(void);
int func_002F3840(void);
int func_002F38E0(void);
void func_002F3F88(void);
void func_002F4068(void);
float func_002F4368(void);
void func_002F4378(void);
void func_002F4608(void);
int func_002F5BF8(void);
int func_002F6C50(void);
void func_002F6E80(void);
void func_002F6E88(void);
void func_002F6F18(void);
void func_002F6F20(void);
void func_002F6F28(void);
void func_002F6F30(void);
void func_002F6F38(void);
void func_002F6F40(void);
void func_002F6F48(void);
void func_002F7208(void);
Status func_002FBEB0(void);
int func_0030ACA8(char*, int);
int func_0030ACD0(char*, unsigned int);
void func_002D42D8(void);
void func_002D42E0(void);
void func_002D4770(void);
void func_002D4778(void);
void func_002D4780(void);
void func_002D5D58(void);
void func_002D74F8(void);
void func_002D7980(void);



Status func_001D5E90(void);
Status func_0026CFD0(unsigned int, char*, int);
Status func_0026CFF8(int, char*,char* ,int);

int func_002D1BC8(void);
int func_002D1C78(void);
int func_002D1D58(void);
void func_002D1D60(void);
void func_002D1D68(void);
void func_002D2250(void);
void func_002D2258(void);
void func_002D2328(void);
float func_002D2350(void);
void* func_002D3360(void*);

int func_001FD558(char* arg0, char* arg1);
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

