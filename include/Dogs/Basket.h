#ifndef BASKET_H
#define BASKET_H

#include "Containers.h"


class Basket : public Container {
    public:

        int unk620;
        //unk624
        int unk628;
        //
        int unk660;
        Basket(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Basket();
        virtual ClassInfo* func_00106198();

        virtual int func_00104D78();
};


#endif
