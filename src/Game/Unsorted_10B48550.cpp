// Game/Unsorted_10B48550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B48800.h"

class Class_10B48800_A
{
public:
    char Unknown00[0x2c];
    FVector Unknown2C;
};

// FUNCTION: 0x10B48800 ?FUN_10b48800@Class_10B48800@@QAE?AVFVector@@PAVClass_10B48800_A@@ABV2@@Z
FVector Class_10B48800::FUN_10b48800(Class_10B48800_A* A, const FVector& B)
{
    FVector Dir = A->Unknown2C - B;
    Dir.Normalize();
    float Dist = FUN_10b3ad80();
    FVector Result = Dir * Dist + B;
    Result.Z = A->Unknown2C.Z;
    return Result;
}
