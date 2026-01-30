#ifndef PS2GE_H
#define PS2GE_H

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/File.h"
#include "FGDK3/ThrowCat.h"

Status GE_InternalInitialise(void);
void GE_InternalFinalise(void);
Status GE_Initialise(void);
void GE_Finalise(void);

#endif
