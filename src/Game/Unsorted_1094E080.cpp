// Game/Unsorted_1094E080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E4AB88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual FVector FUN_1094e080();

    char Unknown04[0x130];
    FVector Unknown134;
    FVector Unknown140;
};

// FUNCTION: 0x1094E080 ?FUN_1094e080@Class_10E4AB88@@UAE?AVFVector@@XZ
FVector Class_10E4AB88::FUN_1094e080()
{
    FVector Mid = (Unknown140 + Unknown134) * 0.5f;
    return Mid;
}
