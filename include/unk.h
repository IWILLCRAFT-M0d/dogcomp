#ifndef UNK_H
#define UNK_H

#include <stdlib.h>
#include <sys/types.h>
#include "FGDK3/Playstation2/Thread.h"

#include "Dogs/SimObj.h"
#include "FGDK3/Widget.h"

#include "data_unk.h"
#include "file_unk.h"
#include "endian_unk.h"

// Unknown data and functions.

extern int D_0034C300[];
extern int D_003593C0[];

// pi 3.1415927
// tau 6.2831855
// 0.15915494

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

// typedef struct {
//     int unk0[471];
//     int unk75C;
// } s_func_002C8358;

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
} s_func_0023E698;


/**
 * @note Class and method names taken from RCT3 symbols.
 *
 * @todo Document variables.
 */
class AnimationVariable {
    public:
        float unk0;
        float unk4;
        float unk8;
        float unkC;
        void* unk10;
        AnimationVariable(float);
        void SetDefaultNextValue(float);
        void Advance();
};

class StdAllocator {
    public:
        /*virtual*/ void* Alloc(size_t nbytes);
        /*virtual*/ void Free(void* ptr);
        /*virtual*/ void* MemAlign(size_t alignment, size_t size);
};

class Action {
    public:
        int unk0;
        Action();
        virtual ~Action();
        // virtual ? = 0;
};

class HierarchyAction /* : public Action */ {

};

class NullAction /* : public Action */ {

};

class CreateAction : public Action {
    public:
        CreateAction();
        virtual ~CreateAction();
};

class ClearAction /* : public Action */ {

};

class Widget_Border /* : public Widget_WithChildren */{
    public:
        float unkD0; // x scale/size?
        float unkD4; // y scale/size?

};

class StatusBar : public Widget_Border {

};

class Widget_Desktop : public Widget_Border {
    public:
        Widget_Desktop();
        virtual ~Widget_Desktop();
};



class InputBinding {
    public:
        // virtual ? = 0
        // virtual ? = 0
};


class Pointer : public InputBinding {
    public:
        void* unk2C;

        float unk60;
        float unk64;
        // virtual ? func_00278608
        // virtual ? func_00278668
        virtual ~Pointer();
        // virtual ? = 0
        // virtual ? func_002788D8
        virtual void func_002786A0(float);

};

class JoystickPointer : public Pointer {
    public:
        // virtual base function (00278608)
        // virtual base function (00278668)
        virtual ~JoystickPointer();
        // virtual ? func_00279238
        // virtual base function (002788D8)
        // virtual ? func_00279408
};

class GameLayer : public Widget_WithChildren , public InputBinding  {
    public:
        int unkD0;
        GameLayer();
        virtual ~GameLayer();
};

class PlayingLayer : public GameLayer {
    public:
        PlayingLayer();
};

class SavedGame {
    public:
        int unk0;
        int unk4;
        char* unk8;
        void* unkC;
        int unk10;
        int unk14;
        int unk18;
        void* unk1C;
        int unk20;
        int unk24;
        int unk28;
        int unk2C;
        SavedGame(char*, int, int);
        virtual ~SavedGame();

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
        // virtual ? func_002d49c8
        // virtual ? func_002D3950

        virtual void func_002D5D58();

        /**
         * @note Nametaken from RCT3 symbols.
         */
        void VFatalError(const char*, char*);

};

class PointerMessageHandler {
    public:
        /* virtual */ void func_00262F70();
        /* virtual */ void func_00262F78();
        /* virtual */ void func_00262F80();
        //001d6a10
        /* virtual */ void func_00262F90();
};

class TextRenderer {

};

class YDRRenderer : public TextRenderer {
    public:
        virtual void func_00168CB8(char*);
};

class DSLRenderer : public TextRenderer {
    public:
        // virtual ? func_001D70E8
};

class ValueEditor : public TextRenderer {

};

class StreamRenderer : public TextRenderer {
    public:
        // virtual ? func_002D63F0
};

class FloatEditor : public ValueEditor {

};

class Int8Editor : public ValueEditor {

};

class Uint8Editor : public ValueEditor {

};

class Int16Editor : public ValueEditor {

};

class Uint16Editor : public ValueEditor {

};

