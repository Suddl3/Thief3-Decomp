// Game/Unsorted_10C09F50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0A6B0.h"
#include "Game/Struct_10C0A6B0.h"

// FUNCTION: 0x10C0A6B0 ?RemoveItem@Class_10C0A6B0@@QAEXPAUStruct_10C0A6B0@@H@Z
void Class_10C0A6B0::RemoveItem(Struct_10C0A6B0* A, int Item)
{
    for (int i = A->Unknown08 - 1; i >= 0; i--)
    {
        if (A->Unknown10[i] == Item)
        {
            FUN_10c0a0b0(A, i);
            return;
        }
    }
}
