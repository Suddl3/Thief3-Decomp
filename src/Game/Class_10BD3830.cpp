// Game/Class_10BD3830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FCoords.h"
#include "Game/Class_10BD3830.h"

class FVector;

extern FCoords DAT_10f46de8;

FLOAT appFrand();

class Class_10B056C0
{
public:
    void FUN_10b056c0(FRotator& Rot);
};

// FUNCTION: 0x10BD38D0 ?FUN_10bd38d0@Class_10BD3830@@QAEXHABVFVector@@PAVClass_10B056C0@@HHMM@Z
void Class_10BD3830::FUN_10bd38d0(int A, const FVector& B, Class_10B056C0* Owner, int D, int E, FLOAT F, FLOAT G)
{
    FRotator Rot;
    Owner->FUN_10b056c0(Rot);
    Rot.Pitch = 0;
    Rot.Roll = 0;
    int Spread = (int)(G * 182.04f);
    FLOAT R1 = appFrand();
    int Delta = Spread - (int)(F * 182.04f);
    int Offset = Spread - (int)(R1 * Delta);
    if (appFrand() < 0.5f)
        Rot.Yaw -= Offset;
    else
        Rot.Yaw += Offset;
    Rot.Yaw += Offset;

    FCoords Coords = DAT_10f46de8;
    FCoords Result = Coords.FUN_10961af0(Rot);
    FVector C = Result.XAxis;
    FUN_10bd2340(A, B, C, D, E);
}
