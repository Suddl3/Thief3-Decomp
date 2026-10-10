// Game/Unsorted_10C04840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10C04840.h"
#include "Game/Class_10C04A60.h"

// FUNCTION: 0x10C04840 ?FUN_10c04840@Class_10C04840@@QAE_NE@Z
bool Class_10C04840::FUN_10c04840(unsigned char A)
{
    for (int i = 0; i < 5; i++)
    {
        if (Unknown19[i] >= A)
            return true;
    }
    return false;
}

// FUNCTION: 0x10C04A60 ?FUN_10c04a60@Class_10C04A60@@QAE?AVFVector@@XZ
FVector Class_10C04A60::FUN_10c04a60()
{
    FVector* Source = Unknown10;
    if (!Source)
        return FVector(0.0f, 0.0f, 1.0f);
    return *Source;
}
