#ifndef RAT_H
#define RAT_H

#include "SmallThing.h"


class Rat : public SmallThing {
    public:
        float unk71C;
        int unk700;
        int unk704;
        int unk708;
        int unk70C;
        int unk710;
        int unk714;
        float unk718;
        int unk720;
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
