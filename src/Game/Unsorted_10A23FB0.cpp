// Game/Unsorted_10A23FB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A242D0.h"
#include "Game/Class_10A2EE50.h"
#include "Game/Class_10A33EC0.h"
#include "Game/Class_10E9CD18.h"

void FUN_10a2b520();

void FUN_10a2f7a0();

class Class_10E663C8;

extern Class_10E663C8* DAT_10f39f3c;

// FUNCTION: 0x10A242D0 ?GetCount@Class_10A242D0@@QAEHXZ
int Class_10A242D0::GetCount()
{
    return Field08 + 1;
}

// FUNCTION: 0x10A2C060 ?FUN_10a2c060@@YAXXZ
void FUN_10a2c060()
{
    FUN_10a2b520();
}

// FUNCTION: 0x10A2EE50 ?Reset@Class_10A2EE50@@QAEPAV1@XZ
Class_10A2EE50* Class_10A2EE50::Reset()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = -1;
    return this;
}

// FUNCTION: 0x10A2FC00 ?FUN_10a2fc00@@YAXXZ
void FUN_10a2fc00()
{
    FUN_10a2f7a0();
}

// FUNCTION: 0x10A30E50 ?FUN_10a30e50@@YAPAXXZ
void* FUN_10a30e50()
{
    return DAT_10f39f3c;
}

// FUNCTION: 0x10A33EC0 ?FUN_10a33ec0@Class_10A33EC0@@QAEXXZ
void Class_10A33EC0::FUN_10a33ec0()
{
    Field3c = 1;
}
