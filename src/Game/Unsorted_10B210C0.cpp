// Game/Unsorted_10B210C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10991FF0.h"

bool FUN_10b1fc30(Class_10991FF0* Actor, const FVector& Offset);

// FUNCTION: 0x10B210C0 ?FUN_10b210c0@@YA_NPAVClass_10991FF0@@@Z
bool FUN_10b210c0(Class_10991FF0* Actor)
{
    FVector Offset;
    Offset.X = 0.0f;
    Offset.Y = 0.0f;
    Offset.Z = -Actor->FUN_10991ff0();
    if (FUN_10b1fc30(Actor, Offset))
        return true;
    Offset.X = 0.0f;
    Offset.Y = 0.0f;
    Offset.Z = 5.0f - Actor->FUN_10991ff0();
    if (FUN_10b1fc30(Actor, Offset))
        return true;
    Offset.X = 0.0f;
    Offset.Y = 0.0f;
    Offset.Z = -Actor->FUN_10991ff0() - 5.0f;
    if (FUN_10b1fc30(Actor, Offset))
        return true;
    return false;
}
