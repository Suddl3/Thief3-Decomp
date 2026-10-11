// Game/Unsorted_10A32AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A32370.h"
#include "Game/Class_10A32AB0_Element.h"

// FUNCTION: 0x10A32AB0 ?FUN_10a32ab0@Class_10A32370@@QAEHPAPAVClass_10A32AB0_Element@@@Z
int Class_10A32370::FUN_10a32ab0(Class_10A32AB0_Element** A)
{
    int Index = Unknown00;
    FUN_10a32370(Index + 1);
    Class_10A32AB0_Element* Old = Unknown08[Index];
    Class_10A32AB0_Element* New = *A;
    Unknown08[Index] = New;
    if (New)
        New->Virtual1();
    if (Old)
        Old->Virtual2();
    return Index;
}
