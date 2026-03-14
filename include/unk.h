#ifndef UNK_H
#define UNK_H

#include <stdlib.h>
#include "FGDK3/Playstation2/Thread.h"

#include "Dogs/SimObj.h"
#include "FGDK3/Widget.h"



// Unknown data and functions.

extern int D_0034C300[];
extern int D_003593C0[];

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
    char unk0[0x4F8];
    int unk4F8;
} s_func_001C6DC8;

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
//extern Game_Document* TheGame;




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
        int unk0;
        int unk4;
        short unk8;
        short unkA;
        int unkC;

    GE_PrimVertices(int, int, int);
    virtual ~GE_PrimVertices();
    int func_002A65C0(void);
    int func_002A65C8(void);
    void func_002A65D0(void);
};

class GE_PS2PrimVertices : public GE_PrimVertices {
    public:
        int unk14;
        int unk18;
        //
        int unk20;
        int unk24;
        //
        int unk34;
        GE_PS2PrimVertices(void);

        virtual ~GE_PS2PrimVertices();
        int func_002A5868(int, int);
        void func_002A5880(void);
        //
        void func_002A5A50(void);
};


class GE_PrimIndices {
    public:
        short unk0;
        char unk2;
        char unk3;
        int unk4;
        int unk8;
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

class GE_TransformState {

};

class GE_Device : public GE_TransformState {
    public:
        GE_Device();
        virtual ~GE_Device();
        int func_002D1D58();
        //
        void func_002D1D60();
        void func_002D1D68();
        //
        void func_002D2250();
        void func_002D2258();
        //
        void func_002D2328();
};

class GE_PS2Device : public GE_Device {
    public:
        GE_PS2Device();
        virtual ~GE_PS2Device();
};

class ShapeInstance {
    public:
        void* unk0; // shading data?
        /* 0x4 */ void* m_shapeData; // shapeData pointer?
        //ShapeParams_Dynamic unk8
        //ShapeParams_Dynamic unk14
        void* unk20; // mesh data?
        void* unk24;
        void* unk28; // animations?
        ShapeInstance();
        virtual ~ShapeInstance();
        void Empty();
        void Fill();
        virtual void SetShape(void*); // SetShape(ShapeData* const)
        //virtual ? func_00270468
        // virtual ? func_00270498
        // virtual ? func_002704D8
        virtual float func_002704F8();
        void Execute();
        void Render(GE_Device*);
};

class GE_DMAPktRc1i69 { // GE_DMAPktRc1i69 : public GE_DMAPktRcGeneric
    public:
        GE_DMAPktRc1i69();
        virtual ~GE_DMAPktRc1i69();
};

class Action {
    public:
        int unk0;
        Action();
        virtual ~Action();
        virtual void func_002462a8() = 0;
};

class Resource_LayoutUnit {
    public:
        int unk0;
        void* unk4;
        Resource_LayoutUnit(void*);
        virtual ~Resource_LayoutUnit();
};

class Resource_LayoutOverlay { // : public Resource_LayoutUnit
    public:
        int unkC; // overlay id?
        void* unk10;
        //Resource_LayoutOverlay
        virtual ~Resource_LayoutOverlay();
        void func_00274200();

};

typedef struct {
    int m_overlayId;
    char* m_overlayName;
} overlayInfo;

typedef struct {
    overlayInfo m_overlays[115];
} s_D_0035FC48;

class Resource_LayoutGroup : public Resource_LayoutUnit {
    public:
        int unkC;
        void* unk10;
        Resource_LayoutGroup(void*, int, void*);
        virtual ~Resource_LayoutGroup();
};

// class Resource_LayoutInclusiveGroup : public Resource_LayoutGroup {
//     public:
//         virtual ~Resource_LayoutInclusiveGroup();
            //func_00274A00
//
// };


class FileSystemDisc {
    public:
        FileSystemDisc();
        FileSystemDisc(int, void*);
        virtual ~FileSystemDisc();
};

class FileSystemDisc_CD : public FileSystemDisc {
    public:
        FileSystemDisc_CD();
        virtual ~FileSystemDisc_CD();
};

class FileSystemDiscRoot : public FileSystemDisc {
    public:
        FileSystemDiscRoot();
        // func_002FFA20
        // func_002FFA58
        // func_002FFAC0
        // func_002FFAF8
        virtual ~FileSystemDiscRoot();
        int func_002FFA90();
};



class StorageDevice {
    public:
        //StorageDevice
        virtual ~StorageDevice();
};

/*
class StorageDevice_MemCard : public StorageDevice {
    public:
        StorageDevice_MemCard(int card);
};*/
class Widget_Border {

};


class Widget_Desktop : public Widget_Border {
    public:
        Widget_Desktop();
        virtual ~Widget_Desktop();
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

class NullAccess : public File::Access {
    public:
        NullAccess();
        virtual ~NullAccess();
};

class FileFindAccess_Nul : public FileFind::Access {
    public:
        FileFindAccess_Nul();
        virtual ~FileFindAccess_Nul();
};

class File_FileDescriptor : public File::Access {
    public:
        int m_fd;
        int unkC;
        int unk10;
        int m_offset;
        int unk18;
        int unk1C;
        File_FileDescriptor(int fd);
        virtual ~File_FileDescriptor();
        virtual void func_00314890(void);
        virtual int func_003148E8(void);
};

// class GE_TextureStylePkt : public GE_DMARc {
//     public:
//         int unk4;
//         char unk5;
//         short unk6;
//         int unk8;
//         int unk10;
//         GE_TextureStylePkt(void);
//         virtual ~GE_TextureStylePkt();
// };

class GameLayer : public Widget_WithChildren {
    public:
        int unkD0;
        GameLayer();
};


class SavedGame {
    public:
        int unk0;
        int unk4;
        char* unk8;
        //unkC
        int unk10;
        int unk14;
        int unk18;
        //unk1C
        int unk20;
        int unk24;
        int unk28;
        int unk2C;
        SavedGame(char*, int, int);
        virtual ~SavedGame();

};

// BookMetaphor classes
namespace BookMetaphor {
    class Page {
        public:
            int unk0;
            virtual ~Page();
            void func_0019E378();
            int func_0019E3A8();
            int func_0019E3B0();

    };

