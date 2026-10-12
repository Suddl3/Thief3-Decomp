// Game/Class_10E98E70_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Struct_10BA91E0.h"

extern void* DAT_10e98e70[];

float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

class Class_10C1B840
{
public:
    Class_10C1B840(int A, int B, int C, int D, int E, float F);

    void** Unknown00;
    int Unknown04;
    int Unknown08;
    Struct_10BA91E0 Unknown0C;
    int Unknown18[12];
};

class Class_10C1BB10_Field118
{
public:
    char Unknown00[0x118];
    float Unknown118;
};

class Class_10E98D08 : public Class_10C1B840
{
public:
    Class_10E98D08(int A, int B, int C, int D, int E, float F) : Class_10C1B840(A, B, C, D, E, F) {}
    ~Class_10E98D08();
};

class Class_10E98E70 : public Class_10E98D08
{
public:
    Class_10E98E70(int A, const Struct_10BA91E0& B, Class_10C7D570* C, int D, int F, float G, float H, float I, bool J, int K);

    Struct_10BA91E0 Unknown48;
    float Unknown54;
    int Unknown58;
    bool Unknown5C;
    int m_Reference;
};

// FUNCTION: 0x10C1BB10 ??0Class_10E98E70@@QAE@HABUStruct_10BA91E0@@PAVClass_10C7D570@@HHMMM_NH@Z
Class_10E98E70::Class_10E98E70(int A, const Struct_10BA91E0& B, Class_10C7D570* C, int D, int F, float G, float H, float I, bool J, int K)
    : Class_10E98D08(A, (int)C, D, (int)G, (int)H, I)
{
    Unknown00 = DAT_10e98e70;
    Unknown48 = B;
    Unknown58 = F;
    Unknown5C = J;
    m_Reference = K;
    Unknown0C.Unknown08 += ((Class_10C1BB10_Field118*)C->FUN_10c7d570())->Unknown118;
    Unknown48.Unknown08 += ((Class_10C1BB10_Field118*)C->FUN_10c7d570())->Unknown118 * 0.2f;
    float V = FUN_10ba91e0(&Unknown0C, &Unknown48) * 0.2f;
    Unknown54 = V;
    float W = 16.0f >= V ? 16.0f : V;
    Unknown54 = W;
}
