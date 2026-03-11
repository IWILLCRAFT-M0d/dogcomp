#ifndef SPEECHANI_H
#define SPEECHANI_H

#include "FGDK3/Animate.h"
#include "AnimationComponents.h"


class SpeechAniText : public AnimationComponent {
    public:
        virtual ~SpeechAniText();
        void func_0022AF18();
};


class SpeechAniSound : public AnimationComponent {
    public:
        virtual ~SpeechAniSound();
        void func_0022B030();
        int func_0022B5E0();

};

class SpeechAniSoundWithControl : public AnimationComponent {
    public:
        virtual ~SpeechAniSoundWithControl();
        int func_0022BA18();
};

class SoundEverywhere : public AnimationComponent {
    public:
        virtual ~SoundEverywhere();
        int func_0022BCC8();
        void func_0022BB88();
};

class StreamedSpeech : public AnimationComponent {
    public:
        virtual ~StreamedSpeech();
        void func_0022D2C8();
        int func_0022D2D8();
};

class StreamedSpeechTrivial : public StreamedSpeech {

};

class StreamedVoiceover : public AnimationComponent {
    public:
        virtual ~StreamedVoiceover();
        void func_0022D340();
        //func_0022D348();
        int func_0022D350();
};

class StreamedVoiceoverTrivial : public AnimationComponent {
    public:
        virtual ~StreamedVoiceoverTrivial();

        void func_0022D3B8();
        int func_0022D3C8();
};

class StreamPreload : public AnimationComponent {
    public:
        virtual ~StreamPreload();
        void func_0022D460();

        int func_0022D470();

};

class VibrateRumbleAnim : public AnimationComponent {
};


#endif
