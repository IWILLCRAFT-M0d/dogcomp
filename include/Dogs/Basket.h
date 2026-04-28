#ifndef BASKET_H
#define BASKET_H

#include "Containers.h"


class Basket : public Container {
    public:

        bool unk620; // 0 when held, otherwise 1; apply gravity?
        float unk624;
        bool unk628; // 0 when held, otherwise 1
        //
        int unk660;
        Basket(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Basket();
        virtual ClassInfo* func_00106198();

        virtual void func_00105DF8();
        virtual int func_00104D78();
};


#endif /* BASKET_H */