    class GamePositionPage : public Page {
        public:
            //unk8
            int unkC;
            GamePositionPage(int);
            virtual ~GamePositionPage();
    };

    class NewGamePage : public GamePositionPage {
        public:
            int unk10; // m_state?

            NewGamePage();
            virtual ~NewGamePage();
            //
            short func_0018D830();
            int func_0018D840();
            int func_0018D848();
            int func_0018D850();
            int func_0018D858();
            int func_0018D860();
            //func_0018D868
    };

    class LoadGamePage : public GamePositionPage {
        public:
            int unk10;
            int unk14; // m_state
            LoadGamePage(int, int);
            virtual ~LoadGamePage();
            //func_0018E0D0
            //func_0018E0F0
            //func_0018E110
            //func_0018E138
            //func_0018E168
    };

    // class SaveGamePage : public GamePositionPage {
    //  public:
    //      //SaveGamePage
    //      virtual ~SaveGamePage();
            //func_0018E9E8
            //func_0018EA08
            //func_0018EA28
            //func_0018EA50
            //func_0018EA80
    //};

    // class CurrentPositionPage : public GamePositionPage {
    //     public:
    //         //CurrentPositionPage
    //         virtual ~CurrentPositionPage();
    //         //func_0018F070
    // };

    class Stats0Page : public Page {
        public:
            Stats0Page();
            virtual ~Stats0Page();
    };
    class Stats1Page : public Page {
        public:
            //unk8
            int unk10;
            // unk10
            // unkC
            int unk14;
            int unk18;
            Stats1Page();
            virtual ~Stats1Page();
    };

    class SettingsPage : public Page {
        public:
            int unk8; // m_cursorPos
            int unkC; // action?
            int unk10;
            /* 0x14 */ bool m_cheatsAvailable;
            SettingsPage();
            virtual ~SettingsPage();
    };

