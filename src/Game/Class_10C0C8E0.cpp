// Game/Class_10C0C8E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C0C8E0.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Class_10C0C360.h"
#include "Core/Core.h"
#include "Game/cEntryTable.h"
#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"
#include "Game/Struct_10C0BFC0.h"

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

struct Struct_10C0C8E0
{
    char Unknown00[0x2C];
    int Unknown2C;
    int Unknown30;
};

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

// FUNCTION: 0x10C0C8E0 ?FUN_10c0c8e0@Class_10C0C8E0@@QAEXPBUStruct_10C0C8E0@@@Z
void Class_10C0C8E0::FUN_10c0c8e0(const Struct_10C0C8E0* In)
{
    FUN_10c0c200(In->Unknown30, In->Unknown2C);
}
