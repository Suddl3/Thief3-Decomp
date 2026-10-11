// Game/Unsorted_10BB8360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10BB8400.h"
#include "Game/Class_10BB84A0.h"
#include "Game/Class_10BB84D0.h"
#include "Game/Object_10AAF570.h"

double GetTimeSeconds();

// FUNCTION: 0x10BB8400 ?FUN_10bb8400@Class_10BB8400@@QAE_NXZ
bool Class_10BB8400::FUN_10bb8400()
{
    if (!Unknown2D4)
        return false;
    return !((Object_10AAF570*)Unknown0C->FUN_10aaf570())->Virtual59();
}

// FUNCTION: 0x10BB84A0 ?FUN_10bb84a0@Class_10BB84A0@@QAEHXZ
int Class_10BB84A0::FUN_10bb84a0()
{
    if (GetTimeSeconds() > Unknown2D8)
        return 1;
    return 0;
}

// FUNCTION: 0x10BB84D0 ?FUN_10bb84d0@Class_10BB84D0@@QAEXXZ
void Class_10BB84D0::FUN_10bb84d0()
{
    Unknown2D8 = GetTimeSeconds() + 10.0;
}
