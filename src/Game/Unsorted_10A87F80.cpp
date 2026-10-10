// Game/Unsorted_10A87F80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Core/Core.h"

class Class_10A88910
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool Virtual4(int Id, float* Out);
    void FUN_10a88910(int Id, int Mode);

    float Unknown04[0x20];
};

class Class_10A88970
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool Virtual4(int Index, float* Out);

    void FUN_10a88970(int Index, int Mode);

    char Unknown04[0x3FC];
    float Unknown400[1];
};

extern float DAT_10e49684;

class Class_10A88D00
{
public:
    float FUN_10a889e0(float A, float B);
};

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

// FUNCTION: 0x10A889E0 ?FUN_10a889e0@Class_10A88D00@@QAEMMM@Z
float Class_10A88D00::FUN_10a889e0(float A, float B)
{
    FVector V;
    FVector Absolute(fabs(A), fabs(B), 0.0f);
    V = Absolute;
    V.Normalize();
    float R = Absolute.Y * V.Y;
    R += Absolute.X * V.X;
    return (R > DAT_10e49684) ? DAT_10e49684 : R;
}
