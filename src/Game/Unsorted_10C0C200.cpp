// Game/Unsorted_10C0C200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0C8E0.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Class_10C0C360.h"

double GetTimeSeconds();

class Class_10C0C8E0_Unknown0C
{
public:
    char Unknown00[0x2C];
    int Unknown2C;
    int Unknown30;
    char Unknown34[0x28];
    float Unknown5C;
};

float FUN_10c05a80(const Struct_10C05A80* A, const Struct_10C05A80* B);

class Class_10C0C360_Unknown0C
{
public:
    char Unknown00[0x38];
    Struct_10C05A80 Unknown38;
};

// FUNCTION: 0x10C0C360 ?FUN_10c0c360@Class_10C0C360@@QAEXPAVcIntArray@@PBUStruct_10C05A80@@M@Z
void Class_10C0C360::FUN_10c0c360(cIntArray* Out, const Struct_10C05A80* Center, float Radius)
{
    float RadiusSq = Radius * Radius;
    for (int i = 0; i < Unknown04; i++)
    {
        Class_10C0C360_Unknown0C* Item = (Class_10C0C360_Unknown0C*)Unknown0C[i];
        Struct_10C05A80 Pos = Item->Unknown38;
        if (FUN_10c05a80(&Pos, Center) < RadiusSq)
        {
            int* Slot = Unknown0C + i;
            int Index = Out->Count;
            Out->SetCount(Index + 1);
            Out->Data[Index] = *Slot;
        }
    }
}

// FUNCTION: 0x10C0C410 ?ExpireStale@Class_10C0C8E0@@QAEXXZ
void Class_10C0C8E0::ExpireStale()
{
    for (int i = 0; i < m_Count; i++)
    {
        Class_10C0C8E0_Unknown0C* Item = m_Entries[i];
        float Old = Item->Unknown5C;
        if (GetTimeSeconds() - Old > 60.0)
            FUN_10c0c200(Item->Unknown30, Item->Unknown2C);
    }
}
