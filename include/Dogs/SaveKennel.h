#ifndef SAVEKENNEL_H
#define SAVEKENNEL_H

#include "HitTri.h"


class SaveKennel : public HitTri_Object {
    public:
        SaveKennel(void*, void*, int, short);
        virtual ~SaveKennel();
};


#endif
