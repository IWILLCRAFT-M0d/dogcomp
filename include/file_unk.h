// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef FILE_UNK_H
#define FILE_UNK_H

#include "FGDK3/Playstation2/Thread.h"
#include "data_unk.h"

/**
 * @note Name taken from RCT3 symbols.
 */
struct FileInZip_Info {
    unsigned int m_unk0;
    unsigned int m_size;
    char unkC[4];
    char* m_name;
};

class FileSystem {
    public:
        FileSystem(string_ascii);
        // virtual ? = 0;
};

class FileSystemDisc {
    public:
        void* unkC;
        FileSystemDisc();
        FileSystemDisc(void*, string_ascii);
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        virtual ~FileSystemDisc();
        // virtual ? = 0;
};

class FileSystemDisc_FileDescriptor  : public FileSystemDisc {
    public:
        FileSystemDisc_FileDescriptor();

        virtual ~FileSystemDisc_FileDescriptor();
        virtual int func_00315B60();
};

// 004539C4 RCT3 static m_storageDevices?
class StorageDevice {
    public:
        StorageDevice(string_ascii);
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? 002ff0f8 // RCT3 IsValidDevice?
        // virtual ? 002ff128 // RCT3 IsCorrupt?
        // virtual ? 002ff158 // RCT3 IsDamaged?
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        // virtual ? = 0;
        ~StorageDevice();
};

class StorageDevice_MemCardUpdater;

class StorageDevice_MemCard : public StorageDevice {
    public:
        /* 0x14 */ int m_port;
        int unk18;
        int unk1C;
        int unk20;
        int unk24;

        //StorageDevice_MemCardUpdater* unk28;
        StorageDevice_MemCard(int slot);
        virtual int func_00301648();
        virtual int func_00302658();
        // virtual ? func_00302690
        //
        virtual void func_003016A0(); // format
        virtual void func_00301798(); // unformat?
};

class StorageDevice_MemCardUpdater : public Thread {
    public:
        StorageDevice_MemCardUpdater(StorageDevice_MemCard*);
        virtual ~StorageDevice_MemCardUpdater();
        // virtual ? 00301290
};


class FileSystemDisc_MemCard : public FileSystemDisc {
    public:
        StorageDevice_MemCard* unk20;
        FileSystemDisc_MemCard(int slot);
};

class FileSystemDisc_Zip /* : public FileSystemDisc */ {
    public:
        void* unk20;
        virtual void* func_00312BC8(/**/);
        virtual void* func_00312DA8(/**/);
        // virtual ? func_003143D8
        // virtual ? func_00314410
        virtual ~FileSystemDisc_Zip();
        // virtual ? func_00314448
};

class FileSystemDisc_CD : public FileSystemDisc {
    public:
        FileSystemDisc_CD();
        virtual ~FileSystemDisc_CD();
        // virtual ? func_00303BB0
};

// static FileSystemRoot* D_00452EAC? // RCT3 m_rootDisc?
class FileSystemDiscRoot : public FileSystemDisc {
    public:
        FileSystemDiscRoot();
        // virtual ? func_002FFA20
        // virtual ? func_002FFA58
        // virtual ? func_002FFAC0
        // virtual ? func_002FFAF8
        virtual ~FileSystemDiscRoot();
        virtual int func_002FFA90();
};

class File {
    public:
        File(const char*, int, int);

        int Okay();
    class Access {
        public:
            int unk0;
            Access();
            virtual ~Access();
            // virtual ? = 0;
            // virtual ? () = 0; // RCT3 RequestLength? (returns size of file)
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            virtual int func_00302120();
    };
    class CallBack {

    };
    class OpenWatcher {

    };

};

// Unused?
class File_MemRead : public File::Access {
    public:
        //File_MemRead
        virtual ~File_MemRead();
        // virtual ? 00308a90
        // virtual ? 00304c18
        // virtual ? 00304c58
        // virtual ? 00304d08
        // virtual ? 00304d78
        // virtual ? 00304db0
        // base?
};

namespace FileFind {
    class Access {
        public:
            Access();
            virtual ~Access();
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
            // virtual ? = 0;
    };
};

class FileFindAccess_Zip : public FileFind::Access {
    public:
        FileFindAccess_Zip(/**/);
        virtual ~FileFindAccess_Zip();
        // virtual ? func_003130C8
        // virtual ? func_00313120
        // virtual ? func_003134C8
        // virtual ? func_00313528
};

class NullAccess : public File::Access {
    public:
        NullAccess();
        virtual ~NullAccess();
        // virtual ? 00309378
        // virtual ? 003093a0
        // virtual ? 003093d0
        // virtual ? 00309448
        // virtual ? 003094c0
        // virtual ? 003094e8
        // virtual ? 00309518

};

class FileFindAccess_Nul : public FileFind::Access {
    public:
        FileFindAccess_Nul();
        virtual ~FileFindAccess_Nul();
        // virtual ? 003095c8
        // virtual ? 003095f8
        // virtual ? 00309620 // RCT3 FileFindAccess_Null::Name?
        // virtual ? 00309680
};

class File_FileDescriptor : public File::Access {
    public:
        /* 0x8 */ int m_fd;
        int unkC;
        int unk10;
        /* 0x14 */ int m_offset;
        int unk18;
        int unk1C;
        File_FileDescriptor(int fd);
        virtual ~File_FileDescriptor();
        virtual void func_00314890(void);
        virtual int func_003148E8(void);
};

#ifdef __cplusplus
extern "C" {
#endif
string_ascii* func_00273000(const char*);
#ifdef __cplusplus
}
#endif

#endif /* FILE_UNK_H */
