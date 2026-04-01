#ifndef SLIDABLEBLOCKPUZZLE_H
#define SLIDABLEBLOCKPUZZLE_H

#include "WorldObj.h"

class SlidableBlockPuzzle : public WorldObject {
    public:
        static ClassInfo* s_classInfo;
        SlidableBlockPuzzle(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SlidableBlockPuzzle();
        virtual ClassInfo* func_00229758();
};

#endif
