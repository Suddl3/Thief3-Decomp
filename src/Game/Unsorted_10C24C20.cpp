// Game/Unsorted_10C24C20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C24940.h"
#include "Game/Class_10C25010.h"

class Class_10C25010_Param1
{
public:
    char Unknown00[0x8];
    FVector* Unknown08;
};

// FUNCTION: 0x10C25010 ?FUN_10c25010@Class_10C25010@@QAEXHPAVClass_10C25010_Param1@@PAHH@Z
void Class_10C25010::FUN_10c25010(int, Class_10C25010_Param1* Param1, int* Index, int Value)
{
    Unknown18.SetCount(0);
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
