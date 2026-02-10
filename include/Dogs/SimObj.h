#ifndef SIMOBJ_H
#define SIMOBJ_H

class GenericObject {
    public:
        GenericObject(void*, void*, int, short);
};

class SimObj_Base : public GenericObject {
    public:
        SimObj_Base(void*, void*, int, short);
        virtual ~SimObj_Base();
};

class SimObject : public SimObj_Base {
    public:
        SimObject(void*, void*, int, short);
        virtual ~SimObject();
};

class SimObj_ObjectWithMomentum : public SimObject {
    public:
        SimObj_ObjectWithMomentum(void*, void*, int, short);
        virtual ~SimObj_ObjectWithMomentum();
};

#endif
