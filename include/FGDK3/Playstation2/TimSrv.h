#ifndef TIMSRV_H
#define TIMSRV_H

#include "FGDK3/Playstation2/Thread.h"

Status TimSrv_InternalInitialise(void);
void TimSrv_InternalFinalise(void);
Status TimSrv_Initialise(void);
void TimSrv_Finalise(void);

#endif
