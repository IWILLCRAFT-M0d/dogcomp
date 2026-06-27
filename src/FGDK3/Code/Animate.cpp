#include "common.h"
#include "unk.h"

#include "FGDK3/Animate.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F3EF0); /* NothingAnimation */

void NothingAnimation::func_002F3F88() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F3F90); /* NothingForXAnimation */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F3FE0__20NothingForXAnimation);

void NothingForXAnimation::func_002F4068() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_16NothingAnimation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$20NothingForXAnimation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$16NothingAnimation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf16NothingAnimation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_20NothingForXAnimation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf20NothingForXAnimation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4150); /* WeightSettingAnimation */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F41B8__22WeightSettingAnimation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_22WeightSettingAnimation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$22WeightSettingAnimation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf22WeightSettingAnimation);

#ifdef NON_MATCHING
AnimationTimeBase::AnimationTimeBase(ClassInfo* arg1, Animation* arg2) {
    this->unk10 = arg2;
    this->unkC = this;
    if (arg1 == NULL) {
        s_classInfo->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __17AnimationTimeBaseP9ClassInfoP9Animation); // AnimationTimeBase (ClassInfo*, Animation*?)
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_17AnimationTimeBase);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4300);

float AnimationTimeBase::func_002F4368() {
    return 0.0f;
}

void AnimationTimeBase::func_002F4378() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __23AnimationTimeBaseFinderP9ClassInfo); /* AnimationTimeBaseFinder */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4398); /* AnimationComponent */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_18AnimationComponent);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F44F0);

void AnimationComponent::func_002F4608() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4610); // RCT3 Animation::ComponentsByLevel::ComponentsByLevel ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4628); // Animation::Animation(AnimationStore* YES, GenericObject*, AnimationHeader*?)

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4900);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_9Animation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4C60); // Animation member; Animation::GetName?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4D38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4E60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4EC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4F30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4FD8); // RCT3 Animation::AddWeightModifier ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F4FF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5040);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5088);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F50F0); // Animation::Initialise ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F51E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5278);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5468);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5580);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5610);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F56A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5720);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5790);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F57F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5850);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5870);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5890); // "Animation::SetValue index is beyond end of table (idx = %d, tbl = %d)"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5948); // Animation function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5A80); // "Animation::SetPosition index is beyond end of tabls (idx=%d, tbl=%d)"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5B88); // RCT3 Animation::Resume?

int Animation::func_002F5BF8() { // RCT3 Animation::GetAnimName?
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5C00);

#ifdef NON_MATCHING
AnimationByLevel::AnimationByLevel(int arg1) {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __16AnimationByLeveli);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_16AnimationByLevel);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5D18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5D60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5DC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5E10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5E58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F5E80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6270);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6340);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6378);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F63B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6400);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6448);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F64C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6500);

#ifdef NON_MATCHING
AnimationStore::AnimationStore() {
    this->unk1C = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __14AnimationStore);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_14AnimationStore);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6608);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6650);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6698);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F66F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6748);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6848);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F68C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6908);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6968);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F69D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6A18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6A60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6AB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6B08);

#ifdef NON_MATCHING
AnimationWeightModifier::AnimationWeightModifier(Animation* arg1) {
    this->unk0 = arg1;
    //
    this->unk10 = 0;
    this->unk14 = 0;
    this->unk18 = 1.0f;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __23AnimationWeightModifierP9Animation);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", _$_23AnimationWeightModifier);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6C18);

int func_002F6C50() {
    return 0;
}

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$9Animation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$23AnimationWeightModifier);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$18AnimationComponent);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$23AnimationTimeBaseFinder);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", _vt$17AnimationTimeBase);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6C58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6D98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6DD8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Animate", D_004469C8); /* "13GenericObject" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf17AnimationTimeBase);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6E78); /* return a0->unk10 */

void func_002F6E80() {
    return;
}

void func_002F6E88() {
    return;
}

ClassInfo* AnimationTimeBase::func_002F6E90() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6E98); /* __tf23AnimationTimeBaseFinder */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf18AnimationComponent);

void AnimationComponent::func_002F6F18() { // AnimationComponent::Initialise?
    return;
}

void AnimationComponent::func_002F6F20() {
    return;
}

void AnimationComponent::func_002F6F28() {
    return;
}

void AnimationComponent::func_002F6F30() {
    return;
}

void AnimationComponent::func_002F6F38() {
    return;
}

void AnimationComponent::func_002F6F40() {
    return;
}

void AnimationComponent::func_002F6F48() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6F50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6F58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6F60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf23AnimationWeightModifier);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6FA8); /* a0->unk10 = 1 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6FB8); /* return (float) a0->unk18 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6FC0); /* return a0->unk10 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6FC8); /* return a0->unk14 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F6FD0); /* a0->unk14 = 1; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf9Animation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7020);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7038);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7058); /* return a0->unkC */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7060); /* return a0->unkC */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7068); /* return a0->unk98 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7070); /* return a0->unk98 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7078);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7098); /* return (float) a0-unkD8 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70A0); /* return (float) a0-unkEC */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70A8); /* return (float) a0-unk9C */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70B0); /* return a0->unkFC */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70B8); /* return a0->unk130 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70C0); /* return (float) a0-unkF8 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70C8); /* return a0->unkF4 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70D0); /* a0->unkF0 = 0 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70D8);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70E8); /* (float) a0->unk12C = f12 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70F0); /* return (float) a0->unk12C */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F70F8); /* return (float) a0->unk12C */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7100);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7120);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7140);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7160);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7180);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71A0);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71C0);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71C8); /* return a0->unk4 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71D0); /* return a0->unk4 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71D8); /* return (float) a0-unkE4 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71E0); /* return (float) a0-unkE8 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71E8); /* return a0->unk100 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71F0); /* (float) a0->unkE4 = f12 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F71F8); /* (float) a0->unkE8 = f12 */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F7200); /* a0->unk100 = a1 */

void Animation::func_002F7208() { // WGRABBIT Animation::InformOverlayRemoval()?
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tf28AnimationResourceProvider_IF);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", __tft9Interface1Z28AnimationResourceProvider_IF);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Animate", func_002F72A0);
