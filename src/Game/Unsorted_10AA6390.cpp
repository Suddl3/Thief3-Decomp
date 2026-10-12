// Game/Unsorted_10AA6390.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"
#include "Game/Class_10AA7230.h"
#include "Game/Class_10AA7240.h"
#include "Game/Class_10AA7740.h"
#include "Game/Class_10AA7B30.h"
#include "Game/Class_10AA82C0.h"
#include "Game/Class_10AA82E0.h"
#include "Game/Class_10AA82F0.h"
#include "Game/Class_10AA8300.h"
#include "Game/Class_10AA9D90.h"
#include "Game/Class_10AA9DA0.h"
#include "Game/Class_10AA9DB0.h"
#include "Game/Class_10AA9DC0.h"
#include "Game/Class_10AAAEB0.h"
#include "Game/Class_10AAE300.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AB0140.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10AB5A80.h"
#include "Game/Class_10AB5A90.h"
#include "Game/Class_10AB5AA0.h"
#include "Game/Class_10E6D8F0.h"
#include "Game/cConCameraController.h"
#include "Game/Class_10EC0808.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10AAA130.h"
#include "Game/Class_10AAE310.h"
#include "Game/Class_10AB37F0.h"
#include "Game/Class_10E6C128.h"

class Class_10E6D8CC
{
public:
    char Unknown00[0x0c];
    int* Field0C;

    int FUN_10aa63b0();
};

extern char DAT_10e6c0f0[];

extern "C" int fprintf(FILE* File, const char* Format, ...);

struct Class_10AA82D0 {
	char unknown_00[0xc];
	int unknown_0c;

	int FUN_10aa82d0();
};

extern char DAT_10e6d9e0[];

class cConNoteEvent
{
public:
    int WriteNoteLine(FILE* File, int Param);

    int Unknown00;
    int Unknown04;
    int m_Note;
};

struct Class_10AAB5C0 {
	char unknown_00[0x8];
	int unknown_08;

	int FUN_10aab5c0();
};

class Member_10AB0140
{
public:
    virtual void F0() = 0;
    virtual void F1() = 0;
    virtual void F2() = 0;
    virtual void F3() = 0;
    virtual void F4() = 0;
    virtual void F5() = 0;
};

void FUN_10ab57c0();

// FUNCTION: 0x10AA63A0 ?FUN_10aa63a0@Class_10E6D8F0@@QAEXXZ
void Class_10E6D8F0::FUN_10aa63a0()
{
    Unknown18 = 0;
}

// FUNCTION: 0x10AA63B0 ?FUN_10aa63b0@Class_10E6D8CC@@QAEHXZ
int Class_10E6D8CC::FUN_10aa63b0()
{
    return *Field0C;
}

// FUNCTION: 0x10AA6860 ??0Class_10E6D8F0@@QAE@XZ
Class_10E6D8F0::Class_10E6D8F0()
{
    Unknown04 = 0x7fffffff;
    Unknown08 = 0;
    Unknown0C = 0;
    m_Items = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
}

// FUNCTION: 0x10AA69E0 ??_GClass_10E6D8F0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AA6860's definition in this unit.

// FUNCTION: 0x10AA71F0 ?Dump@Class_10E6C128@@QAEHPAU_iobuf@@H@Z
int Class_10E6C128::Dump(FILE* File, int Param)
{
    fprintf(File, DAT_10e6c0f0, Unknown0C, Unknown20);
    return 1;
}

// FUNCTION: 0x10AA7220 ?FUN_10aa7220@Class_10EC0808@@QAEPAXXZ
void* Class_10EC0808::FUN_10aa7220()
{
    return &Unknown20;
}

// FUNCTION: 0x10AA7230 ?FUN_10aa7230@Class_10AA7230@@QAEPAXXZ
void* Class_10AA7230::FUN_10aa7230() {
	return &unknown_18;
}

// FUNCTION: 0x10AA7240 ?FUN_10aa7240@Class_10AA7240@@QAEPAXXZ
void* Class_10AA7240::FUN_10aa7240() {
	return &unknown_24;
}

// FUNCTION: 0x10AA7740 ?FUN_10aa7740@Class_10AA7740@@QAEHXZ
int Class_10AA7740::FUN_10aa7740()
{
	return 0xa;
}

// FUNCTION: 0x10AA7B30 ?FUN_10aa7b30@Class_10AA7B30@@QAEHXZ
int Class_10AA7B30::FUN_10aa7b30()
{
	return 0x9;
}

// FUNCTION: 0x10AA7F70 ?FUN_10aa7f70@@YGHHH@Z
int __stdcall FUN_10aa7f70(int p1, int p2)
{
    return 1;
}

// FUNCTION: 0x10AA8050 ?FUN_10aa8050@@YAHXZ
int FUN_10aa8050()
{
    return 4;
}

// FUNCTION: 0x10AA82B0 ?FUN_10aa82b0@@YAHXZ
int FUN_10aa82b0()
{
    return 0xb;
}

// FUNCTION: 0x10AA82C0 ?FUN_10aa82c0@Class_10AA82C0@@QAEPAXXZ
void* Class_10AA82C0::FUN_10aa82c0()
{
    return &Unknown8;
}

// FUNCTION: 0x10AA82D0 ?FUN_10aa82d0@Class_10AA82D0@@QAEHXZ
int Class_10AA82D0::FUN_10aa82d0() {
	return unknown_0c;
}

