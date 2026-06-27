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



class AnimationVariable {
    public:
        float unk0;
        float unk4;
        float unk8;
        float unkC;
        void* unk10;
        AnimationVariable(float);
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




class InterfaceTag {
    public:
        // static ? s_count
        // static ? s_interfaces
        // static ? s_bigSillyIntArray
};

class NameTagEditorWidget /* : public Widget_Compositor */ {

};

class ScriptMessageAndRequestReceiver {

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

class MessageStream { // RCT3
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
int func_0026D120(void);
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

void func_002606D0(void);


void func_002717B8(void);
void func_00271EF8(void);
void func_002757E8(void);
void func_00275AF8(void);
int func_00275B00(void);
void func_00275B08(void);
void func_0027C4E8(void);
void func_00262F88(void);
int func_00263640(void);

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
int func_002DF488(void);
int func_002DF9D8(void);
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

#endif /* UNK_H */
