#ifndef FILE_CD_H
#define FILE_CD_H

#include <common/libcdvd.h>

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"

#include "unk.h"

class File_CD : public File::Access{
    public:
        int unkC;
        File_CD(sceCdlFILE *fp);
        virtual ~File_CD();
        int func_00303110();
};

extern void * const File_CD_StdInit_UsedModules[];

Status File_CD_InternalInitialise(void);
void File_CD_InternalFinalise(void);
Status File_CD_Initialise(void);
void File_CD_Finalise(void);



#endif
