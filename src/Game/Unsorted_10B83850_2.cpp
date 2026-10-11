// Game/Unsorted_10B83850_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

    char Pad00[0xA0];
    FVector UnknownA0;
    char PadAC[0xC];
    float UnknownB8;
    char PadBC[0x4];
    int UnknownC0;
};

class Allocator_10FFA700
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A, int B, int C);
};

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10B83820
{
public:
    Class_10B83820() : Unknown00(0), Unknown04(0), Unknown08(0), Unknown08Flag(1) {}
    ~Class_10B83820()
    {
        if (!Unknown08Flag)
        {
            Allocator_10FFA700* Allocator = DAT_10ffa700;
            Allocator->Virtual5(Unknown00, Unknown08 * 16, 0x11);
        }
    }

    void* Unknown00;
    int Unknown04;
    unsigned Unknown08 : 31;
    unsigned Unknown08Flag : 1;
};

extern float DAT_11006e30;

int FUN_10dae490(float A, float B, float C, float D, int E, int F, Class_10B83820* G);

// FUNCTION: 0x10B83A30 ?FUN_10b83a30@@YAHPAVClass_10B83DC0@@PAVClass_10B83820@@@Z
int FUN_10b83a30(Class_10B83DC0* Self, Class_10B83820* Out)
{
    Struct_10B82770_Param Params;
    Self->FUN_10b82770(&Params);
    float F = DAT_11006e30 * Self->UnknownB8;
    Out->Unknown04 = 0;
    Struct_10B7C800 V = FUN_10b7c800(Self->UnknownA0);
    return FUN_10dae490((&V.X)[(int)(float)Self->UnknownC0] * 2.0f - Params.Unknown50, V.X, F, V.X * 0.25f, 2,
                        0x20, Out);
}
