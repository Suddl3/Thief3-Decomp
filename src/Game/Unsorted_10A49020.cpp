// Game/Unsorted_10A49020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A492B0_Field18.h"
#include "Game/Class_10A4C4A0.h"
#include "Game/FCoords.h"
#include "Game/Class_10A492B0.h"
#include "Game/cString.h"
#include "Game/Class_10A492B0_Node.h"

int FindBoneIndex(int A, int B);

void GetBoneLocationAndRotation(int A, int B, int C, int D);

void GetBoneCoords(int A, int B, FCoords* Out);

// FUNCTION: 0x10A4A100 ?GetBoneLocationAndRotation@@YAXHHPAVFVector@@PAVFRotator@@@Z
void GetBoneLocationAndRotation(int A, int B, FVector* OutLocation, FRotator* OutRotation)
{
    FCoords Coords;
    GetBoneCoords(A, B, &Coords);
    *OutRotation = Coords.OrthoRotation();
    *OutLocation = Coords.Origin;
}

// FUNCTION: 0x10A4A160 ?GetBoneLocationAndRotationByName@@YAXHHHH@Z
void GetBoneLocationAndRotationByName(int A, int B, int C, int D)
{
    int Value = FindBoneIndex(A, B);
    GetBoneLocationAndRotation(A, Value, C, D);
}
