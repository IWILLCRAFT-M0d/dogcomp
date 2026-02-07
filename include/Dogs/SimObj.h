#ifndef SIMOBJ_H
#define SIMOBJ_H

class GenericObject {
    public:
        GenericObject(void*, void*, int, short);
};

class SimObj_Base : public GenericObject {
    public:
        SimObj_Base();
        virtual ~SimObj_Base();
};

class SimObject : public SimObj_Base {
    public:
        SimObject();
        virtual ~SimObject();
};

class SimObj_ObjectWithMomentum : public SimObject {

};

#endif
