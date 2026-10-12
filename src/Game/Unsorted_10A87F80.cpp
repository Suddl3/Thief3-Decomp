// Game/Unsorted_10A87F80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Core/Core.h"
#include "Game/Class_10A88910.h"
#include "Game/Class_10A88970.h"
#include "Game/Class_10A88D00.h"

extern float DAT_10e49684;

// FUNCTION: 0x10A88910 ?FUN_10a88910@Class_10A88910@@QAEXHH@Z
void Class_10A88910::FUN_10a88910(int Id, int Mode)
{
    float Value = 0;
    if (Virtual4(Id, &Value))
    {
        Unknown04[Id] = Value;
        return;
    }
    if (Mode == 1)
    {
        Unknown04[Id] = 1.0f;
        return;
    }
    if (Mode == 3)
        Unknown04[Id] = 0.0f;
}

// FUNCTION: 0x10A88970 ?FUN_10a88970@Class_10A88970@@QAEXHH@Z
void Class_10A88970::FUN_10a88970(int Index, int Mode)
{
    float Value = 0.0f;
    if (this->Virtual4(Index, &Value))
    {
        Unknown400[Index] = Value;
        return;
    }
    if (Mode == 1)
    {
        Unknown400[Index] = 1.0f;
        return;
    }
    if (Mode == 3)
        Unknown400[Index] = 0.0f;
}

// FUNCTION: 0x10A889E0 ?ClampedLength2D@Class_10A88D00@@QAEMMM@Z
float Class_10A88D00::ClampedLength2D(float A, float B)
{
    FVector V;
    FVector Absolute(fabs(A), fabs(B), 0.0f);
    V = Absolute;
    V.Normalize();
    float R = Absolute.Y * V.Y;
    R += Absolute.X * V.X;
    return (R > DAT_10e49684) ? DAT_10e49684 : R;
}
