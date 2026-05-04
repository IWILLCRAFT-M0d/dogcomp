#ifndef UNK_H
#define UNK_H

#include <stdlib.h>
#include <sys/types.h>
#include "FGDK3/Playstation2/Thread.h"

#include "Dogs/SimObj.h"
#include "FGDK3/Widget.h"



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
} s_func_0023E698;

class string_ascii { // RCT3
    public:
        string_ascii(const char* str);
        ~string_ascii();
};

class Resource_Generic {
    public:
        void* unk0; // resource pointer
        /* 0x4 */ unsigned int m_resourceCount;
        /* 0x8 */ int m_resourceType;

        StdInit_ClientBase unkC;


        Resource_Generic();
        virtual ~Resource_Generic();
        virtual int func_00275520();
};

template <typename T> class Resource : public Resource_Generic {
    public:
        T* unk0[];
};

class ShapeData {

};

class Mien {
    public:
        int unk0;
        int unk4;
        float unk8;
        float unkC;
        float unk10;
        float unk14;       // 0x14 - Missing field
        float unk18;
        float unk1C;
        float unk20;
        int unk24;       // 0x24 - Missing field

        Mien();
        virtual ~Mien();
};

class StdAllocator {
    public:
        /*virtual*/ void* Alloc(size_t nbytes);
        /*virtual*/ void Free(void* ptr);
        /*virtual*/ void* MemAlign(size_t alignment, size_t size);
};

class GE_RenderHardware {
    public:
        float m_unk0;
        int m_unk4;
        GE_RenderHardware();
        virtual ~GE_RenderHardware();

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
    virtual int func_002D1C78();
};

class GE_PS2PrimCache /* : public GE_PrimCache */ {
    public:
        virtual ~GE_PS2PrimCache();

        virtual int func_002AC4A8();
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
        virtual int func_002A65C0();
        virtual int func_002A65C8();
        virtual void func_002A65D0();
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
        GE_PS2PrimVertices();
        virtual ~GE_PS2PrimVertices();
        //002a57c0
        virtual int func_002A5868(int, int);
        virtual void func_002A5880();
        //
        virtual void func_002A5A50();

        virtual short func_002A6748();
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
        void func_002A62D0();
};


class ShapeParams {
    public:
        void* unk0;
        int unk4;
        ShapeParams() {
            unk0 = 0;
            unk4 = 1;
        }
};
class ShapeParams_Dynamic : public ShapeParams {
    public:
        ShapeParams_Dynamic();
        ShapeParams_Dynamic(int);
        virtual ~ShapeParams_Dynamic();
        void SetSize(int);
};

class GE_TransformState {

};

class MeshTransforms : public GE_TransformState {
    public:
        // virtual 00310438
        // virtual 00310448
};

// RCT3 "GE_Device::s_theDevice"
// 0x78 - texture resources address
class GE_Device : public GE_TransformState {
    public:
        float unk50;
        float unk54;
        //
        float unk80;
        float unk90;
        GE_Device();
        virtual ~GE_Device();
        int func_002D1D58();
        //
        void func_002D1D60();
        void func_002D1D68();
        //
        virtual void func_002D2250();
        virtual void func_002D2258();
        //
        void func_002D2328();
};

// 0x00452660 is s_theDevice? (this)
class GE_PS2Device : public GE_Device {
    public:
        //GE_PS2DisplayTarget* unk75C;
        GE_PS2Device();
        virtual ~GE_PS2Device();
};

class MeshData {

};

class MeshInstance {
    public:
        int unk0;
        const MeshData* unk4; // m_meshData?
        MeshInstance(const MeshData*);
        ~MeshInstance();
        void Render(GE_Device*);
};

class ShapeInstance {
    public:
        void* unk0; // shading data/parameters?
        /* 0x4 */ void* m_shapeData; // shapeData pointer?
        ShapeParams_Dynamic unk8;
        ShapeParams_Dynamic unk14;
        MeshInstance* unk20; // MeshInstance?
        void* unk24;
        void* unk28; // animations?
        ShapeInstance();
        virtual ~ShapeInstance();
        void Empty();
        void Fill();
        virtual void SetShape(void*); // SetShape(ShapeData* const)
        int func_00270408(int, int);
        //virtual ? func_00270468
        // virtual ? func_00270498
        // virtual ? func_002704D8
        virtual float func_002704F8();
        virtual const string_ascii func_00271908();
        void Execute();
        void Render(GE_Device*);
};



