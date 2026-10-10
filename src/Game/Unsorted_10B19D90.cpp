// Game/Unsorted_10B19D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10ABDAE0.h"

class Class_10B1A7D0Item
{
public:
    int Unknown00;
    int Unknown04;
    Class_109081E0 Unknown08;
};

// FUNCTION: 0x10B1A7D0 ?FUN_10b1a7d0@Class_10ABDAE0@@QAEXHABVClass_10B1A7D0Item@@@Z
void Class_10ABDAE0::FUN_10b1a7d0(int Index, const Class_10B1A7D0Item& Value)
{
    int Count = Unknown00;
    if (Index == Count)
    {
        FUN_10abdae0(Count + 1);
        Unknown08[Count] = Value;
    }
    else
    {
        FUN_10abdae0(Count + 1);
        FUN_10b199f0(Index, Index + 1, Unknown00 - Index - 1);
        Unknown08[Index] = Value;
    }
}
