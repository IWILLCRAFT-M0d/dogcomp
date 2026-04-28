#ifndef TIMSRV_H
#define TIMSRV_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const TimSrv_StdInit_UsedModules[];

#ifdef __cplusplus
extern "C" {
#endif
Status func_0026ABD8(void);
long TimSrv_GetTime(void);
#ifdef __cplusplus
}
#endif

Status TimSrv_InternalInitialise();
void func_0026AD98();
void TimSrv_InternalFinalise();
Status TimSrv_Initialise();
void TimSrv_Finalise();


class TimSrv_TimerImplementation {
};

class TimSrv_Timer : public TimSrv_TimerImplementation {

};

#endif
