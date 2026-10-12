// Game/Unsorted_10B22BD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B22D60.h"
#include "Game/Class_10B22D60_Unknown90.h"

// FUNCTION: 0x10B22BD0 ?FUN_10b22bd0@Class_10B22D60@@QAEXH@Z
void Class_10B22D60::FUN_10b22bd0(int A)
{
    int Value = Unknown90->Virtual8(A);
    if (Value != Unknown90->Virtual4())
        SetSlot((void**)&Unknown90, Value);
}
