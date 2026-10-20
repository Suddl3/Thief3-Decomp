// Game/Unsorted_10C5CB90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A66DF0.h"
#include "Game/Class_10C63F20.h"

class Class_10E9C838
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool FUN_10c5cb90();

    char Unknown04[4];
    int Unknown08;
    Class_10A66DF0* Unknown0C;
};

class Class_10E9C848
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool FUN_10c5cba0();

    char Unknown04[4];
    int Unknown08;
    Class_10C63F20* Unknown0C;
};

// FUNCTION: 0x10C5CB90 ?FUN_10c5cb90@Class_10E9C838@@UAE_NXZ
bool Class_10E9C838::FUN_10c5cb90()
{
    Class_10A66DF0* p = Unknown0C;
    return p->Close(Unknown08);
}

// FUNCTION: 0x10C5CBA0 ?FUN_10c5cba0@Class_10E9C848@@UAE_NXZ
bool Class_10E9C848::FUN_10c5cba0()
{
    Class_10C63F20* p = Unknown0C;
    return p->FUN_10c63f20(Unknown08);
}
