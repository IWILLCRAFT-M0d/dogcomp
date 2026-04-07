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
} s_0044EB68_1E0;


class Resource_Generic {
    public:
        void* unk0; // resource pointer
        /* 0x4 */ unsigned int m_resourceCount;
        /* 0x8 */ int m_resourceType;

        StdInit_ClientBase unkC;


        Resource_Generic();
        virtual ~Resource_Generic();
};

template <typename T> struct Resource : Resource_Generic {
    virtual int bar();
};

class ShapeData {

};

class Mien {
    public:
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
        int unk0;
        int unk1;
        ShapeParams() {
            unk0 = 0;
            unk1 = 1;
        }
};
class ShapeParams_Dynamic : public ShapeParams {
    public:
        ShapeParams_Dynamic();
        //ShapeParams_Dynamic(int);
        virtual ~ShapeParams_Dynamic();
        void SetSize(int);
};

class GE_TransformState {

};

class MeshTransforms : public GE_TransformState {

};

// RCT3 "GE_Device::s_theDevice"
// 0x78 - texture resources address
class GE_Device : public GE_TransformState {
    public:
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
        GE_PS2Device();
        virtual ~GE_PS2Device();
};

class MeshInstance {
    public:
        void Render(GE_Device*);
};

class ShapeInstance {
    public:
        void* unk0; // shading data?
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
        virtual void func_002462A8() = 0;
};

class Resource_LayoutUnit {
    public:
        int unk0;
        void* unk4;
        Resource_LayoutUnit(void*);
        virtual ~Resource_LayoutUnit();
};

class Resource_LayoutOverlay /* : public Resource_LayoutUnit */ {
    public:
        int unkC; // overlay id?
        void* unk10;
        //Resource_LayoutOverlay
        virtual ~Resource_LayoutOverlay();
        virtual void func_00274200();

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

extern Text_Resources* D_0035FB10; // Text
extern void* D_0035FB28; // Texture
extern Font_Resources* D_0035FB40; // Font
extern void* D_0035FB58; // Shape
extern void* D_0035FB70; // Sound
extern void* D_0035FB88; // Creature
extern void* D_0035FBA0; // DogsTaleLand
extern void* D_0035FBB8; // Animation
extern void* D_0035FBD0; // Script
extern NavGraph_Resources* D_0035FBE8; // NavGraph
extern Music_Resources* D_0035FC00; // Music

#ifdef NON_MATCHING
/*const*/ int D_0044F5A0 = 11; // Resource type count


// @ 0x0035FC18
const void* D_0035FC18[] = { // Resources
    D_0035FB10, // Text
    D_0035FB28, // Texture
    D_0035FB40, // Font
    D_0035FB58, // Shape
    D_0035FB70, // Sound
    D_0035FB88, // Creature
    D_0035FBA0, // DogsTaleLand
    D_0035FBB8, // Animation
    D_0035FBD0, // Script
    D_0035FBE8, // NavGraph
    D_0035FC00, // Music
    0 // padding?
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
#endif

// const char* D_00366620[] = { // Text names
//     "NewGame",
//     "NewGameOverOld",
//     "SaveGameOverOld",
//     "NewGameOverOldAreYouSure",
//     "SaveGameOverOldAreYouSure",
//     "LoadGame",
//     "SaveGame",
//     "ResumeGame",
//     "SelectPage",
//     "Moves",
//     "SitDownAndDown",
//     "SitUpAndStand",
//     "ShakeBody",
//     "Beg2",
//     "Beg1",
//     "Beg3",
//     "Fart",
//     "PeeLeft",
//     "PeeRight",
//     "Beg4",
//     "Beg5",
//     "Bark",
//     "TitleOpts",
//     "Setting_Title",
//
// };

// const char* D_00366A90[] = { // Texture names
// "VirtualHotDog",
// "VirtualDogCollar",
// "VirtualDogTag",
// "camera",
// "construct",
// "cross3d",
// "lightdirection",
// "lightpoint",
// "lightspot",
// "particles",
// "query",
// "ring",
// "speaker",
// "scent",
// "Ball",
// "BaseFont",
// "Blaar",
// "black",
// "BlankPageLeft",
// "BlankPageRight",
// "BMDarkBlueScent",
// "BMGreenScent",
// "BMLightBlueScent",
// "BMOrangeScent",
// "BMPinkScent",
// "BMPurpleScent",
// "BMRedScent",
// "BMVioletScent",
// "BMYellowScent",
// "bone",
// "BoneAppearParticle",
// "BoneAppearParticle2",
// "bonehighlight",
// "BoneScentParticle",
// "Book",
// "Bookfence",
// "brass",
// "bridgewood",
// "brown",
// "ButtonCircle",
// "ButtonCross",
// "ButtonL1",
// "ButtonL2",
// "ButtonR1",
// "ButtonR2",
// "ButtonSquare",
// "ButtonTriangle",
// "cablecarglass",
// "carchrome",
// "clue01",
// "dig"
// "DigDust",
// "digParticle",
// "Dogbowl",
// "DogFartScentParticle",
// "DogKennel",
// "DogScentParticle",
// "DPadDown",
// "DPadLeft",
// "DPadRight",
// "DPadUp",
// "DrawSolidColour",
// "DrawSolidColourNoZWrite",
// "edgepapers",
// "FartScentParticle",
// "finishline"
// "Foodstuffs",
// "FootDust",
// "FootPrintBoneBoot",
// "FootPrintBoneDog",
// "FootPrintBoot",
// "FootPrintFox",
// "FootPrintFoxVisible",
// "FootPrintHumanVisible",
// "GUINumber",
// "HotDogNose",
// "Jake",
// "Jakebowl",
// "JakeEyes",
// "Lightbulb",
// "LightbulbEmissive",
// "LucidaConsole",
// "Mat",
// "NewGamePicture",
// "note",
// "nudmask",
// "nullbmp",
// "nulltex",
// "numb2",
// "outsidegroundDark"
// "outsidegroundLight",
// "Page1",
// "Page1Backing",
// "Page27Bones",
// "Page28Bones",
// "Page29Bones",
// "Page2Bone1",
// "Page2Bone2",
// "Page2Bone3",
// "Page2Bone4",
// "Page2Bone5",
// "Page2Bone6",
// "Page2Bone7",
// "Page2Bone8",
// "Page2Bone9",
// "Page3",
// "Page4",
// "Pagecolors",
// "PawController",
// "pedican",
// "PersonBoneScentParticle",
// "PersonScentParticle",
// "picture",
// "PinkScentParticle",
// "puffblack",
// "puffgrey",
// "puffred",
// "puffwhite",
// "scentGroundBlue",
// "scentGroundCyan",
// "scentGroundDarkBlue",
// "scentGroundExploreChallenge",

// "FloorTR",
// "Grinder1",
// "Grinder2",
// "Gubbins",
// "LoveHeart",
// "PeachesCan",
// "Pounder01",
// "Roof1",
// "SmallDoor1",
// "vats",
// "VidDisplay",
// "VidDisplay2",
// "Wall01a",
// "Wall01b",
// "Wall02a",
// "Wall02b",
// "Wall03a",
// "Wall03b",
// "Daisy",
// "Daisyback",
// "Banjo256",
// "been",
// "BinderCover01",
// "BinderCover02",
// "BinderCover03",
// "BinderCover04",
// "Grampa256",
// "GroundblendGrass",
// "GroupPic01",
// "GroupPic02",
// "JakeAndDaisy256",
// "partyhat",
// "WayneDwayne256",
// "BMClue0",
// "BMClue1",
// "LevelImage",
// "loading"
// };
//
// const char* D_00367D30[] = { // Shape names
// };
//
// const char* D_00368238[] = { // Sound names
// };
//

#ifdef NON_MATCHING
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
    "SndwballHit3",
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
#endif

#ifdef NON_MATCHING
const char* D_00368860[] = { // DogsTaleLand names
    "construction",
    "GameCreatures",
    "DogKennel",
    "Landscape",
    "StageCreatures",
    0
};
#endif

// const char* D_00368878[] = { // Animation names
// "Null",
// "HotdogCanter",
// "HotDogCanterHappy",
// "HotDogCanterSad",
// "HotdogWalk",
// "HotDogWalkHappy",
// "HotDogWalkSad",
// "
// };
//
// const char* D_00369F10[] = { // Script names
// };
//
// const char* D_0036A3B8[] = { // NavGraph names
// };
//
// const char* D_0036A820[] = { // Music names
// };
//
#ifdef NON_MATCHING
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

class Resource_LayoutGroup : public Resource_LayoutUnit {
    public:
        int unkC;
        void* unk10;
        Resource_LayoutGroup(void*, int, void*);
        virtual ~Resource_LayoutGroup();
};

class Resource_LayoutInclusiveGroup /*: public Resource_LayoutGroup*/ {
    public:
        virtual ~Resource_LayoutInclusiveGroup();
            //func_00274A00

};


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
        virtual int func_002FFA90();
};



class StorageDevice {
    public:
        //StorageDevice
        virtual ~StorageDevice();
};


class StorageDevice_MemCard /*: public StorageDevice*/ {
    public:
        StorageDevice_MemCard(int card);
};

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
        Access();
        virtual ~Access();
    };
};

