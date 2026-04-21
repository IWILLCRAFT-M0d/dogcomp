#ifndef PLACEHOLDER_H
#define PLACEHOLDER_H

#include "WorldObj.h"


class PlaceHolder : public WorldObject {
    public:
        static ClassInfo* s_classInfo;
        PlaceHolder(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~PlaceHolder();
        virtual void func_0014D160(float);

        virtual ClassInfo* func_0014D3E8();
};


#endif
