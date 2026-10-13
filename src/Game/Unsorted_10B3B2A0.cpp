// Game/Unsorted_10B3B2A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Core/Core.h"
#include <math.h>
#include "T3Player/T3PlayerClasses.h"

struct Struct_10B1DD70_Param;

FVector FUN_10b1de50(Struct_10B1DD70_Param* A);

inline FVector operator*(FLOAT Scale, const FVector& V)
{
    return FVector(Scale * V.X, Scale * V.Y, Scale * V.Z);
}

class Class_10E7E6A0
{
public:
    FVector FUN_10b3b700(Struct_10B1DD70_Param* Param);
};

inline float FVectorDot(const FVector& A, const FVector& B)
{
    return A.X * B.X + A.Y * B.Y + A.Z * B.Z;
}

// FUNCTION: 0x10B3B700 ?FUN_10b3b700@Class_10E7E6A0@@QAE?AVFVector@@PAUStruct_10B1DD70_Param@@@Z
FVector Class_10E7E6A0::FUN_10b3b700(Struct_10B1DD70_Param* Param)
{
    FVector Scaled = 0.0f * FUN_10b1de50(Param);
    return FVector(Scaled.X, Scaled.Y, Scaled.Z + 4.8f);
}

// FUNCTION: 0x10B3B750 ?FUN_10b3b750@@YGHHPAVFVector@@@Z
int __stdcall FUN_10b3b750(int Mode, FVector* V)
{
    if (Mode == 3)
    {
        FVector Down;
        Down = FVector(0.0f, -1.0f, 0.0f);
        FVector N = *V;
        N.Normalize();
        if (!((float)fabs(acos(N.X * Down.X + Down.Y * N.Y + Down.Z * N.Z) * 57.29577951308232) > 75.0f))
            return 3;
    }
    else if (Mode == 4)
    {
        FVector Up;
        Up = FVector(0.0f, 1.0f, 0.0f);
        FVector N = *V;
        N.Normalize();
        if (!((float)fabs(acos(N.X * Up.X + Up.Y * N.Y + Up.Z * N.Z) * 57.29577951308232) > 75.0f))
            return 4;
    }
    return 1;
}

// FUNCTION: 0x10B3B9D0 ?FUN_10b3b9d0@@YGHHPAVFVector@@@Z
int __stdcall FUN_10b3b9d0(int A, FVector* B)
{
    if (A == 1)
    {
        FVector Axis;
        Axis = FVector(1.0f, 0.0f, 0.0f);
        FVector V = *B;
        V.Normalize();
        float Angle = fabs(acos(FVectorDot(Axis, V)) * 57.29577951308232);
        if (!(Angle > 75.0f))
            return 1;
    }
    else if (A == 2)
    {
        FVector Axis;
        Axis = FVector(-1.0f, 0.0f, 0.0f);
        FVector V = *B;
        V.Normalize();
        float Angle = fabs(acos(FVectorDot(Axis, V)) * 57.29577951308232);
        if (!(Angle > 75.0f))
            return 2;
    }
    return 3;
}

// FUNCTION: 0x10B3BB10 ?FUN_10b3bb10@@YGHHPAVFVector@@@Z
int __stdcall FUN_10b3bb10(int Mode, FVector* V)
{
    if (Mode == 1)
    {
        FVector Axis;
        Axis = FVector(1.0f, 0.0f, 0.0f);
        FVector N = *V;
        N.Normalize();
        float Dot = N.X * Axis.X + Axis.Y * N.Y + Axis.Z * N.Z;
        float Angle = acos(Dot) * 57.29577951308232;
        if (fabs(Angle) > 75.0f)
            return 4;
        return 1;
    }
    else if (Mode == 2)
    {
        FVector Axis;
        Axis = FVector(-1.0f, 0.0f, 0.0f);
        FVector N = *V;
        N.Normalize();
        float Dot = N.X * Axis.X + Axis.Y * N.Y + Axis.Z * N.Z;
        float Angle = acos(Dot) * 57.29577951308232;
        if (!(fabs(Angle) > 75.0f))
            return 2;
    }
    return 4;
}

// FUNCTION: 0x10B3C050 ?GetClosestAIInRange@@YGPAVAPawn@@PAVAGarrett@@@Z
APawn* __stdcall GetClosestAIInRange(AGarrett* Garrett)
{
    AActor* Actor = Garrett->closestAIInRange;
    if (Actor)
        return Cast<APawn>(Actor);
    return 0;
}
