// Game/Unsorted_10A89BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10A89D90.h"

Class_10A73EF0_Table* FUN_10af3470();

// FUNCTION: 0x10A89D90 ?FUN_10a89d90@Class_10A89D90@@QAEPAVClass_10A73EF0_Object@@XZ
Class_10A73EF0_Object* Class_10A89D90::FUN_10a89d90()
{
    if (Unknown0C.IsEmpty())
    {
        if (Virtual9() && Unknown04)
            return FUN_10af3470()->FUN_10af33e0(Unknown08);
        return 0;
    }
    Class_10A73EF0_Object* V;
    if (Virtual9() && Unknown04)
        V = FUN_10af3470()->FUN_10af33e0(Unknown08);
    else
        V = 0;
    return FUN_10a89bc0(Unknown0C, V);
}
