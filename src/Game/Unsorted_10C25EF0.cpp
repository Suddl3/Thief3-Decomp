// Game/Unsorted_10C25EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cCharArray.h"

int FUN_10b0fdb0();

// FUNCTION: 0x10C25EF0 ?InitGrid@@YAXPAVcCharArray@@@Z
void InitGrid(cCharArray* Array)
{
    if (Array->m_Count == 0)
    {
        for (int Row = 0; Row < FUN_10b0fdb0(); Row++)
        {
            for (int Column = 0; Column < FUN_10b0fdb0(); Column++)
            {
                int Index = Array->m_Count;
                Array->Resize(Index + 1);
                Array->m_Data[Index] = 0;
            }
        }
    }
}
