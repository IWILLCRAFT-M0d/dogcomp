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
        /* 0x808C */ u_int m_lbn;
        /* 0x8090 */ u_int m_sectors;
        File_CD(sceCdlFILE *fp);
        virtual ~File_CD();
        virtual int func_00303110();
};

extern void * const File_CD_StdInit_UsedModules[];

Status File_CD_InternalInitialise();
void File_CD_InternalFinalise();
Status File_CD_Initialise();
void File_CD_Finalise();



#endif
