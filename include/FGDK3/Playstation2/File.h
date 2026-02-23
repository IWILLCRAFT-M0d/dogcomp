#ifndef PS2FILE_H
#define PS2FILE_H

#include "FGDK3/Playstation2/Thread.h"
#include "File_MemCard.h"

extern void * const File_StdInit_UsedModules[];

Status File_InternalInitialise(void);
void File_InternalFinalise(void);
Status File_Initialise(void);
void File_Finalise(void);

#endif
