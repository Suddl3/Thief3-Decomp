// Game/Unsorted_10C63EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C63EE0.h"
#include "Game/Class_10C64AC0.h"
#include "Game/Elem_10C64AC0.h"

struct Struct_10C63EE0_Field08
{
    char Unknown00[0x40];
    int Unknown40;
};

// FUNCTION: 0x10C63EE0 ?FUN_10c63ee0@Class_10C63EE0@@QAEHXZ
int Class_10C63EE0::FUN_10c63ee0()
{
    return Unknown08->Unknown40;
}

// FUNCTION: 0x10C64AC0 ?FUN_10c64ac0@Class_10C64AC0@@QAEPAUElem_10C64AC0@@H@Z
Elem_10C64AC0* Class_10C64AC0::FUN_10c64ac0(int Index)
{
    return &Unknown1C[Index];
}
