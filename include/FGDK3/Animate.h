#ifndef ANIMATE_H
#define ANIMATE_H

#include "Dogs/SimObj.h"

class AnimationComponent {
    public:
};

class NothingAnimation : public AnimationComponent {
    public:
        virtual ~NothingAnimation();

        virtual void func_002F3F88();
};

class NothingForXAnimation : public AnimationComponent {
    public:
        // virtual ? func_002F3FE0();
        /* virtual */ void func_002F4068();
};

class WeightSettingAnimation : public AnimationComponent {
    public:
        virtual ~WeightSettingAnimation();
        virtual void func_002F41B8();
};



class AnimationTimeBase : public GenericObject {
    public:

        float func_002F4368();
        void func_002F4378();
};

class AnimationTimeBaseFinder {
};

class Animation {
    public:
        virtual ~Animation();

        //func_002F4C60
        virtual int func_002F5BF8();
        virtual void func_002F7208();
};

class AnimationWeightModifier {
    public:
        Animation* unk0;
        //
        //unkC
        int unk10;
        int unk14;
        float unk18;

        AnimationWeightModifier(Animation*);
        virtual ~AnimationWeightModifier();
};

#endif
