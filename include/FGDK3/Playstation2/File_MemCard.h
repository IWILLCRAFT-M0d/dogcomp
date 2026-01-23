#ifndef FILE_MEMCARD_H
#define FILE_MEMCARD_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/TimSrv.h"

extern void * const File_MemCard_StdInit_UsedModules[];

Status File_MemCard_InternalInitialise(void);
void File_MemCard_InternalFinalise(void);
Status File_MemCard_Initialise(void);
void File_MemCard_Finalise(void);

#endif
