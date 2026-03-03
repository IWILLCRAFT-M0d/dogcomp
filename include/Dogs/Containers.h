#ifndef CONTAINERS_H
#define CONTAINERS_H

#include "WorldObj.h"


class Container : public WorldObject {
    public:
        int unk600;
        Container(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Container();
};

class BasketballNet : public Container {
    public:
        int unk610;
        int unk614;
        int unk618;
        BasketballNet(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~BasketballNet();
};

class Pram : public Container {
    public:
        int unk610;
        int unk614;
        int unk618;
        int unk61C;
        Pram(ClassInfo*, SimObj_Universe*, int, short);
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