class Action {
    public:
        int unk0;
        Action();
        virtual ~Action();
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

class Resource_LayoutUnit {
    public:
        int unk0;
        Resource_LayoutUnit* unk4;
        Resource_LayoutUnit(Resource_LayoutUnit*);
        virtual ~Resource_LayoutUnit();
};

class Resource_LayoutOverlay /* : public Resource_LayoutUnit */ {
    public:
        static char* D_00487600;
        int unkC; // overlay id?
        void* unk10;
        //Resource_LayoutOverlay
        virtual ~Resource_LayoutOverlay();
        virtual void func_00274200();
        virtual void func_00274400();

};

class Resource_LayoutGroup : public Resource_LayoutUnit {
    public:
        int unkC;
        void* unk10;
        Resource_LayoutGroup(Resource_LayoutUnit*, int, void*);
        virtual ~Resource_LayoutGroup();
};

class Resource_LayoutInclusiveGroup /*: public Resource_LayoutGroup*/ {
    public:
        virtual ~Resource_LayoutInclusiveGroup();
            //func_00274A00

};

typedef struct {
    int m_overlayId;
    char* m_overlayName;
} overlayInfo;

typedef struct {
    overlayInfo m_overlays[115];
} s_D_0035FC48;

#include "FGDK3/TextRes.h"
#include "FGDK3/Playstation2/MusicRes.h"
#include "FGDK3/NavGraphRes.h"
#include "FGDK3/FontRes.h"

//extern Text_Resources D_0035FB10; // Text
//extern void* D_0035FB28; // Texture
// extern Font_Resources D_0035FB40; // Font
// extern void* D_0035FB58; // Shape
// extern void* D_0035FB70; // Sound
// extern void* D_0035FB88; // Creature
// extern void* D_0035FBA0; // DogsTaleLand
// extern void* D_0035FBB8; // Animation
// extern void* D_0035FBD0; // Script
// extern NavGraph_Resources* D_0035FBE8; // NavGraph
// extern Music_Resources* D_0035FC00; // Music

#ifdef NON_MATCHING
/*const*/ int D_0044F5A0 = 11; // Resource type count


// @ 0x0035FC18
const void* D_0035FC18[] = { // Resources
//     //&D_0035FB10, // Text
// //    &D_0035FB28, // Texture
//     &D_0035FB40, // Font
//     D_0035FB58, // Shape
//     D_0035FB70, // Sound
//     D_0035FB88, // Creature
//     D_0035FBA0, // DogsTaleLand
//     D_0035FBB8, // Animation
//     D_0035FBD0, // Script
//     D_0035FBE8, // NavGraph
//     D_0035FC00, // Music
//     0 // padding?
};
#endif

// @ 0x0035FC48
// overlayInfo D_0035FC48[] = { // Overlays
//     {0, "Editor"},
//     {1, "Root"},
//     {2, "NullBanners"},
//     {3, "NullSection"},
//     {4, "Banners"},
//     {5, "Gem"},
//     {6, "NullMain"},
//     {7, "Main"},
//     {8, "SaveIsland"},
//     {9, "Hicksville"},
//     {10, "SkiResort"},
//     {11, "Town"},
//     {12, "Hicksville_Farmhouse"},
//     {13, "Hicksville_Watermill"},
//     {14, "Hicksville_BigField"},
//     {15, "Hicksville_VillageHouses"},
//     {16, "Hicksville_Centre"},
//     {17, "Hicksville_Centre_Cutscene"},
//     {18, "Hicksville_ChickenFarm"},
//     {19, "SkiResort_Cafe"},
//     {20, "SkiResort_Cafe_Cutscene"},
//     {21, "SkiResort_HighStreet"},
//     {22, "SkiResort_SkiSlope"},
//     {23, "SkiResort_MountainTop"},
//     {24, "SkiResort_MountainSide"},
//     {25, "SkiResort_Hotel"},
//     {26, "Town_Station"},
//     {27, "Town_Park"},
//     {28, "Town_DogPound"},
//     {29, "Town_Centre"},
//     {30, "Town_Finale"},
//     {31, "Town_Finale_Cutscene"},
//     {32, "Town_Epilogue"},
//     {33, "SI_LevelImage"},
//     {34, "H_F_LevelImage"},
//     {35, "H_F_LG_W_LevelImage"},
//     {36, "H_F_LG_W_NUD_LevelImage"},
//     {37, "H_F_LG_WW_LevelImage"},
//     {38, "H_F_LG_WW_NUD_LevelImage"},
//     {39, "H_F_LG_BF_LevelImage"},
//     {40, "H_F_LG_BF_NUD_LevelImage"},
//     {41, "H_F_LG_VH_LevelImage"},
//     {42, "H_F_LG_VH_NUD_LevelImage"},
//     {43, "H_W_LevelImage"},
//     {44, "H_W_LG_FH_LevelImage"},
//     {45, "H_W_LG_FH_NUD_LevelImage"},
//     {46, "H_W_LG_FHW_LevelImage"},
//     {47, "H_W_LG_FHW_NUD_LevelImage"},
//     {48, "H_BF_LevelImage"},
//     {49, "H_BF_LG_FH_LevelImage"},
//     {50, "H_BF_LG_FH_NUD_LevelImage"},
//     {51, "H_BF_LG_CF_LevelImage"},
//     {52, "H_BF_LG_CF_NUD_LevelImage"},
//     {53, "H_C_LevelImage"},
//     {54, "H_C_LG_VH_LevelImage"},
//     {55, "H_C_LG_VH_NUD_LevelImage"},
//     {56, "H_CF_LevelImage"},
//     {57, "H_CF_LG_BF_LevelImage"},
//     {58, "H_CF_LG_BF_NUD_LevelImage"},
//     {59, "H_VH_LevelImage"},
//     {60, "H_VH_LG_FH_LevelImage"},
//     {61, "H_VH_LG_FH_NUD_LevelImage"},
//     {62, "H_VH_LG_C_LevelImage"},
//     {63, "H_VH_LG_C_NUD_LevelImage"},
//     {64, "S_C_LevelImage"},
//     {65, "S_C_LG_HS_LevelImage"},
//     {66, "S_C_LG_HS_NUD_LevelImage"},
//     {67, "S_C_LG_SS_LevelImage"},
//     {68, "S_C_LG_SS_NUD_LevelImage"},
//     {69, "S_HS_LevelImage"},
//     {70, "S_HS_LG_H_LevelImage"},
//     {71, "S_HS_LG_H_NUD_LevelImage"},
//     {72, "S_HS_LG_C_LevelImage"},
//     {73, "S_HS_LG_C_NUD_LevelImage"},
//     {74, "S_HS_LG_MT_LevelImage"},
//     {75, "S_HS_LG_MT_NUD_LevelImage"},
//     {76, "S_HS_LG_SS_LevelImage"},
//     {77, "S_HS_LG_SS_NUD_LevelImage"},
//     {78, "S_SS_LevelImage"},
//     {79, "S_SS_LG_HS_LevelImage"},
//     {80, "S_SS_LG_HS_NUD_LevelImage"},
//     {81, "S_SS_LG_C_LevelImage"},
//     {82, "S_SS_LG_C_NUD_LevelImage"},
//     {83, "S_MT_LevelImage"},
//     {84, "S_MT_LG_HS_LevelImage"},
//     {85, "S_MT_LG_HS_NUD_LevelImage"},
//     {86, "S_MT_LG_MS_LevelImage"},
//     {87, "S_MT_LG_MS_NUD_LevelImage"},
//     {88, "S_MS_LevelImage"},
//     {89, "S_MS_LG_MT_LevelImage"},
//     {90, "S_MS_LG_MT_NUD_LevelImage"},
//     {91, "S_H_LevelImage"},
//     {92, "S_H_LG_HS_LevelImage"},
//     {93, "S_H_LG_HS_NUD_LevelImage"},
//     {94, "T_C_LevelImage"},
//     {95, "T_C_LG_P_LevelImage"},
//     {96, "T_C_LG_P_NUD_LevelImage"},
//     {97, "T_F_LevelImage"},
//     {98, "T_F_LG_DP_LevelImage"},
//     {99, "T_F_LG_DP_NUD_LevelImage"},
//     {100, "T_DP_LevelImage"},
//     {101, "T_DP_LG_P_LevelImage"},
//     {102, "T_DP_LG_P_NUD_LevelImage"},
//     {103, "T_DP_LG_F_LevelImage"},
//     {104, "T_DP_LG_F_NUD_LevelImage"},
//     {105, "T_P_LevelImage"},
//     {106, "T_P_LG_C_LevelImage"},
//     {107, "T_P_LG_C_NUD_LevelImage"},
//     {108, "T_P_LG_DP_LevelImage"},
//     {109, "T_P_LG_DP_NUD_LevelImage"},
//     {110, "T_P_LG_S_LevelImage"},
//     {111, "T_P_LG_S_NUD_LevelImage"},
//     {112, "T_S_LevelImage"},
//     {113, "T_S_LG_P_LevelImage"},
//     {114, "T_S_LG_P_NUD_LevelImage"},
//     {115, "Demo"}
//
//     };

// D_0035FFF0 // Actors
// {0, "Null"},
// {1, "Engine"},
// {2, "Camera"},
// {3, "Dynamic1"},
// {4, "Dynamic2"},
// {5, "Dynamic3"},
// {6, "Dynamic4"},
// {7, "Dynamic5"},
// {8, "Dynamic6"},
// {9, "Dynamic7"},
// {10, "Dynamic8"},
// {11, "Dynamic9"},
// {12, "Dynamic10"},
// {13, "Dynamic11"},
// {14, "Dynamic12"},
// {15, "Dynamic13"},
// {16, "Dynamic14"},
// {17, "Dynamic15"},
// {18, "Dynamic16"},
// {19, "Dynamic17"},
// {20, "Dynamic18"},
// {21, "Dynamic19"},
// {22, "Dynamic20"},
// {23, "Gem"},
// {24, "GemShakeParticles"},
// {25, "GemFartScent"},
// {26, "Gem2"},
// {27, "GameStateGod"},
// {28, "HintGod"},
// {29, "MusicGod"},
// {30, "Shit"},
// {31, "GemShitScent"},
// {32, "TrickTreat"},
// {

#ifdef NON_MATCHING
const char* D_003665C0[] = {
    "Text",
    "Texture",
    "Font",
    "Shape",
    "Sound",
    "Creature",
    "DogsTaleLand",
    "Animation",
    "Script",
    "NavGraph",
    "Music",
    0 // padding?
};

const int D_003665F0[] = { // Resource counts
    283, // Text
    1191, // Texture
    2, // Font
    322, // Shape
    237, // Sound
    155, // Creature
    5, // DogsTaleLand
    1445, // Animation
    297, // Script
    281, // NavGraph
    1025, // Music
    0 // padding?
};


const char* D_00366620[] = { // Text names
    "NewGame",
    "NewGameOverOld",
    "SaveGameOverOld",
    "NewGameOverOldAreYouSure",
    "SaveGameOverOldAreYouSure",
    "LoadGame",
    "SaveGame",
    "ResumeGame",
    "SelectPage",
    "Moves",
    "SitDownAndDown",
    "SitUpAndStand",
    "ShakeBody",
    "Beg2",
    "Beg1",
    "Beg3",
    "Fart",
    "PeeLeft",
    "PeeRight",
    "Beg4",
    "Beg5",
    "Bark",
    "TitleOpts",
    "Setting_Title",
    "Setting_ScreenPosition",
    "Setting_ScreenPosition_Help0",
    "Setting_ScreenPosition_Help1",
    "Setting_Rumble",
    "Setting_Rumble_Help0",
    "Setting_Rumble_Help1",
    "Setting_PawController",
    "Setting_PawController_Help0",
    "Setting_PawController_Help1",
    "Setting_SoundEffects",
    "Setting_SoundEffects_Help0",
    "Setting_SoundEffects_Help1",
    "Setting_Music",
    "Setting_Music_Help0",
    "Setting_Music_Help1",
    "Setting_Widescreen",
    "Setting_Widescreen_Help0",
    "Setting_Widescreen_Help1",
    "Setting_Language",
    "Setting_Language_Help",
    "Setting_Cheats",
    "Setting_Cheats_Help",
    "Setting_Quit_Help",
    "Setting_Back_Help",
    "QuitGame",
    "QuitGame_AreYouSure",
    "Back",
    "Setting_On",
    "Setting_Off",
    "Title_PlayGame0",
    "Title_PlayGame1",
    "Title_Settings0",
    "Title_Settings1",
    "Title_Quit0",
    "Title_Quit1",
    "Cheats_Title",
    "Cheat_DogStatus",
    "Cheat_DogStatus_Help0",
    "Cheat_DogStatus_Help1",
    "Cheat_Clues",
    "Cheat_GotoLevel",
    "Cheat_GotoLevel_Help0",
    "Cheat_GotoLevel_Help1",
    "Cheat_DogLocation",
    "Cheat_SwitchDog",
    "Cheat_SwitchDog_Help",
    "Cheat_CollectAll",
    "Cheat_CollectAll_RedScents",
    "Cheat_CollectAll_GreenScents",
    "Cheat_CollectAll_BlueScents",
    "Cheat_CollectAll_YellowScents",
    "Cheat_CollectAll_PurpleScents",
    "Cheat_CollectAll_VioletScents",
    "Cheat_CollectAll_PinkScents",
    "Cheat_CollectAll_OrangeScents",
    "Cheat_CollectAll_CyanScents",
    "Cheat_CollectAll_Moves",
    "Cheat_CollectAll_Help0",
    "Cheat_CollectAll_Help1",
    "Cheat_Save",
    "Cheat_Save_Help",
    "Text_Bones",
    "Text_GameSavedSuccessfully",
    "Text_Yes",
    "Text_No",
    "NoController1",
    "NoController2",
    "Text_Loading",
    "Text_LoadSuccessful",
    "Text_LoadFailed",
    "Text_SaveSlotUnused",
    "Text_LangSelection",
    "Text_LoadingGame",
    "Memcard_CannotAccessDeviceSlot1",
    "Memcard_NotPresentSlot1",
    "Memcard_NotFormattedSlot1",
    "Memcard_NoSaveFile1",
    "Memcard_NotEnoughSpaceSlot1",
    "Memcard_FailedToFormat",
    "Memcard_FailedToCreateDirectory",
    "Memcard_DoingFormat1",
    "Memcard_DoingCreateSaveFile1",
    "Memcard_DoingSave1",
    "Memcard_CheckingMemoryCard",
    "Memcard_SelectSaveSlot",
    "Memcard_Corrupt",
    "Memcard_SaveFailed",
    "Memcard_RemovedWarning",
    "Hint_HowToEnterNUD",
    "Hint_HowToBark",
    "Hint_HowToSitWhileStanding",
    "Hint_HowToSitWhileLying",
    "Hint_HowToLieWhileStanding",
    "Hint_HowToLieWhileSitting",
    "Hint_HowToStandWhileSitting",
    "Hint_HowToStandWhileLying",
    "Hint_HowToSniff",
    "Hint_HowToPickup",
    "Text_TheEnd",
    "Text_BarkToTalk",
    "Hint_HowToControlDog",
    "Hint_HowToReturnToGem",
    "Hint_YouCanCommandDog",
    "Hint_HowToFreezeDog",
    "Hint_CommandHigherStatus",
    "Hint_HowToDig",
    "Hint_HowToGrab",
    "Hint_HowToLetGo",
    "Hint_HowToThrow",
    "Hint_HowToPress",
    "Hint_SaveKennel",
    "Hint_Pee",
    "Hint_WiggleStickToDig",
    "Hint_TugOfWar",
    "Hint_FoundFootprintTrail",
    "Text_PressXToContinue",
    "BigHint_CollectBones",
    "BigHint_Controls",
    "BigHint_NUD",
    "BigHint_BegMoves",
    "BigHint_CollectGreenScents",
    "BigHint_BestingChallengeFailed",
    "BigHint_DontForgetSmellovision",
    "BigHint_GroundedKidsMum",
    "BigHint_FindTrail",
    "BigHint_FindTrailNUD",
    "BigHint_DoggyDo",
    "BigHint_ScentMarking",
    "BigHint_DogRace",
    "BigHint_Pursuit",
    "BigHint_DiggingRace",
    "BigHint_TugOfWar",
    "BigHint_BlueScents",
    "BigHint_VioletScents",
    "BigHint_PurpleScents",
    "BigHint_RedScents",
    "BigHint_GreenScents",
    "BigHint_YellowScents",
    "BigHint_CyanScents",
    "BigHint_OrangeScents",
    "BigHint_PinkScents",
    "BigHint_DogCatcher",
    "BigHint_BriberyBone",
    "BigHint_HerdSheep",
    "Text_PressStart",
    "Text_SelectForOptions",
    "Text_SonyCopyright",
    "Text_SelectSaveSlot",
    "Text_SelectSaveSlotAnalog",
    "Text_InsertGameDisc",
    "BigHint_BoneHighlight",
    "Paw_Smellovision",
    "Paw_NormalView",
    "Paw_Pee",
    "Paw_LetGo",
    "Paw_Throw",
    "Paw_Dig",
    "Paw_PickUp",
    "Paw_PressButton",
    "Paw_Grab",
    "Paw_Talk",
    "Paw_GiveUp",
    "Paw_Bark",
    "Paw_Jump",
    "TitleNoMemoryCardQuestion",
    "Credits_Director",
    "Credits_Producer",
    "Credits_Music",
    "Credits_Concept",
    "Credits_Script",
    "Credits_Intro",
    "Credits_GameProgramming",
    "Credits_EngineProgramming",
    "Credits_Art",
    "Credits_Cutscenes",
    "Credits_Sound",
    "Credits_FrontierQASupervision",
    "Credits_FrontierAdditionalQA",
    "Credits_Representation",
    "Credits_SpecialThanks",
    "Credits_Thanks",
    "Credits_AssociateProducer",
    "Credits_JuniorProductManager",
    "Credits_SeniorProducers",
    "Credits_PRManager",
    "Credits_SoftMarketingManager",
    "Credits_EuroReleaseManager",
    "Credits_VicePresExternalDev",
    "Credits_SoftDevManager",
    "Credits_ExtDevCoordinator",
    "Credits_SonyQAManager",
    "Credits_SonyIntQAManager",
    "Credits_SonyIntQASupervisor",
    "Credits_SonyQALeadTester",
    "Credits_SonyQATesters",
    "Credits_Duplication",
    "Credits_LeadTRCAuditor",
    "Credits_TRCAuditors",
    "Credits_PlanningAndLocManager",
    "Credits_SoftwareOpsCoordinator",
    "Credits_LocSupervisor",
    "Credits_LocLeadTester",
    "Credits_LocTesters",
    "Credits_QASubSupervisor",
    "Credits_ManualAndPackText",
    "Credits_ManualAndPackDesign",
    "Credits_ManualApproval",
    "Credits_PrintProduction",
    "Credits_Sony1",
    "Credits_Sony2",
    "Credits_Sony3",
    "Credits_Sony4",
    "Credits_Sony5",
    "Credits_Sony6",
    "Credits_Frontier",
    "Credits_FrontierWeb",
    "Credits_DirectorContent",
    "Credits_ProducerContent",
    "Credits_MusicContent",
    "Credits_ConceptContent",
    "Credits_ScriptContent",
    "Credits_IntroContent",
    "Credits_GameProgrammingContent",
    "Credits_EngineProgrammingContent",
    "Credits_ArtContent",
    "Credits_CutscenesContent",
    "Credits_SoundContent",
    "Credits_FrontierQASupervisionContent",
    "Credits_FrontierAdditionalQAContent",
    "Credits_RepresentationContent",
    "Credits_SCEE",
    "Credits_AssociateProducerContent",
    "Credits_JuniorProductManagerContent",
    "Credits_SeniorProducersContent",
    "Credits_PRManagerContent",
    "Credits_SoftMarketingManagerContent",
    "Credits_EuroReleaseManagerContent",
    "Credits_VicePresExternalDevContent",
    "Credits_SoftDevManagerContent",
    "Credits_ExtDevCoordinatorContent",
    "Credits_SonyQAManagerContent",
    "Credits_SonyIntQAManagerContent",
    "Credits_SonyIntQASupervisorContent",
    "Credits_SonyQALeadTesterContent",
    "Credits_SonyQATestersContent",
    "Credits_DuplicationContent",
    "Credits_LeadTRCAuditorContent",
    "Credits_TRCAuditorsContent",
    "Credits_PlanningAndLocManagerContent",
    "Credits_SoftwareOpsCoordinatorContent",
    "Credits_LocSupervisorContent",
    "Credits_LocLeadTesterContent",
    "Credits_LocTestersContent",
    "Credits_QASubSupervisorContent",
    "Credits_ManualAndPackTextContent",
    "Credits_ManualAndPackDesignContent",
    "Credits_ManualApprovalContent",
    "Credits_PrintProductionContent",
    "LevelTitle",

};

const char* D_00366A90[] = { // Texture names
    "VirtualHotDog",
    "VirtualDogCollar",
    "VirtualDogTag",
    "camera",
    "construct",
    "cross3d",
    "lightdirection",
    "lightpoint",
    "lightspot",
    "particles",
    "query",
    "ring",
    "speaker",
    "scent",
    "Ball",
    "BaseFont",
    "Blaar",
    "black",
    "BlankPageLeft",
    "BlankPageRight",
    "BMDarkBlueScent",
    "BMGreenScent",
    "BMLightBlueScent",
    "BMOrangeScent",
    "BMPinkScent",
    "BMPurpleScent",
    "BMRedScent",
    "BMVioletScent",
    "BMYellowScent",
    "bone",
    "BoneAppearParticle",
    "BoneAppearParticle2",
    "bonehighlight",
    "BoneScentParticle",
    "Book",
    "Bookfence",
    "brass",
    "bridgewood",
    "brown",
    "ButtonCircle",
    "ButtonCross",
    "ButtonL1",
    "ButtonL2",
    "ButtonR1",
    "ButtonR2",
    "ButtonSquare",
    "ButtonTriangle",
    "cablecarglass",
    "carchrome",
    "clue01",
    "dig",
    "DigDust",
    "digParticle",
    "Dogbowl",
    "DogFartScentParticle",
    "DogKennel",
    "DogScentParticle",
    "DPadDown",
    "DPadLeft",
    "DPadRight",
    "DPadUp",
    "DrawSolidColour",
    "DrawSolidColourNoZWrite",
    "edgepapers",
    "FartScentParticle",
    "finishline",
    "Foodstuffs",
    "FootDust",
    "FootPrintBoneBoot",
    "FootPrintBoneDog",
    "FootPrintBoot",
    "FootPrintFox",
    "FootPrintFoxVisible",
    "FootPrintHumanVisible",
    "GUINumber",
    "HotDogNose",
    "Jake",
    "Jakebowl",
    "JakeEyes",
    "Lightbulb",
    "LightbulbEmissive",
    "LucidaConsole",
    "Mat",
    "NewGamePicture",
    "note",
    "nudmask",
    "nullbmp",
    "nulltex",
    "numb2",
    "outsidegroundDark",
    "outsidegroundLight",
    "Page1",
    "Page1Backing",
    "Page2",
    "Page27Bones",
    "Page28Bones",
    "Page29Bones",
    "Page2Bone1",
    "Page2Bone2",
    "Page2Bone3",
    "Page2Bone4",
    "Page2Bone5",
    "Page2Bone6",
    "Page2Bone7",
    "Page2Bone8",
    "Page2Bone9",
    "Page3",
    "Page4",
    "Pagecolors",
    "PawController",
    "pedican",
    "PersonBoneScentParticle",
    "PersonScentParticle",
    "picture",
    "PinkScentParticle",
    "puffblack",
    "puffgrey",
    "puffred",
    "puffwhite",
    "scentGroundBlue",
    "scentGroundCyan",
    "scentGroundDarkBlue",
    "scentGroundExploreChallenge",
    "scentGroundGreen",
    "scentGroundOrange",
    "scentGroundPursuit",
    "scentGroundRed",
    "scentGroundYellow",
    "scentIconBlue12",
    "scentIconCyan8",
    "scentIconDarkBlue12",
    "scentIconExploreChallenge50",
    "scentIconGreen8",
    "scentIconOrange8",
    "scentIconPursuit8",
    "scentIconRed4",
    "scentIconYellow8",
    "Shadow",
    "shit02",
    "skilifttransparent",
    "SpecialScentParticleBlue",
    "SpecialScentParticleCyan",
    "SpecialScentParticleDarkBlue",
    "SpecialScentParticleExploreChallenge",
    "SpecialScentParticleGreen",
    "SpecialScentParticleOrange",
    "SpecialScentParticlePursuit",
    "SpecialScentParticleRed",
    "SpecialScentParticleWhite",
    "SpecialScentParticleYellow",
    "spot",
    "starschrome",
    "taslles",
    "treat",
    "treatShadow",
    "treatTranslucent",
    "TuneScentParticle",
    "Wood",
    "PublisherPresents1",
    "PublisherPresents2",
    "PublisherPresents3",
    "PublisherPresents4",
    "Title1",
    "Title2",
    "Title3",
    "Title4",
    "CollarRed",
    "CollarPurple",
    "CollarGreen",
    "CollarYellow",
    "CollarBlue",
    "CollarBlackWhite",
    "CollarLightBlue",
    "CollarMultiColour",
    "CollarChrome",
    "CollarBondage",
    "TagRed",
    "TagPurple",
    "TagGreen",
    "TagYellow",
    "TagBlue",
    "TagBlackWhite",
    "TagLightBlue",
    "TagMultiColour",
    "TagChrome",
    "TagBondage",
    "JakeMuddy",
    "WaterSplosh",
    "paw",
    "Arrow",
    "barrier",
    "chikfence",
    "ClothShiny",
    "DirtRoad",
    "DirtRoadBlend",
    "DirtRoadNoShadow",
    "fence",
    "fencetop",
    "flowerbedshadow",
    "foliage3",
    "frothybit",
    "Grampas01",
    "Grampas02",
    "grasshigh",
    "GrassHighButtercup",
    "GrassHighDaisies",
    "GrassHighNoShadow",
    "Hickland04",
    "Hickland05",
    "Hickland06",
    "Hickopenground",
    "HickOpenGroundEnd",
    "HickTractor",
    "Hicktrees",
    "highclouds2",
    "highclouds3",
    "jumpshadow",
    "lboxshad",
    "MiniPinscher",
    "paddockshadow",
    "Polewood",
    "Polewood2",
    "RiverLeaf1",
    "RiverSurface",
    "Rockwall",
    "RockwallEnd",
    "RockwallSolid",
    "SaveIslandFenceShadow",
    "shadowf",
    "signshad",
    "singleflower",
    "sky01",
    "sky02",
    "sky03",
    "sky04",
    "Stonepath",
    "Strawbale",
    "sun",
    "teleshadow",
    "telewire",
    "topsky",
    "treebridgering",
    "treeshadow",
    "trsteering",
    "waterfall3",
    "barkdog",
    "basket",
    "Bee",
    "dalwht",
    "sunStar",
    "WaterCurtainSplash",
    "WaterRipple",
    "BankedPS20019",
    "BirdFeederPeanuts",
    "BirdFeederPlank",
    "DogRaceIcon1",
    "EllieSkiCoatBody",
    "FenceshadowAlpha",
    "hat2",
    "injuredclimberbackpack",
    "liftattendantbody",
    "mountainbkd01",
    "mountainbkd02",
    "mountainbkd03",
    "mountainbkd04",
    "SkiResortfenceroof",
    "skirock",
    "skirock2",
    "skirockends",
    "skisnow",
    "SkiTrail",
    "snowflake",
    "tomatosplat",
    "trashcan",
    "trashcanlid2",
    "Treeleaves",
    "Amp",
    "Amps",
    "BaldHenbod1",
    "ballboard",
    "BanjoPlayerClothes",
    "BanjoPlayerHeads",
    "barn01",
    "barnbars",
    "barnmesh",
    "barntrack",
    "Barrel",
    "basketballnet",
    "baskethoop",
    "Battery",
    "beehives",
    "Bubble",
    "cablecarglassHicksville",
    "cardboardbox",
    "Chain01",
    "chihuabod1",
    "Clothesline03",
    "daljaw",
    "Dogbox",
    "DogRaceIcon2",
    "Electric",
    "farmblinds",
    "farmhouse1",
    "farmhouse2",
    "farmhouse3",
    "FarmhouseKitchen",
    "Feather",
    "glass",
    "glass4x4",
    "Grampa",
    "Grampabody",
    "Gramps",
    "Grampsoldcar",
    "GrassHighBlend",
    "Henbod1",
    "Henbod2",
    "Henbod3",
    "HickChromeMap",
    "horse1",
    "horsehead",
    "Horsesign01",
    "horsetail",
    "JakeMat",
    "jasonbody",
    "jasonhead",
    "Kitchencurtains",
    "Kitchenfloor",
    "Kitchentop",
    "lightrays",
    "logsside",
    "microwave",
    "newside03",
    "newside04",
    "PeachCarStick",
    "pigeon",
    "plank",
    "pumparow",
    "pumpiron",
    "pumpmill",
    "pumptrans",
    "radio",
    "ratbrown",
    "raven2",
    "RealtDriver",
    "rowingboatside",
    "rowingboatwood",
    "RTrout02",
    "saw",
    "sheriffwood",
    "steering4x4",
    "Straw",
    "Underwaterfall3",
    "Wateredge",
    "watermud",
    "whiskeybottle",
    "BankedPS20030",
    "BankedPS20031",
    "axe",
    "barnroof",
    "barrel1",
    "bordertree",
    "branches3",
    "Cavepath2",
    "Caverock1",
    "crates",
    "Dalmatian",
    "GrassHighWalkWay",
    "GrassPatch",
    "Hankerchief",
    "Hickgravel",
    "Hickhaybail",
    "Hickroad",
    "hillpathshadow",
    "houselintle",
    "housewalls2",
    "millwheelbase",
    "pulleyshadow",
    "pulleyshadow2",
    "QuarrySign",
    "RocketManBody",
    "RocketManHead",
    "RocketManHead01",
    "RocketManHeadShiny",
    "Rocketsign",
    "RockGrass",
    "rope",
    "sawmillwall",
    "sawyerbody",
    "sawyerhead",
    "Skunk",
    "SkunkBald",
    "SkunkFur",
    "SkunkSpray",
    "Swans",
    "telebird",
    "thinfenceshadow",
    "transparentpoly",
    "TugLineBlue",
    "TugLineRed",
    "Waterflow",
    "WatermillpathEnd",
    "WatermillpathMiddle",
    "BankedPS20038",
    "BankedPS20039",
    "BankedPS20040",
    "ArgsHead",
    "bagofletters",
    "Field",
    "Fieldedge",
    "Mud",
    "pediballoon",
    "planks2",
    "PloughFarmerBody",
    "PloughFarmerBodyShiny",
    "PloughFarmerHead",
    "postmanbody",
    "postmanhead",
    "postvanback",
    "postvanfront",
    "postvaninterior",
    "ScareCrow",
    "ScareCrowStraw",
    "sheepbod1",
    "SheepDog",
    "shepherdbody",
    "shepherdhead",
    "signpost",
    "treestumpAlpha",
    "treetrunkAlpha",
    "vanchrome",
    "BankedPS20020",
    "arrowdown",
    "arrowup",
    "bark",
    "base",
    "brick",
    "carglass",
    "carside",
    "CatFur",
    "catskinbald",
    "catskinbw",
    "chrome",
    "doll",
    "garden",
    "grasshighedge",
    "GroundedKidBody",
    "GroundedKidHead",
    "GroundedKidsMumBody",
    "GroundedKidsMumHair",
    "GroundedKidsMumHead",
    "Gum",
    "GumChrome",
    "GumMetal",
    "GumRed",
    "Kid2Body",
    "Kid2Head",
    "metal",
    "metalpipe",
    "MopedBody",
    "MopedBody2",
    "MopedRubber",
    "noshadowhickroad",
    "noshadowroad4",
    "noshadowsandtarmac",
    "Officefilingcabinet",
    "Officepicture01",
    "Officepicture02",
    "Parrot",
    "ParrotFeather",
    "passerby1",
    "passerby2",
    "plant",
    "pram",
    "pramwomanbody",
    "pramwomanhair",
    "pramwomanhead",
    "PrkRoom01",
    "pupbod1",
    "reddark",
    "Russell",
    "vhblinds",
    "vhbluewall",
    "vhbrick",
    "vhbrownwalls",
    "vhedges",
    "vhfence",
    "vhfloor",
    "vhfloorshadow",
    "vhplaster",
    "vhposts",
    "vhroofs",
    "vhshutters",
    "vhwalls",
    "vhwindow",
    "villfencewhite",
    "BankedPS20032",
    "BankedPS20033",
    "BankedPS20034",
    "BankedPS20035",
    "BankedPS20036",
    "BankedPS20037",
    "archtest",
    "archtrim",
    "archtrim2",
    "barpannles",
    "bookstore",
    "butcher",
    "butcherbody",
    "butcherhead",
    "Butchernoalpha",
    "butchersinner",
    "bwhfloor",
    "bwhrailing",
    "cablecarfloor",
    "Cafefloor",
    "cashreg",
    "catcherdog",
    "ChickenSign",
    "Chickfence",
    "Chickfencshadow",
    "conc",
    "courtyardfloor",
    "DogbowlMatte",
    "DogcatcherCutSceneBody",
    "DogcatcherHickHead",
    "dogcatchernet",
    "Doggieparlour",
    "eggboybody",
    "eggboyhead",
    "EggGirlBody",
    "EggGirlHead",
    "farmcurtains",
    "FoodstuffShiny",
    "fridge",
    "fridgecontent",
    "healthydogs",
    "healthydogsShiny",
    "maggies",
    "mailbox",
    "NewHickroadtransit",
    "officewall",
    "passerby1props",
    "passerby1propsshiny",
    "passerby1propsshinyglass",
    "PediDryPack",
    "plainwall",
    "Posters",
    "ratwhite",
    "road4",
    "s2walls",
    "sandtarmac",
    "Shelves",
    "Shoppingfloor",
    "SkiShopFloor",
    "sodadisp",
    "stationfloor",
    "stationgravel",
    "StationPoleShadow",
    "stationroof",
    "stationtrack",
    "taxibacknew",
    "taxifrontnew",
    "taxiglass",
    "taxiwheel3",
    "train",
    "traincarriage",
    "traintanker",
    "trainwheels",
    "twndirtyshopbrik",
    "Twnfence2",
    "Twnlightpost",
    "twnpharmacybot",
    "twnwhiteapartment",
    "twnwhiteapartmentwall",
    "tyre4x4",
    "underplatform",
    "usflag",
    "woodforchair",
    "BankedPS20021",
    "BankedPS20022",
    "BankedPS20023",
    "BankedPS20024",
    "crate",
    "DwayneBody",
    "DwayneBodyShiny",
    "DwayneChrome",
    "DwayneEyes",
    "DwayneHead",
    "DwayneHeadShiny",
    "Marble",
    "newinterior",
    "Peachcan",
    "Peaches01a",
    "Peaches02",
    "PeachesBackDrop",
    "PeachesBrushedMetal",
    "PeachesChair",
    "PeachesChairEmboss",
    "PeachesEyes",
    "PeachesGold",
    "PeachesMarbleGolden",
    "PeachesMarbleGoldenDarker",
    "PeachesOfficeMisc",
    "PeachesPotrtrait",
    "PeachesShadow",
    "PeachesWall",
    "Peacheswindows",
    "Peacheswood",
    "Plan",
    "roof",
    "SignMiniWahah",
    "station",
    "truckback",
    "truckfront",
    "Truckgrill",
    "truckinterior",
    "twnpharmacytop",
    "twnshopstop03",
    "Wayne01",
    "Wayne01Shiny",
    "Wayne02",
    "Wayne02Shiny",
    "WayneGlasses",
    "windowblinds2",
    "BankedPS20060",
    "BankedPS20061",
    "BankedPS20062",
    "barier",
    "chickenfarmerbody",
    "chickenfarmerhead",
    "Chickenmud",
    "ChickenPathEnd",
    "ChickenPathMiddle",
    "Chickfarmblinds",
    "Chickfarmplanks",
    "Chickfarmroof",
    "Chickfarmstones",
    "Chickfarmwall",
    "ChickPorchshadow",
    "FoxSkin",
    "grampaplanks2",
    "grassedge",
    "Hickhay",
    "hictrucklight",
    "Leaves",
    "lowtree",
    "maddog",
    "PaperScrap",
    "RealtoVanBumperRear",
    "realtovantimber",
    "shotgun",
    "BankedPS20025",
    "BankedPS20026",
    "BankedPS20027",
    "BankedPS20028",
    "BankedPS20029",
    "Alsatian",
    "antennametal",
    "Boxer",
    "Cafecanopy",
    "Cafemenusign",
    "cafeownerbody",
    "cafeownerhead",
    "CafeRailings",
    "Cafesnowplanks",
    "Cafetablecloth",
    "Cafewall",
    "Cafewallpaper",
    "carparking",
    "Cop01",
    "Copbits",
    "Copbitsshiny",
    "DogcatcherSkiHead",
    "EllieSkiBody",
    "EllieSkiHead",
    "FunCrane1",
    "FunCrane2",
    "HotelLounger",
    "HotRod1",
    "Lampost",
    "LemonAndMelon",
    "MallBottomWalls",
    "Noshadowskisnow",
    "noshineHotRod1",
    "Pierboat",
    "Pierplanks",
    "Policelight",
    "Redvan",
    "sheriffbody",
    "sheriffhead",
    "skichrome",
    "Skidoo",
    "SkidooNoShine",
    "Skidtrack",
    "skier1body",
    "skier1head",
    "skigravel",
    "skiiceCafe",
    "skipath",
    "SkiResortflagstones",
    "SkiResortSkis",
    "skiroad",
    "skistone",
    "SlotMachine",
    "SlotMachineShiny",
    "Stationbenchsides",
    "Stationbenchwood",
    "Stationplatform",
    "stationtrack2",
    "Stationwoodslats",
    "teltpole",
    "traywood",
    "Treebark",
    "treeshadowice",
    "vanwheel",
    "BankedPS20045",
    "BankedPS20046",
    "BankedPS20047",
    "BankedPS20048",
    "Cafecakestands",
    "Cafefridgetop",
    "Cafeshelfcloth",
    "riverclouds",
    "skiice",
    "Stationbrickwork",
    "Stationrooftop",
    "treeshadowAlpha",
    "BankedPS20063",
    "BankedPS20064",
    "BankedPS20065",
    "BankedPS20066",
    "BankedPS20067",
    "BankedPS20068",
    "BasicShadowAlpha",
    "bluevan",
    "Boxes",
    "cablecar",
    "Cablecarbrick",
    "cablecarmatte",
    "Cbfencesnow",
    "Cbgrill",
    "Cbmetalpillars",
    "Cbofficewood",
    "Cbunderroof",
    "Chateauwalls",
    "Chateauwindows",
    "controller",
    "FemalePasserby3",
    "Hat",
    "helicopter",
    "helicopterkidbody",
    "helicopterkidhead",
    "helicopterrotor",
    "Hotel2fence",
    "Hotel2walls",
    "hotelpatronbody",
    "hotelwindows",
    "hotelwoodwalls",
    "Husky",
    "loosesnow",
    "mallcafedoor",
    "mallcafeside",
    "mallcafesign",
    "mallcafewindows",
    "mallflagpost",
    "mallflags",
    "mallhotellsign",
    "mallsnowtiles",
    "malltiles",
    "mallwoodslats",
    "Officeradio02",
    "RadioDust",
    "RadioSpring",
    "Skidskis",
    "skiicerun",
    "SkiResortchrome",
    "SkiResortStationbrickwall",
    "SkiShopShoes",
    "SkiSportWall",
    "SnowGlass",
    "telegrapherbody",
    "telegrapherhead",
    "BankedPS20056",
    "BankedPS20057",
    "BankedPS20058",
    "BankedPS20059",
    "boiler",
    "Cafeceiling",
    "Cafechairseat",
    "Cbmetalstrut",
    "controlpanel",
    "controlstand",
    "floortiles",
    "Hotel2wood",
    "Hotelwood",
    "Lampostlight",
    "liftattendanthead",
    "mountaincafe",
    "pading",
    "pading2",
    "skier2body",
    "skier2head",
    "SkierSign",
    "Skiheledge",
    "skiliftcontrol",
    "skilifttopwall",
    "skiliftwall",
    "SkiResortglass",
    "SkiResortwhiteroof",
    "skiruntesta",
    "skistationpath",
    "snowman",
    "snowmanmk2",
    "TobogganGirlBody",
    "TobogganGirlHead",
    "toboggankid2body",
    "toboggankid2head",
    "toboggankid3body",
    "toboggankid3head",
    "tobwood",
    "TowershadowAlpha",
    "Weimaraner",
    "BankedPS20053",
    "BankedPS20054",
    "BankedPS20055",
    "AntennaSign",
    "antennatop",
    "BridgeRope",
    "BridgeRopesides",
    "cablecarmanbody",
    "cablecarmanhead",
    "Cablemansglass",
    "Cbcrate",
    "Cbfloor",
    "Cbtopcogs",
    "ccodoor",
    "CobraSkin",
    "CobraSkinShiny",
    "injuredclimberbody",
    "injuredclimberhead",
    "Logend",
    "logwood",
    "logwoodsnow",
    "Mastiff",
    "MountainSign",
    "skisnowice",
    "stbernard",
    "supportshadowAlpha",
    "treebridgebark",
    "BankedPS20050",
    "BankedPS20051",
    "BankedPS20052",
    "antennamiddle",
    "boulder",
    "Cablecarstand",
    "satellite",
    "BankedPS20049",
    "barcanopy",
    "bardoor",
    "barfridge",
    "barpannels2",
    "bartenderbody",
    "bartenderhead",
    "barwall",
    "barwoodfloor",
    "BottlesNKeys1",
    "branches",
    "cartyre",
    "carwheel",
    "churchwalls",
    "fridgeglass",
    "Hotelcarpet",
    "hotelceiling",
    "hotelentertainerbody",
    "hotelentertainerhead",
    "Hotelgreybrick",
    "hotelierbody",
    "hotelierhead",
    "HotelLounger1",
    "HotelLounger2",
    "Hotelmarblearch",
    "Hotelmarblewall",
    "Hotelpaper",
    "Hotelpillar",
    "Hotelrailings",
    "Hotelstairs",
    "innerbardoors",
    "Kitchentiles",
    "LampGlass",
    "Organ",
    "pictures",
    "ratgrey",
    "shiny",
    "shinymetal",
    "SkiGold",
    "skiruntest",
    "tomato",
    "Wigs",
    "BankedPS20041",
    "BankedPS20042",
    "BankedPS20043",
    "BankedPS20044",
    "archtile",
    "bigdoor",
    "bwhblinds1",
    "bwhblinds2",
    "bwhblinds3",
    "bwhframes",
    "bwhwall",
    "bwhwindows2",
    "carpet",
    "corigate",
    "crateroped",
    "crateroped01",
    "dirtywall",
    "distwall",
    "distwall3",
    "distwall5",
    "Elecinz01",
    "Filecab",
    "Grill02",
    "highclouds2a",
    "highrise",
    "highrise3",
    "Ladder",
    "lowerwall",
    "lowerwall01",
    "mask",
    "RainDrop",
    "RainSplash",
    "robberbody",
    "robbergun",
    "robberhead",
    "rooftrim",
    "roundwindow",
    "s2floor",
    "stationbrick",
    "StationLock",
    "stationmetal",
    "SwagBag01",
    "timber",
    "TownShadow2",
    "toys",
    "tunent",
    "tunpiller",
    "twncrane",
    "Twnfence",
    "TwnFenceShadow",
    "Twngrass",
    "Twngrasspath2",
    "Twnpavement1",
    "Twnpavementcorner",
    "Twnpebbles",
    "TwnRoad3",
    "TwnRoadbend",
    "Twnsewerlid",
    "twnshopcanopy",
    "Twnsky01",
    "Twnsky02",
    "Twnsky03",
    "Twnsky04",
    "Twntiles1",
    "Twnwall3",
    "wallend",
    "whitewash",
    "window",
    "windowtest",
    "BankedPS20011",
    "BankedPS20012",
    "BankedPS20013",
    "BankedPS20014",
    "BankedPS20015",
    "BankedPS20016",
    "BankedPS20017",
    "BankedPS20018",
    "Acousticguitar",
    "Buskerclothes",
    "Buskerhead01",
    "catskin",
    "DogcatcherCutSceneHead",
    "doggrassdrooping",
    "doggrassyellow2",
    "doggrassyellowgreen",
    "doghouserims",
    "dogmud",
    "dogmudwater",
    "Dognote",
    "dogpoundmuddetails",
    "dogpoundmudgreen",
    "dogtree",
    "dogwhitefence",
    "GemSkin",
    "guitarstring",
    "highrise2",
    "KittenLady",
    "KittenLadyDress",
    "ParkKitchen",
    "Prkbench1",
    "Prkbricksteps",
    "Prkcorrugate",
    "Prkcorrugate2",
    "Prkcoving",
    "Prkdoor",
    "Prkdoorupper",
    "Prkdoorupper2",
    "Prkdpbuildfront",
    "Prkdpbuildside1",
    "Prkdpbuildside2",
    "Prkflowerbed1",
    "Prkglass",
    "Prkicecreambanner",
    "Prkicecreamstand",
    "Prkmusicthingy1",
    "Prkparkbush",
    "Prkplant3",
    "Prkrailingmetal",
    "Prkrailings",
    "Prkredbrick",
    "Prkredbrick2",
    "Prkredroof",
    "Prkrooftop",
    "PrkRoom02",
    "Prksheriffont2",
    "Prkshutters",
    "Prksmallfence",
    "Prksoil",
    "Prkstatue1",
    "Prkstonepath",
    "Prkthingyfence1",
    "Prkthingyornament",
    "Prktree",
    "Prktreebark",
    "Prkwall2",
    "Prkwall4",
    "Prkwalltop2",
    "Prkwhitebrick",
    "Prkyellowwall",
    "TruckDriver",
    "TVandsofa",
    "Twnlampshadows",
    "Twnpavement2",
    "TwnRoad4",
    "BankedPS20005",
    "BankedPS20006",
    "BankedPS20007",
    "BankedPS20008",
    "BankedPS20009",
    "BankedPS20010",
    "BasicShadow",
    "doghousedoor",
    "doghouseplanks",
    "doghouseporch",
    "doghouseroof",
    "doghouseroundwindow",
    "doghousewindows",
    "dogpound1",
    "dogpound2",
    "dogpound3",
    "dogpound4",
    "dogpoundclouds2",
    "dogpoundclouds3",
    "dogspikedfence",
    "Padlock1",
    "poundtopsky",
    "railsshad",
    "treeshad",
    "Alupipe",
    "barclock",
    "barwall2",
    "Bigbobsautoshop",
    "blackbaurd",
    "BottlesBack",
    "bridgearch",
    "CafeShadow",
    "cardplayerbody",
    "cardplayerhead",
    "cards",
    "cardsharpbody",
    "cardsharpchair",
    "cardsharphead",
    "cardsharptable",
    "centralbarkcofshop",
    "cityhousewallw",
    "cornerwindow",
    "dartbaurd",
    "depstorewall",
    "Digpatch",
    "Dollar",
    "dollarclip",
    "drunkbody",
    "drunkhead2",
    "dukbox",
    "foodstorewindow",
    "frontwindow2",
    "guesthousedec",
    "guesthousesighn",
    "guesthousewall01",
    "hoteltopdoor",
    "hotelwindow",
    "nonshinybarwoodfloor",
    "outerbar",
    "stooltop",
    "storecolum",
    "storefront01",
    "TiggerSkin",
    "TopTrump",
    "townhousedoor",
    "townhuserailing",
    "twncranecabin",
    "twnshop01",
    "twnshop05",
    "twnshopent",
    "twnstorearches2",
    "Twnwall2",
    "twnwatertower",
    "Walkway",
    "wallpictures",
    "whitewall",
    "window3",
    "windowblind",
    "windowframetest",
    "BankedPS20000",
    "BankedPS20001",
    "BankedPS20002",
    "BankedPS20003",
    "BankedPS20004",
    "ACgrill",
    "AcidBath1",
    "AcidBath2",
    "Alumbox1",
    "BigDoor1",
    "Burner2",
    "BurnerB2",
    "Cannnn",
    "CBoard",
    "Chopper01",
    "CollarBlack",
    "ConveyorBelt",
    "ConveyorBeltMoving",
    "Daisy01",
    "Daisy01Shiny",
    "DaisyLash",
    "DiskSaw",
    "Exp01",
    "Floor1",
    "Floor2",
    "Floor3",
    "Floor4",
    "Floor5",
    "Floor6",
    "Floor7",
    "Floor8",
    "Floor9",
    "FloorTR",
    "GlassTube",
    "Grinder1",
    "Grinder2",
    "Gubbins",
    "LoveHeart",
    "PeachesCan",
    "Pounder01",
    "Roof1",
    "SmallDoor1",
    "vats",
    "VidDisplay",
    "VidDisplay2",
    "Wall01a",
    "Wall01b",
    "Wall02a",
    "Wall02b",
    "Wall03a",
    "Wall03b",
    "Daisy",
    "Daisyback",
    "Banjo256",
    "been",
    "BinderCover01",
    "BinderCover02",
    "BinderCover03",
    "BinderCover04",
    "Grampa256",
    "GroundblendGrass",
    "GroupPic01",
    "GroupPic02",
    "JakeAndDaisy256",
    "partyhat",
    "WayneDwayne256",
    "BMClue0",
    "BMClue1",
    "LevelImage",
    "loading",

};

const char* D_00367D30[] = { // Shape names
    "speaker",
    "scent",
    "query",
    "particles",
    "lightspot",
    "lightpoint",
    "lightdirection",
    "cross3d",
    "cameratarget",
    "camera",
    "AxisIndicator",
    "nullshape",
    "Jake",
    "dighole",
    "HotDogNose",
    "Stars",
    "Clue",
    "note",
    "bone",
    "biscuit",
    "biscuittranslucent",
    "finish",
    "Number0",
    "Number1",
    "Number2",
    "Number3",
    "Number4",
    "Number5",
    "Number6",
    "Number7",
    "Number8",
    "Number9",
    "BMPicture",
    "BMCamera",
    "BMGrass",
    "BMLightswinging",
    "BMPage",
    "BMBallMesh",
    "Shit",
    "DogKennel",
    "PizzaThreeQuarter",
    "PizzaQuarter",
    "Sandwich",
    "Hamburger",
    "MeatJoint",
    "DogFood",
    "DogFoodBowl",
    "Backdrop",
    "Ball",
    "BallAndCamera",
    "MiniPinscher",
    "Arrow",
    "whiteegg",
    "brownegg",
    "basket",
    "TrashCanAnimated",
    "birdfeeder",
    "coat",
    "wrongcoat",
    "LiftAttendantHat",
    "ClimbersHat",
    "Radio",
    "horse",
    "BaldyChicken",
    "chicken",
    "Chicken2",
    "Chicken3",
    "windmill",
    "windmillHitcheck",
    "barnfan",
    "chihuahua",
    "Grampa",
    "BasketBallNet",
    "car4x4",
    "HayBale3",
    "HayBale2",
    "HayBale1",
    "BeeHiveTree",
    "Jason",
    "SmallLog",
    "banjoplayer",
    "battery",
    "RainbowTrout",
    "raven",
    "Pigeon",
    "bottle",
    "PaddockSign",
    "RowingBoat",
    "RatBrown",
    "WashingLine",
    "FarmHouseShutters",
    "Honey",
    "CardBoardBox",
    "BarrelInteractive",
    "Microwave",
    "dogbox",
    "Dalmatian",
    "RocketMan",
    "RocketComplete",
    "RocketCompleteHitcheck",
    "RocketPiece1",
    "RocketPiece2",
    "RocketPiece3",
    "RocketPiece4",
    "sawyer",
    "axe",
    "millwheel",
    "Swan",
    "RopeEnd",
    "Hankerchief",
    "Crates",
    "CratesSmash",
    "Hammock",
    "skunk",
    "skunkbald",
    "PostVan",
    "PostmanDriver",
    "sheep",
    "shepherd",
    "Sheepdog",
    "PloughFarmer",
    "scarecrow",
    "PediBalloon",
    "MopedMan",
    "MopedMan2",
    "Russell",
    "pramwoman",
    "pram",
    "doll",
    "postman",
    "Puppy",
    "Button",
    "garagedoor",
    "SwitchBase",
    "SwitchArrowUp",
    "SwitchArrowDown",
    "GroundedKid",
    "GroundedKidsMum",
    "NoteBoy",
    "Roundabout",
    "catbig",
    "catbigbald",
    "Parrot",
    "GumMachine",
    "GumBlue",
    "GumYellow",
    "GumGreen",
    "GumRed",
    "GumOrange",
    "ButtonInvisible",
    "VendingMachine",
    "PediCan",
    "PoodleParlourSignSwing",
    "Doggieparlourdoor",
    "butcher",
    "EggBoy",
    "EggGirl",
    "Doberman",
    "Taxi",
    "train",
    "DogCatcherHicksville",
    "RatWhite",
    "USFlag",
    "supermarketfan",
    "Slidingdoors",
    "Cashier",
    "Fence",
    "FencePieces",
    "PasserbyWithProps",
    "robots",
    "ButcherDoorwayHitcheck",
    "HickCentreBillboard",
    "ClarksvilleEndCutsceneDwayne",
    "ClarksvilleEndCutsceneWayne",
    "ClarksvilleEndCutsceneMissP",
    "ClarksvilleEndCutsceneTruck",
    "ClarksvilleEndCutsceneCamera",
    "ChickenFarmer",
    "fox",
    "Pug",
    "DogCatcherSki",
    "SkidooMan",
    "SheriffCar",
    "HotRod",
    "redvan",
    "Boxer",
    "cafeowner",
    "EllieSki",
    "EllieSkiCoat",
    "CafePeople1",
    "FunCrane",
    "FunCraneButton",
    "Lollipop",
    "SlotMachine",
    "SlotMachineButton",
    "Lemon",
    "Melon",
    "LakeMCutscene",
    "SkiShopDoor",
    "SlidingDoorsMall",
    "telegrapher",
    "Plate",
    "bluevan",
    "husky",
    "HelicopterKid",
    "HelicopterSmall",
    "HighStFlags",
    "CableCar",
    "Statue",
    "FemalePasserby",
    "SkiLiftSeat",
    "Skier1",
    "Skier1Left",
    "Skier1Right",
    "Skier2",
    "Skier2Left",
    "Skier2Right",
    "Weimaraner",
    "Snowball",
    "SnowmanTwig",
    "SnowmanBody",
    "SnowmanCoal",
    "SnowmanHat",
    "SnowmanCarrot",
    "SnowmanHead",
    "liftattendant",
    "TobogganGirl",
    "toboggankid2",
    "TobogganKid3",
    "ThrowSnowball",
    "Flag1",
    "Cablecarman",
    "Mastiff",
    "stbernard",
    "TreeBridge",
    "TreeBridge1",
    "TreeBridge2",
    "Helicopter",
    "Climber",
    "CCODoor",
    "CCOCrate",
    "Cobra",
    "Boulder",
    "Car",
    "hotelier",
    "RatGrey",
    "TrashCanReference",
    "HotelEntertainer",
    "WigClown",
    "WigElvis",
    "WigLady",
    "WigPunk",
    "HotelPatron",
    "HotelPatron1",
    "HotelPatron2",
    "Tomato",
    "Bartender",
    "Alsatian",
    "Accomplice",
    "Robber",
    "Sheriff",
    "Cradle",
    "CratePull",
    "Gun",
    "Mask",
    "RobberDoor",
    "RobberDoorLock",
    "WarehouseDoor",
    "TownBillboard",
    "SwagBag",
    "Poodledoorwarehouse",
    "RemovalTruck",
    "Gem",
    "cattabby",
    "kittenlady",
    "busker",
    "DogCatcher",
    "DogCage",
    "Key",
    "DCHouseDoor",
    "DogPoundCutSceneDwayne",
    "DogPoundCutSceneWayne",
    "DogPoundCutSceneDogCatcher",
    "DogPoundCutSceneTruck",
    "DogPoundCutSceneJake",
    "DogPoundCutSceneDoberman",
    "DogPoundCutSceneGates",
    "DogPoundCutSceneCamera",
    "DogCatcherOnStool",
    "CardPlayer",
    "cardsharp",
    "drunk",
    "TownCrane",
    "CeilingFan",
    "PlayingCard",
    "CashWod",
    "Tigger",
    "WindowLift1",
    "WindowLift3",
    "Daisy",
    "Grinder",
    "Chopper",
    "Canner",
    "CannerAperture",
    "Pounder",
    "PounderLever",
    "PotPoodles",
    "PotPoodlesSmallThing",
    "Spanner",
    "FinaleCamera",
    "FactoryEntranceDoor",
    "FinaleCutsceneCamera",
    "FinaleCutsceneDaisy",
    "FinaleCutsceneJake",
    "FinaleCutsceneMissP",
    "FinaleCutsceneProps",
    "MissPeachesHouseCamera",
    "MissPeachesHouseWayne",
    "MissPeachesHouseDwayne",
    "MissPeachesHouseMissPeaches",
    "Epilogue",
    "EpilogueCam",

};

const char* D_00368238[] = { // Sound names
    "Virtual_Ice_SlideLoop",
    "JA_HT_01",
    "JA_HT_02",
    "JA_HT_03",
    "JA_HT_04",
    "JA_HT_05",
    "JA_NY_01",
    "JA_NY_02",
    "JA_NY_03",
    "JA_NY_04",
    "JA_NY_05",
    "JA_RS_04",
    "JA_RS_05",
    "JA_RS_06",
    "JA_RS_07",
    "Dog_Whimper1",
    "Dog_Whimper2",
    "Dog_Whimper3",
    "Dog_Bark1",
    "Dog_Sniff1",
    "Dog_Growl1",
    "Dog_Chomp1",
    "Dog_Chomp2",
    "Dog_Chomp3",
    "Dog_Chomp4",
    "Dog_Bark2a",
    "DogBark_sml2",
    "Dog_PullGrowl1",
    "Dog_PullGrowl2",
    "Dog_JumpVox1",
    "Dog_JumpVox2",
    "Dog_JumpVox3",
    "Dog_LandVox1",
    "Dog_LandVox2",
    "Dog_LandVox3",
    "RoverSays_Pop1",
    "RoverSays_Pop2",
    "Kennel_Open",
    "Kennel_Close",
    "JakeSingleDig1a",
    "JakeSingleDig1b",
    "JakeSingleDig1c",
    "Tomato_Splat1",
    "Tomato_Splat2",
    "Ball_Squeak",
    "Glass_smash",
    "Glass_smash2",
    "EggSmashing",
    "TrashCan_FallOver",
    "TrashCan_LidFallOff",
    "TrashCan_LidRattle",
    "TrashCan_Rock",
    "Rat_1",
    "Rat_2",
    "Rat_3",
    "Rat_4",
    "Rat_5",
    "Rat_6",
    "Rat_CarriedByDog",
    "Rat_Scream",
    "Rat_Scream2",
    "Rat_Sniffs",
    "Coat_Pickup",
    "Ice_SlideLoop",
    "BigSplash1",
    "VanIdle",
    "TruckHorn",
    "Bird_BirdFlyBy1",
    "Grampa_Snore",
    "Grampa_Fart",
    "Chicken_CluckAlarm",
    "Chicken_CluckShort",
    "Chicken_LayEgg",
    "Horse_Chews1",
    "Horse_Chews2",
    "Horse_FeetScuff1",
    "Horse_FeetScuff2",
    "Horse_GruntShort",
    "Horse_Snuffle",
    "Horse_RearUp",
    "Waterfall_FrontConeClose",
    "Waterfall_HeavyDistant",
    "Waterfall_UpperConeClose",
    "Windmill_Rusty",
    "Windmill_metal1",
    "Windmill_metal2",
    "RockingChair_Creaking",
    "WoodBridgeCreak1",
    "SignFlap1",
    "Bees_Angry1",
    "Bees_Angry2",
    "Banjoman_Grunt1",
    "Banjoman_Grunt2",
    "Banjoman_Grunt3",
    "Banjoman_Grunt4",
    "Fish_Jump1",
    "Fish_Plop1",
    "Fish_Plop2",
    "Crow1",
    "Crow2",
    "CardBoardBox_Fall2",
    "CardBoardBox_Rock",
    "Barrel_Fall",
    "Barrel_Rock2",
    "RumbleLoop1",
    "ExplosionLarge",
    "Crates_Rock2",
    "Crates_Rock3",
    "Crates_Smash2",
    "Postvan_RunLoop",
    "Sheep_Baaa1",
    "Sheep_Baaa2",
    "Sheep_Baaa4",
    "Sheep_Baaa5",
    "Sheep_Baaa6",
    "Chews1",
    "Chews2",
    "Terrier_Bark1",
    "Terrier_BarkReverb",
    "Scooter_RunLoop",
    "Button_PushInOut",
    "Button_PushIn",
    "Button_PopOut",
    "Pram_BabyCrying1",
    "Pram_BabyCrying2",
    "Pram_BabyLaughing",
    "Puppy_Bark1",
    "GarageDoor_Start",
    "GarageDoor_Stop",
    "GarageDoor_Moving",
    "Cat_Angry1",
    "Cat_Hiss1",
    "Cat_Meow1",
    "Cat_Meow2",
    "Cat_Meow3",
    "Train_Engine",
    "Train_Idle",
    "Train_TannoyA",
    "Train_TannoyB",
    "Train_TannoyC",
    "Train_Stop",
    "Train_Door",
    "Freezer_Hum",
    "VendingMachine_Run",
    "Taxi_RunLoop",
    "Farmer_GunShot",
    "Waiter_Wipe1",
    "Waiter_Wipe2",
    "Waiter_Wipe3",
    "Pigeon_Coo",
    "Pigeon_Flap",
    "Customer_Yawn1",
    "Customer_Yawn2",
    "Stool_Squeak1",
    "Stool_Squeak2",
    "Pulley_Loop",
    "MiniVan_IdleLoop",
    "MiniVan_RunLoop",
    "Vehicle_RunLoop",
    "Radio_Tuning1Loop",
    "Radio_Tuning2Loop",
    "Radio_Boing1",
    "Radio_Spark",
    "Radio_Hit1",
    "Hit1",
    "Hit2",
    "TyreSkid",
    "ModelHelicopter",
    "Skier_Loop",
    "Stove_Loop",
    "SkiLift_Lever",
    "SkiLift_Switch1",
    "SkiLift_Switch2",
    "Snowman_Snowman1",
    "Snowman_Snowman2",
    "Snowman_SnowmanHead",
    "Snowball_Hit1",
    "Snowball_Hit2",
    "Snowball_Hit3",
    "Door_Creak",
    "Door_Bang",
    "GlugGlug",
    "HO_AA_01",
    "Rat_1Bin",
    "Rat_2Bin",
    "Rat_3Bin",
    "Rat_4Bin",
    "Rat_HitMetalBin",
    "Bar_BeerPour",
    "Bar_ChinaClink",
    "Bar_CoffeePour",
    "Bar_GlassIceRattle",
    "Bar_TeaStir",
    "Bar_WineGlass",
    "Bar_Till1",
    "Bar_Till2",
    "Bar_Till3",
    "Kitchen_DishWasher",
    "Kitchen_Fridge",
    "Kitchen_Microwave",
    "Phone_Ring1",
    "Phone_Ring2",
    "ST_RO_07",
    "ST_RO_08",
    "Robber_GunShot",
    "Robber_Creak",
    "Robber_HitDog",
    "Vehicle_Skid1",
    "Vehicle_Skid2",
    "Vehicle_Skid3",
    "Vehicle_Horn",
    "Rope_Creak1",
    "Rope_Creak2",
    "Rope_Creak3",
    "Slidable_Loop",
    "Frog_Ribbit",
    "Owl_Hoot",
    "Crickets_Loop",
    "CardPlayer_Scratch1",
    "CardPlayer_Shuffle1",
    "CardPlayer_Shuffle2",
    "PaperMoney_Drop",
    "StoolSqueak1",
    "StoolSqueak2",
    "JukeBox_MusicLoop",
    "WallClock_Loop",
    "CeilingFan_Loop",
    "GunShot",
    "Pounder_Piston",
    "Pounder_PlateSlam",
    "LineEnd_Can_Drop",
    "Flamer_BurnLoop",
    "Grinder_Loop",
    "Mincer_Loop1",
    "Mincer_Loop2",
    "AcidBath_Loop",
    "Saw_Loop",

};

const char* D_003685F0[] = { // Creature names
    "DogShakeParticles",
    "DiggablePatch",
    "DiggablePatchParticles",
    "Basket",
    "LevelGate",
    "Ball",
    "Marker",
    "StaticCreature",
    "StaticCreatureShadow",
    "Treat",
    "MovingTreat",
    "Bone",
    "HiddenBone",
    "GodCreature",
    "RaceGodCreature",
    "LevelGatePartner",
    "LevelGateExit",
    "SoundCreature",
    "Pram",
    "Button",
    "GenericSmallThing",
    "GenericSmallThingNonPersist",
    "GenericSmallThingPerson",
    "GenericSmallThingNoPickUp",
    "GenericSmallThingHitTriNoPickUp",
    "GenericSmallThingCarryableWhenHeld",
    "Hat",
    "RoverSaysPuzzleGod",
    "Tune",
    "SphereObj",
    "HitTri_Object",
    "SaveKennel",
    "ScentMarkingGameNode",
    "ScentMarkingGameGod",
    "DiggingRaceGod",
    "FlyingHat",
    "BoneGod",
    "Raven",
    "Rat",
    "Kitten",
    "pigeon",
    "GenericBirdNoShadow",
    "GenericBirdNoShadowPersistent",
    "AnimatedObjectComplexPersistentGrab",
    "AnimatedObjectComplexPersistent",
    "AnimatedObjectComplex",
    "AnimatedObjectComplexGlobalAlpha",
    "AnimatedObjectComplexShadow",
    "AnimatedObjectComplexHitTri",
    "AnimatedObjectComplexHitTriShadow",
    "AnimatedObjectComplexPersistentHitTri",
    "AnimatedObjectComplexPersistentHitTriShadow",
    "AnimatedObjectComplexButton",
    "AnimatedObjectComplexButtonHitTri",
    "AnimatedObjectPersistent",
    "AnimatedObject",
    "AnimatedObjectComplexPlatform",
    "SlotMachine",
    "Camera",
    "CameraMount",
    "ZoneRadius",
    "LightPoint",
    "LightSpot",
    "LightDirectional",
    "ZoneFromNavGraph",
    "CameraYawMarker",
    "GenericDog",
    "PlayerDog",
    "FootPrints",
    "FootPrintTrail",
    "EggSmashing",
    "SteamJet",
    "BreathPuff",
    "BoneScent",
    "PersonScent",
    "PersonFearScent",
    "FartScent",
    "DogFartScent",
    "AnimalScent",
    "TuneScent",
    "PinkScent",
    "DogScent",
    "RocketParticleSystem",
    "HelicopterParticleSystem",
    "RocketPieceParticleTrail",
    "BoneAppearParticles",
    "Person",
    "PersonNoShadow",
    "PersonNotPersistent",
    "PersonNotPersistentNoShadow",
    "ScentExploreChallenge",
    "ScentGreen",
    "ScentRed",
    "ScentViolet",
    "ScentOrange",
    "ScentBlue",
    "ScentYellow",
    "ScentCyan",
    "ScentPursuit",
    "Slidable",
    "SlidableBlockPuzzle",
    "GenericWheeledVehicle",
    "GenericWheeledVehicleNoShadow",
    "Motorbike",
    "Skidoo",
    "WaterSplashManager",
    "StaticWaterRipple",
    "DustEffectManager",
    "CrateSmashingParticles",
    "Selector",
    "TitleObject",
    "SaveIslandDog",
    "Cloth",
    "WhiteEgg",
    "BasketballNet",
    "fox",
    "Sheep",
    "SkiLiftSeat",
    "SkiSnowPuff",
    "SkiSnowTrail",
    "RatTrashCan",
    "SwingBridge",
    "DogFartBubbles",
    "chicken",
    "ChickenFeathers",
    "BeeSwarm",
    "Fish",
    "TugOfWarGod",
    "TugOfWarRopeEnd",
    "Skunk",
    "SkunkFur",
    "SkunkSprayParticles",
    "Cat",
    "CatFur",
    "ParrotFeathers",
    "ParlourParticles",
    "DustPuff",
    "Snowman",
    "Snowball",
    "SnowballHit1",
    "SnowballHit2",
    "SnowballHit3",
    "ThrowSnowball",
    "ThrowSnowballNoPickUp",
    "Boulder",
    "TomatoHit1",
    "TomatoHit2",
    "TomatoHit3",
    "TomatoHit4",
    "Platform",
    "SwingPlatform",
    "CanningMachine",
    "Spanner",
    "FlamerFlames",
    "FlamerFlames2",

    0 // padding?
};

const char* D_00368860[] = { // DogsTaleLand names
    "construction",
    "GameCreatures",
    "DogKennel",
    "Landscape",
    "StageCreatures",
    0
};

const char* D_00368878[] = { // Animation names
    "Null",
    "HotdogCanter",
    "HotDogCanterHappy",
    "HotDogCanterSad",
    "HotdogWalk",
    "HotDogWalkHappy",
    "HotDogWalkSad",
    "HotdogTrot",
    "HotDogTrotHappy",
    "HotDogTrotSad",
    "HotDogAmble",
    "HotDogAmbleHappy",
    "HotDogAmbleSad",
    "HotDogRaiseLeftBackLeg",
    "HotDogRaiseLeftFrontLeg",
    "HotDogRaiseRightBackLeg",
    "HotDogRaiseRightFrontLeg",
    "HotDogShaking",
    "DoNothing",
    "PlayerMove",
    "DoNothingForever",
    "DoNothingFor2Secs",
    "TurnTowardsCreature",
    "TurnAwayFromCreature",
    "PlayerLook",
    "SpeechAnim",
    "SoundEverywhere",
    "SpeechAnimWithControl",
    "StreamedSpeech",
    "StreamedVoiceover",
    "StreamedVoiceoverTrivial",
    "StreamedSpeechTrivial",
    "StreamPreload",
    "TextAnim",
    "TextAnimBigHint",
    "PersonPoint",
    "PlayerTravelToLevelGate",
    "DoNothingForX",
    "TravelToDestination",
    "NavigateToPos",
    "NavigateToDest",
    "DogRaceNav",
    "NavigateToObj",
    "TravelToObject",
    "TurnTowardsPos",
    "TravelFromLevelGate",
    "VehicleNavToDest",
    "VehicleForwards",
    "VehicleBackwards",
    "RandomWander",
    "PlayerSlideBlock",
    "TravelToPos",
    "TravelToObjectsHead",
    "TravelAndFacing",
    "Vibrate",
    "Rumble",
    "TurnToAngle",
    "DogPickUpObject",
    "DogLookAtLocation",
    "DogHoldLocation",
    "DogLookAroundIK",
    "DogTurnFlex",
    "HotDogStand",
    "HotDogStandHappy",
    "HotDogStandSad",
    "HotDogDownPassive",
    "HotDogDownToSit",
    "HotDogDownToStand",
    "HotDogSittingPassive",
    "HotDogSitPassiveHappy",
    "HotDogSitPassiveSad",
    "HotDogSitToDown",
    "HotDogSitToStand",
    "HotDogStandToDown",
    "HotDogStandToSit",
    "HotDogBodyBarking",
    "HotDogHeadBarking",
    "HotDogHeadGrowling",
    "hotdogstandgivepawleft",
    "hotdogstandgivepawright",
    "HotdogPressButton",
    "HotdogBoneOff",
    "HotDogSwim",
    "HotDogThrowHard",
    "HotDogThrowIntro",
    "HotDogThrowSoft",
    "HotDogYawn",
    "HotDogPoo",
    "hotdogbeg1",
    "hotdogbeg2",
    "hotdogbeg3",
    "hotdogbeg4",
    "hotdogbeg5",
    "HotDogSlideOnIce",
    "HotDogBump",
    "hotdogdigin",
    "hotdogdigout",
    "hotdogdigloop",
    "HotDogTakeOffHigh",
    "HotDogTakeOffRun",
    "HotDogTakeOffStatic",
    "HotDogMidJumpRun",
    "HotDogMidJumpHigh",
    "HotDogMidJumpSoftHigh",
    "HotDogLandSoft",
    "HotDogLandSoftHigh",
    "HotDogLandRun",
    "HotDogLandHigh",
    "HotDogStandToTug",
    "HotDogTug",
    "HotDogTugPassive",
    "HotDogTugToStand",
    "HotDogPush",
    "HotDogTugReverse",
    "HotDogPeeingInL",
    "HotDogPeeingInR",
    "HotDogPeeingLoopL",
    "HotDogPeeingLoopR",
    "HotDogPeeingOutL",
    "HotDogPeeingOutR",
    "hotdogdowntosleep",
    "hotdogsleeppassive",
    "hotdogsleeptodown",
    "HotdogShakeChicken",
    "PersonLookAtLocation",
    "PersonHeadLookAtLocation",
    "AnimalLookAtLocation",
    "Stars",
    "PageturnRtoL",
    "PageturnLtoR",
    "CameraZoomIn",
    "CameraZoomOut",
    "CameraZoomOutHold",
    "Bone",
    "Ball",
    "Grass",
    "Picture",
    "Lightswing",
    "Shit",
    "KennelClosedLoop",
    "KennelClosing",
    "KennelOpening",
    "KennelOpenLoop",
    "BallSquashedLoop",
    "BallAndCamera",
    "MiniPinscherAmbleBL",
    "MiniPinscherAmbleBR",
    "MiniPinscherAmbleFL",
    "MiniPinscherAmbleFR",
    "MiniPinscherAmbleIdle",
    "MiniPinscherCanter",
    "MiniPinscherTrot",
    "MiniPinscherWalk",
    "MiniPinscherBarkHead",
    "TrashCanFallL",
    "TrashCanFallR",
    "TrashCanRockL",
    "TrashCanRockR",
    "TrashCanFallenLStaticLoop",
    "TrashCanFallenRStaticLoop",
    "TrashCanLidRattle",
    "CoatRunFlap",
    "CoatStandFlap",
    "HorseStand",
    "HorseScrapeHoof",
    "HorseTailSwish",
    "HorseRearUp",
    "ChickenStand",
    "ChickenShake",
    "ChickenPeck",
    "ChickenWalk",
    "ChickenRun",
    "ChickenScare",
    "ChickenStruggle",
    "ChickenUpAttack",
    "ChihuahuaAmbleBL",
    "ChihuahuaAmbleBR",
    "ChihuahuaAmbleFL",
    "ChihuahuaAmbleFR",
    "ChihuahuaAmbleIdle",
    "ChihuahuaCanter",
    "ChihuahuaTrot",
    "ChihuahuaWalk",
    "ChihuahuaDown01",
    "ChihuahuaDownToSit02",
    "ChihuahuaDownToStand05",
    "ChihuahuaSit",
    "ChihuahuaSitToDown03",
    "ChihuahuaSitToStand03",
    "ChihuahuaStandToDown10",
    "ChihuahuaStandToSit12",
    "ChihuahuaShakingBody01",
    "ChihuahuaThrowHard",
    "ChihuahuaThrowIntro",
    "ChihuahuaThrowSoft",
    "ChihuahuaBarkHead",
    "ChihuahuaBarkBody",
    "ChihuahuaFart",
    "ChihuahuaBeg1",
    "ChihuahuaBeg2",
    "ChihuahuaTakeOffHigh",
    "ChihuahuaTakeOffRun",
    "ChihuahuaMidJumpSoftHigh",
    "ChihuahuaMidJumpRun",
    "ChihuahuaMidJumpHigh",
    "ChihuahuaLandSoftHigh",
    "ChihuahuaLandRun",
    "ChihuahuaLandHigh",
    "ChihuahuaSwim",
    "ChihuahuaStand",
    "ChihuahuaPeeingInL",
    "ChihuahuaPeeingInR",
    "ChihuahuaPeeingLoopL",
    "ChihuahuaPeeingLoopR",
    "ChihuahuaPeeingOutL",
    "ChihuahuaPeeingOutR",
    "GrampaAwakeAngryPassive",
    "GrampaAwakePassive",
    "GrampaAwakePassiveTalk",
    "GrampaAwakeSalutePassive",
    "GrampaFart",
    "GrampaReactionToDogFart",
    "Grampashoo",
    "GrampaSleeping",
    "GrampaStretch",
    "GrampaTalk1",
    "GrampaTalk2",
    "GrampaTalk3",
    "GrampaThrowBone",
    "GrampaWakeToSleep",
    "jasonambleidle",
    "jasonamblel",
    "jasonambler",
    "JasonGiveTreat",
    "jasonidle01",
    "jasonidle02",
    "jasonidle03",
    "jasonidle04",
    "JasonLaugh",
    "jasonpatthighs",
    "jasonrun",
    "jasontalk",
    "jasonwalk",
    "jasonwalkslow",
    "BanjoPlayerBalance",
    "BanjoPlayerBatteryFix",
    "BanjoPlayerBatteryReceive",
    "BanjoPlayerGiveDogTreat",
    "BanjoPlayerPlayingBanjoIn",
    "BanjoPlayerPlayingBanjoLoop",
    "BanjoPlayerPlayingBanjoOut",
    "BanjoPlayerPooReaction",
    "BanjoPlayerScratchHead",
    "BanjoPlayerSitting",
    "BanjoPlayerTurnIn",
    "BanjoPlayerTurnOut",
    "BanjoPlayerTurnTalkLoop",
    "BanjoPlayerVisibility",
    "RainbowTroutSwimFast",
    "RainbowTroutSwimSlow",
    "RainbowTroutBackFlip",
    "RainbowTroutBackFlip2",
    "RainbowTroutSpin",
    "RainbowTroutJump",
    "PigeonFlyingFast",
    "PigeonFlyingSlow",
    "PigeonLand",
    "PigeonStand",
    "PigeonPeck",
    "PigeonTakeOff",
    "PigeonWalk",
    "BottleBob",
    "PaddockSignBlow",
    "RowingBoatSway",
    "RatBrownLookAround",
    "RatBrownRun",
    "RatBrownDangle",
    "RatBrownTaunt",
    "RatBrownTauntFail",
    "RatBrownStand",
    "RatTurnFlex",
    "WashingLine",
    "FarmHouseShuttersSway",
    "CardBoardBoxFallenLLoop",
    "CardBoardBoxFallenRLoop",
    "CardBoardBoxFallL",
    "CardBoardBoxFallR",
    "CardBoardBoxRockL",
    "CardBoardBoxRockR",
    "BarrelInteractiveFallL",
    "BarrelInteractiveFallR",
    "BarrelInteractiveFallenL",
    "BarrelInteractiveFallenR",
    "BarrelInteractiveRockL",
    "BarrelInteractiveRockR",
    "MicrowaveCook",
    "MicrowaveOpen",
    "MicrowaveMeatOff",
    "HotdogBonePickUp2",
    "HotdogBonePickUp8",
    "HotdogBonePickUp9",
    "HotdogVictory1",
    "HotdogVictory2",
    "RocketManAmbleIdle",
    "RocketManAmbleL",
    "RocketManAmbleR",
    "RocketManBarkReaction",
    "RocketManGiveTreat",
    "RocketManLaunchRocket",
    "RocketManReactionBad",
    "RocketManReactionGood",
    "RocketManPooReaction",
    "RocketManShelter",
    "RocketManStandIdle",
    "RocketManStandLoop",
    "RocketManTalkL",
    "RocketManTalkR",
    "RocketManWalk",
    "RocketCompleteLaunch",
    "SawyerAmbleIdle",
    "SawyerAmbleL",
    "SawyerAmbleR",
    "SawyerPickupAxe",
    "SawyerStand",
    "SawyerTalk",
    "SawyerTalkCenter",
    "SawyerTalkWithAxe",
    "SawyerTalkWithAxeCenter",
    "SawyerTalkWithAxeDown",
    "SawyerThrowObjectForDog",
    "SawyerThrowAxeInAir",
    "SawyerAxeVisibility",
    "SawyerWalk",
    "SawyerWalkSlow",
    "SawyerBarkReactionGood",
    "SawyerPooReaction",
    "Millwheel",
    "SwanFly",
    "SwanTakeOff",
    "SwanLand",
    "SwanSwim",
    "SwanWalk",
    "CratesRockL",
    "CratesRockR",
    "CratesSmashL",
    "CratesSmashR",
    "Hammock",
    "SkunkAmbleBL",
    "SkunkAmbleBR",
    "SkunkAmbleFL",
    "SkunkAmbleFR",
    "SkunkAmbleIdle",
    "SkunkCanter",
    "SkunkHeldRunning",
    "SkunkHeldStanding",
    "SkunkHeldStruggle",
    "SkunkStand",
    "SkunkStinkIn",
    "SkunkStinkLoop",
    "SkunkStinkOut",
    "SkunkWalk",
    "hotdogbonepickup4",
    "HotdogBonePickUp6",
    "HotdogVictory3",
    "HotdogVictory4",
    "SheepAmbleBL",
    "SheepAmbleBR",
    "SheepAmbleFL",
    "SheepAmbleFR",
    "SheepAmbleIdle",
    "SheepWalk",
    "SheepTrot",
    "SheepCanter",
    "SheepGraze",
    "ShepherdAmbleIdle",
    "shepherdamblel",
    "shepherdambler",
    "shepherdbarkreaction",
    "ShepherdBlink",
    "shepherdgivetreat",
    "ShepherdIdle",
    "shepherdpooreaction",
    "ShepherdStand",
    "ShepherdTalk",
    "ShepherdWalk",
    "shepherdwalkslow",
    "sheepdogamblebl",
    "sheepdogamblebr",
    "sheepdogamblefl",
    "sheepdogamblefr",
    "sheepdogambleidle",
    "sheepdogcanter",
    "sheepdogtrot",
    "sheepdogwalk",
    "sheepdogbark",
    "sheepdogdownpassive",
    "sheepdogdowntosit",
    "sheepdogdowntostand",
    "sheepdogsitpassive",
    "sheepdogsittodown",
    "sheepdogsittostand",
    "sheepdogstandpassive",
    "sheepdogstandtodown",
    "sheepdogstandtosit",
    "sheepdogpoo",
    "sheepdoglandhigh",
    "sheepdoglandrun",
    "sheepdoglandsofthigh",
    "sheepdogmidjumphigh",
    "sheepdogmidjumprun",
    "sheepdogmidjumpsofthigh",
    "sheepdogtakeoffhigh",
    "sheepdogtakeoffrun",
    "sheepdogpeeinginl",
    "sheepdogpeeinginr",
    "sheepdogpeeingloopl",
    "sheepdogpeeingloopr",
    "sheepdogpeeingoutl",
    "sheepdogpeeingoutr",
    "sheepdogdigin",
    "sheepdogdigout",
    "sheepdogdigloop",
    "shepherdfixscarecrow",
    "shepherdshaton",
    "PloughFarmerBegNegative",
    "PloughFarmerGiveTreat",
    "PloughFarmerPooReaction",
    "PloughFarmerStand",
    "PloughFarmerTalk",
    "ScarecrowDownIdle",
    "ScarecrowFix",
    "ScarecrowUpIdle",
    "HotdogBonePickUp7",
    "PediBalloon",
    "mopedmanputfeetdownin",
    "mopedmanputfeetdownloop",
    "mopedmanputfeetdownout",
    "mopedmanrevengine",
    "mopedmanshoodog",
    "mopedmansteerl",
    "mopedmansteerr",
    "mopedmansteerstraight",
    "PramWomanAmbleIdle",
    "PramWomanAmbleL",
    "PramWomanAmbleR",
    "PramWomanBarkReaction",
    "PramWomanBlink",
    "PramWomanGiveTreat",
    "PramWomanHandsOnEars",
    "PramWomanHandsOnEarsIn",
    "PramWomanHandsOnEarsOut",
    "PramWomanPooReaction",
    "PramWomanStand",
    "PramWomanTalk",
    "PramWomanTalkL",
    "PramWomanTalkR",
    "PostmanAmbleIdle",
    "PostmanAmbleR",
    "PostmanAmbleL",
    "PostmanDeliverLetter",
    "PostmanEnterVan",
    "PostmanGiveDogObject",
    "PostmanGiveDogObjectIn",
    "PostmanGiveDogObjectLoop",
    "PostmanGiveDogObjectOut",
    "PostmanLeaveVan",
    "PostmanPooReaction",
    "PostmanScaredOfDog",
    "PostmanScratchHead",
    "PostmanSitInVan",
    "PostmanStand",
    "PostmanTalk",
    "PostmanWalk",
    "PostmanWalkSlow",
    "PuppyAmbleBL",
    "PuppyAmbleBR",
    "PuppyAmbleFL",
    "PuppyAmbleFR",
    "PuppyAmbleIdle",
    "PuppyCanter",
    "PuppyTrot",
    "PuppyWalk",
    "PuppyDownPassive",
    "PuppyDownToSit",
    "PuppyDownToStand",
    "PuppySitPassive",
    "PuppySitToDown",
    "PuppySitToStand",
    "PuppyStandToDown",
    "PuppyStandToSit",
    "PuppyThrowIntro",
    "PuppyThrowSoft",
    "PuppyThrowHard",
    "PuppyBarkHead",
    "PuppyBarkBody",
    "PuppyPoo",
    "PuppyStand",
    "PuppyLandHigh",
    "PuppyLandRun",
    "PuppyLandSoftHigh",
    "PuppyMidJumpHigh",
    "PuppyMidJumpRun",
    "PuppyMidJumpSoftHigh",
    "PuppyTakeOffHigh",
    "PuppyTakeOffRun",
    "PuppyDigIn",
    "PuppyDigOut",
    "PuppyDigLoop",
    "GroundedKidAmbleIdle",
    "GroundedKidAmbleL",
    "GroundedKidAmbleR",
    "GroundedKidBangDoor",
    "GroundedKidGiveTreat",
    "GroundedKidStand",
    "GroundedKidReactionGood",
    "GroundedKidSick",
    "GroundedKidTalkL",
    "GroundedKidTalkR",
    "GroundedKidWalkSlow",
    "GroundedKidsMumStand",
    "GroundedKidsMumTalkL",
    "GroundedKidsMumTalkR",
    "noteboyambleidle",
    "noteboyamblel",
    "noteboyambler",
    "noteboybarkreaction",
    "noteboygivetreat",
    "noteboypooreaction",
    "NoteBoyTalkL",
    "NoteBoyTalkR",
    "noteboyturnin",
    "noteboyturnloop",
    "noteboyturnloopspecial",
    "noteboyturnout",
    "noteboywalkslow",
    "RoundaboutTurnIn",
    "RoundaboutTurnLoop",
    "RoundaboutTurnOut",
    "CatBigAmbleBL",
    "CatBigAmbleBR",
    "CatBigAmbleFL",
    "CatBigAmbleFR",
    "CatBigAmbleIdle",
    "CatBigCarriedRunning",
    "CatBigCarriedStanding",
    "CatBigCanter",
    "CatBigStand",
    "CatBigStruggle",
    "CatBigTrot",
    "CatBigWalk",
    "ParrotStand",
    "ParrotSwing",
    "ParrotFly",
    "GumMachine",
    "vendingmachine",
    "PoodleParlourSignSwing",
    "ParlourDoorsOpen",
    "ParlourDoorsClosing",
    "ParlourDoorsOpening",
    "ButcherAmbleIdle",
    "ButcherAmbleL",
    "ButcherAmbleR",
    "ButcherEggHitReaction",
    "ButcherStand",
    "ButcherTalkL",
    "ButcherTalkR",
    "ButcherWalk",
    "ButcherWalkSlow",
    "ButcherPooReaction",
    "ButcherBarkReaction",
    "JasonPickUp",
    "JasonThrow",
    "JasonStand",
    "JasonCelebrate",
    "ellieskiambleidle",
    "ellieskiamblel",
    "ellieskiambler",
    "ellieskigivetreat",
    "ellieskistand",
    "ellieskilaugh",
    "EllieSkiPhone",
    "ellieskireactiongood",
    "ellieskisick",
    "ellieskitalkl",
    "ellieskitalkr",
    "ellieskiwalkslow",
    "ellieskiwalk",
    "dobermanamblebl",
    "dobermanamblebr",
    "dobermanamblefl",
    "dobermanamblefr",
    "DobermanAmbleIdle",
    "dobermanbarkhead",
    "dobermanbodybarking",
    "dobermancanter",
    "dobermandownpassive",
    "dobermandowntosit",
    "dobermandowntostand",
    "DobermanLandHigh",
    "DobermanLandRun",
    "DobermanLandSoftHigh",
    "DobermanMidJumpHigh",
    "DobermanMidJumpRun",
    "DobermanMidJumpSoftHigh",
    "dobermanpoo",
    "dobermanshakebody",
    "dobermansitpassive",
    "dobermansittodown",
    "dobermansittostand",
    "dobermanstand",
    "dobermanstandtodown",
    "dobermanstandtosit",
    "dobermanstandtotug",
    "DobermanTakeOffHigh",
    "DobermanTakeOffRun",
    "DobermanThrowHardHp",
    "DobermanThrowIntro",
    "dobermanthrowsofthp",
    "dobermantrot",
    "dobermantug",
    "dobermantugpassive",
    "dobermantugreverse",
    "dobermantugtostand",
    "dobermanwalk",
    "dogcatcherambleidle",
    "dogcatcheramblel",
    "dogcatcherambler",
    "dogcatcherpaperoff",
    "dogcatcherputpaperdown",
    "dogcatcherreadpaper",
    "dogcatcherstand",
    "DogCatcherWalk",
    "dogcatcherwalkslow",
    "dogcatcherusenet",
    "DogCatcherUseNetLoop",
    "USFlag",
    "SlidingdoorsOpening",
    "SlidingdoorsOpen",
    "SlidingdoorsClosing",
    "cashieridle1",
    "cashieridle2",
    "cashierbarkreact1",
    "CashierGiveBone",
    "cashierpooreaction",
    "cashiershout",
    "cashiersit",
    "CashierSitL",
    "CashierTalkL",
    "CashierTalkR",
    "FenceWobble",
    "FencePiecesSmash",
    "FencePiecesWobble",
    "PasserByAmbleIdle",
    "PasserByAmbleLeft",
    "PasserByAmbleRight",
    "passerbygivetreat",
    "passerbypooreactionlaugh",
    "passerbypooreactionsick",
    "passerbypooreactionstink",
    "passerbyreactionbad",
    "passerbyreactionbad01",
    "passerbyreactionbad02",
    "passerbyreactionbad03",
    "passerbyreactiongood",
    "passerbyreactiongood01",
    "passerbyreactiongood02",
    "PasserByStand",
    "PasserByWalk",
    "PasserByWalkSlow",
    "RobotsIn",
    "RobotsLoop",
    "RobotsOut",
    "BillboardSide1Held",
    "BillboardSide2Held",
    "BillboardSide3Held",
    "BillboardSide1To2",
    "BillboardSide2To3",
    "BillboardSide3To1",
    "HotdogBonePickUp1",
    "HotdogBonePickUp5",
    "ClarksvilleEndCutsceneDwayne",
    "ClarksvilleEndCutsceneWayne",
    "ClarksvilleEndCutsceneMissP",
    "ClarksvilleEndCutsceneTruck",
    "clarksvilleendcutscenecamerashot01",
    "clarksvilleendcutscenecamerashot02",
    "clarksvilleendcutscenecamerashot03",
    "clarksvilleendcutscenecamerashot04",
    "clarksvilleendcutscenecamerashot05",
    "clarksvilleendcutscenecamerashot06",
    "clarksvilleendcutscenecamerashot07",
    "clarksvilleendcutscenecamerashot08",
    "clarksvilleendcutscenecamerashot09",
    "clarksvilleendcutscenecamerashot10",
    "clarksvilleendcutscenecamerashot11",
    "clarksvilleendcutscenecamerashot12",
    "clarksvilleendcutscenecamerashot13",
    "clarksvilleendcutscenecamerashot14",
    "clarksvilleendcutscenecamerashot15",
    "clarksvilleendcutscenecamerashot16",
    "clarksvilleendcutscenecamerashot17",
    "clarksvilleendcutscenecamerashot18",
    "clarksvilleendcutscenecamerashot19",
    "clarksvilleendcutscenecamerashot20",
    "clarksvilleendcutscenecamerashot21",
    "clarksvilleendcutscenecamerashot22",
    "clarksvilleendcutscenecamerashot23",
    "clarksvilleendcutscenecamerashot24",
    "clarksvilleendcutscenecamerashot25",
    "clarksvilleendcutscenecamerashot26",
    "clarksvilleendcutscenecamerashot27",
    "clarksvilleendcutscenecamerashot28",
    "FoxAbleBackLeft",
    "FoxAbleBackRight",
    "FoxAbleFrontLeft",
    "FoxAbleFrontRight",
    "FoxAmbleIdle",
    "FoxWalk",
    "FoxTrot",
    "FoxCanter",
    "ChickenFarmerAmbleIdle",
    "ChickenFarmerAmbleL",
    "ChickenFarmerAmbleR",
    "ChickenFarmerBarkReaction",
    "ChickenFarmerBlink",
    "ChickenFarmerComingOutOfHouse",
    "ChickenFarmerFireGunAtFox",
    "ChickenFarmerFireGunInAir",
    "ChickenFarmerGoingIntoHouse",
    "ChickenFarmerPooReaction",
    "ChickenFarmerStanding",
    "ChickenFarmerTalking",
    "ChickenFarmerThrowObjectForDog",
    "ChickenFarmerWalking",
    "ChickenFarmerWalkSlow",
    "pugamblebl",
    "pugamblebr",
    "pugamblefl",
    "pugamblefr",
    "PugAmbleIdle",
    "pugbarkbody",
    "pugdownpassive",
    "pugdowntosit",
    "pugdowntostand",
    "puggallop",
    "puglandhigh",
    "puglandrun",
    "puglandsofthigh",
    "pugmidjumphigh",
    "pugmidjumprun",
    "pugmidjumpsofthigh",
    "pugpoo",
    "pugshakebody",
    "pugsitpassive",
    "pugsittodown",
    "pugsittostand",
    "pugstand",
    "pugstandtodown",
    "pugstandtosit",
    "pugstandtotug",
    "pugswim",
    "pugtakeoffhigh",
    "pugtakeoffrun",
    "PugThrowHard",
    "PugThrowIntro",
    "pugthrowsoft",
    "pugtrot",
    "PugTug",
    "pugtugpassive",
    "PugTugReverse",
    "pugtugtostand",
    "pugwalk",
    "HotdogBonePickUp3",
    "TrainLoop",
    "SkidooManSteerStraight",
    "SkidooManSteerL",
    "SkidooManSteerR",
    "SkidooManShooDog",
    "SkidooManRevEngine",
    "CafeOwnerAmbleIdle",
    "CafeOwnerAmbleL",
    "CafeOwnerAmbleR",
    "CafeOwnerCrouch",
    "CafeOwnerGiveTreat",
    "CafeOwnerStanding",
    "CafeOwnerStink",
    "CafeOwnerShooPigeon",
    "CafeOwnerTalk",
    "CafeOwnerWalk",
    "CafeOwnerWalkSlow",
    "CafeOwnerWipeTable",
    "ellieskiclapping",
    "ellieskirun",
    "ellieskishiver",
    "CafePeople1Idle1",
    "CafePeople1Idle2",
    "CafePeople1Idle3",
    "FunCraneBallOff",
    "FunCraneFlapOpen",
    "FunCraneLollipopOff",
    "FunCraneLose",
    "FunCraneWinBall",
    "FunCraneWinLollipop",
    "SlotMachineArm",
    "LakeMCutscene",
    "LakeMCutsceneCamera01",
    "LakeMCutsceneCamera02",
    "LakeMCutsceneCamera03",
    "LakeMCutsceneCamera04",
    "LakeMCutsceneCamera05",
    "LakeMCutsceneCamera06",
    "LakeMCutsceneCamera07",
    "LakeMCutsceneCamera08",
    "LakeMCutsceneCamera09",
    "LakeMCutsceneCamera10",
    "LakeMCutsceneCamera11",
    "LakeMCutsceneCamera12",
    "LakeMCutsceneCamera13",
    "LakeMCutsceneCamera14",
    "LakeMCutsceneCamera15",
    "LakeMCutsceneCamera16",
    "LakeMCutsceneCamera17",
    "LakeMCutsceneCamera18",
    "LakeMCutsceneCamera19",
    "LakeMCutsceneCamera20",
    "LakeMCutsceneCamera21",
    "LakeMCutsceneCamera22",
    "LakeMCutsceneCamera23",
    "SkiShopDoorClosing",
    "SkiShopDoorOpen",
    "SkiShopDoorOpening",
    "SlidingDoorsMallOpening",
    "SlidingDoorsMallOpen",
    "SlidingDoorsMallClosing",
    "TelegrapherBarkReaction",
    "TelegrapherGiveBone",
    "TelegrapherHitTransmitter",
    "TelegrapherPooReaction",
    "TelegrapherSit",
    "TelegrapherTalk",
    "TelegrapherTwiddleKnobsIn",
    "TelegrapherTwiddleKnobsLoop",
    "TelegrapherTwiddleKnobsOut",
    "HuskyAmbleBL",
    "HuskyAmbleBR",
    "HuskyAmbleFL",
    "HuskyAmbleFR",
    "HuskyAmbleIdle",
    "HuskyCanter",
    "HuskyDownPassive",
    "HuskyDownToSit",
    "HuskyDownToStand",
    "HuskySitPassive",
    "HuskySitToDown",
    "HuskySitToStand",
    "HuskyStandToDown",
    "HuskyStandToSit",
    "HuskyTrot",
    "HuskyWalk",
    "HuskyFart",
    "HuskyLandHigh",
    "HuskyLandRun",
    "HuskyLandSoftHigh",
    "HuskyMidJumpHigh",
    "HuskyMidJumpRun",
    "HuskyMidJumpSoftHigh",
    "HuskyTakeOffHigh",
    "HuskyTakeOffRun",
    "HuskyBarkBody",
    "HuskyBarkHead",
    "huskypeeinginl",
    "huskypeeinginr",
    "huskypeeingloopl",
    "huskypeeingloopr",
    "huskypeeingoutl",
    "huskypeeingoutr",
    "HelicopterKidAmbleIdle",
    "TobogganKid1AmbleL",
    "TobogganKid1AmbleR",
    "HelicopterKidBarkReaction",
    "HelicopterKidGiveBone",
    "HelicopterKidPooReaction",
    "HelicopterKidStand",
    "HelicopterKidTalk",
    "HelicopterKidWalk",
    "HelicopterKidWalkSlow",
    "HelicopterRotor",
    "SkiResHighStFlags",
    "CableCarHighStreetUp",
    "CableCarHighStreetDown",
    "CableCarHighStreetSwing",
    "FemalePasserbyAmbleIdle",
    "FemalePasserbyAmbleLeft",
    "FemalePasserbyAmbleRight",
    "FemalePasserbyAmbleWalk",
    "FemalePasserbyAmbleWalkSlow",
    "FemalePasserbyGiveTreat",
    "FemalePasserbyPooReactionSick",
    "FemalePasserbyPooReactionStink",
    "FemalePasserbyReactionBad",
    "FemalePasserbyReactionGood",
    "Skier1Falling",
    "Skier1FallenLoop",
    "Skier1GetUp",
    "Skier1SittingOnSkiLiftL",
    "Skier1SittingOnSkiLiftR",
    "Skier1SkiLeft",
    "Skier1SkiRight",
    "Skier1SkiStraight",
    "Skier1FootGroundConformance",
    "WeimaranerLandSoftHigh",
    "WeimaranerJumpHigh",
    "WeimaranerMidJumpSoftHigh",
    "LiftattendantAmbleIdle",
    "LiftattendantAmbleL",
    "LiftattendantAmbleR",
    "LiftattendantGiveTreat",
    "LiftAttendantLoseHat",
    "LiftAttendantPickUpHat",
    "LiftattendantScratchHead",
    "LiftattendantSick",
    "LiftattendantSlapThighs",
    "LiftattendantStand",
    "LiftattendantTalk",
    "LiftAttendantVisibilityHand",
    "LiftAttendantVisibilityHead",
    "LiftattendantWalkSlow",
    "LiftattendantWorkLift",
    "TobogganKid1AmbleIdle",
    "TobogganKid1Celebration",
    "TobogganKid1Celebration2",
    "TobogganKid1Crouch",
    "TobogganKid1GiveTreat",
    "TobogganKid1MakingSnowmanHead",
    "TobogganKid1PickingupCarrot",
    "TobogganKid1PickingUpHead",
    "TobogganKid1PickingupSnowBall",
    "TobogganKid1PutObjectOn",
    "TobogganKid1PutOnCarrot",
    "TobogganKid1PutHatOn",
    "TobogganKid1PutOnHead",
    "TobogganKid1PutOnStick",
    "TobogganKid1Sick",
    "TobogganKid1SnowBallHit",
    "TobogganKid1Standing",
    "TobogganKid1Talk",
    "TobogganKid1Throw",
    "TobogganKid1Walk",
    "TobogganKid1WalkSlow",
    "TobogganKid1Wave",
    "CarrotVisible",
    "CoalVisible",
    "HatVisible",
    "SnowmanHeadVisible",
    "SnowBallVisible",
    "StickVisible",
    "SkiFlagUp",
    "SkiFlagDown",
    "CableCarManAmbleIdle",
    "CableCarManAmbleL",
    "CableCarManAmbleR",
    "CableCarManBarkReaction",
    "CableCarManGiveTreat",
    "CableCarManHatReading",
    "CableCarManHatVisibility",
    "CableCarManObservingHat",
    "CableCarManPickUpHat",
    "CableCarManPooReaction",
    "CableCarManPushButton",
    "CableCarManStand",
    "CableCarManTalk",
    "CableCarManTalkWithHat",
    "CableCarManWalk",
    "CableCarManWalkSlow",
    "StbernardAmbleBL",
    "StbernardAmbleBR",
    "StbernardAmbleFL",
    "StbernardAmbleFR",
    "StbernardAmbleIdle",
    "StbernardCanter",
    "StbernardDownPassive",
    "StbernardDownToSit",
    "StbernardDownToStand",
    "StbernardSitPassive",
    "StbernardSitToDown",
    "StbernardSitToStand",
    "StBernardStandPassive",
    "StbernardStandToDown",
    "StbernardStandToSit",
    "StbernardTrot",
    "StbernardWalk",
    "StBernardBarkHead",
    "StBernardBarkBody",
    "StbernardStandToTug",
    "StbernardTugToStand",
    "StBernardTug",
    "StbernardTugPassive",
    "StBernardPush",
    "StbernardLandHigh",
    "StbernardLandRun",
    "StbernardLandSoftHigh",
    "StbernardMidJumpHigh",
    "StbernardMidJumpRun",
    "StbernardMidJumpSoftHigh",
    "StbernardTakeOffHigh",
    "StbernardTakeOffRun",
    "stbernardpeeinginl",
    "stbernardpeeinginr",
    "stbernardpeeingloopl",
    "stbernardpeeingloopr",
    "stbernardpeeingoutl",
    "stbernardpeeingoutr",
    "ClimberLieStill",
    "ClimberLieToSit",
    "ClimberRubHead",
    "CCODoorBang",
    "CCODoorClosed",
    "CCODoorOpen",
    "CCODoorOpening",
    "CableCarMountainTopUp",
    "CableCarMountainTopDown",
    "CableCarMountainTopSwing",
    "Cobra",
    "CobraThrusters",
    "ClimberBarkReaction",
    "ClimberGiveTreat",
    "ClimberLieMoan",
    "ClimberLieMoan2",
    "ClimberPooReaction",
    "ClimberPooReactionSit",
    "ClimberSitPassive",
    "ClimberSitTalk",
    "ClimberSitToLie",
    "StBernardBeg3",
    "StBernardBeg4",
    "StBernardDigIn",
    "StBernardDigOut",
    "StBernardDigLoop",
    "StBernardTugReverse",
    "HotelierAmbleIdle",
    "HotelierAmbleL",
    "HotelierAmbleR",
    "HotelierBarkReaction",
    "HotelierGiveTreat",
    "HotelierPooReaction",
    "HotelierStand",
    "HotelierTalk",
    "HotelierWalk",
    "HotelierWalkSlow",
    "MiniPinscherDownIdlePassive",
    "MiniPinscherDownToSit",
    "MiniPinscherDownToStand",
    "MiniPinscherSitPassive",
    "MiniPinscherSitToDown",
    "MiniPinscherSitToStand",
    "MiniPinscherStandPassive",
    "MiniPinscherStandToDown",
    "MiniPinscherStandToSit",
    "MinipinscherThrowIntro",
    "MiniPinscherThrowSoftHP",
    "MinipinscherThrowHardHP",
    "MiniPinscherBarkBody",
    "MiniPinscherFart",
    "MiniPinscherLandHigh",
    "MiniPinscherLandRun",
    "MiniPinscherLandSoftHigh",
    "MiniPinscherMidJumpHigh",
    "MiniPinscherMidJumpRun",
    "MiniPinscherMidJumpSoftHigh",
    "MiniPinscherTakeOffHigh",
    "MiniPinscherTakeOffRun",
    "minipinscherpeeinginl",
    "minipinscherpeeinginr",
    "minipinscherpeeingloopl",
    "minipinscherpeeingloopr",
    "minipinscherpeeingoutl",
    "minipinscherpeeingoutr",
    "HotelEntertainePrepare",
    "hotelentertaineratpiano",
    "hotelentertainerbarkreaction",
    "hotelentertainerdrink",
    "hotelentertainergethit",
    "hotelentertainergivetreat",
    "hotelentertainerpooreaction",
    "hotelentertainersing",
    "hotelentertainertalkin",
    "HotelEntertainerTalkLoop",
    "hotelentertainertalkout",
    "HotelPatronAmbleIdle",
    "HotelPatronAmbleIdleHadEnough",
    "HotelPatronAmbleIdleStand",
    "HotelPatronAmbleLeft",
    "HotelPatronAmbleRight",
    "HotelPatronBarkReaction",
    "HotelPatronBooing",
    "HotelPatronEarAche",
    "HotelPatronIdleCrossLegs",
    "HotelPatronIdleCrossLegsIn",
    "HotelPatronIdleCrossLegsLoop",
    "HotelPatronIdleCrossLegsOut",
    "HotelPatronIdleListen",
    "HotelPatronIdleScratchChin",
    "HotelPatronIdleTalk",
    "HotelPatronIdleTalkCenter",
    "HotelPatronIdleTalkLeft",
    "HotelPatronIdleTalkRight",
    "HotelPatronPooReaction",
    "HotelPatronSitDown",
    "HotelPatronStandUp",
    "HotelPatronThrow",
    "HotelPatronWalk",
    "HotelPatronWalkSlow",
    "HotelPatronVisibility",
    "BarTenderStand",
    "BarTenderBlink",
    "BarTenderCleanGlass",
    "BarTenderGlassVisibility",
    "BarTenderPutGlassAway",
    "BarTenderSpongeVisibility",
    "BarTenderSpongeBarVisibility",
    "AlsatianStandPassive",
    "AlsatianAmbleBL",
    "AlsatianAmbleBR",
    "AlsatianAmbleFL",
    "AlsatianAmbleFR",
    "AlsatianAmbleIdle",
    "AlsatianCanter",
    "AlsatianDownPassive",
    "AlsatianDownToSit",
    "AlsatianDownToStand",
    "AlsatianSitPassive",
    "AlsatianSitToDown",
    "AlsatianSitToStand",
    "AlsatianStandToDown",
    "AlsatianStandToSit",
    "AlsatianTrot",
    "AlsatianWalk",
    "AlsatianBarkBody",
    "AlsatianBarkHead",
    "AlsatianLandHigh",
    "AlsatianLandRun",
    "AlsatianLandSoftHigh",
    "AlsatianMidJumpHigh",
    "AlsatianMidJumpRun",
    "AlsatianMidJumpSoftHigh",
    "AlsatianTakeOffHigh",
    "AlsatianTakeOffRun",
    "AlsatianPoo",
    "alsatianpeeinginl",
    "alsatianpeeinginr",
    "alsatianpeeingloopl",
    "alsatianpeeingloopr",
    "alsatianpeeingoutl",
    "alsatianpeeingoutr",
    "AlsatianDigIn",
    "AlsatianDigOut",
    "AlsatianDigLoop",
    "AccompliceAmbleIdle",
    "AccompliceAmbleLeft",
    "AccompliceAmbleRight",
    "AccompliceCrossArmsIn",
    "AccompliceCrossArmsLoop",
    "AccompliceCrossArmsOut",
    "AccompliceGiveUp",
    "AccompliceGiveUpLoop",
    "AccompliceGunVisibility",
    "AccompliceScareOff",
    "AccompliceShootGunIn",
    "AccompliceShootGunLoop",
    "AccompliceShootGunOut",
    "AccompliceStand",
    "AccompliceWalk",
    "AccompliceWalkSlow",
    "RobberAimLoop",
    "RobberGunVisibility",
    "RobberHalfWakeUp",
    "RobberSitDownSleep",
    "RobberSleep",
    "RobberWakeUp",
    "RobberWakeUpFireGun",
    "SheriffAmbleIdle",
    "SheriffAmbleLeft",
    "SheriffAmbleRight",
    "sheriffbarkreaction",
    "sheriffgivetreat",
    "SheriffPooReaction",
    "SheriffShootGunIn45",
    "SheriffShootGunLoop45",
    "SheriffShootGunOut45",
    "SheriffStand",
    "SheriffTalkL",
    "SheriffTalkR",
    "SheriffWalk",
    "SheriffWalkSlow",
    "RobberDoorClosed",
    "RobberDoorLockClosed",
    "RobberDoorLockOpen",
    "RobberDoorLockOpening",
    "RobberDoorOpen",
    "RobberDoorOpening",
    "RobberDoorShake",
    "SheriffCarVisibility",
    "poodledoorwarehouseclosing",
    "poodledoorwarehouseopenhold",
    "poodledoorwarehouseopening",
    "GemAmbleBL",
    "GemAmbleBR",
    "GemAmbleFL",
    "GemAmbleFR",
    "GemAmbleIdle",
    "GemCanter",
    "GemTrot",
    "GemWalk",
    "GemDownToStand",
    "GemStandToDown",
    "GemSitToStand",
    "GemStandToSit",
    "GemDownToSit",
    "GemSitToDown",
    "GemStandPassive",
    "GemDownPassive",
    "GemSitPassive",
    "GemBarkHead",
    "GemBarkBody",
    "GemPoo",
    "GemBeg5",
    "GemLandHigh",
    "GemLandRun",
    "GemLandSoftHigh",
    "GemMidJumpHigh",
    "GemMidJumpRun",
    "GemMidJumpSoftHigh",
    "GemTakeOffHigh",
    "GemTakeOffRun",
    "GemDigIn",
    "GemDigOut",
    "GemDigLoop",
    "CattabbyAmbleBL",
    "CattabbyAmbleBR",
    "CattabbyAmbleFL",
    "CattabbyAmbleFR",
    "CattabbyAmbleIdle",
    "CattabbyDangle",
    "CattabbyWalk",
    "CattabbyScratch",
    "kittenladystand",
    "kittenladyfretting",
    "kittenladygivebone",
    "KittenLadyTalkL",
    "kittenladytalkr",
    "BuskerBarkReaction",
    "BuskerGiveTreat",
    "BuskerPooReaction",
    "BuskerPlayGuitarIn",
    "BuskerPlayGuitarLoop",
    "BuskerPlayGuitarOut",
    "BuskerScratchHead",
    "BuskerSitting",
    "BuskerTalking",
    "RavenStand",
    "RavenLookAround",
    "RavenWalk",
    "DogCageIdle",
    "DogCageopen",
    "DogCageOpening",
    "DogCatcherDoor",
    "DogPoundCutSceneDwayne",
    "DogPoundCutSceneWayne",
    "DogPoundCutSceneDogCatcher",
    "DogPoundCutSceneTruck",
    "DogPoundCutSceneJake",
    "DogPoundCutSceneDoberman",
    "DogPoundCutSceneGates",
    "dogpoundcutscenecamerashot01",
    "dogpoundcutscenecamerashot02",
    "dogpoundcutscenecamerashot03",
    "dogpoundcutscenecamerashot04",
    "dogpoundcutscenecamerashot05",
    "dogpoundcutscenecamerashot06",
    "dogpoundcutscenecamerashot07",
    "dogpoundcutscenecamerashot08",
    "dogpoundcutscenecamerashot09",
    "dogpoundcutscenecamerashot10",
    "dogpoundcutscenecamerashot11",
    "dogpoundcutscenecamerashot12",
    "dogpoundcutscenecamerashot13",
    "dogpoundcutscenecamerashot14",
    "dogpoundcutscenecamerashot15",
    "dogpoundcutscenecamerashot16",
    "dogpoundcutscenecamerashot17",
    "dogpoundcutscenecamerashot18",
    "cardsharppickupcard",
    "cardsharpputheadinhands",
    "cardsharpscratchear",
    "CardSharpSit",
    "CardSharpSittingWithHeadInHands",
    "CardSharpTalkIn",
    "CardSharpTalkLoop",
    "CardSharpTalkOut",
    "cardsharpwin",
    "cardplayerlostin",
    "cardplayerlostloop",
    "cardplayerlostout",
    "cardplayerpickupcard",
    "cardplayersit",
    "cardplayertalkin",
    "cardplayertalkloop",
    "cardplayertalkout",
    "cardplayervisibility",
    "DrunkGiveBone",
    "DrunkShakingHead",
    "DrunkSitting",
    "DrunkTalk",
    "DogCatcherGetOffStool",
    "DogCatcherGetOffStoolHeld",
    "DogCatcherSitAtBar",
    "DogCatcherTalkAtBar",
    "DogCatcherTurnAndSniff",
    "AccompliceLookSuspicious",
    "AccompliceQuietlyShout",
    "tiggeramblebl",
    "tiggeramblebr",
    "tiggeramblefl",
    "tiggeramblefr",
    "TiggerAmbleIdle",
    "tiggercanter",
    "tiggerdownpassive",
    "tiggerdowntosit",
    "tiggerdowntostand",
    "tiggersitpassive",
    "tiggersittodown",
    "tiggersittostand",
    "tiggerstandtodown",
    "tiggerstandtosit",
    "tiggertrot",
    "tiggerwalk",
    "tiggerstandpassive",
    "tiggerbarkbody",
    "tiggerbarkhead",
    "tiggerlandhigh",
    "tiggerlandrun",
    "tiggerlandsofthigh",
    "tiggermidjumphigh",
    "tiggermidjumprun",
    "tiggermidjumpsofthigh",
    "tiggertakeoffhigh",
    "tiggertakeoffrun",
    "tiggerpoo",
    "WindowLift1Down",
    "WindowLift1Up",
    "WindowLift1Stay",
    "WindowLift2Down",
    "WindowLift2Up",
    "WindowLift2Stay",
    "WindowLift3Down",
    "WindowLift3Up",
    "WindowLift3Stay",
    "DaisySad",
    "GrinderOpenL",
    "GrinderOpenR",
    "GrinderOpenLHeld",
    "GrinderOpenRHeld",
    "GrinderSpinL",
    "GrinderSpinR",
    "GrinderStopL",
    "GrinderStopR",
    "ChopperOn",
    "ChopperStopped",
    "CannerBlowUp",
    "CannerBlowUpHeld",
    "CannerBrokenStage1",
    "CannerBrokenStage2",
    "CannerIdle",
    "PounderLeverClosed",
    "PounderLeverOpen",
    "PounderLeverOpening",
    "PounderOn",
    "PounderOff",
    "Camera",
    "FactoryEntranceDoorHeldOpen",
    "FactoryEntranceDoorHeldShut",
    "FactoryEntranceDoorOpening",
    "finalecutscenecamerashot01",
    "finalecutscenecamerashot02",
    "finalecutscenecamerashot03",
    "finalecutscenecamerashot04",
    "finalecutscenecamerashot05",
    "finalecutscenecamerashot06",
    "finalecutscenecamerashot07",
    "finalecutscenecamerashot08",
    "finalecutscenecamerashot09",
    "finalecutscenecamerashot10",
    "finalecutscenecamerashot11",
    "finalecutscenecamerashot12",
    "finalecutscenecamerashot13",
    "finalecutscenecamerashot14",
    "finalecutscenecamerashot15",
    "finalecutscenecamerashot16",
    "finalecutscenecamerashot17",
    "finalecutscenecamerashot18",
    "finalecutscenecamerashot19",
    "finalecutscenecamerashot20",
    "finalecutscenecamerashot21",
    "finalecutscenecamerashot22",
    "finalecutscenecamerashot23",
    "finalecutscenecamerashot24",
    "finalecutscenecamerashot25",
    "finalecutscenecamerashot26",
    "finalecutscenecamerashot27",
    "finalecutscenecamerashot28",
    "finalecutscenecamerashot29",
    "finalecutscenecamerashot30",
    "finalecutscenecamerashot31",
    "finalecutscenecamerashot32",
    "finalecutscenecamerashot33",
    "finalecutscenecamerashot34",
    "finalecutscenecamerashot35",
    "FinaleCutsceneDaisy",
    "FinaleCutsceneJake",
    "FinaleCutsceneMissP",
    "FinaleCutsceneProps",
    "MissPeachesHouseCamShot1",
    "MissPeachesHouseCamShot2",
    "MissPeachesHouseCamShot3",
    "MissPeachesHouseCamShot4",
    "MissPeachesHouseCamShot5",
    "MissPeachesHouseCamShot6",
    "MissPeachesHouseCamShot7",
    "MissPeachesHouseCamShot8",
    "MissPeachesHouseCamShot9",
    "MissPeachesHouseCamShot10",
    "MissPeachesHouseCamShot11",
    "MissPeachesHouseCamShot12",
    "MissPeachesHouseCamShot13",
    "MissPeachesHouseCamShot14",
    "MissPeachesHouseCamShot15",
    "MissPeachesHouseCamShot16",
    "MissPeachesHouseCamShot17",
    "MissPeachesHouseCamShot18",
    "MissPeachesHouseCamShot19",
    "MissPeachesHouseWayne",
    "MissPeachesHouseDwayne",
    "MissPeachesHouseMissPeaches",
    "Epilogue",
    "EpilogueCam",

};

const char* D_00369F10[] = { // Script names
    "Radio",
    "BoneGod",
    "DiggablePatch",
    "GemScript",
    "GameStateGodScript",
    "MusicGodScript",
    "Bone",
    "HiddenBone",
    "Treat",
    "TreatAvailable",
    "TreatHidden",
    "TreatTrick",
    "ActivationGod",
    "CameraScript",
    "DoNothing",
    "StayInLocation",
    "RoverSaysPuzzleGodScript",
    "RaceGodScript",
    "HintGod",
    "BackingSmallScript",
    "BackingMediumScript",
    "BackingLargeScript",
    "Shit",
    "SaveKennel",
    "TitleKennel",
    "Ball",
    "TitleObject",
    "SaveIslandDog",
    "ButcherEggPuzzleGodScript",
    "EggScript",
    "Basket",
    "TrashCanAnimated",
    "BreathGodScript",
    "Coat",
    "WrongCoat",
    "CafeAmbienceScript",
    "ClimberHat",
    "CoatGirlFootprintGod",
    "RealtorTruckScript",
    "FarmhouseHorseScript",
    "FarmhouseChicken1",
    "FarmhouseChicken2",
    "FarmhouseChicken3",
    "FarmhouseChicken4",
    "ChihuahuaControllable",
    "Grampa",
    "FarmhouseBasketballNet",
    "HayBalePuzzleScript",
    "BeeSwarm",
    "Jason",
    "Music_Hicksville_Farmhouse_River",
    "Music_Hicksville_Farmhouse_Farm",
    "Music_Hicksville_Farmhouse_Waterfall",
    "BanjomanFarmhouse",
    "BanjomanTuneHouse",
    "FarmhouseCatFlapHintGod",
    "Fish",
    "BirdFarmhouse",
    "FarmhouseBottle",
    "PaddockSign",
    "RowingBoat",
    "TrashCanAnimatedRat",
    "WashingLine",
    "FarmhouseShutters",
    "CardBoardBox",
    "BarrelInteractive",
    "Microwave",
    "DogBox",
    "Dalmatian",
    "RocketMan",
    "Rocket",
    "RocketPiece",
    "SawyerScript",
    "Music_Hicksville_WaterMill_River",
    "MillwheelScript",
    "Duck",
    "TugOfWarGod",
    "Crates",
    "WatermillHayBale",
    "Hammock",
    "Skunk",
    "FishWatermill",
    "HickBigFieldPostvan",
    "Sheep",
    "ShepherdScript",
    "SheepDogScript",
    "BigFieldRaven",
    "PloughFarmer",
    "Scarecrow",
    "BirdShit",
    "Balloon",
    "HickHousesMoped",
    "TerrierScript",
    "PramWomanScript",
    "PramScript",
    "PostManScript",
    "PostVan",
    "Puppy",
    "GarageDoor",
    "GroundedKid",
    "GroundedKidsMum",
    "NoteBoy",
    "Roundabout",
    "Cat",
    "Parrot",
    "GumMachine",
    "VendingMachine",
    "HighStreetParlourSign",
    "HickCentreParlourGod",
    "ParlourDoors",
    "Freezer",
    "ButcherScript",
    "EggKid1",
    "EggKid2",
    "Doberman",
    "HickCentreVehicle",
    "TrainHicksville",
    "DogCatcherGating",
    "USFlag",
    "SlidingDoors",
    "HickCentreChicken",
    "Cashier",
    "Fence",
    "FencePieces",
    "BirdGeneric",
    "CentrePasserBy",
    "Robots",
    "TownBillboard",
    "ClarksvilleEndCutscene",
    "ClarksvilleEndCutsceneDwayne",
    "ClarksvilleEndCutsceneWayne",
    "ClarksvilleEndCutsceneMissP",
    "ClarksvilleEndCutsceneTruck",
    "CFChicken1",
    "CFChicken2",
    "CFChicken3",
    "CFChicken4",
    "CFChicken5",
    "ChickFarmFox",
    "Music_Hicksville_ChickenFarm_River",
    "ChickenFarmer",
    "Pug",
    "PugCluesScript",
    "PugPuzzleGodScript",
    "TrainSkiResort",
    "SkiResortTrainToTown",
    "DogCatcherDogGating",
    "CafeSkidoo",
    "CafeCar",
    "Boxer",
    "CafeOwner",
    "CoatGirl",
    "CoatGirlWithCoat",
    "SkiCafePigeon",
    "SkiCafePigeonGod",
    "CafePerson",
    "FunCrane",
    "SlotMachine",
    "LakeMEndCutscene",
    "MallDoors",
    "SkiShopDoors",
    "MallParlourDoors",
    "SkiHighStreetParlourGod",
    "HighStreetBird",
    "Telegrapher",
    "VanHighStreet",
    "Husky",
    "HelicopterKid",
    "ModelHelicopter",
    "HighStFlags",
    "CableCarHighStreet",
    "HighStreetPasserBy",
    "SkiLiftSeat",
    "RedVan",
    "LiftAttendantHat",
    "SkiSlopeSkier",
    "SkiSlopeSkierGod",
    "Labrador",
    "Snowman",
    "Liftattendant",
    "TobogganKid1",
    "TobogganKid2",
    "TobogganKid3",
    "TobogganKidFight1",
    "TobogganKidFight2",
    "Flag",
    "Stove",
    "Pulley",
    "ThrowSnowball",
    "MountainTopFallingDeathGod",
    "AntennaGodLocal",
    "MountainTopBird",
    "Cablecarman2",
    "BullMastiff",
    "Helicopter",
    "Climber2",
    "CableCarManCratePuzzle",
    "CableCarManDoor",
    "CableCarMountainTop",
    "Cobra",
    "Climber",
    "StBernard",
    "Boulder",
    "BoulderGod",
    "BigHotelSkidoo",
    "BigHotelCar",
    "Hotelier",
    "MiniPinscher",
    "Rat",
    "RatTrashCan",
    "RatPuzzleGod",
    "HotelEntertainerScript",
    "HotelPatron",
    "Bartender",
    "Alsatian",
    "TownStationTrafficGod",
    "Robber",
    "Sheriff",
    "RobberDoor",
    "RobberDoorLock",
    "WarehouseBlockPuzzle",
    "WarehouseDoor",
    "StationSheriffCar",
    "StationTaxi",
    "Music_Town_Station_Farm",
    "TrainTown",
    "RobberSwagBag",
    "StationPasserBy",
    "StationParlourSign",
    "TownStationParlourGod",
    "ParkVehicle",
    "Whippet",
    "Music_Town_Park_Farm",
    "Kitten",
    "KittenPerson",
    "Busker",
    "ParkPasserBy",
    "DogCatcherPark",
    "DogCatcherDogDogPound",
    "DogCatcherDogPound",
    "ImprisonedDog",
    "RavenDogPound",
    "CricketsScript",
    "FrogScript",
    "OwlScript",
    "DogPoundCage",
    "DCHouseDoor",
    "DogPoundCutscene",
    "DogPoundCutsceneDwayne",
    "DogPoundCutsceneWayne",
    "DogPoundCutsceneDogCatcher",
    "DogPoundCutsceneTruck",
    "DogPoundCutsceneJake",
    "DogPoundCutsceneDoberman",
    "DogPoundCutsceneGates",
    "BartenderTown",
    "CardSharp",
    "CardPlayer",
    "TownCentreTaxi",
    "TownCentreTrafficGod",
    "Drunk",
    "Jukebox",
    "BarClock",
    "CeilingFan",
    "DogCatcherBar",
    "DogCatcher",
    "DogCatcherDog",
    "RobberAccomplice",
    "SheriffCentre",
    "SheriffCarCentre",
    "GreyHound",
    "WindowLift",
    "Bucky",
    "Grinder",
    "Chopper",
    "AcidBathScript",
    "Canner",
    "CanningMachineAperture",
    "Pounder",
    "PounderLever",
    "Flamer",
    "PotPoodleGod",
    "PotPoodleNav",
    "FinaleDeathGod",
    "FinaleJumpGod",
    "PlanRoomDoor",
    "FinaleEndCutscene",
    "FinaleEndCutsceneDaisy",
    "FinaleEndCutsceneJake",
    "FinaleEndCutsceneMissP",
    "FinaleEndCutsceneProps",
    "FinaleStartCutscene",
    "FinaleStartCutsceneWayne",
    "FinaleStartCutsceneDwayne",
    "FinaleStartCutsceneMissP",
    "Epilogue",
    "EpilogueCam",

};

const char* D_0036A3B8[] = { // NavGraph names
    "default",
    "HickFarmVehicles",
    "HickFarmHayBale",
    "RoverSays",
    "HickFarmHouseZone1",
    "HickFarmHouseZone2",
    "HickFarmBarnZone4",
    "HickFarmBarnZone3",
    "HickFarmBarnZone2",
    "HickFarmBarnZone1",
    "GrampaZoneNav",
    "FarmhouseInsideZone",
    "VerandaZoneNav",
    "FarmhouseBanjomanJetty",
    "KitchenZoneNav",
    "UnderBridgeZone1Nav",
    "UnderBridgeZone2Nav",
    "RaceNav",
    "FarmhouseCatFlap",
    "FarmhouseFish",
    "TrashCanAnimatedRat",
    "FarmhouseVillageSideActivationZone",
    "FarmhouseHouseAreaActivationZone",
    "FarmhouseGrampaActivationZone",
    "CatchMeIfYouCanRoute",
    "TugOfWar",
    "WatermillHaybale",
    "HayBaleCamZone",
    "HouseBalconyCamZone",
    "HouseCamZone",
    "QuarryCam1Zone",
    "QuarryCam2Zone",
    "QuarryCam3Zone",
    "QuarryCam4Zone",
    "QuarryCam5Zone",
    "QuarryCam6Zone",
    "QuarryCam7Zone",
    "QuarryCam8Zone",
    "QuarryCam9Zone",
    "QuarryCam10Zone",
    "QuarryCam10bZone",
    "QuarryCam11Zone",
    "QuarryCam11bZone",
    "QuarryCam12Zone",
    "QuarryCam13Zone",
    "QuarryCam13bZone",
    "QuarryCam14Zone",
    "QuarryCam15Zone",
    "QuarryCam16Zone",
    "QuarryCam17Zone",
    "QuarryCam18Zone",
    "QuarryCam19Zone",
    "QuarryCam20Zone",
    "QuarryCam21Zone",
    "CaveCam1Zone",
    "CaveCam2Zone",
    "CaveCam3Zone",
    "CaveCam4Zone",
    "CaveCam5Zone",
    "CaveCam6Zone",
    "CaveCam7Zone",
    "CaveCam8Zone",
    "CaveCam9Zone",
    "WatermillSkunk",
    "BigFieldCar",
    "BigfieldSkunk",
    "BigFieldPenArea",
    "BigFieldSheep",
    "VillageHousesMoped",
    "VillageHousesMoped2",
    "VillageHousesPostmanNav",
    "VillageHousesGarageZone",
    "VillageHousesPostVanNav",
    "VillageHousesGreenHouseZone",
    "VillageHousesTunnelLeftZone",
    "VillageHousesTunnelRightZone",
    "VillageHousesDriveWayZone",
    "VillageHousesShedFrontZone",
    "VillageHousesShedMiddleZone",
    "VillageHousesShedSideZone",
    "HickCentreCat",
    "CentreParlour",
    "CentreStairsZoneNav",
    "CentreStationTunnelZone",
    "DCChaseIndoorAreas",
    "CentreMoped",
    "CentreTaxi",
    "CentrePostVanNav",
    "TrainHicksville",
    "HicksvilleTrainGetOnZone",
    "HickCentreButchersZone",
    "CentreChickenZone",
    "CentreFenceZone",
    "CentreSupermarketCam1",
    "CentreSupermarketCam2",
    "CentreSupermarketCam3",
    "CentreSupermarketCam4",
    "ChickenFarmCoopCam1",
    "ChickenFarmCoopCam2",
    "ChickenFarmCoopCam3",
    "ChickenFarmCoopCam4",
    "CafeTrain",
    "SkiResortTrainGetOnZone",
    "SkiresortTrainToTown",
    "SkiresortTrainToTownGetOnZone",
    "CafePlatformArea",
    "CafeSkidoo",
    "CafeCarNav",
    "CafePigeons",
    "CafeTablesArea",
    "CafeCat",
    "HighStreetParlour",
    "HighStreetVans",
    "HighStreetBoxesRoomZone",
    "HighStreetBoxesRoomZone2",
    "HighStreetCableCarRoomZone",
    "HighStreetOfficeZone1",
    "HighStreetOfficeZone2",
    "HighStreetCat",
    "HighStreetPasserBy",
    "HighStreetMallZone",
    "SkiLift",
    "SkiSlopeVans",
    "SkiSlopeSkierRoute1",
    "SkiSlopeSkierRoute2",
    "SkiSlopeSkierRoute3",
    "SkiSlopeSkierRoute4",
    "SkiSlopeSkierRoute5",
    "SkiSlopeCoatHut",
    "SkiSlopeCoalHut",
    "SkiSlopeHat",
    "SkiSlopeSkiersZone",
    "SkiSlopeSnowmanKidsZone",
    "SkiSlopeSnowFightKidsZone",
    "SkiSlopeVansZone",
    "SkiSlopeCafePeopleZone",
    "SkiSlopeIsolateJakeJumpingZone",
    "SkiSlopeFight",
    "SkiSlopeSnowman",
    "SkiSlopeHatZone1",
    "SkiSlopeHatZone2",
    "SkiSlopeHatZone2b",
    "SkiSlopeHatZone2c",
    "SkiSlopeHatZone3",
    "SkiSlopeHatZone4",
    "SkiSlopeHatZone5",
    "SkiSlopeHatZone6",
    "MountainTopBirds",
    "MountainTopRespawnAreaZoneNav",
    "MountainTopCableCarZoneNav",
    "MountainTopCrate",
    "MountainSideBoulderTrack",
    "BigHotelSkidoo",
    "BigHotelCar",
    "Inside",
    "BigHotelPatronsZone",
    "BigHotelEntertainerCamZoneNav",
    "BigHotelRat",
    "BigHotelAlleyStop",
    "BigHotelRatZone",
    "StationPlatform1",
    "StationPlatform1b",
    "StationPlatform2",
    "StationPlatform3",
    "StationPlatform4",
    "StationPlatform5",
    "StationRobberBelow",
    "StationRobberDoorLock",
    "StationRobberDoorLock2",
    "StationRobberGround",
    "StationRobberSneak",
    "StationRobberSneak2",
    "StationRobberSneak3",
    "StationRobberSneak4",
    "StationRobberSneakAll",
    "StationRobberSnore",
    "StationSheriffEntry",
    "StationVehicles",
    "StationWarehouseBlockPuzzle",
    "StationWarehouseCam",
    "StationWarehouseCam2",
    "StationWarehouseCam3",
    "StationWarehouseCam4",
    "StationWarehouseCam5",
    "StationWarehouseCam6",
    "StationWarehouseCam7",
    "StationWarehouseCam8",
    "StationWarehouseCam9",
    "StationWarehouseExit",
    "StationWarehouseExitLedge",
    "StationWarehouseFalseExit1",
    "StationWarehouseFalseExit1Ledge",
    "StationWarehouseFalseExit2",
    "StationWarehouseFalseExit2Ledge",
    "StationWarehouseFireEscape",
    "StationWarehouseFireEscape2",
    "StationWarehouseFireEscape3",
    "StationStairsZoneNav",
    "TownTrain",
    "TownTrainGetOnZone",
    "StationSkunk",
    "StationPasserBy",
    "StationParlour",
    "StationOfficeDoorCam",
    "StationOfficeCam1",
    "StationOfficeCam2",
    "StationOfficeCam3",
    "StationOfficeCam4",
    "StationOfficeCam5",
    "StationOfficeCam6",
    "StationBoxesCam1",
    "StationBoxesCam2",
    "StationBoxesCam3",
    "StationBoxesCam4",
    "StationBoxesCam5",
    "StationBoxesCam6",
    "StationBoxesCam7",
    "StationBoxesCam8",
    "ParkVehicles",
    "ParkKittenHouseCell",
    "ParkHallZoneNav",
    "ParkRoomZoneNav",
    "ParkDoorZoneNav",
    "ParkPasserBy",
    "DogPoundDogsEscape",
    "CentrePavements",
    "CentrePasserby",
    "CentreDinerArea",
    "CentreDinerJunctionA",
    "CentreDinerJunctionB",
    "CentreDinerJunctionC",
    "CentreDinerJunctionCLong",
    "CentreDinerJunctionD",
    "CentreLGJunctionA",
    "CentreLGJunctionB",
    "CentreLGJunctionC",
    "CentreLGJunctionCLong",
    "CentreLGJunctionD",
    "CentreCardPlayerZone",
    "CentreDCTrigger",
    "NorthBalconyZoneNav",
    "WestBalconyZoneNav",
    "EastBalconyZoneNav",
    "WindowLift1Room",
    "WindowLift2Room",
    "WindowLift3Room",
    "WindowLift4Room",
    "WindowLift1Window",
    "WindowLift2Window",
    "WindowLift3Window",
    "WindowLift4Window",
    "Finale",
    "FinaleAcidBath",
    "FinaleAcidBath2",
    "FinaleAirVent",
    "FinaleBoxes",
    "FinaleBoxesB",
    "FinaleBoxesC",
    "FinaleBoxesBone",
    "FinaleCanner",
    "FinaleCanner2",
    "FinaleCannerWalkWay",
    "FinaleCams",
    "FinaleChopper",
    "FinaleChopper2",
    "FinaleChopper2Button",
    "FinaleChopper2WalkWay",
    "FinaleConveyorBelt",
    "FinaleEndDoor",
    "FinaleFlamer",
    "FinaleFlamerWalkWay",
    "FinaleGrinder",
    "FinaleGrinderWalkWay",
    "FinaleJump",
    "FinalePlanRoom",
    "FinalePlanRoom2",
    "FinalePlanRoom3",
    "FinalePounder",
    "FinalePounderB",
    "FinalePounder2",
    "FinaleStart",

};

const char* D_0036A820[] = { // Music names
    "JA_BC_01",
    "JA_BC_1A",
    "JA_BC_1B",
    "JA_BC_02",
    "JA_BL_01",
    "JA_BO_01",
    "JA_BO_02",
    "JA_BO_03",
    "JA_BO_04",
    "JA_BO_05",
    "JA_BO_06",
    "JA_BO_07",
    "JA_BO_08",
    "JA_BO_09",
    "JA_BO_10",
    "JA_BO_11",
    "JA_BO_12",
    "JA_BO_13",
    "JA_BO_14",
    "JA_BO_15",
    "JA_BO_16",
    "JA_BS_01",
    "JA_DV_01",
    "JA_FO_03",
    "JA_FO_04",
    "JA_FO_05",
    "JA_FO_06",
    "JA_FO_07",
    "JA_FO_08",
    "JA_FO_09",
    "JA_FO_10",
    "JA_FO_11",
    "JA_FO_12",
    "JA_FO_13",
    "JA_FO_14",
    "JA_FO_15",
    "JA_FO_16",
    "JA_FO_17",
    "JA_FO_18",
    "JA_FO_19",
    "JA_FO_20",
    "JA_FO_21",
    "JA_FO_22",
    "JA_FO_23",
    "JA_FO_24",
    "JA_FO_25",
    "JA_FT_01",
    "JA_FT_02",
    "JA_FT_03",
    "JA_FT_04",
    "JA_FT_05",
    "JA_FT_06",
    "JA_FT_07",
    "JA_FT_08",
    "JA_FT_09",
    "JA_FT_10",
    "JA_FT_11",
    "JA_FT_12",
    "JA_FT_13",
    "JA_FT_14",
    "JA_FT_15",
    "JA_FT_16",
    "JA_FT_17",
    "JA_HS_01",
    "JA_HS_1A",
    "JA_HS_1B",
    "JA_HU_01",
    "JA_HU_02",
    "JA_HU_03",
    "JA_HU_04",
    "JA_HU_05",
    "JA_HU_06",
    "JA_HU_07",
    "JA_HU_08",
    "JA_HU_09",
    "JA_HU_10",
    "JA_HU_11",
    "JA_HU_12",
    "JA_HU_13",
    "JA_HU_14",
    "JA_HU_15",
    "JA_HU_16",
    "JA_HU_17",
    "JA_HU_18",
    "JA_HU_19",
    "JA_HU_20",
    "JA_PO_01",
    "JA_PO_02",
    "JA_PO_03",
    "JA_PO_04",
    "JA_PO_05",
    "JA_PO_06",
    "JA_PO_07",
    "JA_RF_01",
    "JA_RF_02",
    "JA_RF_03",
    "JA_RF_04",
    "JA_RF_05",
    "JA_RF_06",
    "JA_RF_07",
    "JA_RF_08",
    "JA_RF_09",
    "JA_RF_10",
    "JA_RF_11",
    "JA_RF_12",
    "JA_RF_13",
    "JA_RF_14",
    "JA_RF_15",
    "JA_RF_16",
    "JA_RF_17",
    "JA_RF_18",
    "JA_RF_19",
    "JA_RF_20",
    "JA_RF_21",
    "JA_RF_22",
    "JA_RF_23",
    "JA_RF_24",
    "JA_RF_25",
    "JA_SW_01",
    "JA_VL_01",
    "JA_VS_01",
    "GE_DT_02",
    "GE_DT_05",
    "GE_DT_20",
    "GE_DT_21",
    "GE_DT_25",
    "GE_DT_26",
    "GE_DT_J1",
    "GE_DT_J2",
    "GE_DT_J3",
    "GE_DT_J4",
    "GE_SC_01",
    "GE_SC_02",
    "GE_SC_03",
    "GE_SC_04",
    "GE_SC_05",
    "JA_CD_01",
    "JA_CD_02",
    "JA_CD_03",
    "JA_CD_04",
    "JA_CD_05",
    "JA_CD_06",
    "JA_CD_07",
    "JA_CD_08",
    "JA_CD_09",
    "JA_CD_10",
    "JA_CD_11",
    "JA_CD_12",
    "JA_CD_13",
    "JA_CD_14",
    "JA_CD_15",
    "JA_DD_01",
    "JA_DL_01",
    "JA_DI_01",
    "JA_DI_02",
    "JA_DI_03",
    "JA_DI_04",
    "JA_DI_05",
    "JA_DI_06",
    "JA_DI_07",
    "JA_DS_01",
    "JA_DS_02",
    "JA_HV_01",
    "JA_HV_02",
    "JA_PL_01",
    "JA_PP_01",
    "JA_PP_02",
    "JA_PP_03",
    "JA_PP_10",
    "JA_PP_11",
    "JA_PP_12",
    "JA_PS_01",
    "JA_PS_02",
    "JA_RB_01",
    "JA_RB_02",
    "JA_RB_03",
    "JA_RL_01",
    "JA_RS_01",
    "JA_RW_01",
    "JA_RW_02",
    "JA_RW_03",
    "JA_RW_04",
    "JA_SL_01",
    "JA_SL_02",
    "JA_SL_03",
    "JA_SS_01",
    "JA_SS_02",
    "JA_SM_LOSE",
    "JA_TL_01",
    "JA_TS_01",
    "JA_TS_02",
    "JA_SC_01",
    "JA_SC_02",
    "JA_SC_03",
    "JA_SC_04",
    "JA_SC_05",
    "JA_SC_06",
    "JA_SC_07",
    "JA_SC_08",
    "JA_SC_09",
    "JA_SC_10",
    "JA_SC_11",
    "JA_SC_12",
    "JA_SC_13",
    "JA_SC_14",
    "JA_SC_15",
    "JA_SC_16",
    "JA_SC_17",
    "JA_SC_18",
    "JA_YM_01",
    "JA_YM_02",
    "JA_YM_03",
    "JA_YM_04",
    "JA_YM_05",
    "JA_YM_06",
    "JA_YM_07",
    "JA_YM_08",
    "JA_YM_09",
    "JA_YM_10",
    "JA_YM_11",
    "JA_YM_12",
    "JA_YM_13",
    "JA_YM_14",
    "JA_YM_15",
    "JA_YM_16",
    "JA_YM_17",
    "JA_YM_18",
    "JA_YM_19",
    "JA_YM_20",
    "DF_B2_01",
    "DF_BL_02",
    "DM_B2_05",
    "DM_BL_06",
    "DM_BL_07",
    "DM_B2_08",
    "FH_NA_10",
    "FH_NA_23",
    "FH_NA_24",
    "FH_NA_25",
    "FH_NA_26",
    "FH_NA_31",
    "GE_PA_01",
    "GE_PA_02",
    "GE_PA_03",
    "GE_PA_05",
    "GE_PA_04",
    "GE_PA_06",
    "GE_PA_10",
    "GE_PA_99",
    "BC_TRAIN_NEARBY",
    "CV_TRAIN_NEARBY",
    "LM_TRAIN_NEARBY",
    "PM_DG_01",
    "PM_DG_02",
    "PM_DG_03",
    "PM_DG_04",
    "PM_DG_05",
    "PM_DG_06",
    "PM_DG_07",
    "PM_DG_08",
    "PM_DG_09",
    "PM_DG_10",
    "PM_DG_11",
    "PM_DG_12",
    "PM_DH_01",
    "PM_DH_02",
    "PM_DH_03",
    "PM_DH_04",
    "PM_DH_05",
    "PM_DH_06",
    "PM_DH_07",
    "PM_DH_08",
    "PM_DH_09",
    "PM_DH_10",
    "PM_DH_11",
    "PM_DL_01",
    "PM_DL_02",
    "PM_DL_03",
    "PM_DL_04",
    "PM_DL_05",
    "PM_DL_06",
    "PM_GT_01",
    "PM_GT_02",
    "PM_GT_03",
    "PM_GT_04",
    "PM_GT_05",
    "PM_GT_06",
    "PM_GT_07",
    "PM_GT_08",
    "PM_GT_09",
    "PM_GT_10",
    "PM_NB_01",
    "PM_NB_02",
    "PM_NB_03",
    "PM_NB_04",
    "PM_NB_05",
    "PM_NB_06",
    "PM_NB_07",
    "PM_NB_08",
    "PF_DG_01",
    "PF_DG_02",
    "PF_DG_03",
    "PF_DG_04",
    "PF_DG_05",
    "PF_DG_06",
    "PF_DG_07",
    "PF_DG_08",
    "PF_DG_09",
    "PF_DG_10",
    "PF_DG_11",
    "PF_DH_01",
    "PF_DH_02",
    "PF_DH_03",
    "PF_DH_04",
    "PF_DH_05",
    "PF_DH_06",
    "PF_DH_07",
    "PF_DH_08",
    "PF_DH_09",
    "PF_DL_01",
    "PF_DL_02",
    "PF_DL_03",
    "PF_DL_04",
    "PF_DL_05",
    "PF_DL_06",
    "PF_DL_07",
    "PF_DL_08",
    "PF_DL_09",
    "PF_DL_10",
    "PF_DL_11",
    "PF_GT_01",
    "PF_GT_02",
    "PF_GT_03",
    "PF_GT_04",
    "PF_GT_05",
    "PF_GT_06",
    "PF_GT_07",
    "PF_GT_08",
    "PF_GT_09",
    "PF_GT_10",
    "PF_NB_01",
    "PF_NB_02",
    "PF_NB_03",
    "PF_NB_04",
    "title",
    "congas",
    "congas2",
    "dan",
    "lynrd",
    "mellow",
    "cagney",
    "porno",
    "creepy",
    "joanna",
    "dogRaceMusic",
    "dogRace_Failure",
    "dogRace_TaRa",
    "dogRace_Victory",
    "dogRace_Whoosh",
    "roverSaysMusic",
    "roverSays_Success1",
    "roverSays_Success2",
    "SubGame2Music",
    "SubGame3Music",
    "Fx_Fart1",
    "Fx_Fart2",
    "Fx_FrtW1",
    "Fx_FrtW2",
    "Fx_FrtW3",
    "Fx_FrtW4",
    "Fx_Pee1",
    "Fx_Pee2",
    "Fx_Yawn1",
    "Fx_Yawn2",
    "Fx_DogCatcherDogSnarl",
    "Fx_GuitarManStrum1",
    "Fx_GuitarManStrum2",
    "Fx_GuitarManStrum3",
    "Fx_GuitarManStrum4",
    "Fx_PoodleParlourSeq1",
    "Fx_FruitMachine_attract1",
    "Fx_FruitMachine_attract1b",
    "Fx_FruitMachine_attract2",
    "Fx_FruitMachine_attract3",
    "FH_GR_01",
    "FH_GR_02",
    "FH_GR_03",
    "FH_GR_04",
    "FH_GR_10",
    "FH_GR_11",
    "FH_GR_12",
    "FH_GR_20",
    "FH_GR_30",
    "FH_GR_31",
    "FH_GR_32",
    "FH_GR_40",
    "FH_GR_41",
    "FH_GR_42",
    "FH_GR_43",
    "FH_GR_50",
    "FH_GR_51",
    "FH_GR_52",
    "FH_GR_53",
    "FH_JA_01",
    "FH_JA_02",
    "FH_JA_03",
    "FH_JA_04",
    "FH_JA_05",
    "FH_JA_10",
    "FH_JA_11",
    "FH_JA_12",
    "FH_JA_13",
    "FH_JA_21",
    "FH_JA_22",
    "FH_JA_23",
    "FH_JA_24",
    "FH_JA_25",
    "FH_JA_26",
    "FH_JA_27",
    "FH_JA_50",
    "FH_JA_51",
    "FH_JA_52",
    "FH_JA_BA",
    "FH_JA_BE",
    "FH_JA_DG",
    "FH_JA_R1",
    "FH_JA_R2",
    "FH_JA_R3",
    "FH_JA_RL",
    "IN_JA_01",
    "FH_DT_01",
    "FH_DT_02",
    "FH_DT_03",
    "FH_DT_06",
    "FH_DT_07",
    "FH_DT_08",
    "FH_DT_09",
    "FH_DT_10",
    "FH_DT_11",
    "FH_DT_50",
    "FH_DT_51",
    "FH_DT_52",
    "FH_DT_53",
    "FH_DT_54",
    "FH_DT_55",
    "FH_DT_56",
    "FH_DT_57",
    "FH_DT_58",
    "FH_DT_70",
    "FH_DT_71",
    "FH_DT_72",
    "FH_DT_80",
    "IN_DT_10",
    "IN_DT_11",
    "IN_DT_12",
    "IN_DT_13",
    "IN_DT_21",
    "FH_BA_01",
    "FH_BA_02",
    "FH_BA_03",
    "FH_BA_04",
    "FH_BA_05",
    "FH_BA_06",
    "FH_BA_07",
    "FH_BA_08",
    "FH_BA_09",
    "FH_BA_10",
    "FH_BA_11",
    "FH_BA_BA",
    "FH_BA_BE",
    "FH_BA_DG",
    "FH_BA_R1",
    "FH_BA_R2",
    "FH_BA_R3",
    "FH_BA_RL",
    "FH_NA_06",
    "FH_NA_07",
    "FH_NA_11",
    "FH_NA_12",
    "FH_NA_13",
    "FH_NA_14",
    "FH_NA_15",
    "FH_NA_16",
    "FH_NA_17",
    "FH_NA_18",
    "FH_NA_29",
    "FH_NA_30",
    "BC_RA_01",
    "BC_RA_02",
    "BC_RA_03",
    "CV_RA_01a",
    "CV_RA_01b",
    "CV_RA_01c",
    "CV_RA_02a",
    "CV_RA_02b",
    "CV_RA_03a",
    "CV_RA_03b",
    "DL_AD_01",
    "DL_AD_02",
    "DL_AD_03",
    "DL_AD_04",
    "LM_RA_01a",
    "LM_RA_01b",
    "LM_RA_02a",
    "LM_RA_02b",
    "LM_RA_03a",
    "LM_RA_03b",
    "banjoman2Music",
    "banjoman3Music",
    "banjoman4Music",
    "banjoman5Music",
    "WM_DT_01",
    "WM_DT_03",
    "WM_DT_05",
    "WM_DT_20",
    "WM_DT_21",
    "WM_DT_22",
    "WM_DT_23",
    "WM_NA_03",
    "WM_RM_BA",
    "WM_RM_BE",
    "WM_RM_DG",
    "WM_RM_R1",
    "WM_RM_R2",
    "WM_RM_R3",
    "WM_RM_RL",
    "WM_RM_99",
    "WM_RO_01",
    "WM_RO_02",
    "WM_RO_03",
    "WM_RO_04",
    "WM_RO_05",
    "WM_RO_06",
    "WM_RO_07",
    "WM_RO_08",
    "WM_RO_09",
    "WM_RO_10",
    "WM_RO_11",
    "WM_RO_12",
    "WM_SA_01",
    "WM_SA_10",
    "WM_SA_11",
    "WM_SA_12",
    "WM_SA_13",
    "WM_SA_20",
    "WM_SA_30",
    "WM_SA_31",
    "WM_SA_32",
    "WM_SA_33",
    "WM_SA_34",
    "WM_SA_BE",
    "WM_SA_DG",
    "WM_SA_RL",
    "BF_PF_01",
    "BF_DT_10",
    "BF_DT_15",
    "BF_DT_20",
    "BF_DT_21",
    "BF_DT_22",
    "BF_DT_25",
    "BF_DT_01",
    "BF_PF_02",
    "BF_PF_03",
    "BF_PF_04",
    "BF_PF_05",
    "BF_PF_BA",
    "BF_PF_BE",
    "BF_PF_DG",
    "BF_PF_R1",
    "BF_PF_R2",
    "BF_PF_R3",
    "BF_PF_RL",
    "BF_SH_01",
    "BF_SH_12",
    "BF_SH_13",
    "BF_SH_14",
    "BF_SH_15",
    "BF_SH_BA",
    "BF_SH_BE",
    "BF_SH_DG",
    "BF_SH_R1",
    "BF_SH_R2",
    "BF_SH_R3",
    "BF_SH_RL",
    "VH_DT_01",
    "VH_DT_03",
    "VH_DT_04",
    "VH_DT_11",
    "VH_DT_12",
    "VH_DT_12B",
    "VH_DT_20",
    "VH_DT_22",
    "VH_DT_30",
    "VH_DT_31",
    "VH_DT_40",
    "VH_DT_41",
    "VH_DT_P1",
    "VH_DT_P2",
    "VH_GF_01",
    "VH_GF_02",
    "VH_GF_BE",
    "VH_GF_DG",
    "VH_GF_RL",
    "VH_GK_01",
    "VH_GK_02",
    "VH_GK_03",
    "VH_GK_10",
    "VH_GK_15",
    "VH_GK_20",
    "VH_GK_21",
    "VH_GM_01",
    "VH_GM_05",
    "VH_PA_01",
    "VH_PA_02",
    "VH_PA_BA",
    "VH_PA_BE",
    "VH_PA_DG",
    "VH_PA_R1",
    "VH_PA_R2",
    "VH_PA_R3",
    "VH_PA_RL",
    "VH_PL_01",
    "VH_PL_02",
    "VH_PL_03",
    "VH_PL_04",
    "VH_PL_05",
    "VH_PL_06",
    "VH_PL_07",
    "VH_PL_08",
    "VH_PL_BE",
    "VH_PL_DG",
    "VH_PL_RL",
    "VH_PO_01",
    "VH_PO_02",
    "VH_PO_03",
    "VH_PO_10",
    "VH_PO_11",
    "VH_PO_BA",
    "VH_PO_BE",
    "VH_PO_DG",
    "VH_PO_R1",
    "VH_PO_R2",
    "VH_PO_R3",
    "VH_PO_RL",
    "VC_BU_01",
    "VC_BU_02",
    "VC_BU_03",
    "VC_BU_04",
    "VC_BU_10",
    "VC_BU_11",
    "VC_BU_12",
    "VC_BU_DG",
    "VC_BU_BE",
    "VC_BU_R1",
    "VC_BU_R2",
    "VC_BU_R3",
    "VC_BU_RH",
    "VC_CA_01",
    "VC_CA_02",
    "VC_CA_03",
    "VC_CA_10",
    "VC_CA_BE",
    "VC_CA_DG",
    "VC_CA_RH",
    "VC_DC_01",
    "GE_DC_01",
    "VC_DT_01",
    "VC_DT_02",
    "VC_DT_05",
    "VC_DT_10",
    "VC_DT_15",
    "VC_DT_16",
    "VC_E1_01",
    "VC_E1_02",
    "VC_E1_10",
    "VC_E1_15",
    "VC_E1_20",
    "VC_E1_BE",
    "VC_E1_DG",
    "VC_E1_RL",
    "VC_E2_01",
    "VC_E2_BE",
    "VC_E2_DG",
    "VC_E2_RL",
    "CLARKSVILLE_END_CUTSCENE_SPEECH",
    "CF_FA_BA",
    "CF_DT_015",
    "CF_DT_02",
    "CF_DT_03",
    "CF_DT_04",
    "CF_DT_10",
    "CF_DT_20",
    "CF_FA_01",
    "CF_FA_02",
    "CF_FA_03",
    "CF_FA_04",
    "CF_FA_05",
    "CF_FA_06",
    "CF_FA_07",
    "CF_FA_08",
    "CF_DT_01",
    "CF_FA_BE",
    "CF_FA_R1",
    "CF_FA_R2",
    "CF_FA_R3",
    "CF_FA_RL",
    "CA_CO_01",
    "CA_CO_02",
    "CA_CO_03",
    "CA_CO_04",
    "CA_CO_10",
    "CA_CO_11",
    "CA_CO_12",
    "CA_CO_RL",
    "CA_CO_R1",
    "CA_CO_R2",
    "CA_CO_R3",
    "CA_CO_DG",
    "CA_CO_BE",
    "CA_CO_BA",
    "CA_DT_01",
    "CA_DT_04",
    "CA_DT_05",
    "CA_DT_11",
    "CA_DT_12",
    "CA_DT_16",
    "CA_EL_01",
    "CA_EL_02",
    "CA_EL_03",
    "CA_EL_04",
    "CA_EL_05",
    "CA_EL_06",
    "CA_EL_10",
    "CA_EL_11",
    "CA_EL_12",
    "CA_EL_13",
    "CA_EL_15",
    "CA_EL_20",
    "CA_EL_25",
    "CA_EL_BA",
    "CA_EL_BE",
    "CA_EL_DG",
    "CA_EL_R1",
    "CA_EL_R2",
    "CA_EL_R3",
    "CA_EL_RL",
    "CA_NA_12",
    "LAKEM_END_CUTSCENE_SPEECH",
    "HS_RG_01",
    "HS_RG_02",
    "HS_RG_03",
    "HS_RG_04",
    "HS_RG_05",
    "HS_RG_1B",
    "HS_RG_BA",
    "HS_RG_BE",
    "HS_RG_DG",
    "HS_RG_R1",
    "HS_RG_R2",
    "HS_RG_R3",
    "HS_RG_RH",
    "HS_HK_01",
    "HS_HK_10",
    "HS_HK_RL",
    "HS_HK_R1",
    "HS_HK_R2",
    "HS_HK_R3",
    "HS_HK_BA",
    "HS_HK_BE",
    "HS_HK_DG",
    "HS_DT_04",
    "HS_DT_05",
    "HS_DT_06",
    "HS_DT_07",
    "HS_DT_08",
    "HS_DT_09",
    "HS_DT_10",
    "HS_DT_11",
    "SS_DT_02",
    "SS_DT_10",
    "SS_LA_01",
    "SS_LA_02",
    "SS_LA_03",
    "SS_LA_BA",
    "SS_LA_BE",
    "SS_LA_DG",
    "SS_LA_RL",
    "SS_NA_05",
    "SS_S1_01",
    "SS_S1_02",
    "SS_S1_03",
    "SS_S1_04",
    "SS_S1_05",
    "SS_S1_06",
    "SS_S1_07",
    "SS_S1_08",
    "SS_S1_09",
    "SS_S1_10",
    "SS_S1_11",
    "SS_S1_12",
    "SS_S1_13",
    "SS_S1_BA",
    "SS_S1_BE",
    "SS_S1_DG",
    "SS_S1_RL",
    "SS_S2_01",
    "SS_S2_SB",
    "SS_S3_01",
    "SS_S3_SB",
    "SS_S4_01",
    "SS_S4_SB",
    "SS_S1_20",
    "SS_DT_23",
    "MT_CO_01",
    "MT_CO_02",
    "MT_CO_03",
    "MT_CO_04",
    "MT_CO_05",
    "MT_CO_06",
    "MT_CO_07",
    "MT_CO_08",
    "MT_CO_10",
    "MT_CO_BA",
    "MT_CO_BE",
    "MT_CO_DG",
    "MT_CO_R1",
    "MT_CO_R2",
    "MT_CO_R3",
    "MT_CO_RL",
    "MT_DT_02",
    "MT_DT_03",
    "MT_DT_04",
    "MS_CL_01",
    "MS_CL_02",
    "MS_CL_DG",
    "MS_DT_02",
    "MS_DT_02b",
    "MS_DT_02c",
    "MS_DT_02d",
    "MS_DT_02e",
    "HO_EN_01",
    "HO_EN_02",
    "HO_EN_03",
    "HO_EN_04",
    "HO_EN_05",
    "HO_EN_07",
    "HO_EN_09",
    "HO_EN_10",
    "HO_EN_11",
    "HO_EN_12",
    "HO_EN_13",
    "HO_EN_14",
    "HO_EN_RL",
    "HO_EN_R1",
    "HO_EN_R2",
    "HO_EN_R3",
    "HO_EN_BE",
    "HO_EN_BA",
    "HO_EN_DG",
    "HO_DT_02",
    "HO_DT_01",
    "HO_HO_01",
    "HO_HO_02",
    "HO_HO_03",
    "HO_HO_04",
    "HO_HO_05",
    "HO_HO_06",
    "HO_HO_07",
    "HO_HO_BA",
    "HO_HO_BE",
    "HO_HO_DG",
    "HO_HO_H1",
    "HO_HO_H2",
    "HO_HO_H3",
    "HO_HO_RH",
    "HO_NA_05",
    "HO_NA_06",
    "HO_NA_07",
    "HO_NA_08",
    "entertainer1Music",
    "entertainer2Music",
    "entertainer3Music",
    "entertainer4Music",
    "ST_DT_02",
    "ST_DT_03",
    "ST_DT_04",
    "ST_DT_05",
    "ST_DT_06",
    "ST_DT_09",
    "ST_DT_10",
    "ST_DT_11",
    "ST_DT_12",
    "BC_JA_01",
    "BC_JA_02",
    "BC_JA_03",
    "BC_JA_04",
    "BC_JA_05",
    "ST_SH_01",
    "ST_SH_02",
    "ST_SH_03",
    "ST_SH_04",
    "ST_SH_05",
    "ST_SH_06",
    "ST_SH_07",
    "ST_SH_3A",
    "ST_SH_BA",
    "ST_SH_BE",
    "ST_SH_DG",
    "ST_SH_R1",
    "ST_SH_R2",
    "ST_SH_R3",
    "ST_SH_RL",
    "ST_SH_L1",
    "ST_SH_L2",
    "ST_SH_L3",
    "BC_DC_01",
    "BC_DC_02",
    "BC_DC_03",
    "BC_DC_04",
    "ST_RO_01",
    "ST_RO_02",
    "ST_RO_03",
    "ST_RO_04",
    "ST_RO_05",
    "ST_RO_06",
    "ST_RO_09",
    "ST_RO_10",
    "ST_RO_11",
    "ST_RO_12",
    "ST_RO_13",
    "PK_BU_02",
    "PK_BU_03",
    "PK_BU_04",
    "PK_BU_05",
    "PK_BU_06",
    "PK_BU_1A",
    "PK_BU_1B",
    "PK_BU_RL",
    "PK_BU_R1",
    "PK_BU_R2",
    "PK_BU_R3",
    "PK_BU_DG",
    "PK_BU_BE",
    "PK_BU_BA",
    "PK_DC_01",
    "PK_DC_02",
    "PK_DT_01",
    "PK_DT_03",
    "PK_DT_04",
    "PK_DT_05",
    "PK_DT_06",
    "PK_DT_07",
    "PK_DT_08",
    "PK_DT_09",
    "PK_KP_01",
    "PK_KP_02",
    "PK_KP_03",
    "PK_KP_04",
    "PK_KP_BA",
    "PK_KP_BE",
    "PK_KP_DG",
    "PK_KP_RH",
    "PK_KP_R1",
    "PK_KP_R2",
    "PK_KP_R3",
    "busker1Music",
    "busker2Music",
    "busker3Music",
    "busker4Music",
    "busker5Music",
    "FI_DC_01",
    "FI_DC_02",
    "DOGPOUND_CUTSCENE_SPEECH",
    "TC_CS_01",
    "TC_CL_01",
    "TC_CL_02",
    "TC_CP_01",
    "TC_CP_02",
    "TC_CP_03",
    "TC_CP_04",
    "TC_CP_05",
    "TC_AC_01",
    "TC_AC_1A",
    "TC_AC_1B",
    "TC_AC_02",
    "TC_AC_03",
    "TC_AC_04",
    "TC_AC_05",
    "TC_AC_06",
    "TC_AC_07",
    "TC_CS_02",
    "TC_CS_03",
    "TC_DC_02",
    "TC_DC_03",
    "TC_DC_04",
    "TC_DC_05",
    "TC_DC_06",
    "TC_DC_07",
    "TC_DC_11",
    "TC_DC_12",
    "TC_DC_13",
    "TC_DC_14",
    "TC_DC_15",
    "TC_DT_01",
    "TC_DT_06",
    "TC_DT_10",
    "TC_DT_11",
    "TC_SH_01",
    "TC_SH_02",
    "FI_DT_01",
    "FI_DT_02",
    "FI_DT_03",
    "FI_DT_04",
    "FI_DT_05",
    "FI_DT_06",
    "FI_DT_07",
    "FINALE_START_CUTSCENE_SPEECH",
    "FINALE_END_CUTSCENE_SPEECH",
    "SB_DT_01",
    "SB_DT_02",
    "SB_DT_03",
    "SB_DT_04",
    "SB_DT_05",
    "SB_DT_06",
    "SB_DT_07",

};

const char** D_0036B828[] = {
//     D_00366620,
//     D_00366A90,
//     D_00367D30,
//     D_00368238,
//     D_003685F0,
    D_00368860,
//     D_00368878,
//     D_00369F10,
//     D_0036A3B8,
//     D_0036A820,
    0 // padding?s
};
#endif




class FileSystemDisc {
    public:
        FileSystemDisc();
        FileSystemDisc(void*, string_ascii);
        virtual ~FileSystemDisc();
};

class FileSystemDisc_FileDescriptor  : public FileSystemDisc {
    public:
        FileSystemDisc_FileDescriptor();
};

// 004539C4 RCT3 static m_storageDevices?
class StorageDevice {
    public:
        StorageDevice(string_ascii);
        virtual ~StorageDevice();
};

class StorageDevice_MemCardUpdater;

class StorageDevice_MemCard : public StorageDevice {
    public:
        /* 0x14 */ int m_port;
        int unk18;
        int unk1C;

