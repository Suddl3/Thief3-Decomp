// Game/Unsorted_10C06790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cCharArray.h"

// FUNCTION: 0x10C06790 ?InitGrid8x8@@YAXPAVcCharArray@@@Z
void InitGrid8x8(cCharArray* Array)
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
