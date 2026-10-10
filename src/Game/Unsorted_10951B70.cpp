// Game/Unsorted_10951B70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10951B70.h"

class Object_10951B70_A
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Object_10951B70_B
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

// FUNCTION: 0x10951B70 ?FUN_10951b70@Class_10951B70@@QAEXH@Z
void Class_10951B70::FUN_10951b70(int A)
{
    Object_10951B70_A* Pending = Unknown17C;
    Unknown0F4 = 0;
    Unknown0F0 = A;
    if (Pending)
    {
        Pending->Virtual1();
        Unknown17C = 0;
    }
    if (Unknown180)
    {
        Unknown180->Virtual1();
        Unknown180 = 0;
    }
    if (Unknown178)
    {
        Unknown178->Virtual2();
        Unknown178 = 0;
    }
}
