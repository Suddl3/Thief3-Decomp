// Game/Unsorted_10C3EBC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern const char DAT_10e9b568[];

int FUN_10a48b30(int A, int B);

void FUN_10a4a100(int A, int B, FVector* C, FRotator* D);

class Class_10C3EC80_Param0
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
};

// FUNCTION: 0x10C3EBC0 ?FUN_10c3ebc0@@YA?AVFVector@@H@Z
FVector FUN_10c3ebc0(int Param)
{
    FVector Dir(0.0f, 0.0f, 0.0f);
    FRotator Rot(0, 0, 0);
    int Index = FUN_10a48b30(Param, (int)&FString(DAT_10e9b568));
    if (Index >= 0)
        FUN_10a4a100(Param, Index, &Dir, &Rot);
    return *(FVector*)&Rot;
}

// FUNCTION: 0x10C3EC80 ?FUN_10c3ec80@@YA?AVFVector@@H@Z
FVector FUN_10c3ec80(int Param)
{
    FVector Dir(0.0f, 0.0f, 0.0f);
    FRotator Rot(0, 0, 0);
    int Index = FUN_10a48b30(Param, (int)&FString(DAT_10e9b568));
    if (Index >= 0)
    {
        FUN_10a4a100(Param, Index, &Dir, &Rot);
        return Dir;
    }
    Class_10C3EC80_Param0* Obj = (Class_10C3EC80_Param0*)Param;
    return Obj->Unknown2C;
}
