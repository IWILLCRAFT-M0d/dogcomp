// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef FILE_UNK_H
#define FILE_UNK_H

#include "data_unk.h"

class FileSystem {
    public:
        FileSystem(string_ascii);
};

class FileSystemDisc {
    public:
        FileSystemDisc();
        FileSystemDisc(void*, string_ascii);
        virtual ~FileSystemDisc();
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
        virtual ~StorageDevice();
};

class StorageDevice_MemCardUpdater;

class StorageDevice_MemCard : public StorageDevice {
    public:
        /* 0x14 */ int m_port;
        int unk18;
        int unk1C;

        //StorageDevice_MemCardUpdater* unk28;
        StorageDevice_MemCard(int slot);

        virtual void func_003016A0(); // format
        virtual void func_00301798(); // unformat?
};

class StorageDevice_MemCardUpdater : public Thread {
    public:
        StorageDevice_MemCardUpdater(StorageDevice_MemCard*);
};


class FileSystemDisc_MemCard : public FileSystemDisc {
    public:
        StorageDevice_MemCard* unk20;
        FileSystemDisc_MemCard(int slot);
};

class FileSystemDisc_Zip /* : public FileSystemDisc */ {

};

class FileSystemDisc_CD : public FileSystemDisc {
    public:
        FileSystemDisc_CD();
        virtual ~FileSystemDisc_CD();
};

// static FileSystemRoot* D_00452EAC?
class FileSystemDiscRoot : public FileSystemDisc {
    public:
        FileSystemDiscRoot();
        // func_002FFA20
        // func_002FFA58
        // func_002FFAC0
        // func_002FFAF8
        virtual ~FileSystemDiscRoot();
        virtual int func_002FFA90();
};

class File {
    public:
        File(const char*, int, int);
    class Access {
        public:
            int unk0;
            Access();
            virtual ~Access();
    };
    class CallBack {

    };
    class OpenWatcher {

    };

};

namespace FileFind {
    class Access {
        public:
            Access();
            virtual ~Access();
    };
};

class FileFindAccess_Zip : public FileFind::Access {
    public:
        FileFindAccess_Zip(/**/);
};

class NullAccess : public File::Access {
    public:
        NullAccess();
        virtual ~NullAccess();

};

class FileFindAccess_Nul : public FileFind::Access {
    public:
        FileFindAccess_Nul();
        virtual ~FileFindAccess_Nul();
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

#endif /* FILE_UNK_H */
