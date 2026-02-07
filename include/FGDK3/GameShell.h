#ifndef GAMESHELL_H
#define GAMESHELL_H

#include "FGDK3/Playstation2/TimSrv.h"

class GameShell {
    public:
        int unk0;
        int unk4;
        long unk8;
        float m_fps;
        float m_gamespeed;
        int unk1C;
        GameShell(float fps, float gamespeed);
        virtual ~GameShell();
};

#endif