        //StorageDevice_MemCardUpdater* unk28;
        StorageDevice_MemCard(int slot);

        virtual void func_003016A0(); // format
        virtual void func_00301798(); // unformat?
};

class StorageDevice_MemCardUpdater : public Thread {
    public:
        StorageDevice_MemCardUpdater(StorageDevice_MemCard*);
};


class FileSystemDisc_MemCard : public FileSystemDisc {
    public:
        StorageDevice_MemCard* unk20;
        FileSystemDisc_MemCard(int slot);
};

class FileSystemDisc_Zip /* : public FileSystemDisc */ {

};

class FileSystemDisc_CD : public FileSystemDisc {
    public:
        FileSystemDisc_CD();
        virtual ~FileSystemDisc_CD();
};

// static FileSystemRoot* D_00452EAC?
class FileSystemDiscRoot : public FileSystemDisc {
    public:
        FileSystemDiscRoot();
        // func_002FFA20
        // func_002FFA58
        // func_002FFAC0
        // func_002FFAF8
        virtual ~FileSystemDiscRoot();
        virtual int func_002FFA90();
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



class File {
    public:
        File(const char*, int, int);
    class Access {
        public:
            int unk0;
            Access();
            virtual ~Access();
    };
    class CallBack {

    };
    class OpenWatcher {

    };

};

namespace FileFind {
    class Access {
        public:
            Access();
            virtual ~Access();
    };
};

class FileFindAccess_Zip : public FileFind::Access {
    public:
        FileFindAccess_Zip(/**/);
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
        /* 0x8 */ int m_fd;
        int unkC;
        int unk10;
        /* 0x14 */ int m_offset;
        int unk18;
        int unk1C;
        File_FileDescriptor(int fd);
        virtual ~File_FileDescriptor();
        virtual void func_00314890(void);
        virtual int func_003148E8(void);
};

class I_GE_DMARc {

};

class GE_PS2PrimCacheDMABuffer : public I_GE_DMARc {
    public:
        virtual ~GE_PS2PrimCacheDMABuffer();

