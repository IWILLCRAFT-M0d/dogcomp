#ifndef BIRD_H
#define BIRD_H

#include "WorldObj.h"


class Bird : public WorldObject {
    public:
        int unk648;
        int unk64C;
        int unk650;
        int unk654;
        //
        int unk670;
        int unk674;
        Bird(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Bird();
        ClassInfo* func_00107430();
};


#endif
