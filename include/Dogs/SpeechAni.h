#ifndef SPEECHANI_H
#define SPEECHANI_H

#include "FGDK3/Animate.h"
#include "AnimationComponents.h"


class SpeechAniText : public AnimationComponent {
    public:
        /* 0x14 */ bool m_isBigHint;
        SpeechAniText(void*, void*, bool);
        virtual ~SpeechAniText();
        virtual void func_0022AE18();
        virtual void func_0022AF18();
};

class SpeechAniTextBigHint /*: public SpeechAniText*/ {

};

class SpeechAniSound : public AnimationComponent {
    public:
        virtual ~SpeechAniSound();
        virtual void func_0022B030();
        virtual void func_0022B038();

        virtual int func_0022B5E0();

};

class SpeechAniSoundWithControl : public AnimationComponent {
    public:
        virtual ~SpeechAniSoundWithControl();
        virtual void func_0022B820();

        // virtual ? func_0022BA20
        virtual int func_0022BA18();
};

class SoundEverywhere : public AnimationComponent {
    public:
        virtual ~SoundEverywhere();
        virtual int func_0022BCC8();
        virtual void func_0022BB88();
};

class StreamedSpeech : public AnimationComponent {
    public:
        virtual ~StreamedSpeech();
        virtual void func_0022D2C8();
        virtual void func_0022BEA0();
        //
        virtual int func_0022D2D8();
};

class StreamedSpeechTrivial : public StreamedSpeech {

};

class StreamedVoiceover : public AnimationComponent {
    public:
        virtual ~StreamedVoiceover();
        virtual void func_0022D340();
        virtual void func_0022C440();
        //virtual ? func_0022D348();
        virtual int func_0022D350();
};

class StreamedVoiceoverTrivial : public AnimationComponent {
    public:
        virtual ~StreamedVoiceoverTrivial();
        virtual void func_0022D3B8();

        virtual int func_0022D3C8();
};

class StreamPreload : public AnimationComponent {
    public:
        virtual ~StreamPreload();
        virtual void func_0022D460();
        // virtual ? func_0022D468();
        virtual int func_0022D470();

};

class VibrateRumbleAnim : public AnimationComponent {
};


#endif
