// Game/Unsorted_10B429B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B429B0.h"
#include "Game/Class_10B435B0.h"
#include "Game/Struct_10B429E0.h"
#include "Game/Class_10A64EB0.h"

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x2C];
};

class Class_10E809B8 : public Class_10E67FD0
{
public:
    Class_10E809B8();

    virtual ~Class_10E809B8();

    int m_FMVWindow;
    char Unknown11C[0x4];
    int Unknown120;
    int m_Elapsed;
    char m_Duration[0x4];
    Struct_10B429E0 Unknown12C;
};

extern Class_10B435B0* DAT_10ff6530;

extern int DAT_10ff652c;

// FUNCTION: 0x10B429B0 ?Reset@Class_10B429B0@@QAEXXZ
void Class_10B429B0::Reset()
{
    Unknown124 = 0;
    if (Unknown11C)
    {
        Unknown11C->FUN_10a64eb0();
        Unknown11C->Virtual36();
    }
}

// FUNCTION: 0x10B429E0 ??0Class_10E809B8@@QAE@XZ
Class_10E809B8::Class_10E809B8() : m_FMVWindow(0), Unknown120(0), m_Elapsed(0)
{
    Unknown0E8 = 0x16;
}

// FUNCTION: 0x10B42BB0 ??_GClass_10E809B8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B429E0's definition in this unit.

// FUNCTION: 0x10B43AA0 ?FUN_10b43aa0@@YAXH@Z
void FUN_10b43aa0(int A)
{
    if (A == 1)
        DAT_10ff6530->FUN_10b435b0(1, DAT_10ff652c);
    else
        DAT_10ff6530->Virtual123();
}
