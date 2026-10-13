// Game/Class_10B42340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B42340.h"

struct Struct_10B42300
{
    char Unknown00[0x968];
    int Unknown968;
    int Unknown96C;
};

// FUNCTION: 0x10B42300 ?FUN_10b42300@Class_10B42340@@QAEXHH@Z
void Class_10B42340::FUN_10b42300(int A, int B)
{
    for (int i = 0; i < m_Count; i++)
    {
        Struct_10B42300* Entry = m_Entries[i];
        for (int j = Entry->Unknown968; j != Entry->Unknown96C; j++)
        {
            if (j + 1 == 200)
                j = -1;
        }
    }
}
