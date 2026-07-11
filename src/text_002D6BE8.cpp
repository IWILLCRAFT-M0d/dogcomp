#include "common.h"
#include "debug.h"
#include "unk.h"

#include <stdio.h>
#include <string.h>

// func_002D6BE8
template<> Contents<char>::Contents(int size) {
    m_unk0 = 1;
    m_len = 0;
    m_cap = ((size + 0x15) & ~0xF) - 4;
    m_data = new char[m_cap];
    m_data[0] = '\0';
}

// func_002D6C40
template<> Contents<char>::Contents(const char* data) {
    m_unk0 = 1;
    m_len = strlen(data);
    m_cap = ((m_len + 0x15) & ~0xF) - 4;
    m_data = new char[m_cap];
    strcpy(m_data, (char*)data);
}

// func_002D6CB8
template<> Contents<char>::Contents(const char* data, unsigned int size) {
    m_unk0 = 1;
    m_len = size;
    m_cap = ((size + 0x15) & ~0xF) - 4;
    size++;
    char *temp = m_data = new char[m_cap];
    strncpy(temp, data, size);
    temp[size-1] = '\0';
}

// func_002D6D50
template<> Contents<char>::Contents(Contents<char> const &other, unsigned int size) {
    m_unk0 = 1;
    m_len = other.m_len;
    m_cap = (size < other.m_len) ? (other.m_len & ~0xF) - 4 : ((size + 0x15) & ~0xF) - 4;
    m_data = new char[m_cap];
    memcpy(m_data, other.m_data, other.m_len + 1);
}

// func_002D6DE8
template<> void Contents<char>::EnsureSpaceFor(unsigned int size) {
    if (m_cap <= size) {
        m_cap = ((size + 0x15) & ~0xF) - 4;
        char *temp = new char[m_cap];
        memcpy(temp, m_data, m_len + 1);
        delete m_data;
        m_data = temp;
    }
}

// func_002D6E68
string_ascii::string_ascii() {
    m_cont = new Contents<char>(0);
}

// func_002D6EA8
string_ascii::string_ascii(const char* d) {
    m_cont = new Contents<char>(d);
}

// func_002D6EF0
string_ascii::string_ascii(const char* d, unsigned int size) {
    m_cont = new Contents<char>(d, size);
}

// func_002D6F48
// this function requires -fpermissive in order to compile; FIXME perhaps?
string_ascii::string_ascii(unsigned int size, char c) {
    m_cont = new Contents<char>(size + 1);

    for (int i = 0; i < size; i++) {
        m_cont->m_data[i] = c;
    }

    m_cont->m_data[i] = '\0';
    m_cont->m_len = size;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6FE0);

// func_002D7050
void string_ascii::EnsureSpaceFor(int size) const {
    if (m_cont->m_unk0 > 1) {
        m_cont->m_unk0--;
        m_cont = new Contents<char>(*m_cont, size);
    } else {
        m_cont->EnsureSpaceFor(size);
    }
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D70C0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7178);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7228);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D72D0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D73A0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7448);

void func_002D74F8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7500);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D75F0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D76D0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D76E8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7710);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443B70); /* "0123456789abcdefghijklmnopqrstuvwxyz" */

#ifdef NON_MATCHING
// getTarget?
char* func_002D7738(int arg0) {
    switch (arg0) {
    case 0:
        return "Windows";
    case 1:
        return "PS2";
    case 2:
        return "Xbox";
    case 3:
        return "GameCube";
    default:
        return "unknown_target";
    }
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7738);
#endif

int func_002D77A8(char* arg0) {
    int var_16;

    var_16 = 0;
loop_1:
    if (strcasecmp(arg0, func_002D7738(var_16)) != 0) {
        var_16 += 1;
        if (var_16 >= 4) {
            return 4;
        }
        goto loop_1;
    }
    return var_16;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7808);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D78D0); /* Endian::Endian */

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_6Endian);

void Endian::func_002D7980(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7988); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7998);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D79A0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7A18);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7A28);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7A78);

// split for Endian?
INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7AB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7BD8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7C20);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7F28);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7F70);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8100);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8148);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8178);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D81C0); // in endian.cpp

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D84C8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8510);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8538);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8588);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8630);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8680);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8700);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8750); // in Endian.cpp

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D87E0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_16Endian_ExpandMem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D88A8); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D89A8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8AA0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_11EndianFile);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8B48);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8BB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8CA0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8D28);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8DB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9010);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9090);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9148);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D91C8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf6Endian);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9250);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9258);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9260);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9268);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9270);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_10Endian_Mem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf10Endian_Mem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9308);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443BB8); /* "c:/coding/fgdk3/Code/Common/Endian.cpp" */

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$29Endian_GentleModificationFile);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$11EndianFile);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$16Endian_ExpandMem);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$10Endian_Mem);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$6Endian);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443D70); /* "10Endian_Mem" */

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf16Endian_ExpandMem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D93C0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D93C8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D93D8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf11Endian_File);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9468);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443D98); /* "11Endian_File" */

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf29Endian_GentleModificationFile);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9520);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9540);
