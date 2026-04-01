#ifndef SAVEKENNEL_H
#define SAVEKENNEL_H

#include "HitTri.h"

#include "Element3D.h"

//extern short D_004532F0;

class SaveKennel : public HitTri_Object {
    public:
        int unk604;

        int unk620;
        float unk624; // boneScale
        /* 0x630 */ //Element3D m_boneShape;
        SaveKennel(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SaveKennel();
        virtual ClassInfo* func_00152C38();

};


#endif
