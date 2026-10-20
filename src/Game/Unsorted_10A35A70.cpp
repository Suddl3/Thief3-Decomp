// Game/Unsorted_10A35A70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A359D0.h"

// FUNCTION: 0x10A35E50 ?FUN_10a35e50@Class_10A359D0@@QAEXH@Z
void Class_10A359D0::FUN_10a35e50(int A)
{
    *(int*)&Unknown88 = A;
    int Value = FUN_10a358b0();
    if (Value > Unknown3C || Unknown34 == 0)
        Unknown3C = Value;
    *(int*)&Unknown84 = A;
    Value = FUN_10a358b0();
    if (Value > Unknown38 || Unknown2C == Unknown1C)
        Unknown38 = Value;
}
