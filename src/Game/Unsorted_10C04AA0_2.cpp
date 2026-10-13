// Game/Unsorted_10C04AA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C04AA0.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

struct Struct_10C04AA0
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// FUNCTION: 0x10C04AA0 ?Serialize@Class_10C04AA0@@QAEXAAVFArchive@@@Z
void Class_10C04AA0::Serialize(FArchive& Ar)
{
    int Count = m_Count;
    Ar.Serialize(&Count, 4);
    for (int i = 0; i < Count; i++)
    {
        Struct_10C04AA0 Item = m_Items[i];
        FUN_10b052a0(Ar, &Item);
    }
    Struct_10C04AA0 Value;
    Value.Unknown00 = 0;
    Value.Unknown04 = 0;
    Value.Unknown08 = 1.0f;
    if (Unknown10)
        Value = *Unknown10;
    FUN_10b052a0(Ar, &Value);
    if (Ar.Unknown0C >= 2)
        Ar.Serialize(&Unknown04, 4);
    Ar.Serialize(&Unknown0C, 1);
}