    class CheatsPage : public Page {
        public:
            // unk8
            int unk10; // m_cursorPos
            int unk14; // m_state?
            int unk1C;
            CheatsPage();
            virtual ~CheatsPage();
    };

    class BackgroundThread : public Thread {
        public:

            int unk8;
            BackgroundThread();
            virtual ~BackgroundThread();
    };

    // class NewGameBackgroundThread : public BackgroundThread
    // class LoadGameBackgroundThread : public BackgroundThread
    // class SaveGameBackgroundThread : public BackgroundThread

    class ChangeLevelBackgroundThread : public BackgroundThread {
        public:
            int m_level;
            int m_gate;
            ChangeLevelBackgroundThread(int level, int gate);
            virtual ~ChangeLevelBackgroundThread();
            //func_00194678
            virtual void func_001947C8();
    };


};

class BookMetaphorLayer : public GameLayer {
    public:
        BookMetaphorLayer();
        virtual ~BookMetaphorLayer();
};

//

class GE_GSPageMgr {
    public:
        //unk0
        int unk4;
        int unk8;
        int unkC;
        //unk10
        int unk14;
        int unk18;
        int unk1C;
        int unk20;
        int unk24;
        int unk28;
        int unk2C;
        int unk30;
        int unk34;
        //
        int unk40;
        int unk44;
        int unk48;
        //unk4C
        int unk50;
        //unk54
        int unk58;
        int unk5C;
        int unk60;
        //unk64
        int unk68;
        GE_GSPageMgr(int, int);
        virtual ~GE_GSPageMgr();
};

class DebugEnvironment {
    public:
        //unk0
        int unk4;
        int unk8;
        int unkC;
        //unk10
        int unk14;
        //unk18
        int unk1C;
        int unk20;
        int unk24;
        //unk28
        int unk2C;
        int unk30;
        int unk34;
        DebugEnvironment();
        virtual ~DebugEnvironment();
        void func_002D5D58(void);

};

class Endian {
    public:
        virtual ~Endian();
        void func_002D7980(void);
};

class Script {

};

class DogScript : public Script {
    public:
        int func_001AD5F8();
};

class PointerMessageHandler {
    public:
        void func_00262F70();
        void func_00262F78();
        void func_00262F80();
        //001d6a10
        void func_00262F90();
};

class ValueEditor {

};

class NameTagEditor : public ValueEditor {
    public:
        void func_002691E8();
};



int Main_RunGame();
#ifdef __cplusplus
extern "C" {
#endif

void func_00187490(s_func_00187490* arg0, void* dest, int arg2, size_t arg3);
short func_0018C980(int level, int gate);
// bookmetaphor
void func_00196418(void);




//void func_001AD180(void);
void func_001AD560(void);




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
void func_00273A80(int);

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


void func_002FBEE8(void);

// text_0026C5C8
void func_002606D0(void);


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
void func_00299448(void);
int func_0029A600(int, int);
int func_0029A610(void);
int func_0029A618(void);
void func_0029A620(void);
void func_0029A628(void);
void func_0029A738(void);
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

int func_002A6598(void);


void func_002AC220(void);
int func_002AC4A8(void);
//void func_002ADEA8(void);
void func_002AE320(void);
char* func_002D7738(int);
int func_002DF488(void);
int func_002DF9D8(void);
void func_002DFA18(void);

float func_002EFEE0(float, float, float, float, float);







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

Status func_002FBEB0(void);
int func_00309798(char*, char*);
int func_0030ACA8(char*, int);
int func_0030ACD0(char*, unsigned int);
void func_002D42D8(void);
void func_002D42E0(void);
void func_002D4770(void);
void func_002D4778(void);
void func_002D4780(void);

void func_002D74F8(void);
int func_002D77A8(char*);



Status func_001D5E90(void);

Status func_0026CFD0(unsigned int, char*, int);
Status func_0026CFF8(int, char*,char* ,int);

int func_002D1BC8(void);
int func_002D1C78(void);






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

