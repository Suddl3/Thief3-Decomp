// Game/Unsorted_109178E8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091E3E0.h"
#include "Game/Class_10953730.h"
#include "Game/Class_1091E400.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10917900 ?FUN_10917900@Class_1091E400@@QAE_NHH@Z
bool Class_1091E400::FUN_10917900(int A, int B)
{
    float* Negative = (float*)B;
    float* Positive = (float*)A;
    int i = 0;
    float* Plane = &Unknown1A0[0][1];
    for (; i < 6; i++, Plane += 4)
    {
        float X0 = Plane[-1] > DAT_10eafbdc ? Positive[0] : Negative[0];
        float X1 = Plane[0] > DAT_10eafbdc ? Positive[1] : Negative[1];
        float X2 = Plane[1] > DAT_10eafbdc ? Positive[2] : Negative[2];
        float Dot = X2 * Plane[1];
        Dot += X1 * Plane[0];
        Dot += X0 * Plane[-1];
        Dot += Plane[2];
        if (Dot > DAT_10eafbdc)
            return false;
    }
    return true;
}
