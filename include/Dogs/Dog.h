#ifndef DOG_H
#define DOG_H

#include "WorldObj.h"

class Dog : public WorldObject {
    public:
        float unk684;
        /* 0x830 */ bool m_isSwimming;
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
        virtual void func_0012E290(int);
        //
        virtual void func_0012EB78(float);
        //? 001878f8
        //? 00188400
        //? 00188408
        //0012e998
        //0012e9c8
        virtual float func_0012E240(void);

        virtual bool GetSwimmingState();
        virtual int func_001365B0();
        //FUN_0021f3d8
        //? 0021f488
        //? 0021f548

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
