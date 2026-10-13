// Game/Class_10B3C760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B39890.h"
#include "Game/Class_10B3C760.h"
#include "Game/Struct_10B1DCA0.h"
#include "Game/Struct_10B3C760_Param.h"
#include <math.h>

void FUN_109672e0(const Struct_10B1DCA0& Coords, const FVector& V, FVector& Out);

extern float DAT_10eafbdc;

bool FUN_10b1e4c0(Struct_10B3C760_Param* A);

int WrapAngle(int Value);

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

// FUNCTION: 0x10B4FAC0 ?FUN_10b4fac0@Class_10B3C760@@QAEHPAUStruct_10B3C760_Param@@_NM@Z
int Class_10B3C760::FUN_10b4fac0(Struct_10B3C760_Param* A, bool B, float C)
{
    if (!B)
        return 0x21;
    if (C == DAT_10eafbdc)
        return 0x21;
    if (FUN_10b1e4c0(A) && A->Unknown328 && FUN_10b3c760(A, 0x4f, false))
    {
        A->Unknown350 = A->Unknown2C;
        FVector Dir = A->Unknown338;
        A->Unknown35C = WrapAngle((int)(atan2(Dir.Y, Dir.X) * 10430.060040584269 + 32767.0));
        A->Unknown344 = 0x4f;
        A->Unknown348 = 0xe;
        A->Unknown34C = 1;
        return 0x10;
    }
    return 0x21;
}
