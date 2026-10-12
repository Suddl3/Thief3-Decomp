// Game/Unsorted_10941C70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109418E0.h"
#include "Game/Class_10941C40.h"

// FUNCTION: 0x10941C70 ?FUN_10941c70@Class_10941C40@@QAEXPAXHHH@Z
void Class_10941C40::FUN_10941c70(void* A, int B, int C, int D)
{
    m_Value = B;
    if (m_Item == 0)
        FUN_10941b10(0);
    int Value = m_Value;
    Class_109418E0* Item = m_Item;
    Item->Unknown06 = 0;
    Item->Unknown38 = Value;
    Item->FUN_109418e0(A, C, D);
}
