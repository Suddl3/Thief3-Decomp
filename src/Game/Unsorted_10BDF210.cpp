// Game/Unsorted_10BDF210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E3C90.h"
#include "Game/Class_10BB85B0.h"

class Class_10D660B0 : public Class_109E3C90
{
public:
    void FUN_10d660b0();
};

class Class_10E95050 : public Class_10D660B0
{
public:
    virtual void FUN_10bdf2f0();

    Class_10BB85B0* Unknown04;
};

// FUNCTION: 0x10BDF2F0 ?FUN_10bdf2f0@Class_10E95050@@UAEXXZ
void Class_10E95050::FUN_10bdf2f0()
{
    Unknown04->FUN_10bb85b0(0);
    FUN_10d660b0();
    FUN_109e3c90(0);
}
