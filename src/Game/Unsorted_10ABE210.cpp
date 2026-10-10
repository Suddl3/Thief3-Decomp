// Game/Unsorted_10ABE210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10ABDAE0.h"

struct Struct_10ABE210
{
    int Unknown00;
    int Unknown04;
    Class_109081E0 Unknown08;
};

// FUNCTION: 0x10ABE210 ?FUN_10abe210@Class_10ABDAE0@@QAEXABV1@@Z
void Class_10ABDAE0::FUN_10abe210(const Class_10ABDAE0& Other)
{
    FUN_10abdae0(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
