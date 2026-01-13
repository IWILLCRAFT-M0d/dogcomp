#ifndef TEXTRES_H
#define TEXTRES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"

Status TextRes_InternalInitialise(void);
void TextRes_InternalFinalise(void);
Status TextRes_Initialise(void);
void TextRes_Finalise(void);

#endif
