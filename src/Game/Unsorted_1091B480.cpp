// Game/Unsorted_1091B480.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1091B3F0.h"

struct Item_1091B3F0
{
    Class_109081E0 Unknown00;
    Class_109081E0 Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x1091B560 ?FUN_1091b560@Class_1091B3F0@@QAEXABV1@@Z
void Class_1091B3F0::FUN_1091b560(const Class_1091B3F0& Other)
{
    FUN_1091af10(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}
