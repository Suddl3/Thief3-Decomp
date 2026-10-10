// Game/Unsorted_10951E10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E4AC78
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual float FUN_10951e10();

    char Unknown04[0xF4];
    FVector Unknown0F8;
    FVector Unknown104;
};

// FUNCTION: 0x10951E10 ?FUN_10951e10@Class_10E4AC78@@UAEMXZ
float Class_10E4AC78::FUN_10951e10()
{
    FVector Extent = Unknown104 - Unknown0F8;
    float Max = Extent.X;
    if (Max < Extent.Y)
    {
        Max = Extent.Y;
    }
    if (Max < Extent.Z)
    {
        Max = Extent.Z;
    }
    return (Max + Max) * 1.727;
}