        virtual void func_002AC220();
};

class GE_DMARc : public I_GE_DMARc {

};

class GE_TextureStylePkt : public GE_DMARc {
    public:
        int unk4;
        char unk5;
        short unk6;
        int unk8;
        int unk10;
        GE_TextureStylePkt();
        virtual ~GE_TextureStylePkt();
};

class GE_Target {

};

class GE_PS2Target : public GE_Target {
    public:
        int unk0;
        short unk12;
        // void*
        // void*
        GE_PS2Device* unk8;
        GE_PS2Target(GE_PS2Device*);
};

class GE_PS2DisplayTarget : public GE_PS2Target {
    public:
        GE_PS2DisplayTarget(GE_PS2Device*);
};


class InputBinding {

};


class Pointer : public InputBinding {

};

class JoystickPointer : public Pointer {

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
    class CurrentPositionPageResponder {

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

    // class CurrentPositionPage : public GamePositionPage, public CurrentPositionPageResponder {
    //     public:
    //         //CurrentPositionPage
    //         virtual ~CurrentPositionPage();
    //         //func_0018F070
    // };

    class Stats0Page : public Page, public CurrentPositionPageResponder {
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

    class CheatsPage : public Page, public CurrentPositionPageResponder {
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
            //virtual ? func_00194678
    };

