// Game/Unsorted_10B3C760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B39890.h"
#include "Game/Class_10B3C760.h"
#include "Game/Struct_10B1DCA0.h"
#include "Game/Struct_10B3C760_Param.h"

void FUN_109672e0(const Struct_10B1DCA0& Coords, const FVector& V, FVector& Out);

// FUNCTION: 0x10B3C760 ?FUN_10b3c760@Class_10B3C760@@QAE_NPAUStruct_10B3C760_Param@@H_N@Z
bool Class_10B3C760::FUN_10b3c760(Struct_10B3C760_Param* A, int Index, bool C)
{
    FVector V = *(FVector*)Unknown0C->GetEntryData(Index);
    Struct_10B1DCA0 Coords(FVector(0.0f, 0.0f, 0.0f));
    Coords.FUN_109620b0(A->Unknown38);
    {
        FVector Result;
        FUN_109672e0(Coords, V, Result);
        V = Result;
    }
    return FUN_10b3c430(A, V, C);
}
