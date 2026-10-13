// Game/Unsorted_10A84E60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A873D0.h"
#include "Game/Class_10E6C390.h"

struct Struct_10A85890
{
    char Unknown00[0x14];
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10A84E90 ?FUN_10a84e90@Class_10E6C390@@QAEXXZ
void Class_10E6C390::FUN_10a84e90()
{
    Unknown30 = -1;
    if (Unknown14)
        Unknown14 = false;
}

// FUNCTION: 0x10A85890 ?FUN_10a85890@Class_10E6C390@@QAEXPAUStruct_10A85890@@@Z
void Class_10E6C390::FUN_10a85890(Struct_10A85890* Ar)
{
    if (Ar->Unknown14)
        FUN_10a852e0(Ar);
    else if (Ar->Unknown18)
        FUN_10a85110(Ar);
}
