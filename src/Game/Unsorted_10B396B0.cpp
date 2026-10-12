// Game/Unsorted_10B396B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B396B0.h"
#include "Game/Class_10B396E0.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_Field04.h"

Class_10B3A460* GetEntries();

// FUNCTION: 0x10B396B0 ?ResetHandler@Class_10B396B0@@QAEXH@Z
void Class_10B396B0::ResetHandler(int A)
{
    int Index = GetEntries()->GetEntry(A)->m_Index;
    m_Handlers[Index]->Reset();
}

// FUNCTION: 0x10B396E0 ?ResetAll@Class_10B396E0@@QAEXXZ
void Class_10B396E0::ResetAll()
{
    for (int i = 0; i < 8; i++)
        m_Handlers[i]->Reset();
}
