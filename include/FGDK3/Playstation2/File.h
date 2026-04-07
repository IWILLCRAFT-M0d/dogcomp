#ifndef PS2FILE_H
#define PS2FILE_H

#include "FGDK3/Playstation2/Thread.h"
#include "File_MemCard.h"

extern void * const File_StdInit_UsedModules[];

Status File_InternalInitialise();
void File_InternalFinalise();
Status File_Initialise();
void File_Finalise();

#endif
