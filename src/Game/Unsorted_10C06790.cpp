// Game/Unsorted_10C06790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9FBE0.h"

// FUNCTION: 0x10C06790 ?InitGrid8x8@@YAXPAVClass_10B9FBE0@@@Z
void InitGrid8x8(Class_10B9FBE0* Array)
{
    if (Array->m_Count == 0)
    {
        for (int Row = 0; Row < 8; Row++)
        {
            for (int Column = 0; Column < 8; Column++)
            {
                int Index = Array->m_Count;
                Array->Resize(Index + 1);
                Array->m_Data[Index] = 0;
            }
        }
    }
}
