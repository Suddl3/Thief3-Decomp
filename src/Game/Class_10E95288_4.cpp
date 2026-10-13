// Game/Class_10E95288_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C28F00.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BB8D60.h"

bool FUN_10c00680(void* A);

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10E95288
{
public:
    virtual void Virtual0();

    void FUN_10bdf280(int A);
    void FUN_109e3c90(int A);

    Class_10BB8D60* Unknown04;
    char Unknown08[8];
    int Unknown10;
};

// FUNCTION: 0x10BDF280 ?FUN_10bdf280@Class_10E95288@@QAEXH@Z
void Class_10E95288::FUN_10bdf280(int A)
{
    if (FUN_10c00680(Unknown04->Unknown08->FUN_10c7d570()))
    {
        if (Unknown10 == 0xb || Unknown10 == 0xd || Unknown10 == 0xe || Unknown10 == 0xc)
            Unknown04->Reset();
        if (Unknown04->Unknown0C)
            Unknown04->Unknown0C->FUN_10bf7f90(0, 1);
        if (Unknown04->Unknown10)
            Unknown04->Unknown10->Reset();
        FUN_109e3c90(1);
    }
}
