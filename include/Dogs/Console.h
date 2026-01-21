#ifndef CONSOLE_H
#define CONSOLE_H

#include <stdarg.h>
#include <eekernel.h>

#ifdef __cplusplus
extern "C" {
#endif

void func_001A0D80(int, int, int); 
void func_001A0B90(int, char*, int);


void func_001A12A0(char arg0, int arg1);
void func_001A12D8(char arg0, int arg1);
void func_001A1310(char arg0, int arg1);
void func_001A1348(char arg0, int arg1);
void func_001A1380(char arg0, int arg1);
void func_001A13B8(char arg0, int arg1);
void func_001A13F0(char arg0, int arg1);
void func_001A1428(char arg0, int arg1);
void func_001A1460(char arg0, int arg1);
void func_001A1498(char arg0, int arg1);
void func_001A14D0(char arg0, int arg1);
void func_001A1508(char arg0, int arg1);
void func_001A1540(char arg0, int arg1);
void func_001A1578(char arg0, int arg1);
void func_001A15B0(char arg0, int arg1);
void func_001A15E8(char arg0, int arg1);
void func_001A1620(char arg0, int arg1);
void func_001A1658(char arg0, int arg1);
void func_001A1690(char arg0, int arg1);
void func_001A16C8(char arg0, int arg1);
void func_001A1700(char arg0, int arg1);
void func_001A1738(char arg0, int arg1);
void func_001A1770(char arg0, int arg1);
void func_001A17A8(char arg0, int arg1);
void func_001A17E0(char arg0, int arg1);
void func_001A1818(char arg0, int arg1);
void func_001A1850(char arg0, int arg1);
void func_001A1888(char arg0, int arg1);
void func_001A18C0(char arg0, int arg1);
void func_001A18F8(char arg0, int arg1);
void func_001A1930(char arg0, int arg1);
void func_001A1968(char arg0, int arg1);
void func_001A19A0(char arg0, int arg1);
void func_001A19D8(char arg0, int arg1);
void func_001A1A10(char arg0, int arg1);
void func_001A1A48(char arg0, int arg1);
void func_001A1A80(char arg0, int arg1);
void func_001A1AB8(char arg0, int arg1);
void func_001A1AF0(char arg0, int arg1);
void func_001A1B28(char arg0, int arg1);
void func_001A1B60(char arg0, int arg1);


void func_001A1B98(char arg0, int arg1);
void func_001A1BC8(char arg0, int arg1);
void func_001A1BF8(char arg0, int arg1);
void func_001A1C28(char arg0, int arg1);
void func_001A1C58(char arg0, int arg1);
void func_001A1C88(char arg0, int arg1);
void func_001A1CB8(char arg0, int arg1);
void func_001A1CE8(char arg0, int arg1);
void func_001A1D18(char arg0, int arg1);
void func_001A1D48(char arg0, int arg1);
void func_001A1D78(char arg0, int arg1);
void func_001A1DA8(char arg0, int arg1);
void func_001A1DD8(char arg0, int arg1);
void func_001A1E08(char arg0, int arg1);
void func_001A1E38(char arg0, int arg1);
void func_001A1E68(char arg0, int arg1);
void func_001A1E98(char arg0, int arg1);
int func_001AADF8(void);
#ifdef __cplusplus
}
#endif

class Console {
	public:
		void Break();
		void Parse();
		void Patch();
		int RenderActorName();
		int RenderHoldingPoints();
		int RenderCarryHandles();
		void Quit();
		void FogSharpness(void* arg0);
};

#endif
