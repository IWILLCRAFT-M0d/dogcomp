#ifndef ANIMATE_H
#define ANIMATE_H

#include "Dogs/SimObj.h"

class AnimationComponent {
    public:
        virtual ~AnimationComponent();
        virtual void func_002F6F18();
        // virtual ? = 0; // Advance?
        virtual void func_002F4608();
        virtual void func_002F6F20();
        virtual void func_002F6F28();
        virtual void func_002F6F30();
        virtual void func_002F6F38(); // AnimationComponent::Resume?
        virtual void func_002F6F40();
        virtual void func_002F6F48();
};

class NothingAnimation : public AnimationComponent {
    public:
        virtual ~NothingAnimation();
        // virtual base function (002F6F18)
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

class Animation {
    public:
        virtual ~Animation();

        //func_002F4C60
        virtual int func_002F5BF8();
        virtual void func_002F7208();
};

class AnimationTimeBase : public GenericObject {
    public:
        static ClassInfo* s_classInfo;

        AnimationTimeBase* unkC;
        Animation* unk10;
        AnimationTimeBase(ClassInfo*, Animation*);
        virtual ~AnimationTimeBase();
        virtual ClassInfo* func_002F6E90();
        virtual float func_002F4368();
        virtual void func_002F4378();
};

// RCT3
class AnimationByLevel {
    public:
        AnimationByLevel(int);
        ~AnimationByLevel();
};

// RCT3
class AnimationStore {
    public:
        int unk1C;
        AnimationStore();
        ~AnimationStore();
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
