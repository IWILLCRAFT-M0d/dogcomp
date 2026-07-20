#ifndef FILESYSTEM_ZIP_H
#define FILESYSTEM_ZIP_H

//#include "unk.h"
#include "file_unk.h"

#include <zlib.h>

#ifdef __cplusplus
extern "C" {
#endif
int func_00311040(int);
#ifdef __cplusplus
}
#endif

class FileSystem_Zip : public FileSystem {
    public:
        FileSystem_Zip();
        // virtual ? 003119D8
};

class FileAccess_Zip_Stored : public File::Access {
    public:
        const FileInZip_Info* m_info;
        const FileSystemDisc_Zip* unkC;
        char pad[30];
        int unk30;
        int unk34;
        FileAccess_Zip_Stored(const FileInZip_Info*, const FileSystemDisc_Zip*);
        virtual ~FileAccess_Zip_Stored();
        //virtual ? func_00310CC0();
        virtual unsigned int func_00310CE8();
        // virtual ? func_00310D20
        // virtual ? func_00310F10
        virtual void func_00310F80(int);
        virtual int func_00311008();
        // virtual base function (00302120)

};

class FileAccess_Zip_Deflated : public File::Access {
    public:
        const FileInZip_Info* m_info;
        FileSystemDisc_Zip* unkC;
        z_stream unk40;
        FileAccess_Zip_Deflated(const FileInZip_Info*, FileSystemDisc_Zip*);
        virtual ~FileAccess_Zip_Deflated();
        // virtual ? func_003114C0
        virtual unsigned int func_003114E8();
        void func_00311430();
        // virtual ? func_00311918
        // virtual ? func_003119A0();
};

#endif
