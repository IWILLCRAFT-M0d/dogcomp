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
        char m_unk[1450]; // temporary
        Game_Document(float fps, float gamespeed);
        virtual ~Game_Document();

};


#endif
