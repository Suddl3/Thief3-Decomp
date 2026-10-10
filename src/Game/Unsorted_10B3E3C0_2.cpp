// Game/Unsorted_10B3E3C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Class_10B39530.h"
#include "Game/Class_10B3E5C0.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Class_10B3E7A0 : public Class_10AA82D0
{
public:
    void FUN_10b3e7a0(int A);

    char Unknown10[0x2C];
    int Unknown3C;
    int Unknown40;
};

// FUNCTION: 0x10B3E5C0 ?FUN_10b3e5c0@Class_10B3E5C0@@QAE_NH@Z
bool Class_10B3E5C0::FUN_10b3e5c0(int A)
{
    float X = Unknown28 - Unknown1C;
    float Y = Unknown2C - Unknown20;
    float Z = Unknown30 - Unknown24;
    float Dist = sqrtf(Z * Z + Y * Y + X * X);
    if (!Unknown4E)
        return Dist <= 0.2f;
    return Dist <= 0.4f;
}

// FUNCTION: 0x10B3E7A0 ?FUN_10b3e7a0@Class_10B3E7A0@@QAEXH@Z
void Class_10B3E7A0::FUN_10b3e7a0(int A)
{
    if (Unknown40)
    {
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xbc, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown40 = 0;
    }
    if (Unknown3C)
    {
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xbd, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown3C = 0;
    }
}
