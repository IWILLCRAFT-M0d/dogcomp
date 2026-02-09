#ifndef CONTAINERS_H
#define CONTAINERS_H

#include "WorldObj.h"


class Container : public WorldObject {
};

class BasketballNet : public Container {
};

class Pram : public Container {
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
