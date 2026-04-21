#ifndef HITTRI_H
#define HITTRI_H

#include "WorldObj.h"


class HitTri_Object : public WorldObject/*, public CameraSpecialHit_IF*/ {
    public:
        int unk5D0;
        void* unk5D4;
        int unk5DC; // bool m_collisionEnabled?
        int unk5E0; // bool m_hidden?
        HitTri_Object(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~HitTri_Object();
        virtual ClassInfo* func_001DE2C0();
        virtual void func_001DDC88();
};


#endif
