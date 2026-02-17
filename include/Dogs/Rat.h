#ifndef RAT_H
#define RAT_H

#include "SmallThing.h"


class Rat : public SmallThing {
    public:
        Rat(void*, void*, int, short);
        virtual ~Rat();
};

#ifdef __cplusplus
extern "C" {
#endif
int func_00150648(void);

#ifdef __cplusplus
}
#endif

#endif
