// Game/Unsorted_10BB0C90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410.h"
#include "Game/Class_10E8C7E8.h"
#include "Game/Struct_10BB0B90.h"

struct Struct_10BB0B90_Unknown118
{
    char Unknown00[8];
    Class_10B9E410* Unknown08;
};

Struct_10BB0B90* FUN_10bb0b90(int A);

// FUNCTION: 0x10BB0C90 ?FUN_10bb0c90@Class_10E8C7E8@@UAEHHHH@Z
int Class_10E8C7E8::FUN_10bb0c90(int A, int B, int C)
{
    Struct_10BB0B90* Owner = FUN_10bb0b90(B);
    if (!Owner)
        return 0;
    Struct_10BB0B90_Unknown118* Info = Owner->Unknown118;
    if (!Info)
        return 0;
    Class_10B9E410* Obj = Info->Unknown08;
    if (!Obj)
        return 0;
    Obj->FUN_10b9eee0();
    return 1;
}
