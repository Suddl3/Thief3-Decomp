// Game/Unsorted_10B24D70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B16930.h"
#include "Game/Class_10B25200.h"
#include "Game/Struct_10B25010.h"
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10B25010_Member.h"

Class_10B1B8A0* FUN_10b1b600();

class Class_10B255F0
{
public:
    int GetEntryValue();

    char Unknown00[0x2C];
    int m_EntryIndex;
};

// FUNCTION: 0x10B25010 ?GetEntryValue@Class_10B255F0@@QAEHXZ
int Class_10B255F0::GetEntryValue()
{
    int Index = m_EntryIndex;
    if (Index == 0)
        return 0;
    return FUN_10b1b600()->Unknown1C.Get(Index);
}
