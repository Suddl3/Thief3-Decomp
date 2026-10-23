// Game/Class_10BBDB40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10BBDC30.h"

class Class_10BBDB40
{
public:
    bool FUN_10bbd870(int A, float* B);
    float GetFloat(int A);
    float FUN_10bbdc80(int A);

    char Unknown00[8];
    Class_1098E330* Unknown08;
    char Unknown0C[4];
    Class_1098E330* Unknown10;
};

// FUNCTION: 0x10BBDB40 ?GetFloat@Class_10BBDB40@@QAEMH@Z
float Class_10BBDB40::GetFloat(int A)
{
    float Result = 0.0f;
    if (FUN_10bbd870(A, &Result) != true)
        Unknown08->GetPropertyValue(A, (int*)&Result);
    return Result;
}

// FUNCTION: 0x10BBDC80 ?FUN_10bbdc80@Class_10BBDB40@@QAEMH@Z
float Class_10BBDB40::FUN_10bbdc80(int A)
{
    float Result = 0.0f;
    if (FUN_10bbd870(A, &Result) != true)
        Unknown10->GetPropertyValue(A, (int*)&Result);
    return Result;
}
