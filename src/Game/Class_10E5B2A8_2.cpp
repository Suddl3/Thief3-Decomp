// Game/Class_10E5B2A8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E5B2A8.h"

// FUNCTION: 0x109E30D0 ?FUN_109e30d0@Class_10E5B2A8@@UAEXHPAVUObject@@HH@Z
void Class_10E5B2A8::FUN_109e30d0(int Event, UObject* A, int B, int C)
{
    switch (Event)
    {
    case 36:
    case 37:
        FUN_109e2fa0(A, B, C);
        break;
    case 38:
    case 39:
        FUN_109e2ce0(A, B, C);
        break;
    case 112:
        FUN_109e3060(A, B, C);
        break;
    }
}
