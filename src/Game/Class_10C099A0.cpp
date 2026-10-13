// Game/Class_10C099A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C099A0.h"
#include "Game/Struct_10C099A0.h"
#include "Game/Struct_10C09A10.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1098E330.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C09B60.h"

// FUNCTION: 0x10C099A0 ?FUN_10c099a0@Class_10C099A0@@QAEHH@Z
int Class_10C099A0::FUN_10c099a0(int Value)
{
    for (int i = 0; i < Unknown04; i++)
    {
        Struct_10C099A0* Item = &Unknown0C[i];
        if (Item->Unknown00 == Value)
            return Item->Unknown04;
    }
    return 0;
}

// FUNCTION: 0x10C09F10 ?FUN_10c09f10@Class_10C099A0@@QAE_NHH@Z
bool Class_10C099A0::FUN_10c09f10(int Key, int B)
{
    int Value = FindValue(Key);
    if (Value)
        return FUN_10c09c30(Value, B);
    return false;
}
