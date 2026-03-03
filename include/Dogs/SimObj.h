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
        SimObject(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SimObject();
};

class SimObj_ObjectWithMomentum : public SimObject {
    public:
        SimObj_ObjectWithMomentum(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SimObj_ObjectWithMomentum();
};
/*
class SimObj_UniverseLandscape : public SimObj_ObjectWithMomentum {

};
*/

#endif
