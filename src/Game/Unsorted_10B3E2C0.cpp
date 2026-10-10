// Game/Unsorted_10B3E2C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39530.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Class_10B3E2C0 : public Class_10AA82D0
{
public:
    void FUN_10b3e2c0(int A);

    char Unknown10[0x2C];
    int Unknown3C;
    int Unknown40;
};

// FUNCTION: 0x10B3E2C0 ?FUN_10b3e2c0@Class_10B3E2C0@@QAEXH@Z
void Class_10B3E2C0::FUN_10b3e2c0(int A)
{
    if (Unknown3C != 2)
    {
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xbb, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown3C = 2;
    }
    if (Unknown40 != 2)
    {
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xba, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown40 = 2;
    }
}
