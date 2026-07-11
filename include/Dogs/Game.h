#ifndef GAME_H
#define GAME_H

#include "ge_unk.h"
#include "shape_unk.h"
#include "script_unk.h"

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/GameShell.h"
#include "Dogs/Lights.h"

#include "text_001B07A8.h"

#include "Dogs/Console.h"

#include "Dogs/GameState.h"
#include "Dogs/Scent.h"

typedef struct {
    char unk0[0x4F8];
    int unk4F8;
} s_func_001C6DC8;


/**
 * @brief Game settings struct.
 *
 * @note Name is temporary.
 */
typedef struct {
    char pad0[0x8];
    /* 0x8 */ int m_screenPositionX;
    /* 0xC */ int m_screenPositionY;
    /* 0x10 */ bool m_rumble;
    /* 0x14 */ bool m_pawController;
    /* 0x18 */ bool m_soundEffects;
    /* 0x1C */ bool m_music;
    /* 0x20 */ bool m_widescreen;
    float unk24;
    float unk28;
    /* 0x2C */ int m_language;
} s_func_001B1FA8;


extern void * const Game_StdInit_UsedModules[];

Status Game_InternalInitialise();
void Game_InternalFinalise();
Status Game_Initialise();
void Game_Finalise();

class WorldObject_Universe : public SimObj_Universe {
    public:
        // virtual ? = 0
};

class Game_Document : public GameShell, public WorldObject_Universe, public DogScript {
    public:
        // 0xE4 GE_Device*
        GE_Device* unkE4;
        int unk144;
        int unk148;
        int unk14C;
        int unk154;
        // DogScript @ 0x160?
        float unk1C4; // slowmo rate
        int unk1C8;
        int unk1CC;
        int unk1D0;
        int unk1D4;
        int unk1D8;
        int unk1DC;
        //
        s_func_0023E698* unk1E0;
        s_func_00154120* unk1E4;

        //
        int unk1E8;
        bool unk1EC; // musicEnabled?
        int unk1F0;
        int unk1F4;
        float unk1F8; // music var?
        int unk1FC; // script thread profiling actorId
        int unk200;
        int unk204;
        // 0018b528 unk210?
        GameDesktop* unk3E0;
        int unk3E8;
        int unk3EC;
        int unk3F0; // windowed mode?
        int unk3F4;
        int unk3F8; // screen width?
        int unk3FC; // screen height?
        int unk400;
        int unk404;
        //unk408
        int unk4B0;
        LightManager* unk4D0;
        /* 0x4D4 */ bool m_verbose;
        /* 0x4D8 */ bool m_renderSkeleton;
        /* 0x4DC */ bool m_renderOrient;
        /* 0x4E0 */ bool m_renderRadius;
        /* 0x4E4 */ bool m_renderActorName;
        /* 0x4E8 */ bool m_renderHoldingPoints;
        /* 0x4EC */ bool m_renderCarryHandles;
        /* 0x4F0 */ bool m_renderHitSpheres;
        int unk4F4; // navcells actorId
        int unk4F8; // navcells thing
        s_func_001D8328* unk4FC;
        int unk500;
        s_func_001A0628* unk504;
        //
        ShapeInstance unk51C; // backdrop (sky)
        s_func_001B07A8* unk550;
        s_func_001B0B90* unk554;
        s_func_001B11E0* unk558;
        bool unk55C; // makes speech/music quieter?
        int unk560;
        float unk564;
        int unk56C;
        int unk568;
        int unk570;
        int unk574; // LEVS
        int unk578;
        int unk57C; // current collar
        int unk580;
        s_func_001B1FA8* unk584; // settings

        float unk588;
        float unk58C;
        float unk5A0;
        int unk5A4;
        int unk5A8;
        int unk5AC;
        float unk590;
        float unk594;
        float unk598;

        int unk59C;
        Game_Document(float fps, float gameSpeed);
        virtual ~Game_Document();
        // virtual ? 001CB1D8 // RCT3 Game_Document::Render?
        // virtual ? 001D2980
        // virtual void 002D30A8 (same as GameShell)
        // virtual ? 001D4578
        virtual void func_001D45B8();
        void EndScene();

};

extern Game_Document* TheGame; // should this be a static in Game_Document?

class SimObj_Filter {
    public:
        // virtual ?() = 0
};

class Game_ClosestVisibleInFrontOf : public SimObj_Filter {
    public:
        // virtual ? func_001D72B0
};

class SimObj_FilterFlagsAndEq : public SimObj_Filter {
    public:
        /* virtual */ int func_001D6B40();
};

const char* func_001B2470(s_func_001B1FA8*, int);
const char* func_001B24F8(s_func_001B1FA8*);
const char* func_001B2578(s_func_001B1FA8*);
void func_001B25F8(s_func_001B1FA8*);
void func_001B2620(s_func_001B1FA8*);
void func_001B2640(s_func_001B1FA8*, int);

#ifdef __cplusplus
extern "C" {
#endif
void func_0019A860(s_func_001C6DC8*, int, int); // TODO:Move to unk.h or BookMetaphor header
void func_00196470(s_func_001C6DC8*, int); // TODO:Move to unk.h or BookMetaphor header
void func_001B2458(s_func_001B1FA8*, bool);
void func_001B2460(s_func_001B1FA8*, float);
void func_001B2468(s_func_001B1FA8*, float);
s_func_001C6DC8* func_001C6DC8(Game_Document*);
void func_001C8120(void);
bool func_001C8128();
void func_001C88D0(Game_Document*, int level, int gate);
void func_001CA000(Game_Document*, bool);
void func_001CCE58(Game_Document*);
void func_001D1F70(Game_Document*);
void func_001D22B0(Game_Document*, int level, int gate);
void func_001D2480(Game_Document*);
void func_001D27F8(Game_Document*);
void func_001D3F38(Game_Document*);
void func_001D3F58(Game_Document*);
void func_001D4650(void);
void func_001D4DD8(Game_Document*);
void func_001D4E40(Game_Document*);
int func_001D5D48(Game_Document*, int);
Status func_001D5E90(void);
void func_001D6A10(void);
#ifdef __cplusplus
}
#endif

#endif
