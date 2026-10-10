// Game/Unsorted_10B10AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10B10B30.h"

Class_10A73EF0_Table* FUN_10af3470();

// FUNCTION: 0x10B10B30 ?FUN_10b10b30@Class_10B10B30@@QAEXG@Z
void Class_10B10B30::FUN_10b10b30(unsigned short Value)
{
    if (Value == 0)
    {
        Unknown02 = Value;
        return;
    }
    Class_10A73EF0_Object* Obj = FUN_10af3470()->FUN_10af33e0(Value);
    if (Obj->Unknown38 * Obj->Unknown34 <= 4)
        Value |= 0x8000;
    else
        Value &= 0x7fff;
    Unknown02 = Value;
}
