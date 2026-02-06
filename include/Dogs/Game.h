#ifndef GAME_H
#define GAME_H

#include "FGDK3/Playstation2/Thread.h"

Status Game_InternalInitialise(void);
void Game_InternalFinalise(void);
Status Game_Initialise(void);
void Game_Finalise(void);

/*
class Game_Document : public GameShell {
};
*/

#endif
