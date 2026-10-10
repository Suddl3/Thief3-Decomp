// Game/Unsorted_10AC8670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC8770.h"

extern float DAT_10e4dd84;

int FUN_10af3a20();

// FUNCTION: 0x10AC8770 ?FUN_10ac8770@Class_10AC8770@@QAEXHHMH@Z
void Class_10AC8770::FUN_10ac8770(int A, int B, float C, int D)
{
    float Jitter = (FUN_10af3a20() % 5) * 0.01f;
    FUN_10ac8690(A, B, Jitter + Jitter - DAT_10e4dd84 + C, D);
}