class Int32Editor : public ValueEditor {

};

class UInt32Editor : public ValueEditor {

};

class BoolEditor : public ValueEditor {

};

class IntEditor : public ValueEditor {

};

class UIntEditor : public ValueEditor {

};

class V3XEditor : public ValueEditor {

};

class V3YEditor : public ValueEditor {

};

class V3ZEditor : public ValueEditor {

};

class NameTagEditor : public ValueEditor {
    public:
        void func_002691E8(); // virtual
};


class LiveEditable {
    public:
        LiveEditable* unk8;
        int unk10;
        int unk14;
        LiveEditable(char*, char*);
        // virtual ? = 0;
};

class MenuRegisterable {
    public:
        void* unk0;
        MenuRegisterable();
        virtual ~MenuRegisterable();
};

class Music_MenuRegisterable : public MenuRegisterable {
    public:
        Music_MenuRegisterable();
        virtual ~Music_MenuRegisterable();
        // virtual ? func_0027F100
};

class EditableManager : public MenuRegisterable {
    public:
        char* unk2C;
        EditableManager(char*);
        // virtual ? func_002d99F8

};

class Music_Track {
    public:
        int unk0;

        int unk20;
        virtual ~Music_Track();
        // virtual ? func_00280088
};


class DebugLayer /* : public Widget_Pane */ {
    public:
};



typedef struct {

    // 4 bytes? unk1C (popup text thing?) enum
    // 0x0 - no text
    // 0x1 - checking memory card
    // 0x2 - checking memory card?
    // 0x3 - no memory card inserted
    // 0x4 - memory card not formatted
    // 0x5 - formatting memory card
    // 0x6 - failed to format
    // 0x7 - memory card 1 has no save file
    // 0x8 - creating a save file
    // 0x9 - failed to create save file
    // 0xA - memory card 1 has insufficient space
    // 0xB - A game file is corrupt
    // 0xC - saving game data to memory card 1 (paw)
    // 0xD - saving game data to memory card 1 (no paw)
    // 0xE - choose a game file
    // 0xF - the existing saved game will be lost
    // 0x10 - select language
    // 0x11 - ?
    // 0x12 - controller disconnected
    // 0x13 - controller connected
    // 0x14 - ?
    // 0x15 - game save failed
    // 0x16 - memory card was removed
    // 0x17 - insert disc
    // 0x18 - press start
    // 0x19 - loading data
    // 0x1A - ?

    /* 0x20 */ int m_cardSlot;
    /* 0X20 */ int m_gameSlot;
    /* 0x28 */ int m_mediaReady;

    // 4 bytes? unk30 (fade out thing?)
} s_D_00453698;

class TransientSound /* : public Sound */ {

};



/**
 * @note Name taken from RCT3 symbols.
 */
class InterfaceTag {
    public:
        // static ? s_count
        // static ? s_interfaces
        // static ? s_bigSillyIntArray
};

class NameTagEditorWidget /* : public Widget_Compositor */ {

};

