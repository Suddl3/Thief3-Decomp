// Game/Unsorted_10B39610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39610.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B46F50.h"

Class_10B3A460* GetEntries();

// FUNCTION: 0x10B39610 ?FUN_10b39610@Class_10B39610@@QAEXMH@Z
void Class_10B39610::FUN_10b39610(float A, int B)
{
    if (B == 0x101)
    {
        for (int i = 0; i < 8; i++)
            m_Handlers[i]->FUN_10b46f50(A);
        return;
    }
    int Index = GetEntries()->GetEntry(B)->m_Index;
    m_Handlers[Index]->FUN_10b46f50(A);
}
