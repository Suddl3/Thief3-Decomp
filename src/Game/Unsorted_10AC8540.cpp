// Game/Unsorted_10AC8540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Struct_10B1DCA0.h"
#include "Game/Struct_10AC8540_Param.h"

void FUN_109672e0(const Struct_10B1DCA0& Coords, const FVector& V, FVector& Out);

// FUNCTION: 0x10AC8540 ?GetSideDirection@@YG?AVFVector@@PAUStruct_10AC8540_Param@@@Z
FVector __stdcall GetSideDirection(Struct_10AC8540_Param* A)
{
    Struct_10B1DCA0 Coords(FVector(0.0f, 0.0f, 0.0f));
    Coords.FUN_109620b0(FRotator(A->Unknown38.Pitch, A->Unknown38.Yaw - 16384, A->Unknown38.Roll));
    FVector V(1.0f, 0.0f, 0.0f);
    {
        FVector Result;
        FUN_109672e0(Coords, V, Result);
        V = Result;
    }
    V.Z = 0.0f;
    V.Normalize();
    return V;
}
