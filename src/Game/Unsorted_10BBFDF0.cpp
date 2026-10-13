// Game/Unsorted_10BBFDF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF3AA0.h"
#include "Game/Class_10BBFE70.h"

extern const char DAT_10e90bd4[];

extern const char DAT_10e90bc4[];

int FUN_10af3d90(int A);

void FUN_10bbfdf0(char* A, int B, int C);

// FUNCTION: 0x10BBFE70 ?FUN_10bbfe70@Class_10BBFE70@@QAEXHH@Z
void Class_10BBFE70::FUN_10bbfe70(int A, int B)
{
    int Value = FUN_10af3d90(A);
    ((Class_10AF3AA0*)B)->FUN_10af3aa0(DAT_10e90bd4, Value);
    FUN_10bbfdf0(Unknown00, A + 3, B);
    FUN_10bbfdf0(Unknown00 + 0xc, A + 3, B);
    FUN_10bbfdf0(Unknown00 + 0x18, A + 3, B);
    FUN_10bbfdf0(Unknown00 + 0x24, A + 3, B);
    Value = FUN_10af3d90(A);
    ((Class_10AF3AA0*)B)->FUN_10af3aa0(DAT_10e90bc4, Value);
}
