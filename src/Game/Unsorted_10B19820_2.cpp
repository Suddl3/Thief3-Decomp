// Game/Unsorted_10B19820_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct Item_10B197E0
{
    FString Unknown00;
    INT Unknown0C;
    INT Unknown10;
    BYTE Unknown14;
    BITFIELD Unknown18 : 1;
};

class Class_10B197E0
{
public:
    void FUN_10b19550(int Count);
    void FUN_10b197e0();
    void FUN_10b19820(const Class_10B197E0& Other);

    int Unknown00;
    int Unknown04;
    Item_10B197E0* Unknown08;
};

// FUNCTION: 0x10B19820 ?FUN_10b19820@Class_10B197E0@@QAEXABV1@@Z
void Class_10B197E0::FUN_10b19820(const Class_10B197E0& Other)
{
    FUN_10b19550(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}
