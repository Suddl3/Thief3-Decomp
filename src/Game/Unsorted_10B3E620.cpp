// Game/Unsorted_10B3E620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B39610.h"

class Class_10B3E340 : public Class_10AA82D0
{
public:
    void FUN_10b3e340();
    void FUN_10b3e6b0(int A, float B);

    char Unknown28[0x10];
    int Unknown38;
    int Unknown3C;
    int Unknown40;
};

// FUNCTION: 0x10B3E6B0 ?FUN_10b3e6b0@Class_10B3E340@@QAEXHM@Z
void Class_10B3E340::FUN_10b3e6b0(int A, float B)
{
    if (Unknown3C != 1 && Unknown38 != 2)
    {
        ((Class_10B39530*)GetLinkedObject())->Play(0xb9, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown3C = 1;
    }
    if (Unknown40 != 1 && Unknown38 != 3)
    {
        ((Class_10B39530*)GetLinkedObject())->Play(0xb8, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown40 = 1;
    }
    if (Unknown38 == 2)
    {
        if (Unknown3C != 0)
        {
            ((Class_10B39530*)GetLinkedObject())->Play(0xbd, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            Unknown3C = 0;
        }
    }
    else if (Unknown38 == 3)
    {
        FUN_10b3e340();
    }
    ((Class_10B39610*)GetLinkedObject())->FUN_10b39610(B, 0x101);
}