// FUNCTION: 0x10AA82E0 ?FUN_10aa82e0@Class_10AA82E0@@QAEHXZ
int Class_10AA82E0::FUN_10aa82e0() {
	return unknown_14;
}

// FUNCTION: 0x10AA82F0 ?FUN_10aa82f0@Class_10AA82F0@@QAEPAXXZ
void* Class_10AA82F0::FUN_10aa82f0() {
	return &unknown_1c;
}

// FUNCTION: 0x10AA8300 ?FUN_10aa8300@Class_10AA8300@@QAEHXZ
int Class_10AA8300::FUN_10aa8300() {
	return unknown_18;
}

// FUNCTION: 0x10AA9440 ?FUN_10aa9440@@YAHXZ
int FUN_10aa9440()
{
    return 5;
}

// FUNCTION: 0x10AA9D80 ?FUN_10aa9d80@@YAHXZ
int FUN_10aa9d80()
{
    return 0xd;
}

// FUNCTION: 0x10AA9D90 ?FUN_10aa9d90@Class_10AA9D90@@QAEHXZ
int Class_10AA9D90::FUN_10aa9d90()
{
    return Unknown28;
}

// FUNCTION: 0x10AA9DA0 ?FUN_10aa9da0@Class_10AA9DA0@@QAEPAXXZ
void* Class_10AA9DA0::FUN_10aa9da0()
{
    return &Unknown10;
}

// FUNCTION: 0x10AA9DB0 ?FUN_10aa9db0@Class_10AA9DB0@@QAEPAXXZ
void* Class_10AA9DB0::FUN_10aa9db0()
{
    return (void*)Unknown24;
}

// FUNCTION: 0x10AA9DC0 ?FUN_10aa9dc0@Class_10AA9DC0@@QAEPAXXZ
void* Class_10AA9DC0::FUN_10aa9dc0()
{
    return (void*)Unknown30;
}

// FUNCTION: 0x10AAA130 ?FUN_10aaa130@Class_10AAA130@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10AAA130::FUN_10aaa130()
{
    return Class_1090A780(Unknown20);
}

// FUNCTION: 0x10AAAA10 ?FUN_10aaaa10@@YAHXZ
int FUN_10aaaa10()
{
    return 0xc;
}

// FUNCTION: 0x10AAAA60 ?WriteNoteLine@cConNoteEvent@@QAEHPAU_iobuf@@H@Z
int cConNoteEvent::WriteNoteLine(FILE* File, int Param)
{
    fprintf(File, DAT_10e6c0f0, DAT_10e6d9e0, m_Note);
    return 1;
}

// FUNCTION: 0x10AAAEA0 ?FUN_10aaaea0@@YAHXZ
int FUN_10aaaea0()
{
    return 0xe;
}

// FUNCTION: 0x10AAAEB0 ?FUN_10aaaeb0@Class_10AAAEB0@@QAEPAXXZ
void* Class_10AAAEB0::FUN_10aaaeb0() {
	return &unknown_0c;
}

// FUNCTION: 0x10AAB5C0 ?FUN_10aab5c0@Class_10AAB5C0@@QAEHXZ
int Class_10AAB5C0::FUN_10aab5c0() {
	return unknown_08;
}

// FUNCTION: 0x10AACF40 ?FUN_10aacf40@cConCameraController@@QAEXXZ
void cConCameraController::FUN_10aacf40() {
	unknown_14 = 0x0;
}

// FUNCTION: 0x10AAE300 ?FUN_10aae300@Class_10AAE300@@QAEXH@Z
void Class_10AAE300::FUN_10aae300(int param)
{
    Field814 = param;
}

// FUNCTION: 0x10AAE310 ?FUN_10aae310@Class_10AAE310@@QAEXH@Z
void Class_10AAE310::FUN_10aae310(int param)
{
    Field818 = param;
}

// FUNCTION: 0x10AAF570 ?FUN_10aaf570@Class_10AAF570@@QAEHXZ
int Class_10AAF570::FUN_10aaf570() {
	return unknown_10;
}

// FUNCTION: 0x10AB0140 ?FUN_10ab0140@Class_10AB0140@@QAEXXZ
void Class_10AB0140::FUN_10ab0140()
{
    Field24->F5();
}

// FUNCTION: 0x10AB37C0 ?FUN_10ab37c0@Class_10AB37C0@@QAEPAXXZ
void* Class_10AB37C0::FUN_10ab37c0() {
	return &unknown_04;
}

// FUNCTION: 0x10AB37F0 ?FUN_10ab37f0@Class_10AB37F0@@QAEXABVClass_109081E0@@@Z
void Class_10AB37F0::FUN_10ab37f0(const Class_109081E0& Value)
{
    Unknown00 = Value;
}

// FUNCTION: 0x10AB5820 ?FUN_10ab5820@@YAXXZ
void FUN_10ab5820()
{
    FUN_10ab57c0();
}

// FUNCTION: 0x10AB5A80 ?FUN_10ab5a80@Class_10AB5A80@@QAEEXZ
unsigned char Class_10AB5A80::FUN_10ab5a80() {
	return unknown_58;
}

// FUNCTION: 0x10AB5A90 ?FUN_10ab5a90@Class_10AB5A90@@QAEXXZ
void Class_10AB5A90::FUN_10ab5a90() {
	unknown_58 = 0x0;
}

// FUNCTION: 0x10AB5AA0 ?FUN_10ab5aa0@Class_10AB5AA0@@QAEEXZ
unsigned char Class_10AB5AA0::FUN_10ab5aa0()
{
    return Unknown59;
}
