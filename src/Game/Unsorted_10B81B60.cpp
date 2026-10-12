// Game/Unsorted_10B81B60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B81B60.h"

// FUNCTION: 0x10B81B60 ?SetModeFromType@Class_10B81B60@@QAEXH@Z
void Class_10B81B60::SetModeFromType(int Type)
{
    int Mode;
    switch (Type)
    {
    case 1:
    case 2:
        Mode = 3;
        break;
    case 3:
        Mode = 8;
        break;
    case 4:
        Mode = 2;
        break;
    case 5:
        Mode = 4;
        break;
    case 6:
        Mode = 5;
        break;
    case 7:
        Mode = 6;
        break;
    case 0:
    case 8:
    case 9:
    case 10:
        Mode = 1;
        break;
    default:
        return;
    }
    Virtual18(Mode, 0, 0);
    if (Unknown0C != 1)
        Unknown0F8 = FVector(0.0f, 0.0f, 0.0f);
}
