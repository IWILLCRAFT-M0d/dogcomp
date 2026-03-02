#include "common.h"

#include "Dogs/WheeledVehicle.h"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_001801A0); /* WheeledVehicle::WheeledVehicle */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", _$_14WheeledVehicle); /* WheeledVehicle::~WheeledVehicle */

#ifdef NON_MATCHING
void WheeledVehicle::func_00180528(float arg) {
    this->unk6B0 = arg;
}

void WheeledVehicle::func_00180530() {
    this->unk62C = 1;
}

void WheeledVehicle::func_00180540() {
    this->unk62C = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180528__14WheeledVehiclef); /* (float) a0->unk6B0 = f12 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180530__14WheeledVehicle); /* a0->unk62c = 1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180540__14WheeledVehicle); /* a0->unk62c = 0 */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180548);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180A68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180A98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00180AF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181438__14WheeledVehiclef);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_001815F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", _vt$5WheeledVehicleHitReceiver);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE4C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE4D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE500);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE520);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE538);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE550);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE568);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CE580);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CF7A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CF7E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CF7F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/WheeledVehicle", D_003CF810);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181618);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181758);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181780);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", __tf14WheeledVehicle);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181800); /* return a0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181808); /* return (float) a0->unk6B0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181810); /* a0->unk638 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181818); /* a0->unk63C = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181820); /* a0->unk640 = 1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181830); /* return a0->unk6B4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181838);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181848);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181860);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181870); /* return D_0044DC20 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", __tf25WheeledVehicleHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_001818C8); /* a0->unk10 = 1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_001818D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/WheeledVehicle", func_00181928);

