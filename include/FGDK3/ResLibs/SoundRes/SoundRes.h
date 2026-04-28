#ifndef SOUNDRES_H
#define SOUNDRES_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const SoundRes_StdInit_UsedModules[];

Status SoundRes_InternalInitialise();
void SoundRes_InternalFinalise();
Status SoundRes_Initialise();
void SoundRes_Finalise();

//{{fgdkstruct(Sound_Effect_ADSR)
//int(Attack_exponential,32,tickbox)
//float(Attack_time,0.00004,0.00004,10000,textside)
//float(Decay_time,0.00007,0.00007,5,textside)
//float(Sustain_level,0.5,0,1,textside)
//int(Sustain_type,32,comboside(Linear_increment,Linear_decrement,Exponential_increment,Exponential_decrement))
//float(Sustain_time,0.00005,0.00005,15000,textside)
//int(Release_exponential,32,tickbox)
//float(Release_time,0.00007,0.00007,5,textside)
//}}fgdkstruct
class Sound_Resources /* : public Resource<SoundEffect> */ {

};

#ifdef __cplusplus
extern "C" {
#endif
char * func_0024BA70(void);
char * func_0024BE68(void);
#ifdef __cplusplus
}
#endif

#endif
