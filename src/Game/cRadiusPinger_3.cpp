// Game/cRadiusPinger_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/cActorManager.h"
#include "Game/cRadiusPinger.h"

class AActor;

class Object_10A73870_B;

class Object_10A73870_C;

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10A738C0 ?FUN_10a738c0@cRadiusPinger@@UAEMHMM@Z
float cRadiusPinger::FUN_10a738c0(int A, float B, float C)
{
    float V = DAT_10eafbdc;
    switch (A)
    {
    case 0:
        return DAT_10e49684 - B / C;
    case 1:
    {
        float T = DAT_10e49684 - (DAT_10e49684 / C) * B;
        return T * T;
    }
    case 3:
        return sqrtf(DAT_10e49684 - B / C);
    case 2:
    case 4:
        if (B > C)
            return DAT_10eafbdc;
        V = DAT_10e49684;
        break;
    }
    return V;
}
