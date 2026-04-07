#ifndef MUSICRES_H
#define MUSICRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

extern void * const MusicRes_StdInit_UsedModules[];

Status MusicRes_InternalInitialise();
void MusicRes_InternalFinalise();
Status MusicRes_Initialise();
void MusicRes_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
char * func_0027ED38(void);

#ifdef __cplusplus
}
#endif

class Music_Resources /* : public Resource<Music_Piece> */ {

};

#endif