class ScriptMessageAndRequestReceiver {
    public:
    // virtual ?  = 0
    // virtual ? func_002166B8
    // virtual ? func_00216760
    // virtual ? func_002167D8
    // virtual ? func_00216880
    // virtual ? func_002168F8
    // virtual ? func_002169A8
    // virtual ? func_00216A20
    // virtual ? func_00216A98
    // virtual ? func_00216B40
    // virtual ? func_00216BB8
    // virtual ? func_00216C30
    // virtual ? func_00216CD8
    // virtual ? func_00216D80
    // virtual ? func_00216DF8
    // virtual ? func_00216EA0
    // virtual ? func_00216F18
    // virtual ? func_00216F90
    // virtual ? func_00217008
    // virtual ? func_00217080
    // virtual ? func_002170F8
    // virtual ? func_00217170
    // virtual ? func_00217218
    // virtual ? func_002172C0
    // virtual ? func_00217368
    // virtual ? func_002173E0
    // virtual ? func_00217488
    // virtual ? func_00217500
    // virtual ? func_00217578
    // virtual ? func_00217620
    // virtual ? func_00217698
    // virtual ? func_00217710
    // virtual ? func_00217788
    // virtual ? func_00217800
    // virtual ? func_00217878
    // virtual ? func_002178F0
    // virtual ? func_00217968
    // virtual ? func_002179E0
    // virtual ? func_00217A58
    // virtual ? func_00217AD0
    // virtual ? func_00217B48
    // virtual ? func_00217BC0
    // virtual ? func_00217C38
    // virtual ? func_00217CE0
    // virtual ? func_00217D90
    // virtual ? func_00217E38
    // virtual ? func_00217EB0
    // virtual ? func_00217F28
    // virtual ? func_00217FA0
    // virtual ? func_00218018
    // virtual ? func_002180C0
    // virtual ? func_00218138
    // virtual ? func_002181B0
    // virtual ? func_00218228
    // virtual ? func_002182A0
    // virtual ? func_00218348
    // virtual ? func_002183C0
    // virtual ? func_00218468
    // virtual ? func_002184E0
    // virtual ? func_00218558
    // virtual ? func_002185D0
    // virtual ? func_00218648
    // virtual ? func_002186F0
    // virtual ? func_00218798
    // virtual ? func_00218840
    // virtual ? func_002188B8
    // virtual ? func_00218930
    // virtual ? func_002189A8
    // virtual ? func_00218A20
    // virtual ? func_00218AC8
    // virtual ? func_00218B78
    // virtual ? func_00218C20
    // virtual ? func_00218C98
    // virtual ? func_00218D48
    // virtual ? func_00218E10
    // virtual ? func_00218E88
    // virtual ? func_00218F00
    // virtual ? func_00218F78
    // virtual ? func_00218FF0
    // virtual ? func_00219068
    // virtual ? func_00219110
    // virtual ? func_00219188
    // virtual ? func_00219238
    // virtual ? func_00219328
    // virtual ? func_002193A0
    // virtual ? func_00219448
    // virtual ? func_002194F0
    // virtual ? func_00219598
    // virtual ? func_00219640
    // virtual ? func_002196E8
    // virtual ? func_00219790
    // virtual ? func_00219838
    // virtual ? func_002198B0
    // virtual ? func_00219928
    // virtual ? func_002199D0
    // virtual ? func_00219A48
    // virtual ? func_00219AC0
    // virtual ? func_00219B38
    // virtual ? func_00219BB0
    // virtual ? func_00219C28
    // virtual ? func_00219CD8
    // virtual ? func_00219D50
    // virtual ? func_00219DF8
    // virtual ? func_00219E70
    // virtual ? func_00219EE8
    // virtual ? func_00219F60
    // virtual ? func_0021A008
    // virtual ? func_0021A0B0
    // virtual ? func_0021A158
    // virtual ? func_0021A210
    // virtual ? func_0021A288
    // virtual ? func_0021A330
    // virtual ? func_0021A3A8
    // virtual ? func_0021A450
    // virtual ? func_0021A4C8
    // virtual ? func_0021A578
    // virtual ? func_0021A5F0
    // virtual ? func_0021A668
    // virtual ? func_0021A6E0
    // virtual ? func_0021A758
    // virtual ? func_0021A808
    // virtual ? func_0021A880
    // virtual ? func_0021A8F8
    // virtual ? func_0021A9A8
    // virtual ? func_0021AA50
    // virtual ? func_0021AB40
    // virtual ? func_0021ABB8
    // virtual ? func_0021AC30
    // virtual ? func_0021ACD8
    // virtual ? func_0021AD80
    // virtual ? func_0021ADF8
    // virtual ? func_0021AE70
    // virtual ? func_0021AEE8
    // virtual ? func_0021AF90
    // virtual ? func_0021B008
    // virtual ? func_0021B080
    // virtual ? func_0021B128
    // virtual ? func_0021B1A0
    // virtual ? func_0021B248
    // virtual ? func_0021B2F8
    // virtual ? func_0021B3A0
    // virtual ? func_0021B490
    // virtual ? func_0021B538
    // virtual ? func_0021B5E0
    // virtual ? func_0021B688
    // virtual ? func_0021B730
    // virtual ? func_0021B7D8
    // virtual ? func_0021B888
    // virtual ? func_0021B978
    // virtual ? func_0021BA38
    // virtual ? func_0021BAE8
    // virtual ? func_0021BB90
    // virtual ? func_0021BC48
    // virtual ? func_0021BCF8
    // virtual ? func_0021BDA8
    // virtual ? func_0021BE58
    // virtual ? func_0021BF00
    // virtual ? func_0021BFF0
    // virtual ? func_0021C0A0
    // virtual ? func_0021C148
    // virtual ? func_0021C1F0
    // virtual ? func_0021C298
    // virtual ? func_0021C340
    // virtual ? func_0021C3E8
    // virtual ? func_0021C498
    // virtual ? func_0021C510
    // virtual ? func_0021C588
    // virtual ? func_0021C640
    // virtual ? func_0021C6B8
    // virtual ? func_0021C7B8
    // virtual ? func_0021C8F8
    // virtual ? func_0021C9F8
    // virtual ? func_0021CA70
    // virtual ? func_0021CAE8
    // virtual ? func_0021CB60
    // virtual ? func_0021CC08
    // virtual ? func_0021CCB8
    // virtual ? func_0021CD68
    // virtual ? func_0021CDE0
    // virtual ? func_0021CE58
    // virtual ? func_0021CF08
    // virtual ? func_0021CFD0
    // virtual ? func_0021D090
    // virtual ? func_0021D108
    // virtual ? func_0021D180
    // virtual ? func_0021D228
    // virtual ? func_0021D2D0
    // virtual ? func_0021D348
    // virtual ? func_0021D3C0
    // virtual ? func_0021D468
    // virtual ? func_0021D4E0
    // virtual ? func_0021D590
    // virtual ? func_0021D608
    // virtual ? func_0021D6C0
    // virtual ? func_0021D738
    // virtual ? func_0021D7B0
    // virtual ? func_0021D828
    // virtual ? func_0021D8A0
    // virtual ? func_0021D918
    // virtual ? func_0021D990
    // virtual ? func_0021DA08
    // virtual ? func_0021DA80
    // virtual ? func_0021DAF8
    // virtual ? func_0021DB70
    // virtual ? func_0021DBE8
    // virtual ? func_0021DC98
    // virtual ? func_0021DD50
    // virtual ? func_0021DE00
    // virtual ? func_0021DEF0
    // virtual ? func_0021DFF0
    // virtual ? func_0021E0F0
    // virtual ? func_0021E1A8
    // virtual ? func_0021E258
    // virtual ? func_0021E2D0
    // virtual ? func_0021E378
    // virtual ? func_0021E3F0
    // virtual ? func_0021E468
    // virtual ? func_0021E4E0
    // virtual ? func_0021E558
    // virtual ? func_0021E668
    // virtual ? func_0021E6E0
    // virtual ? func_0021E788
    // virtual ? func_0021E800
    // virtual ? func_0021E878
    // virtual ? func_0021E8F0
    // virtual ? func_0021E968
    // virtual ? func_0021E9E0
    // virtual ? func_0021EA90
    // virtual ? func_0021EB38
    // virtual ? func_0021EBB0
    // virtual ? func_0021EC60
    // virtual ? func_0021ECD8
    // virtual ? func_0021ED50
    // virtual ? func_0021EDC8
    // virtual ? func_0021EE40
    // virtual ? func_0021EEE8
    // virtual ? func_0021EF90
    // virtual ? func_0021F040
    // virtual ? func_0021F0F0
    // virtual ? func_0021F198
    // virtual ? func_0021F240
    // virtual ? func_0021F2E8
    // virtual ? func_0021F360
    // virtual ? func_0021F3D8
    // virtual ? func_0021F488
    // virtual ? func_0021F548
    // virtual ? func_0021F5C0
    // virtual ? func_0021F638
    // virtual ? func_0021F6B0
    // virtual ? func_0021F728
    // virtual ? func_0021F7A0
    // virtual ? func_0021F818
    // virtual ? func_0021F890
    // virtual ? func_0021F908
    // virtual ? func_0021F980
    // virtual ? func_0021F9F8
    // virtual ? func_0021FA70
    // virtual ? func_0021FAE8
    // virtual ? func_0021FB60
    // virtual ? func_0021FBD8
    // virtual ? func_0021FC50
    // virtual ? func_0021FCC8
    // virtual ? func_0021FD40
    // virtual ? func_0021FDB8
    // virtual ? func_0021FE30
    // virtual ? func_0021FEA8
    // virtual ? func_0021FF20
    // virtual ? func_0021FF98
    // virtual ? func_00220010
    // virtual ? func_002200B8
    // virtual ? func_00220130
    // virtual ? func_002201A8
    // virtual ? func_00220220
    // virtual ? func_00220298
    // virtual ? func_00220310
    // virtual ? func_002203B8
    // virtual ? func_00220430
    // virtual ? func_002204A8
    // virtual ? func_00220550
    // virtual ? func_002205F8
    // virtual ? func_00220670
    // virtual ? func_002206E8
    // virtual ? func_00220760
    // virtual ? func_00220820
    // virtual ? func_00220898
    // virtual ? func_00220940
    // virtual ? func_00220A40
    // virtual ? func_00220B00
    // virtual ? func_00220BA8
    // virtual ? func_00220C50
    // virtual ? func_00220CF8
    // virtual ? func_00220D70
    // virtual ? func_00220DE8
    // virtual ? func_00220E60
    // virtual ? func_00220ED8
    // virtual ? func_00220F50
    // virtual ? func_00220FC8
    // virtual ? func_00221070
    // virtual ? func_002210E8
    // virtual ? func_00221190
    // virtual ? func_00221238
    // virtual ? func_002212E8
    // virtual ? func_00221390
    // virtual ? func_00221480
    // virtual ? func_00221528
    // virtual ? func_002215A0
    // virtual ? func_00221618
    // virtual ? func_002216C0
    // virtual ? func_00221778
    // virtual ? func_002217F0
    // virtual ? func_00221868
    // virtual ? func_002218E0
    // virtual ? func_00221988
    // virtual ? func_00221A30
    // virtual ? func_00221AD8
    // virtual ? func_00221B80
    // virtual ? func_00221C28
    // virtual ? func_00221CD0
    // virtual ? func_00221D48
    // virtual ? func_00221DC0
    // virtual ? func_00221E68
    // virtual ? func_00221F10
    // virtual ? func_00221F88
    // virtual ? func_00222038
    // virtual ? func_002220B0
    // virtual ? func_00222128
    // virtual ? func_002221D0
    // virtual ? func_00222248
    // virtual ? func_002222C0
    // virtual ? func_00222368
    // virtual ? func_00222410
    // virtual ? func_00222488
    // virtual ? func_00222500
    // virtual ? func_00222578
    // virtual ? func_00222620
    // virtual ? func_002226C8
    // virtual ? func_00222770
    // virtual ? func_002227E8
    // virtual ? func_00222860
    // virtual ? func_002228D8
    // virtual ? func_00222950
    // virtual ? func_002229C8
    // virtual ? func_00222A40
    // virtual ? func_00222AF0
    // virtual ? func_00222B68
    // virtual ? func_00222C10
    // virtual ? func_00222C88
    // virtual ? func_00222D30
    // virtual ? func_00222DA8
    // virtual ? func_00222E50
    /*virtual*/ void func_00222EC8();
    // virtual ? func_00222F08
    // virtual ? func_00222F48
    // virtual ? func_00222F88
    // virtual ? func_00222FF8
    // virtual ? func_00223038
    // virtual ? func_00223078
    // virtual ? func_002230F0
    // virtual ? func_00223130
    // virtual ? func_002231A0
    // virtual ? func_002231E0
    // virtual ? func_00223220
    // virtual ? func_00223298
    // virtual ? func_002232D8
    // virtual ? func_00223318
    // virtual ? func_00223358
    // virtual ? func_002233C8
    // virtual ? func_00223408
    // virtual ? func_00223448
    // virtual ? func_00223488
    // virtual ? func_002234F8
    // virtual ? func_00223538
    // virtual ? func_00223578
    // virtual ? func_002235B8
    // virtual ? func_00223628
    // virtual ? func_00223698
    // virtual ? func_002236D8
    // virtual ? func_00223748
    // virtual ? func_002237B8
    // virtual ? func_00223828
    // virtual ? func_00223868
    // virtual ? func_002238A8
    // virtual ? func_002238E8
    // virtual ? func_00223958
    // virtual ? func_002239C8
    // virtual ? func_00223A08
    // virtual ? func_00223A48
    // virtual ? func_00223A88
    // virtual ? func_00223B00
    // virtual ? func_00223B78
    // virtual ? func_00223BF0
    // virtual ? func_00223CA0
    // virtual ? func_00223D10
    // virtual ? func_00223D50
    // virtual ? func_00223D90
    // virtual ? func_00223E00
    // virtual ? func_00223E70
    // virtual ? func_00223EE0
    // virtual ? func_00223F20
    // virtual ? func_00223F90
    // virtual ? func_00223FD0
    // virtual ? func_00224010
    // virtual ? func_00224050
    // virtual ? func_00224090
    // virtual ? func_002240D0
    // virtual ? func_00224110
    // virtual ? func_00224150
    // virtual ? func_00224190
    // virtual ? func_002241D0
    // virtual ? func_00224210
    // virtual ? func_00224250
    // virtual ? func_00224290
    // virtual ? func_00224300
    // virtual ? func_00224370
    // virtual ? func_002243E0
    // virtual ? func_00224420
    // virtual ? func_00224460
    // virtual ? func_002244A0
    // virtual ? func_002244E0
    // virtual ? func_00224520
    // virtual ? func_00224560
    // virtual ? func_002245A0
    // virtual ? func_002245E0
    // virtual ? func_00224650
    // virtual ? func_002246C0
    // virtual ? func_00224700
    // virtual ? func_00224770
    // virtual ? func_002247E0
    // virtual ? func_00224820
    // virtual ? func_00224860
    // virtual ? func_002248A0
    // virtual ? func_00224918
    // virtual ? func_00224988
    // virtual ? func_002249F8
    // virtual ? func_00224A70
    // virtual ? func_00224AB0
    // virtual ? func_00224B28
    // virtual ? func_00224B68
    // virtual ? func_00224BA8
    // virtual ? func_00224C18
    // virtual ? func_00224C88
    // virtual ? func_00224D00
    // virtual ? func_00224D70
    // virtual ? func_00224DB0
    // virtual ? func_00224E90
    // virtual ? func_00224F08
    // virtual ? func_00224F88
    // virtual ? func_00224FC8
    // virtual ? func_00225038
    // virtual ? func_002250A8
    // virtual ? func_00225118
    // virtual ? func_00225158
    // virtual ? func_002251D8
    // virtual ? func_00225248
    // virtual ? func_002252C0
    // virtual ? func_00225338
    // virtual ? func_002253A8
    // virtual ? func_00225418
    // virtual ? func_00225488
    // virtual ? func_002254F8
    // virtual ? func_00225568
    // virtual ? func_002255D8
    // virtual ? func_00225648
    // virtual ? func_002256B8
    // virtual ? func_00225728
    // virtual ? func_00225768
    // virtual ? func_002257A8
    // virtual ? func_002257E8
    // virtual ? func_00225828
    // virtual ? func_002258A0
    // virtual ? func_00225910
    // virtual ? func_00225950
    // virtual ? func_00225990
    // virtual ? func_002259D0
    // virtual ? func_00225A10
    // virtual ? func_00225A88
    // virtual ? func_00225AF8
    // virtual ? func_00225B38
    // virtual ? func_00225B78
    // virtual ? func_00225BB8
    // virtual ? func_00225BF8
    // virtual ? func_00225C38
    // virtual ? func_00225CA8
    // virtual ? func_00225D20
    // virtual ? func_00225D60
    // virtual ? func_00225DD0
    // virtual ? func_00225E40
    // virtual ? func_00225E80
    // virtual ? func_00225EF0
    // virtual ? func_00225F60
    // virtual ? func_00225FA0
    // virtual ? func_00225FE0
    // virtual ? func_00226058
    // virtual ? func_002260C8
    // virtual ? func_00226108
    // virtual ? func_00226148
    // virtual ? func_002261B8
    // virtual ? func_00226228
    // virtual ? func_00226298
    // virtual ? func_002262D8
    // virtual ? func_00226318
    // virtual ? func_00226358
    // virtual ? func_00226398
    // virtual ? func_00226408
    // virtual ? func_00226448
    // virtual ? func_002264B8
    // virtual ? func_00226530
    // virtual ? func_002265A0
    // virtual ? func_00226618
    // virtual ? func_00226658
    // virtual ? func_00226698
    // virtual ? func_002266D8
    // virtual ? func_00226718
    // virtual ? func_00226758
    // virtual ? func_00226798
    // virtual ? func_002267D8
    // virtual ? func_00226818
    // virtual ? func_00226858
    // virtual ? func_00226898
    // virtual ? func_002268D8
    // virtual ? func_00226948
    // virtual ? func_00226988
    // virtual ? func_002269C8
    // virtual ? func_00226A08
    // virtual ? func_00226A78
    // virtual ? func_00226AB8
    // virtual ? func_00226AF8
    // virtual ? func_00226B68
    // virtual ? func_00226BD8
    // virtual ? func_00226C18
    // virtual ? func_00226C58
    // virtual ? func_00226C98
    // virtual ? func_00226CD8
    // virtual ? func_00226D18
    // virtual ? func_00226D58
    // virtual ? func_00226D98
    // virtual ? func_00226E08
    // virtual ? func_00226E48
    // virtual ? func_00226E88
    // virtual ? func_00226EC8
    // virtual ? func_00226F08
    // virtual ? func_00226F48
    // virtual ? func_00226F88
    // virtual ? func_00226FC8
    // virtual ? func_00227008
    // virtual ? func_00227048
    // virtual ? func_002270F8
    // virtual ? func_00227170
    // virtual ? func_002271B0
    // virtual ? func_002271F0
    // virtual ? func_00227230
    // virtual ? func_00227270
    // virtual ? func_002272E0
    // virtual ? func_00227320
    // virtual ? func_00227360
    // virtual ? func_002273A0
    // virtual ? func_002273E0
    // virtual ? func_00227450
    // virtual ? func_00227490
    // virtual ? func_002274D0
    // virtual ? func_00227510
    // virtual ? func_00227550
    // virtual ? func_00227590
    // virtual ? func_002275D0
    // virtual ? func_00227610
    // virtual ? func_00227680
    // virtual ? func_002276F0
    // virtual ? func_00227730
    // virtual ? func_00227770
    // virtual ? func_002277B0
    // virtual ? func_002277F0
    // virtual ? func_00227830
    // virtual ? func_002278A0
    // virtual ? func_002278E0
    // virtual ? func_00227920
    // virtual ? func_00227990
    /*virtual*/ void func_002279D0();
    /*virtual*/ void func_00227A10();


};

