// Game/Unsorted_10B82330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B82330.h"
#include "Game/Class_10B82DD0.h"
#include "Game/Class_10D9FEE0.h"

struct __declspec(align(16)) Struct_10B7C800
{
    Struct_10B7C800() {}

    float X, Y, Z, W;
};

Struct_10B7C800 FUN_10b7c800(const FVector& V);

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

extern float DAT_11006e34;

class Class_10CA86E0
{
public:
    void* FUN_10ca86e0();
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
