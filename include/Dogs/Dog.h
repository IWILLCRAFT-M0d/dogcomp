#ifndef DOG_H
#define DOG_H

#include "WorldObj.h"

class Dog : public WorldObject {
    public:
        int unk830; // swimming state
        float unk838;
        float unk83C;
        float unk840;
        float unk844;
        float unk848;
        float unk84C; // turnflex?
        float unk850;
        float unk854;
        float unk858;
        int unk85C;
        float unk868; // status bone height

        union {int i;float f;} unkB0C;
        Dog(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Dog();
        //
        void func_0012E290(int);
        //
        void func_0012EB78(float);
        //
        float func_0012E240(void);
};
// union {int i;float f;}
class DogHitPrimReceiver : public SimObj_HitReceiver {
    public:
        DogHitPrimReceiver(Dog*);
        virtual ~DogHitPrimReceiver();
};

#ifdef __cplusplus
extern "C" {
#endif
void func_00139048(void);
#ifdef __cplusplus
}
#endif

#endif
