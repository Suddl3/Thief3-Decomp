// Game/Unsorted_109570B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10957D20.h"
#include "Game/Class_1095AFD0.h"
#include "Core/Core.h"

void VectorMin(float* Out, float* A, float* B);

extern const char DAT_10e47660[];

int FUN_1095af30(int A);

void* FUN_1092cac0(const char* Name, int A, int B, int C, int D, int E);

class Class_109570D0_Unknown90
{
public:
    const char* Unknown00;
    char Unknown04[0x34];
};

class Class_10E4AE8C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int A);
    virtual bool Virtual7(int A);
    virtual void FUN_109570d0(int A);
    virtual void Virtual9();
    virtual bool Virtual10();

    char Unknown04[0x8C];
    Class_109570D0_Unknown90 Unknown90[9];
    char Unknown288[0x14];
    void* Unknown29C[9];
};

// FUNCTION: 0x109570D0 ?FUN_109570d0@Class_10E4AE8C@@UAEXH@Z
void Class_10E4AE8C::FUN_109570d0(int A)
{
    if (Virtual7(A))
    {
        if (Virtual10())
        {
            Class_109570D0_Unknown90* Entry = &Unknown90[A];
            const char* Name = DAT_10e47660;
            if (Entry->Unknown00)
                Name = Entry->Unknown00;
            Unknown29C[A] = FUN_1092cac0(Name, A, FUN_1095af30(A), 1, 0, 0);
        }
        Virtual6(A);
    }
    else
    {
        Unknown29C[A] = 0;
    }
}

// FUNCTION: 0x10957150 ?WrapAngles@@YAXPAVFVector@@@Z
void WrapAngles(FVector* Value)
{
    if (Value->X < -359.0f)
        Value->X += 360.0f;
    if (Value->X > 359.0f)
        Value->X -= 360.0f;
    if (Value->Y < -359.0f)
        Value->Y += 360.0f;
    if (Value->Y > 359.0f)
        Value->Y -= 360.0f;
    if (Value->Z < -359.0f)
        Value->Z += 360.0f;
    if (Value->Z > 359.0f)
        Value->Z -= 360.0f;
}

// FUNCTION: 0x10957BE0 ?VectorMin@@YAXPAM00@Z
void VectorMin(float* Out, float* A, float* B)
{
    float X = B[0];
    float Z = B[2];
    float Y = B[1];
    if (A[0] < X)
        X = A[0];
    if (A[1] < Y)
        Y = A[1];
    if (A[2] < Z)
        Z = A[2];
    Out[0] = X;
    Out[1] = Y;
    Out[2] = Z;
}

// FUNCTION: 0x10957C50 ?VectorMax@@YAXPAM00@Z
void VectorMax(float* Out, float* A, float* B)
{
    float X = B[0];
    float Z = B[2];
    float Y = B[1];
    if (A[0] > X)
        X = A[0];
    if (A[1] > Y)
        Y = A[1];
    if (Z < A[2])
        Z = A[2];
    Out[0] = X;
    Out[1] = Y;
    Out[2] = Z;
}

// FUNCTION: 0x10957D20 ?Reset@Class_10957D20@@QAEPAV1@XZ
Class_10957D20* Class_10957D20::Reset()
{
    Unknown3c = 0;
    Unknown38 = 0;
    Unknown34 = 0;
    return this;
}

// FUNCTION: 0x1095AFD0 ?Reset@Class_1095AFD0@@QAEPAV1@XZ
Class_1095AFD0* Class_1095AFD0::Reset()
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0c = 0;
    return this;
}
