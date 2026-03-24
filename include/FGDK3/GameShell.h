#ifndef GAMESHELL_H
#define GAMESHELL_H

#include "FGDK3/Playstation2/TimSrv.h"

class GameShell {
    public:
        int unk0;
        /* 0x4 */ float m_gametime;
        long unk8;
        /* 0xC */ float m_fps;
        /* 0x10 */ float m_gamespeed;
        int unk1C;
        GameShell(float fps, float gamespeed);
        virtual ~GameShell();
        virtual void func_002D30A8(int);
        void Step();
};

#endif

