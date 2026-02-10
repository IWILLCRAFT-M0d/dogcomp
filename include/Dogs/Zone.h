#ifndef ZONE_H
#define ZONE_H


#include "SimObj.h"

class Zone : public SimObject {
    public:
        Zone(void*, void*, int, short);
        virtual ~Zone();
};


#ifdef __cplusplus
extern "C" {
#endif
void func_0018B978(void);
#ifdef __cplusplus
}
#endif

#endif
