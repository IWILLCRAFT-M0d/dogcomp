#ifndef PERSON_H
#define PERSON_H

#include "WorldObj.h"

class PersonRepulsor /*: public SimObj_HitReceiver, public SimObj_HitPrimReceiver*/ {

};

class PersonHitSizeCalculator : public SimObj_HitPrimReceiver {
    public:
        // virtual func_0014CC60
};

class Person : public WorldObject {
    public:
        float unk5C0;
        float unk5C4;
        float unk5C8;

        float unk658;
        float unk65C;
        int unk6B0;
        int unk6B4;
        int unk6B8;
        int unk6BC; // person accesories
        int unk6C0;
        int unk6C4;
        int unk6C8;

        Person(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Person();
        virtual ClassInfo* func_0014CC08();
        virtual int func_0014C240();
        virtual float func_0014CBD8();
        virtual float func_0014A840();
};


#endif