namespace FileFind {
    class Access {
        public:
            Access();
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

class InputBinding {

};

class GameLayer : public Widget_WithChildren /*, public InputBinding */ {
    public:
        int unkD0;
        GameLayer();
};

class PlayingLayer /* : public GameLayer */ {

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
        // virtual ? func_002D3950
        virtual void func_002D5D58();

};

class Endian {
    public:
        virtual ~Endian();
        virtual void func_002D7980();
};

class Script {

};

class DogScript : public Script {
    public:
        int func_001AD5F8(); // virtual
};

class PointerMessageHandler {
    public:
        /* virtual */ void func_00262F70();
        /* virtual */ void func_00262F78();
        /* virtual */ void func_00262F80();
        //001d6a10
        /* virtual */ void func_00262F90();
};

class ValueEditor {

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

};

class MenuRegisterable {

};

class EditableManager : public MenuRegisterable {

};

class Music_Track {

};




class DebugLayer /* : public Widget_Pane */ {

};

typedef struct {

    // 4 bytes? unk1C (popup text thing?)
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




#ifdef __cplusplus
extern "C" {
#endif

// BookMetaphor
short func_0018C980(int level, int gate);
void func_00196418(void);

void func_001AD560(void);

void func_002C0340(void);
int func_002C8358(s_func_002C8358* arg0);

void func_002967C8(void* arg0, int arg1);
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

int func_002C6498(void);

void func_00262F88(void);
int func_00263640(void);

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

//void func_002ADEA8(void);
void func_002AE320(void);
char* func_002D7738(int);
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
void func_002D4778(void);
void func_002D4780(void);

void func_002D74F8(void);
int func_002D77A8(char*);

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

void IOPMem_Finalise();

Status SimObj_InternalInitialise();
void SimObj_InternalFinalise();
Status SimObj_Initialise();
void SimObj_Finalise();

Status StdMem_Initialise();

void Main_RunGame();

#endif

