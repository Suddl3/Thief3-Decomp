// Game/Unsorted_10AB86F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB86F0.h"

struct Struct_10AB86F0
{
    int Unknown00;
    int Unknown04;
    char Unknown08[0x28];
};

// FUNCTION: 0x10AB86F0 ?FindValue@Class_10AB86F0@@QAEHH@Z
int Class_10AB86F0::FindValue(int A)
{
    int Index = -1;
    for (int i = 0; i < m_Count; i++)
    {
        if (A == m_Entries[i].Unknown00)
        {
            Index = i;
            break;
        }
    }
    if (Index >= 0)
        return m_Entries[Index].Unknown04;
    return 0;
}
