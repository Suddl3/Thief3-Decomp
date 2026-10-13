// Game/Unsorted_10B9D3C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8300.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Object_10B9CAC0.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

class Class_10B9CAC0
{
public:
    void FUN_10b9d3c0(int A);

    char Unknown00[0xC];
    Class_10BB8300* Unknown0C;
    int Unknown10;
    char Unknown14[4];
    Object_10B9CAC0** Unknown18;
};

// FUNCTION: 0x10B9D3C0 ?FUN_10b9d3c0@Class_10B9CAC0@@QAEXH@Z
void Class_10B9CAC0::FUN_10b9d3c0(int A)
{
    if (Unknown0C->FUN_10bb8c00())
    {
        cString Name("+combatwitness:ally_fleeing");
        (Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1])->Virtual35(Name, 1);
    }
}
