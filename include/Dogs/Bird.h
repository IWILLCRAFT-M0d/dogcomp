#ifndef BIRD_H
#define BIRD_H

#include "WorldObj.h"


class Bird : public WorldObject {
    public:
        static ClassInfo* s_classInfo;
        int unk648; // height thing?
        int unk64C;
        int unk650;
        bool unk654; // collide with walls?
        //
        float unk670;
        int unk674;
        Bird(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Bird();
        virtual ClassInfo* func_00107430();
};


#endif
