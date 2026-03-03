#ifndef SAVEKENNEL_H
#define SAVEKENNEL_H

#include "HitTri.h"


class SaveKennel : public HitTri_Object {
    public:
        int unk604;

        int unk620;
        float unk624;

        SaveKennel(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SaveKennel();
};


#endif
