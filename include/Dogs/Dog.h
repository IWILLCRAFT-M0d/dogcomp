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
        void* unk670;
        float unk678;
        float unk684; // boneTimeLeft (secs)
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
        float unk9B0; // starsTimeLeft (secs)
        float unk9B4; // starsScale

        union {int i;float f;} unkB0C; // shinyness/wetness? (set to 0 when entering water, increases when out of water)
        float unkB10; // time in water? (-1 when out of water)
        Dog(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Dog();
        virtual ClassInfo* func_0013A200();
        // virtual base function (00168410)
        // virtual base function (00185680)
        // virtual base function (001857E8)
        virtual void func_0012E290(int);
        // virtual ? func_0012E270
        // virtual base function (00182A70)
        // virtual base function (00168688)
        // virtual base function (00168778)
        // virtual base function (00188460)
        // virtual base function (00188448)
        // virtual base function (00168478)
        // virtual base function (00168480)
        // virtual base function (00168488)
        // virtual base function (00168490)
        // virtual base function (00168498)
        // virtual base function (001684A0)
        // virtual ? func_0012E2B8
        // virtual base function (00165DC0)
        // virtual base function (00165EB0)
        // virtual base function (00184E28)
        // virtual base function (00184E48)
        // virtual base function (001833E8)
        // virtual ? func_00134B10
        // virtual ? func_001324B0
        // virtual base function (00168610)
        // virtual base function (00167900)
        // virtual base function (001679C0)
        virtual void func_0012E8E0();
        // virtual ? func_0012E960
        // virtual base function (001883e0)
        // virtual ? func_0013A1F0
        // virtual base function (00188270)
        // virtual base function (001882A8)
        virtual float func_0013A1F8();
        // virtual base function (00188340)
        // virtual base function (00168690)
        // virtual base function (00168698)
        // virtual base function (00165838)
        // virtual base function (00165990)
        // virtual base function (001686A0)
        // virtual base function (001686A8)
        // virtual base function (00183AC8)
        // virtual ? func_00134788
        // virtual base function (00165B50)
        // virtual base function (00165B80)
        // virtual ? func_001349B8
        // virtual base function (00165BD8)
        // virtual ? func_00134688
        // virtual base function (00167A50)
        // virtual base function (00168B40)
        // virtual ? func_00139058
        // virtual base function (00168B68)
        // virtual base function (00168B70)
        // virtual base function (001666D8)
        virtual void func_00134650();
        // virtual base function (00168B80)
        // virtual ? func_00135DB0
        // virtual base function (001883A8)
        virtual int func_00139858();
        // virtual base function (00185510)
        // virtual base function (001874C8)
        // virtual ? func_00135E08
        // virtual base function (00187828)
        // virtual base function (001878F8)
        // virtual base function (00188400)
        // virtual base function (00188408)
        // virtual ? func_0012E998
        // virtual ? func_0012E9C8
        virtual void func_0012EB78(float);
        // virtual base function (00188450)
        // virtual ? func_0013A1E8
        // virtual base function (00188468)
        // virtual base function (00188470)
        // virtual base function (00188478)
        // virtual base function (00188480)
        // virtual ? func_0012E050
        virtual float func_0012E240();
        // virtual base function(001884A8)
        // virtual base function (001884B8)
        // virtual base function (00186F80)
        // virtual base function (001870D8)
        // virtual base function (001884E8)
        // end of vtable @ 003A7C90

        virtual bool GetSwimmingState();
        virtual int func_001365B0();
        virtual void func_001365C8(float);
        //func_0021f3d8
        //? 0021f488
        //? 0021f548

};
// union {int i;float f;}
class DogHitPrimReceiver : public SimObj_HitReceiver, public SimObj_HitPrimReceiver {
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
