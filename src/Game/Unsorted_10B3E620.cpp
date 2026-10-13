// Game/Unsorted_10B3E620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B39610.h"
#include <math.h>
#include <stdlib.h>

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

extern float DAT_10eafbdc;

extern double DAT_10e7ecf8;

// FUNCTION: 0x10B3E620 ?FUN_10b3e620@@YGHPAM@Z
int __stdcall FUN_10b3e620(float* P)
{
    float Dist = sqrtf(P[2] * P[2] + P[1] * P[1] + P[0] * P[0]);
    if (DAT_10eafbdc == Dist)
        return 4;
    int Angle = (int)(atan2(P[1], P[0]) * DAT_10e7ecf8);
    if (Angle >= 45 && Angle <= 135)
        return 0;
    if (Angle <= -45 && Angle >= -135)
        return 1;
    return 2 + (abs(Angle) < 90);
}

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
