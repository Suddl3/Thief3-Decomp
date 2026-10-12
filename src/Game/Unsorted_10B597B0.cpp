// Game/Unsorted_10B597B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"
#include "Game/Struct_10B597B0.h"

// FUNCTION: 0x10B597B0 ?CopyFrom@Class_10B59770@@QAEXABV1@@Z
void Class_10B59770::CopyFrom(const Class_10B59770& Other)
{
    Resize(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
