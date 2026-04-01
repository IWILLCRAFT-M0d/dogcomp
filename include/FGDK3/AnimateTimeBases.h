#ifndef ANIMATETIMEBASES_H
#define ANIMATETIMEBASES_H

#include "Animate.h"

class TimeProvidingTimeBase : public AnimationTimeBase {
    public:
        virtual ~TimeProvidingTimeBase();
        // ? func_002F3428();
};

class OnceThroughTimeBase : public TimeProvidingTimeBase {
    public:
        virtual ~OnceThroughTimeBase();
        //? func_002F3500();
        virtual int func_002F0E50();
        //func_002F0E58
        virtual int func_002F34F0();
        //func_002F0F58
        // void func_002F34F8(?);


};

class OnceThroughTimeBaseFinder : public AnimationTimeBaseFinder {
    public:
        //func_002f0cf0
};


class WalkSyncedTimeBase : public TimeProvidingTimeBase {
    public:
        virtual ~WalkSyncedTimeBase();
        int func_002F14B0();
        //? func_002F14B8();
        int func_002F36A0();
};

class WalkSyncedTimeBaseFinder : public AnimationTimeBaseFinder {
    public:
        // func_002F12A8
};

class LoopingTimeBase : public TimeProvidingTimeBase {
    public:
        virtual ~LoopingTimeBase();
        //? func_002F35D8();
        int func_002F1118();
        // func_002F1120
        //
        int func_002F35C8();
        // func_002F1218
        // void func_002F35D0(?)


};

class LoopingTimeBaseFinder : public AnimationTimeBaseFinder {
    public:
        //func_002F0FB8
};



class ForeverTimeBase : public AnimationTimeBase {
    public:
        virtual ~ForeverTimeBase();
        // ? func_002F33A8();
        int func_002F0B48();
        int func_002F0B50();
        //
        int func_002F33A0();
};

class ForeverTimeBaseFinder : public AnimationTimeBaseFinder {
    public:
        // func_002F09F0
};

class AmblerSyncedTimeBase : public TimeProvidingTimeBase {
    public:
        virtual ~AmblerSyncedTimeBase();
        // ? func_002F3848();
        // func_002F1EC8
        // func_002F1FB0
        // func_002F1F08
        int func_002F3840();
};

class LegSyncedTimeBase : public TimeProvidingTimeBase {
    public:
        virtual ~LegSyncedTimeBase();
        // ? func_002F3778();
        //func_002F1888
        //func_002F1988
        //
        int func_002F3770();
};

class AdvanceTimeRecordingTimeBase : public AnimationTimeBase {
    public:
        virtual ~AdvanceTimeRecordingTimeBase();
        // ? func_002F38E8();
        //
        int func_002F38E0();
};

class ComponentDeterminedTimeBase : public AnimationTimeBase {
    public:
        virtual ~ComponentDeterminedTimeBase();
        // ? func_002F39E8();
        // ? func_002F26E8
        // func_002F26F8
        void func_002F39B8();
        // func_002F27E8
};

#endif
