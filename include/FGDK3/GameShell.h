#ifndef GAMESHELL_H
#define GAMESHELL_H

#include "FGDK3/Playstation2/TimSrv.h"

class GameShell {
    public:
        static GameShell* m_me;
        int unk0;
        /* 0x4 */ float m_gameTime;
        long unk8;
        /* 0x10 */ float m_deltaTime;
        /* 0x14 */ float m_gameSpeed; // normally set to 0.125f, see also 0x1C4 in Game_Document
        void* unk18; // s_func_002fa8e8?
        /* 0x1C */ bool m_disabled;
        // 0x20 float m_currentFps
        // 0x24 float m_frameTime
        GameShell(float deltaTime, float gameSpeed);
        virtual ~GameShell();
        // virtual ? vtbl[2] = 0;
        // virtual ? vtbl[3] = 0;
        void Step();
        virtual void func_002D30A8(bool);
        // virtual ? vtbl[5] = 0;
        // virtual ? vtbl[6] = 0;

};

#endif

