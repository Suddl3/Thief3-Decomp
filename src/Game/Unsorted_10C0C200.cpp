// Game/Unsorted_10C0C200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C0C8E0.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Class_10C0C360.h"

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

class Class_10C0C360_Unknown0C
{
public:
    char Unknown00[0x38];
    Struct_10C05A80 Unknown38;
};

// FUNCTION: 0x10C0C360 ?FindInRadius@Class_10C0C360@@QAEXPAVcIntArray@@PBUStruct_10C05A80@@M@Z
void Class_10C0C360::FindInRadius(cIntArray* Out, const Struct_10C05A80* Center, float Radius)
{
    float RadiusSq = Radius * Radius;
    for (int i = 0; i < m_Count; i++)
    {
        Class_10C0C360_Unknown0C* Item = (Class_10C0C360_Unknown0C*)m_Items[i];
        Struct_10C05A80 Pos = Item->Unknown38;
        if (DistanceSquared3D(&Pos, Center) < RadiusSq)
        {
            int* Slot = m_Items + i;
            int Index = Out->Count;
            Out->SetCount(Index + 1);
            Out->Data[Index] = *Slot;
        }
    }
}
