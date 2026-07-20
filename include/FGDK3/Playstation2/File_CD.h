#ifndef FILE_CD_H
#define FILE_CD_H

#include <common/libcdvd.h>

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"

class File_CD : public File::Access {
    public:
        sceCdlFILE m_file;
        /* 0x808C */ u_int m_lbn;
        /* 0x8090 */ u_int m_sectors;
        File_CD(sceCdlFILE *fp);
        virtual ~File_CD();
        //
        virtual u_int func_00303110(); // Get file size
};

extern void * const File_CD_StdInit_UsedModules[];


extern "C" void func_00302D50(int);


Status File_CD_InternalInitialise();
void File_CD_InternalFinalise();
Status File_CD_Initialise();
void File_CD_Finalise();



#endif
