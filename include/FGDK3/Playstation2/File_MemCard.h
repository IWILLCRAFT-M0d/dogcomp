#ifndef FILE_MEMCARD_H
#define FILE_MEMCARD_H

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"

class File_MemCard : public File::Access {
    public:
        void* unk8;
        /* 0xC */ int m_fd; // sce filedescriptor
        /* 0x10 */ int m_offset; // sce offset
        int unk14;

        int unk424;
        // File_MemCard(void*, int, int)
        virtual ~File_MemCard();
        void func_00300040();
};

extern void * const File_MemCard_StdInit_UsedModules[];

Status File_MemCard_InternalInitialise();
void File_MemCard_InternalFinalise();
Status File_MemCard_Initialise();
void File_MemCard_Finalise();

#endif
