// Game/Unsorted_10B76E20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Base_10B7AA20.h"
#include "Game/Class_10B78340.h"
#include "Game/Class_10B7AC80.h"
#include "Game/Class_10B7B910.h"
#include "Game/Class_10B81A40.h"
#include "Game/Class_10B81B10.h"
#include "Game/Class_10E888E4.h"
#include "Game/Class_10E89268.h"
#include "Game/Struct_10B7AA20.h"

extern void* DAT_10e888e4[];

extern void* DAT_10e68f94[];

class Class_10E822B0
{
public:
    Class_10E822B0();

    virtual ~Class_10E822B0();

    char Unknown04[0x150];
};

class Class_10E88AF8 : public Class_10E822B0, public Base_10B7AA20
{
public:
    virtual ~Class_10E88AF8();
    Class_10E88AF8();

    Struct_10B7AA20 Unknown158;
};

void FUN_10da4310();

void FUN_10b87e40();

void FUN_10b87e80();

void FUN_10b878f0();

extern void* DAT_10e89268[];

void FUN_10cad410();

// FUNCTION: 0x10B59E10 ??_GClass_10E88AF8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B7AA20's definition in this unit.

// FUNCTION: 0x10B78340 ?FUN_10b78340@Class_10B78340@@QAEPAXXZ
void* Class_10B78340::FUN_10b78340()
{
    return Field188;
}

// FUNCTION: 0x10B7A2F0 ?FUN_10b7a2f0@Class_10E888E4@@QAEPAV1@XZ
Class_10E888E4* Class_10E888E4::FUN_10b7a2f0()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    Unknown0C = DAT_10e68f94;
    Unknown4C = 32767.0f;
    Unknown00 = DAT_10e888e4;
    return this;
}

// FUNCTION: 0x10B7AA20 ??0Class_10E88AF8@@QAE@XZ
Class_10E88AF8::Class_10E88AF8()
{
}

// FUNCTION: 0x10B7AC80 ?FUN_10b7ac80@Class_10B7AC80@@QAEXE@Z
void Class_10B7AC80::FUN_10b7ac80(unsigned char param)
{
    Field40 = param;
}

// FUNCTION: 0x10B7B910 ?FUN_10b7b910@Class_10B7B910@@QAEPAV1@XZ
Class_10B7B910* Class_10B7B910::FUN_10b7b910()
{
    Field00 = -1;
    return this;
}

// FUNCTION: 0x10B7FB30 ?FUN_10b7fb30@@YAXXZ
void FUN_10b7fb30()
{
    FUN_10da4310();
}

// FUNCTION: 0x10B81A40 ?FUN_10b81a40@Class_10B81A40@@UAEMXZ
float Class_10B81A40::FUN_10b81a40()
{
    return Field70;
}

// FUNCTION: 0x10B81B10 ?FUN_10b81b10@Class_10B81B10@@QAEHXZ
int Class_10B81B10::FUN_10b81b10()
{
    return Field8c;
}

// FUNCTION: 0x10B81C20 ?FUN_10b81c20@@YAXXZ
void FUN_10b81c20()
{
    FUN_10b87e40();
}

// FUNCTION: 0x10B81C30 ?FUN_10b81c30@@YAXXZ
void FUN_10b81c30()
{
    FUN_10b87e80();
}

// FUNCTION: 0x10B81C40 ?FUN_10b81c40@@YAXXZ
void FUN_10b81c40()
{
    FUN_10b878f0();
}

// FUNCTION: 0x10B81D10 ?FUN_10b81d10@Class_10E89268@@QAEXXZ
void Class_10E89268::FUN_10b81d10()
{
    Field00 = DAT_10e89268;
}

// FUNCTION: 0x10B81D70 ?FUN_10b81d70@@YAXXZ
void FUN_10b81d70()
{
    FUN_10cad410();
}
