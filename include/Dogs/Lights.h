#ifndef LIGHTS_H
#define LIGHTS_H

#include "unk.h"
#include "SimObj.h"

class Light : public SimObject {
    public:
        Light(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Light();
};

class LightManager : public LiveEditable {
    public:
        LightManager();
        // virtual ? func_001415F0
};

#endif
