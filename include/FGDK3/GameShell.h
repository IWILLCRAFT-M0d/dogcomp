#ifndef GAMESHELL_H
#define GAMESHELL_H

#include "FGDK3/Playstation2/TimSrv.h"

class GameShell {
    public:
        int unk0;
        float m_gametime;
        long unk8;
        float m_fps;
        float m_gamespeed;
        int unk1C;
        GameShell(float fps, float gamespeed);
        virtual ~GameShell();

        void func_002D30A8(int);
};

#endif

