#ifndef CONTAINERS_H
#define CONTAINERS_H

#include "WorldObj.h"


class Container : public WorldObject {
    public:
        Container(ClassInfo*, void*, int, short);
        virtual ~Container();
};

class BasketballNet : public Container {
    public:
        BasketballNet(ClassInfo*, void*, int, short);
        virtual ~BasketballNet();
};

class Pram : public Container {
    public:
        Pram(ClassInfo*, void*, int, short);
        virtual ~Pram();
};


#ifdef __cplusplus
extern "C" {
#endif
int func_001ACFC0(void);
void func_001ACFC8(void);

#ifdef __cplusplus
}
#endif

#endif
