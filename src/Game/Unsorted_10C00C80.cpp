// Game/Unsorted_10C00C80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C00F30.h"
#include "Game/cHashMap.h"
#include "Game/Class_10C00F60_Field18.h"
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C01140.h"
#include "Game/Class_10C01140_Field18.h"
#include "Game/Class_10C01140_Node.h"

struct Struct_10C00F30
{
    char Unknown00[0xC];
    int Unknown0C;
};

// FUNCTION: 0x10C00F30 ?ClearMatching@Class_10C00F30@@QAEXH@Z
void Class_10C00F30::ClearMatching(int A)
{
    for (int i = 0; i < m_Count; i++)
    {
        Struct_10C00F30* Entry = m_Entries[i];
        if (Entry->Unknown0C == A)
            Entry->Unknown0C = 0;
    }
}
