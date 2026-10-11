// Game/Unsorted_10B597B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"
#include "Game/Struct_10B597B0.h"

// FUNCTION: 0x10B597B0 ?FUN_10b597b0@Class_10B59770@@QAEXABV1@@Z
void Class_10B59770::FUN_10b597b0(const Class_10B59770& Other)
{
    FUN_10abc210(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
