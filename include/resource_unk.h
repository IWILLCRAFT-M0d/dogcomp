// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef RESOURCE_UNK_H
#define RESOURCE_UNK_H

#include "FGDK3/Playstation2/Thread.h"

class Resource_Generic {
    public:
        void* unk0; // resource pointer
        /* 0x4 */ unsigned int m_resourceCount;
        /* 0x8 */ int m_resourceType;

        StdInit_ClientBase unkC;


        Resource_Generic();
        virtual ~Resource_Generic();
        virtual int func_00275520();
};

template <typename T> class Resource : public Resource_Generic {
    public:
        T* unk0[];
};

class Resource_LayoutUnit {
    public:
        int unk0;
        Resource_LayoutUnit* unk4;
        Resource_LayoutUnit(Resource_LayoutUnit*);
        virtual ~Resource_LayoutUnit();
};

class Resource_LayoutOverlay /* : public Resource_LayoutUnit */ {
    public:
        static char* D_00487600;
        int unkC; // overlay id?
        void* unk10;
        //Resource_LayoutOverlay
        virtual ~Resource_LayoutOverlay();
        virtual void func_00274200();
        virtual void func_00274400();

};

class Resource_LayoutGroup : public Resource_LayoutUnit {
    public:
        int unkC;
        void* unk10;
        Resource_LayoutGroup(Resource_LayoutUnit*, int, void*);
        virtual ~Resource_LayoutGroup();
};

class Resource_LayoutInclusiveGroup /*: public Resource_LayoutGroup*/ {
    public:
        virtual ~Resource_LayoutInclusiveGroup();
            //func_00274A00

};

#endif /* RESOURCE_UNK_H */
