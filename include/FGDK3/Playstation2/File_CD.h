#ifndef FILE_CD_H
#define FILE_CD_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"

Status File_CD_InternalInitialise(void);
void File_CD_InternalFinalise(void);
Status File_CD_Initialise(void);
void File_CD_Finalise(void);

#endif