    // class NewGameBackgroundThread : public BackgroundThread
    // class LoadGameBackgroundThread : public BackgroundThread
    // class SaveGameBackgroundThread : public BackgroundThread

    class ChangeLevelBackgroundThread : public BackgroundThread {
        public:
            /* 0xC */ int m_level;
            /* 0x10 */ int m_gate;
            ChangeLevelBackgroundThread(int level, int gate);
            virtual ~ChangeLevelBackgroundThread();

            virtual void func_001947C8();
    };


};

class BookMetaphorLayer : public GameLayer, public File::CallBack {
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
        // virtual ? func_002D3950

        virtual void func_002D5D58();

        void VFatalError(const char*, char*);

};

class Endian {
    public:
        virtual ~Endian();
        virtual void func_002D7980();
};

class Endian_Mem : public Endian {

};

class Endian_File : public Endian {

};

class Endian_ExpandMem : public Endian_Mem {

};

class Script {
    public:

        virtual ~Script();
        virtual void func_0031E8C0();
        // virtual ? 0031E6D8
        virtual int func_0031E8C8();
        // virtual ? func_0031E8D0
        virtual int func_0031E8D8();
        // virtual ? func_0031E8E0

        virtual void func_0031E8E8();

        // virtual ? func_0031E8F0

        // virtual ? func_0031E900

