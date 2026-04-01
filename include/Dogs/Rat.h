#ifndef RAT_H
#define RAT_H

#include "SmallThing.h"

class Rat : public SmallThing {
    public:

        int unk700;
        int unk704;
        int unk708;
        int unk70C;
        int unk710;
        int unk714;
        float unk718;
        float unk71C;
        //unk720;
        Rat(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Rat();
        virtual ClassInfo* func_00150EE8();

        virtual int func_00150648();
};

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif
