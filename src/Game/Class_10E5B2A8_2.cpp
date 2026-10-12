// Game/Class_10E5B2A8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E5B2A8.h"

// FUNCTION: 0x109E30D0 ?HandleEvent@Class_10E5B2A8@@UAEXHPAVUObject@@HH@Z
void Class_10E5B2A8::HandleEvent(int Event, UObject* A, int B, int C)
{
    switch (Event)
    {
    case 36:
    case 37:
        AddZone(A, B, C);
        break;
    case 38:
    case 39:
        RemoveZone(A, B, C);
        break;
    case 112:
        FUN_109e3060(A, B, C);
        break;
    }
}
