#ifndef GAME_H
#define GAME_H

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
        int unk55C;
        int unk560;
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


#endif
