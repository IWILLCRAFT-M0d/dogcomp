#ifndef PLATFORM_H
#define PLATFORM_H

#include "HitTri.h"


class Platform : public HitTri_Object/*, public Platform_IF*/ {
    public:
        Platform(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Platform();
};

class SwingPlatform : public HitTri_Object/*, public Platform_IF*/ {
    public:
        float unk640; // timer?
        /* 0x644 */ float m_oscillationRate; // per second
        /* 0x648 */ float m_swingAngle; // degrees


        float unk694;
        SwingPlatform(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SwingPlatform();
};

#endif /* PLATFORM_H */
