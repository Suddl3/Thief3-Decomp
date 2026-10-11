// Game/Unsorted_10C24C20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C24940.h"

class Class_10C25010_Param1
{
public:
    char Unknown00[0x8];
    FVector* Unknown08;
};

class Class_10C25010
{
public:
    void FUN_10c25010(int, Class_10C25010_Param1* Param1, int* Index, int Value);
    void FUN_10c20da0(Class_10BFBD70* Items, FVector* Point);
    void FUN_10c24c80(Class_10BFBD70* Items, int Value);
    void FUN_10c21510(FVector* From, FVector* To, int Value);

    char Unknown00[0x18];
    Class_10BFBD70 Unknown18;
    Class_10C24940 Unknown24;
    int Unknown30;
    char Unknown34[0xC];
    FVector Unknown40;
    FVector Unknown4C;
    FVector Unknown58;
    FVector Unknown64;
};

// FUNCTION: 0x10C25010 ?FUN_10c25010@Class_10C25010@@QAEXHPAVClass_10C25010_Param1@@PAHH@Z
void Class_10C25010::FUN_10c25010(int, Class_10C25010_Param1* Param1, int* Index, int Value)
{
    Unknown18.FUN_10bfbd70(0);
    FUN_10c20da0(&Unknown18, Param1->Unknown08 + *Index);
    Unknown24.FUN_10c24260(0);
    FUN_10c24c80(&Unknown18, Value);
    Unknown30 = 0;
    FUN_10c21510(&Unknown40, &Unknown4C, Value);
    Unknown58 = Unknown4C - Unknown40;
    Unknown58.Z = 0.0f;
    Unknown58.Normalize();
    Unknown64 = Unknown58;
}
