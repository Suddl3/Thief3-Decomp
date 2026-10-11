// Game/Unsorted_10B83850_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct __declspec(align(16)) Struct_10B7C800
{
    Struct_10B7C800() {}

    float X, Y, Z, W;
};

Struct_10B7C800 FUN_10b7c800(const FVector& V);

struct Struct_10B82770_Param
{
    Struct_10B82770_Param()
        : Unknown00(0.0f), Unknown04(0.0f), Unknown08(0.0f), Unknown0C(0.0f), Unknown10(0.0f), Unknown14(0.0f),
          Unknown18(0.0f), Unknown1C(0.0f), Unknown20(1.0f), Unknown24(0.0f), Unknown30(0.0f), Unknown34(1.0f),
          Unknown38(0.0f), Unknown3C(0.0f), Unknown40(0.0f), Unknown44(0.0f), Unknown48(0.0f), Unknown4C(0.05f),
          Unknown50(1.0f), Unknown54(true)
    {
    }

    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
    float Unknown1C;
    float Unknown20;
    float Unknown24;
    char Pad28[8];
    float Unknown30;
    float Unknown34;
    float Unknown38;
    float Unknown3C;
    float Unknown40;
    float Unknown44;
    float Unknown48;
    float Unknown4C;
    float Unknown50;
    bool Unknown54;
    char Pad55[0xB];
};

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
    float Unknown0B8;
    char Unknown0BC[4];
    int Unknown0C0;
};

class Class_10B83820
{
public:
    char Unknown00[4];
    int Unknown04;
};

extern float DAT_11006e30;

int FUN_10dae490(float A, float B, float C, float D, int E, int F, Class_10B83820* G);

// FUNCTION: 0x10B83B60 ?FUN_10b83b60@@YAHPAVClass_10B83E50@@PAVClass_10B83820@@@Z
int FUN_10b83b60(Class_10B83E50* Self, Class_10B83820* Out)
{
    Struct_10B82770_Param P;
    Self->FUN_10b82770(&P);
    float Scale = DAT_11006e30 * Self->Unknown0B8;
    Out->Unknown04 = 0;
    Struct_10B7C800 L = FUN_10b7c800(Self->Unknown0AC);
    return FUN_10dae490((&L.X)[(int)(float)Self->Unknown0C0] + (&L.X)[(int)(float)Self->Unknown0C0] - P.Unknown50, L.X, Scale, L.X * 0.25f, 2, 0x20, Out);
}
