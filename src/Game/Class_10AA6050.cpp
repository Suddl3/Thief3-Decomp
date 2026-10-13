// Game/Class_10AA6050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B0AED0.h"
#include "Game/Class_10E6D8F0.h"
#include "Game/Struct_10AA6050.h"

class Class_10AA6050
{
public:
    Struct_10AA6050* FindEntry(int Value);

    char Unknown00[4];
    int m_Count;
    char Unknown08[4];
    Struct_10AA6050** m_Entries;
};

// FUNCTION: 0x10AA6050 ?FindEntry@Class_10AA6050@@QAEPAUStruct_10AA6050@@H@Z
Struct_10AA6050* Class_10AA6050::FindEntry(int Value)
{
    for (int i = 0; i < m_Count; i++)
    {
        Struct_10AA6050* Entry = m_Entries[i];
        if (Entry->Unknown00 == Value)
            return Entry;
    }
    return 0;
}
