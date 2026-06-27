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
        // virtual ?() = 0; // ResName();
        // virtual ?(/**/) = 0;
        // virtual ?(/**/) = 0;
        virtual void func_00275E88();
        virtual int func_00275F98();
        virtual int func_00275FA0();
        virtual void func_00275FA8();
        virtual void func_00275FB0();
};

template <typename T> class Resource : public Resource_Generic {
    public:
        T* unk0[];
};

class Resource_LayoutUnit {
    public:
        int unk0;
        Resource_LayoutUnit* unk4;
        Resource_LayoutUnit(Resource_LayoutUnit*); // Resource_LayoutUnit(Resource_LayoutGroup*?)
        virtual ~Resource_LayoutUnit();
        // virtual ? = 0
        // virtual ? = 0
        // virtual ? = 0
        // virtual ? = 0
        // virtual ? = 0
};

class Resource_LayoutOverlay /* : public Resource_LayoutUnit */ {
    public:
        static char* D_00487600;
        int unkC; // overlay id?
        void* unk10;
        //Resource_LayoutOverlay
        virtual ~Resource_LayoutOverlay();
        virtual void func_00274200(); // Load? (common, d, l, dl)
        virtual void func_00274400(); // Unload?
        // virtual ? func_002744B0 // d ovl load
        // virtual ? func_002744F8 // l ovl (language) load
        // virtual ? func_00274540 // dl ovl load

};

class Resource_LayoutGroup : public Resource_LayoutUnit {
    public:
        int unkC;
        void* unk10;
        Resource_LayoutGroup(Resource_LayoutUnit*, int, void*);
        virtual ~Resource_LayoutGroup();
        // virtual ? = 0
        // virtual ? func_00274730
        // virtual ? func_00274790
        // virtual ? func_002747F0
        // virtual ? func_00274850
        // virtual ? = 0

};

class Resource_LayoutInclusiveGroup /*: public Resource_LayoutGroup*/ {
    public:
        virtual ~Resource_LayoutInclusiveGroup();
        // virtual ? func_00274A00
        // virtual base function (00274730)

};

#endif /* RESOURCE_UNK_H */
