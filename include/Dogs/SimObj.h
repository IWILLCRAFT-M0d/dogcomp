#ifndef SIMOBJ_H
#define SIMOBJ_H

#include "unk.h"

class SimObj_ChildHolder {

};

class SimObj_Universe : public SimObj_ChildHolder {
    public:
        //unk24
        int unk28;
        int unk2C;
        int unk30;
        //unk34
        int unk38;
        //unk3C
        int unk40;
        int unk44;
        int unk48;
        //unk4C
        int unk50;
        // unk54
        int unk58;
        int unk5C;
        int unk60;
        float unk64;
        int unk68;
        // unk70
        // unk74
        int unk78;
        // unk7C
        int unkA4;
        int unkA8;
        SimObj_Universe();
        virtual ~SimObj_Universe();
};

class GenericObject {
    public:
        // GenericObject(ClassInfo*, SimObj_Universe*, int, short);
        // virtual ~GenericObject();
};

class ClassInfo : public GenericObject {
    public:
        int unk4;
        void* unk8;
        int unkC;
        int unk10;
        int unk14;
        int unk18;
        ClassInfo();
        virtual ~ClassInfo();
};

class SimObj_Base : public GenericObject {
    public:
        short unk5C;
        SimObj_Base(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SimObj_Base();
};

class SimObject : public SimObj_Base {
    public:
        int unkB0;
        int unkC0;
        int unkC8;
        int unkCC;
        float unkD0;
        float unkD4;
        int unkD8;

        short unkDC;
        int unkF0;
        int unkF4;
        int unkF8;
        float unkFC;

        SimObject(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SimObject();
};

class SimObj_ObjectWithMomentum : public SimObject {
    public:
        int unk140;
        float unk144;
        float unk148;
        float unk14C;
        float unk150;
        float unk154;
        float unk158;
        int unk15C;
        int unk160;
        float unk164;

        float unk1D0; // gravity thing/mass?
        float unk1D4;
        SimObj_ObjectWithMomentum(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SimObj_ObjectWithMomentum();
        virtual ClassInfo* func_00168B88();
};

class SimObj_UniverseLandscape : public SimObj_ObjectWithMomentum {
    public:
        SimObj_UniverseLandscape(ClassInfo*, SimObj_Universe*);
        virtual ~SimObj_UniverseLandscape();
        virtual void func_00162CE8();
};

class SimObj_HitFilter {

};

class SimObj_HitReceiver : public SimObj_HitFilter {
    public:
        SimObj_HitReceiver(SimObject*, int, int);
        virtual ~SimObj_HitReceiver();
};

#ifdef __cplusplus
extern "C" {
#endif
void func_00164E40(void);
int func_00168B60(void);
void func_00168B68(void);
void func_00168B70(void);
void func_00168B78(void);
void func_00168B80(void);
int func_00168C50(void);
int func_00168C58(void);
#ifdef __cplusplus
}
#endif

#endif
