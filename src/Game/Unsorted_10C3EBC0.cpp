// Game/Unsorted_10C3EBC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern const char DAT_10e9b568[];

int FindBoneIndex(int A, int B);

void GetBoneLocationAndRotation(int A, int B, FVector* C, FRotator* D);

class Class_10C3EC80_Param0
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
};

// FUNCTION: 0x10C3EBC0 ?GetProjectileRotation@@YA?AVFVector@@H@Z
FVector GetProjectileRotation(int Param)
{
    FVector Dir(0.0f, 0.0f, 0.0f);
    FRotator Rot(0, 0, 0);
    int Index = FindBoneIndex(Param, (int)&FString(DAT_10e9b568));
    if (Index >= 0)
        GetBoneLocationAndRotation(Param, Index, &Dir, &Rot);
    return *(FVector*)&Rot;
}

// FUNCTION: 0x10C3EC80 ?GetProjectileLocation@@YA?AVFVector@@H@Z
FVector GetProjectileLocation(int Param)
{
    FVector Dir(0.0f, 0.0f, 0.0f);
    FRotator Rot(0, 0, 0);
    int Index = FindBoneIndex(Param, (int)&FString(DAT_10e9b568));
    if (Index >= 0)
    {
        GetBoneLocationAndRotation(Param, Index, &Dir, &Rot);
        return Dir;
    }
    Class_10C3EC80_Param0* Obj = (Class_10C3EC80_Param0*)Param;
    return Obj->Unknown2C;
}
