// Game/Unsorted_10A3C300.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3C2E0.h"
#include "Game/Object_10A18FC0.h"

Object_10A18FC0* FUN_10a18fc0();

// FUNCTION: 0x10A3C300 ?FUN_10a3c300@Class_10A3C2E0@@QAEX_N@Z
void Class_10A3C2E0::FUN_10a3c300(bool A)
{
    if (!A)
    {
        Unknown28 = 0;
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown30 = 0;
        FUN_10a18fc0()->Virtual6(0, 0);
    }
    Unknown2E = A;
}
