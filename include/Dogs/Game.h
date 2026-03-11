#ifndef GAME_H
#define GAME_H

#include "unk.h"

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/GameShell.h"



Status Game_InternalInitialise(void);
void Game_InternalFinalise(void);
Status Game_Initialise(void);
void Game_Finalise(void);


class Game_Document : public GameShell {
    public:
        int unk144;
        int unk148;
        int unk14C;
        int unk154;

        int unk1C8;
        int unk1CC;
        int unk1D0;
        int unk1D4;
        int unk1D8;
        int unk1DC;
        //
        s_0044EB68_1E0* unk1E0;
        //
        int unk1E8;
        int unk1EC; // musicEnabled?
        int unk1F0;
        int unk1F4;
        int unk1F8;
        int unk1FC;
        int unk200;
        int unk204;
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
        //
        int m_renderOrient;
        int m_renderRadius;
        int m_renderActorName;
        int m_renderHoldingPoints;
        int m_renderCarryHandles;
        int m_renderHitSpheres;
        //
        int unk500;
        int unk504;
        //
        int* unk550;
        //
        int unk55C;
        int unk560;
        float unk564;
        int unk56C;
        //unk564;
        int unk568;
        int unk570;
        int unk574; // LEVS
        int unk578;
        int unk57C; // current collar
        int unk580;
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
        Game_Document(float fps, float gamespeed);
        virtual ~Game_Document();

};

extern Game_Document* TheGame;

class SimObj_Filter {

};

class SimObj_FilterFlagsAndEq : public SimObj_Filter {
    public:
        int func_001D6B40();
};


#ifdef __cplusplus
extern "C" {
#endif
s_func_001C6DC8* func_001C6DC8(Game_Document*);
void func_001C8120(void);
int func_001C8128();
void func_001C88D0(Game_Document*, int level, int gate);
void func_001CCE58(Game_Document*);
void func_001D1F70(Game_Document*);
void func_001D22B0(Game_Document*, int level, int gate);
void func_001D3F38(Game_Document*);
void func_001D3F58(Game_Document*);
void func_001D4650(void);
void func_001D6A10(void);
#ifdef __cplusplus
}
#endif

#endif
