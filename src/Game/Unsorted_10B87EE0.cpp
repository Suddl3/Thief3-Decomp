// Game/Unsorted_10B87EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ACCFB0.h"

struct Struct_10B87F00
{
    char Unknown00[0x74];
};

// FUNCTION: 0x10B87F00 ?CopyFrom@Class_10ACCFB0@@QAEXABV1@@Z
void Class_10ACCFB0::CopyFrom(const Class_10ACCFB0& Other)
{
    SetCount(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