class GameDesktop /* : public VirtualDesktop*/ {

};

class InputCD {

};

class InputCD_PS2 : public InputCD {
    public:
        // virtual ? func_002fbe78
        virtual void func_002FBD70();
};

class DebugWindow /*: public Widget_Window*/ {

};

class Debug_DataValueContainer : public Widget_TableRow {

};

class Debug_StructContainer : public Debug_DataValueContainer {

};

class SetLevelEnumerator /* : public Tree34Enumerator<SimObj_Base> */ {
    public:
        // virtual ? func_001af410 ?
};

class Movement_IF /* : public Interface<Movement_IF> */ {

};

class VehicleNavDirectionalAnimation /*: public AnimationComponent, public ComponentDeterminedTimeBase::Component */ {

};

class VehicleNavDirectionalBackwardsAnimation : public VehicleNavDirectionalAnimation {
    public:
        virtual ~VehicleNavDirectionalBackwardsAnimation();
};

class ObjectNewMessage /* : public Message<ObjectActionRx> */ {
    public:
        // virtual ? func_001E50B8
};

/**
 * @todo Document and rename to something more descriptive.
 */
class c_func_00276AC0 {
    public:
        void* unk0;
        void* unk4;
        short unk8;
        void* unkC;
        void* unk10;
        void* unk14;
        c_func_00276AC0();
        void func_00276FA0(short);
};



