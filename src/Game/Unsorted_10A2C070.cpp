// Game/Unsorted_10A2C070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cBoneAimController.h"
#include "Game/Class_10A2C350.h"
#include "Game/Struct_10A2C500.h"

FVector VectorSubtract(const FVector* A, const FVector* B);

struct Struct_10A2C350
{
    double Unknown00;
    char Unknown08[0xA8];
};

extern int DAT_10f39f30;

void* FUN_10905c10(int Kind, int* Arg, int A, int B, int C, int D);

// FUNCTION: 0x10A2C070 ?VectorAdd@@YAXPAM00@Z
void VectorAdd(float* A, float* B, float* C)
{
    float Z = B[2] + C[2];
    float Y = B[1] + C[1];
    float X = B[0] + C[0];
    A[0] = X;
    A[1] = Y;
    A[2] = Z;
}

// FUNCTION: 0x10A2C0A0 ?VectorSubtract@@YA?AVFVector@@PBV1@0@Z
FVector VectorSubtract(const FVector* A, const FVector* B)
{
    return FVector(A->X - B->X, A->Y - B->Y, A->Z - B->Z);
}

// FUNCTION: 0x10A2C350 ?Swap@Class_10A2C350@@QAEXHH@Z
void Class_10A2C350::Swap(int A, int B)
{
    Struct_10A2C350 Temp = m_Items[A];
    m_Items[A] = m_Items[B];
    m_Items[B] = Temp;
}

// FUNCTION: 0x10A2DE50 ?FUN_10a2de50@@YAXXZ
void FUN_10a2de50()
{
    int Handle = DAT_10f39f30;
    if (Handle == 0)
    {
        int Value = Handle;
        DAT_10f39f30 = (int)FUN_10905c10(1, &Value, Handle, Handle, Handle, Handle);
    }
}
