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
        // virtual 003119D8
};

class FileAccess_Zip_Stored : public File::Access {
    public:
        const void* unk8; // RCT3 FileInZipInfo* ?
        const FileSystemDisc_Zip* unkC;
        FileAccess_Zip_Stored(const void*, const FileSystemDisc_Zip*);
        virtual ~FileAccess_Zip_Stored();
        //virtual ? func_00310CC0();
        // virtual ? func_00311008();

};

class FileAccess_Zip_Deflated : public File::Access {
    public:
        const void* unk8;
        FileSystemDisc_Zip* unkC;
        z_stream unk40;
        FileAccess_Zip_Deflated(const void*, FileSystemDisc_Zip*);
        virtual ~FileAccess_Zip_Deflated();

        void func_00311430();
        // virtual ? func_00311918
        // virtual ? func_003119A0();
};

#endif
