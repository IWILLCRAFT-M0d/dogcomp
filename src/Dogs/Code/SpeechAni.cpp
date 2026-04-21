#include "common.h"
#include "unk.h"

#include "Dogs/SpeechAni.h"

#ifdef NON_MATCHING
SpeechAniText::SpeechAniText(void* arg1, void* arg2, bool isBigHint) /* : AnimationComponent(arg1, 0, 0, 0) */ {
//     this->unk8 = arg2;
//     this->unk10 = tempR_OnceThroughTimeBase::FindOne((long)(int)param_2);
    this->m_isBigHint = isBigHint;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __13SpeechAniTextPvT1b); /* SpeechAniText */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_13SpeechAniText);

#ifdef NON_MATCHING
void SpeechAniText::func_0022AE18() {
    float temp_f12;
    float var_f1;
    // s32 temp_18;


    // func_002F0C90(arg0->unk10, (f32) func_002F5850(arg0->unk0, arg0->unk8->unk4 + 0x20000000) * 0.000001f);
    // temp_18 = func_002F5850(arg0->unk0, arg0->unk8->unk0 + 0x20000000);

    var_f1 = 405.0f;
    // temp_f12 = (f32) func_002F5850(arg0->unk0, arg0->unk8->unk4 + 0x20000000) * 0.000001f;
    if (m_isBigHint) {
        var_f1 = 320.0f;
    }
    // arg0->unkC = func_00238490(D_00453778, temp_18, sp, 0x14, temp_8, 0, temp_f12, 320.0f, var_f1);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022AE18__13SpeechAniText);
#endif

void SpeechAniText::func_0022AF18() {
    return;
}
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022AF20); /* SpeechAniSound */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_14SpeechAniSound);

void SpeechAniSound::func_0022B030() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B038__14SpeechAniSound); // SpeechAniSound member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B5B0);

int SpeechAniSound::func_0022B5E0() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B5E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B608); /* SpeechAniSoundWithControl (used for jake barking)*/

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_25SpeechAniSoundWithControl);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B820__25SpeechAniSoundWithControl);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B910);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022B9F8);

int SpeechAniSoundWithControl::func_0022BA18() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BA20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BA78); /* SoundEverywhere */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_15SoundEverywhere);

void SoundEverywhere::func_0022BB88() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BB90); // SoundEverywhere member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BC98);

int SoundEverywhere::func_0022BCC8() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BCD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BCF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_14StreamedSpeech);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022BEA0__14StreamedSpeech); // Play streamed speech?
// "Stream has changed in mid-animation, will ignore change.\n"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022C198);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022C290); /* StreamedVoiceover */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_17StreamedVoiceover);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022C440__17StreamedVoiceover);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022C680);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022C778); /* StreamedVoiceoverTrivial */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_24StreamedVoiceoverTrivial);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022C928); // StreamedVoiceoverTrivial member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022CB68); // StreamedVoiceoverTrivial member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022CC60); /* StreamPreload */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042DE48); /* "c:/coding/dogs/Code/Common/SpeechAni.cpp" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042DE78); /* "Stream has changed in mid-animation, will ignore change.\n" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022CD10); // stream preload things

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022CED8); /* VibrateRumbleAnim */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022CF40); // VibrateRumbleAnim member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022CF80); // VibrateRumbleAnim member

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", _vt$17VibrateRumbleAnim);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042DF90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042DFB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E018);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E040);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E0A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E0C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E128);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E150);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E1B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E1D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E238);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E260);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E2C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E2E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E348);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf13SpeechAniText);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf14SpeechAniSound);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SpeechAni", D_0042E3D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf25SpeechAniSoundWithControl);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf15SoundEverywhere);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf14StreamedSpeech);

void StreamedSpeech::func_0022D2C8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022D2D0); /* return a0->unk14 */

int StreamedSpeech::func_0022D2D8() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf17StreamedVoiceover);

void StreamedVoiceover::func_0022D340() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022D348__17StreamedVoiceover); /* return a0->unk14 */

int StreamedVoiceover::func_0022D350() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf24StreamedVoiceoverTrivial);

void StreamedVoiceoverTrivial::func_0022D3B8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022D3C0__24StreamedVoiceoverTrivial);
/*
int StreamedVoiceoverTrivial::func_0022D3C0() {
    return a0->unk14
}
*/
int StreamedVoiceoverTrivial::func_0022D3C8() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf13StreamPreload);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_13StreamPreload);

void StreamPreload::func_0022D460() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", func_0022D468__13StreamPreload); /* return a0->unk14 */

int StreamPreload::func_0022D470() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", _$_17VibrateRumbleAnim);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SpeechAni", __tf17VibrateRumbleAnim);