        // virtual ? func_0031E910

        // virtual ? func_0031E918

        // virtual ? func_0031E920

        // virtual ? func_0031E928

        // virtual ? func_0031E930

        // virtual ? func_0031E938

        // virtual ? func_0031E940

        // virtual ? func_0031E950

        // virtual ? func_0031E958

        // virtual ? func_0031E960

        // virtual ? func_0031E968

        // virtual ? func_0031E970

        // virtual ? func_0031E978

        // virtual ? func_0031E980

        // virtual ? func_0031E988

        // virtual ? func_0031E990

        // virtual ? func_0031E998

        // virtual ? func_0031E9A0

        // virtual ? func_0031E9A8

        // virtual ? func_0031E9B0

        // virtual ? func_0031E9B8

        // virtual ? func_0031E9C0

        // virtual ? func_0031E9C8

        // virtual ? func_0031E9D0

        // virtual ? func_0031E9D8

        // virtual ? func_0031E9E0

        // virtual ? func_0031E9E8

        // virtual ? func_0031E9F0

        // virtual ? func_0031E9F8

        // virtual ? func_0031EA00

        // virtual ? func_0031EA08

        // virtual ? func_0031EA10

        // virtual ? func_0031EA20

        // virtual ? func_0031EA18

        // virtual ? func_0031EA28

