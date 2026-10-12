// Game/Unsorted_10B83850_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Struct_10B82770_Param.h"

struct __declspec(align(16)) Struct_10B7C800
{
    Struct_10B7C800() {}

    float X, Y, Z, W;
};

Struct_10B7C800 FUN_10b7c800(const FVector& V);

class Class_10943600;

class Class_10B83DC0
{
public:
    int FUN_10b83dc0(Class_10943600* Out);
    void FUN_10b82770(Struct_10B82770_Param* P);
};

class Class_10B83E50 : public Class_10B83DC0
{
public:
    char Unknown00[0xAC];
    FVector Unknown0AC;
    float m_Scale;
    char Unknown0BC[4];
    int m_Axis;
};

class Class_10B83820
{
public:
    char m_Buffer[4];
    int m_Count;
};

extern float DAT_11006e30;

int FUN_10dae490(float A, float B, float C, float D, int E, int F, Class_10B83820* G);

// FUNCTION: 0x10B83B60 ?FUN_10b83b60@@YAHPAVClass_10B83E50@@PAVClass_10B83820@@@Z
int FUN_10b83b60(Class_10B83E50* Self, Class_10B83820* Out)
{
    Struct_10B82770_Param P;
    Self->FUN_10b82770(&P);
    float Scale = DAT_11006e30 * Self->m_Scale;
    Out->m_Count = 0;
    Struct_10B7C800 L = FUN_10b7c800(Self->Unknown0AC);
    return FUN_10dae490((&L.X)[(int)(float)Self->m_Axis] + (&L.X)[(int)(float)Self->m_Axis] - P.Unknown50, L.X, Scale, L.X * 0.25f, 2, 0x20, Out);
}
