// Game/Unsorted_10AC2EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10AC1CF0
{
public:
    Class_10AC1CF0* Init(FVector A, FVector B, FVector C, float D, bool E);

    float Unknown00;
    float Unknown04;
    FVector Unknown08;
    FVector Unknown14;
    FVector Unknown20;
    FVector Unknown2C;
    bool Unknown38;
};

class Class_10AC3170
{
public:
    Class_10AC3170* FUN_10ac3170(int A);

    Class_10AC1CF0 Unknown00[4];
    int UnknownF0;
};

// FUNCTION: 0x10AC3170 ?FUN_10ac3170@Class_10AC3170@@QAEPAV1@H@Z
Class_10AC3170* Class_10AC3170::FUN_10ac3170(int A)
{
    Unknown00[0].Init(FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), 1.0f, false);
    Unknown00[1].Init(FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), 1.0f, false);
    Unknown00[2].Init(FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), 1.0f, false);
    Unknown00[3].Init(FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), 1.0f, false);
    UnknownF0 = A;
    return this;
}