class RelocationBlock : public Endian {
    public:
        // virtual ~RelocationBlock() // func_0030d3d0
        // base
        // virtual ? func_0030D470
};

class NavSphereHitPackage {

};

class NavGraphCellFromPosSphereHit : public NavSphereHitPackage {

};

class Widget_Window : public Widget_Pane {

};

class EditableSelectionDialog : public Widget_Window {

};

class VD_HelpWindow : public Widget_Window {

};

/**
 * @note Name taken from RCT3 symbols.
 */
class MessageStream {
    public:
        int unk0;
        int unk4;
        int unk8;
        int unkC;
        char* unk10;
        MessageStream* unk1C;
        MessageStream(const char*, int, int);
};



#ifdef __cplusplus
extern "C" {
#endif
void func_002B1F40(int);


// BookMetaphor
short func_0018C980(int level, int gate);
void func_00196418(void);


void func_001AD560(void);

void func_002C0340(void);
//int func_002C8358(s_func_002C8358* arg0);


unsigned int func_002684E8(unsigned int, unsigned int);
unsigned int func_002684F8(unsigned int, unsigned int);
Status func_0026CF60(void);
Status func_0026CF98(void);

void func_00273A80(int);

int func_002963F8();
bool func_002964C0();
int func_002A48A8(void);
int func_002A48B0(void);
void* func_002BF198(void*, string_ascii);
void func_002BF2D0(void);
s_func_002C31D0* func_002C31D0(s_func_002C31D0* arg0);

void func_002C57E8(void);
void func_002C6480(void);


void func_002C8360(void);
void func_002C90B0(void);
void func_002C9408(void);
void func_002C9410(void);
int func_002C9F08(void);
int func_002C9F10(void);



int func_002CA958(void);

int func_001E72D0(void);
void func_001F8628(void);
int func_001FC7E8(void);


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

void func_002606D0(void);



void func_00271EF8(void);
void func_002757E8(void);
void func_00275AF8(void);
int func_00275B00(void);
void func_00275B08(void);
void func_0027C4E8(void);
void func_00262F88(void);


File* func_00274B00(char* name);
File* func_00275288(int arg0, int lang, int ovlType, int arg3);
void func_002757F0(void);
int func_00290D08(void);
void func_00291770(void);
void func_00291778(void);
void func_002963E8(void);
int func_002963F0(char*, bool);
int func_00296478(void);
int func_00296480(int);
void func_00299448(void);
int func_0029A600(int, int);

void func_0029A738(void);

int func_002A1A58(void);
int func_002A1A60(void);
void func_002A1A68(void);
void func_002A1A70(void);
float func_002A1B70(void);





int func_002A6598(void);

//void func_002ADEA8(void);
void func_002AE320(void);
char* func_002D7738(int);
void func_002DAB38(short);
short func_002DAB40(void);


void func_002DFA18(void);

float func_002EFEE0(float, float, float, float, float);


int func_002F6C50(void);
void func_002F6E80(void);
void func_002F6E88(void);



Status func_002FBEB0(void);
int func_00309798(char*, char*);
int func_0030ACA8(char*, int);
int func_0030ACD0(char*, unsigned int);
void func_002D42D8(void);
void func_002D42E0(void);
void func_002D4770(void);
void func_002D4778(char*, const char*); // RCT3 Main_QueryUser or DebugEnvironment::SendToFile ?
void func_002D4780(void);

void func_002D74F8(void);
int func_002D77A8(char*);

Status func_0026CFD0(unsigned int, char*, int);
Status func_0026CFF8(int, char*,char* ,int);

int func_002D1BC8(void);


void* func_002D3360(void*);

int func_001FD558(char* arg0, char* arg1);

int func_002D5B40(const char*,...);

Status func_001C5518(char*);

char* func_001FC6B0(void*, short);
void func_002750E0(void);

int func_003140D8(void);
int func_00314298(void);
int func_003143A8(void);

string_ascii func_001FD148(short);
bool func_002963E0();
void func_002BEA88(const char*);
#ifdef __cplusplus
}
#endif

struct s_func_001FC440 {

   s_func_001FC440();
};


//s_func_001FC440* func_001FC440();
s_func_001FC440* func_001FC598();


Status SimObj_InternalInitialise();
void SimObj_InternalFinalise();
Status SimObj_Initialise();
void SimObj_Finalise();


extern void * const StdMem_StdInit_UsedModules[];

Status StdMem_Initialise();
void StdMem_Finalise();

void Main_RunGame();
void Main_Terminate();

class String_Buffer {
    public:
        virtual ~String_Buffer();
};

/**
 * @note Class and method names taken from RCT3 symbols.
 */
class NameStore {
    public:
        void* unk0;
        string_ascii unk4;
        NameStore(const char*, int, bool);
        void Initialise(const char*, int, bool);
};

#endif /* UNK_H */
