// Game/Class_10E66368.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E66320.h"
#include "Game/Class_10E66350.h"
#include "Game/Class_10E66368.h"
#include "Game/Class_10A2EF90.h"
#include "Game/Class_10A2F180.h"
#include "Game/Class_10E66300.h"

// FUNCTION: 0x10A2F0C0 ?FUN_10a2f0c0@Class_10E66368@@UAEHPAVClass_10E66320@@@Z
int Class_10E66368::FUN_10a2f0c0(Class_10E66320* Other)
{
    int Mine = Unknown38;
    int Theirs = static_cast<Class_10E66368*>(Other)->Unknown38;
    if ((Mine == 0 || Theirs == 0 || Mine == Theirs) && Class_10E66350::FUN_10a2f0c0(Other))
        return 1;
    return 0;
}

// FUNCTION: 0x10A2F0F0 ?FUN_10a2f0f0@Class_10E66368@@UAE_NH@Z
bool Class_10E66368::FUN_10a2f0f0(int p1)
{
    return Unknown38 == p1;
}

// FUNCTION: 0x10A2F8C0 ??0Class_10E66368@@QAE@XZ
Class_10E66368::Class_10E66368()
{
    Unknown38 = 0;
}

// FUNCTION: 0x10A2FBE0 ??_GClass_10E66368@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A2F8C0's definition in this unit.
