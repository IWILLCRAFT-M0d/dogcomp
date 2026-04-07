#ifndef ANIMRES_H
#define ANIMRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

extern void * const AnimationRes_StdInit_UsedModules[];

Status AnimationRes_InternalInitialise();
void AnimationRes_InternalFinalise();
Status AnimationRes_Initialise();
void AnimationRes_Finalise();

class Animation_Resources /* : public Resourec<AnimationHeader> */ {

};

#endif
