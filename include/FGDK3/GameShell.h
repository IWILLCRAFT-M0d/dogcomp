#ifndef GAMESHELL_H
#define GAMESHELL_H

#include "FGDK3/Playstation2/TimSrv.h"

class GameShell {
    public:
        static GameShell* D_004528EC; // m_me?
        int unk0;
        /* 0x4 */ float m_gameTime;
        long unk8;
        /* 0x10 */ float m_fps;
        /* 0x14 */ float m_gameSpeed;
        void* unk18;
        /* 0x1C */ bool m_disabled;
        GameShell(float fps, float gameSpeed);
        virtual ~GameShell();
        void Step();
        virtual void func_002D30A8(bool);

};

#endif

