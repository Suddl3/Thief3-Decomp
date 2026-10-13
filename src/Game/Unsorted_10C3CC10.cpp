// Game/Unsorted_10C3CC10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_1098E330.h"
#include "Engine/EngineClasses.h"
#include "T3Player/T3PlayerClasses.h"

extern float DAT_10eafbdc;

extern float DAT_10e4a640;

void FUN_10a4acf0(float* A, FVector B, int C, int D, float E);

float FUN_10968dd0(float A, int B, float C);

// FUNCTION: 0x10C3CDD0 ?FUN_10c3cdd0@@YAMPAVClass_10C7D570@@PAVFVector@@PAVAGarrett@@_N@Z
float FUN_10c3cdd0(Class_10C7D570* Obj, FVector* V, AGarrett* Q, bool Flag)
{
    if (Obj->FUN_10dbd510()->FUN_10bbdad0(0x4010039f) > DAT_10eafbdc)
        return Obj->FUN_10dbd510()->FUN_10bbdad0(0x4010039f);
    if (Q && Q->bIsPawn && Q->FUN_109a54b0())
        return DAT_10eafbdc;
    float X;
    if (Flag)
    {
        float Tmp[3];
        FUN_10a4acf0(Tmp, *V, 2, 0, 1.0f);
        X = (Tmp[0] + Tmp[1] + Tmp[2]) * DAT_10e4a640;
    }
    else
        X = Q->GetLightLevel();
    return FUN_10968dd0(X, 0, 1.0f);
}
