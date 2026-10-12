// Game/Unsorted_10B33260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B33260.h"

bool FUN_1090f010(const int* A, const int* B);

struct Struct_10B33260
{
    int Unknown00;
    int Unknown04;
    char Unknown08[8];
};

// FUNCTION: 0x10B33260 ?HasEntry@Class_10B33260@@QAE_NHPAH@Z
bool Class_10B33260::HasEntry(int A, int* B)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (m_Entries[i].Unknown00 == A)
        {
            if (FUN_1090f010(&m_Entries[i].Unknown04, B))
                return true;
        }
    }
    return false;
}