        // virtual ? func_0031EA30

        // virtual ? __pure_virtual

        // virtual ? __pure_virtual

        // virtual ? __pure_virtual

        // virtual ? __pure_virtual

        // virtual ? __pure_virtual

        // virtual ? func_0031EA38
        virtual int func_0031EA40();
        virtual void func_0031EA48();





};

class DogScript : public Script {
    public:
        // DogScript(WorldObject*?, int scriptId)
        virtual ~DogScript();
        //
        virtual int func_001AD5F8();
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
        // virtual ? func_00168CB8
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



class ClipVolume {

};

class PlaneClipVolume : public ClipVolume {

};

class SixPlaneClipVolume : public PlaneClipVolume {

};

class LiveEditable {
    public:
        LiveEditable* unk8;
        int unk10;
        int unk14;
        LiveEditable(char*, char*);
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
};

class EditableManager : public MenuRegisterable {
    public:
        char* unk2C;
        EditableManager(char*);

};

class Music_Track {
    public:
        int unk0;

        int unk20;
};


class DebugLayer /* : public Widget_Pane */ {

};

class FileSystem {
    public:
        FileSystem(string_ascii);
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

class DrawShape {

};

class DrawShape_TexturedQuad : public DrawShape {

};



class Tree34_Node {
    public:
        ///* 0x4 */ Tree34_Node
        //Tree34_Node(Tree34_Basic*, Tree34_Node*);
        void Empty();
};

class Tree34_Basic {
    public:
        ///* 0x4 */ Tree34_Node
        void Empty();
};

class Tree34_Unit {
    public:
        void* unk0;
        void* unk4;
        void* unk8;
        void Zero();
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
        virtual void func_002FBD70();
};

class DebugWindow /*: public Widget_Window*/ {

};

class Debug_DataValueContainer : public Widget_TableRow {

};

class Debug_StructContainer : public Debug_DataValueContainer {

};

class GE_DMAPktRcGeneric : public GE_DMARc {

};

class GE_DMAPktRc1i69 : public GE_DMAPktRcGeneric {
    public:
        GE_DMAPktRc1i69();
        virtual ~GE_DMAPktRc1i69();
};

class GE_TexturePage {

};

class GE_TextureTarget : /*public GE_PS2Target,*/ public GE_TexturePage {

};

class SetLevelEnumerator /* : public Tree34Enumerator<SimObj_Base> */ {

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

class CustomParameterBlockWriter {

};

class ShapeDataNamedBoneWriter : public CustomParameterBlockWriter {
    public:
        // virtual ? func_0030CF98
};

class RelocationBlock : public Endian {

};

class NavSphereHitPackage {

};

class NavGraphCellFromPosSphereHit : public NavSphereHitPackage {

};

class Widget_Window : public Widget_Pane {

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



// BookMetaphor
short func_0018C980(int level, int gate);
void func_00196418(void);


void func_001AD560(void);

void func_002C0340(void);
int func_002C8358(s_func_002C8358* arg0);


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
void func_002BF2D0(void);
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
void func_00275E88(void);
int func_00275F98(void);
int func_00275FA0(void);
void func_00275FA8(void);
void func_00275FB0(void);
void func_0027C4E8(void);

int func_002C6498(void);

void func_00262F88(void);
int func_00263640(void);

void* func_00274B00(char* name);
void* func_00275288(int arg0, int arg1, int ovlType, int arg3);
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

//void func_002ADEA8(void);
void func_002AE320(void);
char* func_002D7738(int);
void func_002DAB38(short);
short func_002DAB40(void);
int func_002DF488(void);
int func_002DF9D8(void);
void func_002DFA18(void);

float func_002EFEE0(float, float, float, float, float);

void func_002F4608(void);
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
void func_002D4778(char*, const char*); // RCT3 Main_QueryUser or DebugEnvironment::SendToFile ?
void func_002D4780(void);

void func_002D74F8(void);
int func_002D77A8(char*);

Status func_0026CFD0(unsigned int, char*, int);
Status func_0026CFF8(int, char*,char* ,int);

int func_002D1BC8(void);

float func_002D2350(void);
void* func_002D3360(void*);

int func_001FD558(char* arg0, char* arg1);

int func_002D5B40(char*,...);

Status func_001C5518(char*);

char* func_001FC6B0(void*, short);
void func_002750E0(void);

int func_003140D8(void);
int func_00314298(void);
int func_003143A8(void);

string_ascii func_001FD148(short);
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
