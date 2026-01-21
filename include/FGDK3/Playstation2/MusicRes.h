#ifndef MUSICRES_H
#define MUSICRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
// relrecv header goes here

Status MusicRes_InternalInitialise(void);
void MusicRes_InternalFinalise(void);
Status MusicRes_Initialise(void);
void MusicRes_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
char * func_0027ED38(void);

#ifdef __cplusplus
}
#endif

#endif
