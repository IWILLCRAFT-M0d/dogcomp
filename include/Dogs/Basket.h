#ifndef BASKET_H
#define BASKET_H

#include "Containers.h"


class Basket : public Container {
    public:
        Basket(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Basket();
};


#endif
