#ifndef SIMOBJ_H
#define SIMOBJ_H

#include "unk.h"

class GenericObject {
    public:
        // GenericObject(ClassInfo*, void*, int, short);
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
        SimObj_Base(ClassInfo*, void*, int, short);
        virtual ~SimObj_Base();
};

class SimObject : public SimObj_Base {
    public:
        SimObject(ClassInfo*, void*, int, short);
        virtual ~SimObject();
};

class SimObj_ObjectWithMomentum : public SimObject {
    public:
        SimObj_ObjectWithMomentum(ClassInfo*, void*, int, short);
        virtual ~SimObj_ObjectWithMomentum();
};
/*
class SimObj_UniverseLandscape : public SimObj_ObjectWithMomentum {

};
*/
#endif
