// Game/Unsorted_10A32AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cRefArray.h"
#include "Game/Class_10A32AB0_Element.h"

// FUNCTION: 0x10A32AB0 ?Append@cRefArray@@QAEHPAPAVClass_10A32AB0_Element@@@Z
int cRefArray::Append(Class_10A32AB0_Element** A)
{
    int Index = m_Count;
    SetCount(Index + 1);
    Class_10A32AB0_Element* Old = m_Elements[Index];
    Class_10A32AB0_Element* New = *A;
    m_Elements[Index] = New;
    if (New)
        New->Virtual1();
    if (Old)
        Old->Virtual2();
    return Index;
}
