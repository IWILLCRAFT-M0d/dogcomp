#ifndef FILE_CD_H
#define FILE_CD_H

#include <common/libcdvd.h>

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"

extern void * const File_CD_StdInit_UsedModules[];

Status File_CD_InternalInitialise(void);
void File_CD_InternalFinalise(void);
Status File_CD_Initialise(void);
void File_CD_Finalise(void);

class File_CD {
    File_CD(sceCdlFILE *fp);
};

#endif
