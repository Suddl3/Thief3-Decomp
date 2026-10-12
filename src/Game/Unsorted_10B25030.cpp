// Game/Unsorted_10B25030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B251A0.h"
#include "Game/Class_10B251B0.h"
#include "Game/Struct_10B25010.h"
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10B25010_Member.h"

Class_10B1B8A0* FUN_10b1b600();

class Class_10B255F0
{
public:
    int FUN_10b25030();

    char Unknown00[0x2C];
    int m_EntryIndex;
};

// FUNCTION: 0x10B25030 ?FUN_10b25030@Class_10B255F0@@QAEHXZ
int Class_10B255F0::FUN_10b25030()
{
    if (m_EntryIndex == 0)
        return 0;
    int Result = 0;
    if (FUN_10b1b600()->Unknown1C[m_EntryIndex].Unknown00)
        Result = FUN_10b1b600()->Unknown1C[m_EntryIndex].Unknown00;
    return Result;
}

// FUNCTION: 0x10B251A0 ?FUN_10b251a0@Class_10B251A0@@QAEXXZ
void Class_10B251A0::FUN_10b251a0()
{
    Unknown2C = FUN_10b25080();
}

// FUNCTION: 0x10B251B0 ?FUN_10b251b0@Class_10B251B0@@QAEXXZ
void Class_10B251B0::FUN_10b251b0()
{
    Unknown2C = FUN_10b25100();
}
