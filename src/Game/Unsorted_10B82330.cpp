// Game/Unsorted_10B82330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct __declspec(align(16)) Struct_10B7C800
{
    Struct_10B7C800() {}

    float X, Y, Z, W;
};

Struct_10B7C800 FUN_10b7c800(const FVector& V);

class Class_10D9FEE0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13(int A);

    void FUN_10da0000(bool A);
    void FUN_10da01b0(const FVector& A);
    void FUN_10da0710(const FVector& A);
    void FUN_10da07c0(const FVector& A);
};

class Class_10CAD680
{
public:
    void FUN_10cad680(const Struct_10B7C800& A);
};

class Class_10CA86F0
{
public:
    void FUN_10ca86f0(const Struct_10B7C800& A);
};

class Class_10B82DD0
{
public:
    bool FUN_10b82dd0(const FVector& A, int B);

    char Unknown00[0x10];
    Class_10D9FEE0* Unknown10;
    char Unknown14[0x68];
    Class_10CA86F0* Unknown7C;
    char Unknown80[0x10];
    Class_10CAD680* Unknown90;
};

extern float DAT_11006e34;

class Class_10CA86E0
{
public:
    void* FUN_10ca86e0();
};

class Class_10B82330
{
public:
    FVector FUN_10b82330();

    char Unknown00[0x7C];
    Class_10CA86E0* Unknown7C;
};

// FUNCTION: 0x10B82330 ?FUN_10b82330@Class_10B82330@@QAE?AVFVector@@XZ
FVector Class_10B82330::FUN_10b82330()
{
    if (Unknown7C)
    {
        const FVector* V = (const FVector*)Unknown7C->FUN_10ca86e0();
        return FVector(V->X, V->Y, V->Z) * DAT_11006e34;
    }
    return FVector(0.0f, 0.0f, 0.0f);
}

// FUNCTION: 0x10B82DD0 ?FUN_10b82dd0@Class_10B82DD0@@QAE_NABVFVector@@H@Z
bool Class_10B82DD0::FUN_10b82dd0(const FVector& A, int B)
{
    Unknown10->FUN_10da0000(false);
    Struct_10B7C800 V = FUN_10b7c800(A);
    Unknown7C->FUN_10ca86f0(V);
    if (Unknown90)
        Unknown90->FUN_10cad680(V);
    Unknown10->FUN_10da07c0(A);
    Unknown10->FUN_10da0000(true);
    Unknown10->FUN_10da0710(FVector(0.0f, 0.0f, 0.0f));
    Unknown10->FUN_10da01b0(FVector(0.0f, 0.0f, 0.0f));
    return true;
}
