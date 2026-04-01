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

Status TimSrv_InternalInitialise(void);
void TimSrv_InternalFinalise(void);
Status TimSrv_Initialise(void);
void TimSrv_Finalise(void);


class TimSrv_TimerImplementation {
};

class TimSrv_Timer : public TimSrv_TimerImplementation {

};

#endif
