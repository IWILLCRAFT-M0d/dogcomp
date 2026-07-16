#ifndef ANIMVAR_H
#define ANIMVAR_H

/**
 * @note Class and method names taken from RCT3 symbols.
 *
 * @todo Document variables.
 */
class AnimationVariable {
    public:
        float unk0;
        float unk4;
        float unk8;
        float unkC;
        void* unk10;
        AnimationVariable(float);
        void SetDefaultNextValue(float);
        void Advance();
};

#endif /* ANIMVAR_H */
