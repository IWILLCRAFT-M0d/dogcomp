#ifndef ANIMRES_H
#define ANIMRES_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const AnimationRes_StdInit_UsedModules[];

Status AnimationRes_InternalInitialise();
void AnimationRes_InternalFinalise();
Status AnimationRes_Initialise();
void AnimationRes_Finalise();

////{{fgdkstruct(AnimationHeader)
//{{bitfield(8)
//}}bitfield
//int(External_numbers,8,textside(0,255))
//int(External_positions,8,textside(0,255))
//int(Level,8,comboside(Walk=1,Sit=7,Point=15,One=1,Two=7,Three=15,Four=22,Five=29,Six=36,Seven=43,Eight=50,Nine=57,Ten=64,Eleven=71,Twelve=78,Thirteen=85,Fourteen=92,Fifteen=99,Sixteen=106,Seventeen=113,Eighteen=120))
//animation(Start_time,0,Start_Time)
//array(Components,0,100000,AnimationComponentDef)
//}}fgdkstruct
class Animation_Resources /* : public Resourec<AnimationHeader> */ {

};

#endif
