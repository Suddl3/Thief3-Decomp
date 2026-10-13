// Game/Unsorted_10B83850_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Struct_10B82770_Param.h"
#include "Game/Class_10B83DC0.h"
#include "Game/Allocator_10FFA700.h"

struct __declspec(align(16)) Struct_10B7C800
{
    Struct_10B7C800() {}

    float X, Y, Z, W;
};

Struct_10B7C800 FUN_10b7c800(const FVector& V);

class Class_10943600;

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10B83820
{
public:
    Class_10B83820() : m_Buffer(0), m_Count(0), m_Capacity(0), Unknown08Flag(1) {}
    ~Class_10B83820()
    {
        if (!Unknown08Flag)
        {
            Allocator_10FFA700* Allocator = DAT_10ffa700;
            Allocator->Free(m_Buffer, m_Capacity * 16, 0x11);
        }
    }

    void* m_Buffer;
    int m_Count;
    unsigned m_Capacity : 31;
    unsigned Unknown08Flag : 1;
};

extern float DAT_11006e30;

int FUN_10dae490(float A, float B, float C, float D, int E, int F, Class_10B83820* G);

// FUNCTION: 0x10B83A30 ?FUN_10b83a30@@YAHPAVClass_10B83DC0@@PAVClass_10B83820@@@Z
int FUN_10b83a30(Class_10B83DC0* Self, Class_10B83820* Out)
{
    Struct_10B82770_Param Params;
    Self->FUN_10b82770(&Params);
    float F = DAT_11006e30 * Self->m_Scale;
    Out->m_Count = 0;
    Struct_10B7C800 V = FUN_10b7c800(Self->UnknownA0);
    return FUN_10dae490((&V.X)[(int)(float)Self->m_Axis] * 2.0f - Params.Unknown50, V.X, F, V.X * 0.25f, 2,
                        0x20, Out);
}
