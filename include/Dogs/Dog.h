#ifndef DOG_H
#define DOG_H

#include "WorldObj.h"

// in JumpIF.h?
class Jump_IF /* public Interface<Jump_IF> */{

};
class Dog : public WorldObject/*, public Jump_IF, public AnimationMovedObject_IF*/ {
    public:
        static ClassInfo* s_classInfo;
        float unk5E0; // hitcheck radius
        float unk5E4;
        bool unk644; // jumping
        float unk678;
        float unk684;
        /* 0x830 */ bool m_isSwimming;
        float unk838; // sink/swim (mass?)
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
        // 0x86C float boneScale
        // 0x870 float boneRotation (radians)

        union {int i;float f;} unkB0C; // shinyness/wetness? (set to 0 when entering water, increases when out of water)
        float unkB10; // time in water? (-1 when out of water)
        Dog(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Dog();
        virtual ClassInfo* func_0013A200();
        //
        virtual void func_0012E290(int);
        //
        virtual void func_0012EB78(float);
        //? 001878f8
        //? 00188400
        //? 00188408
        //0012e998
        //0012e9c8
        // virtual ? func_0012E050
        virtual float func_0012E240();

        virtual bool GetSwimmingState();
        virtual int func_001365B0();
        virtual void func_001365C8(float);
        //func_0021f3d8
        //? 0021f488
        //? 0021f548

};
// union {int i;float f;}
class DogHitPrimReceiver : public SimObj_HitReceiver {
    public:
        DogHitPrimReceiver(Dog*);
        virtual ~DogHitPrimReceiver();
};


class DogPushOffHitPrimReceiver /* : public SimObj_HitReceiver, public SimObj_HitPrimReceiver */ {

};

class DogAntiSnagHitReceiver /* : public SimObj_HitReceiver */ {

};

class DogSphereObjHitReceiver /* : public SimObj_HitReceiver */ {

};

#ifdef __cplusplus
extern "C" {
#endif
void func_00139048(void);
#ifdef __cplusplus
}
#endif

#endif
