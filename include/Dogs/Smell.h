#ifndef SMELL_H
#define SMELL_H

#include "SimObj.h"

class Smell : public SimObject {
    public:
        Smell(ClassInfo*, void*, int, short);
        virtual ~Smell();
};

#endif
