// Game/Unsorted_10C26070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10C26030.h"
#include "Game/Class_10B9FBE0.h"

int FUN_10b0fdb0();

double FUN_10c00480();

void FUN_10c25ef0(Class_10B9FBE0* Array);

void FUN_10c25f40(Struct_10C26030* Data);

class Class_10C26070_Unknown00
{
public:
    char Unknown00[0x10];
    Class_10B9FBE0 Unknown10;
    Struct_10C26030 Unknown1C;
};

class Class_10C26070
{
public:
    char FUN_10c26070(float Margin);

    Class_10C26070_Unknown00* Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10C26070 ?FUN_10c26070@Class_10C26070@@QAEDM@Z
char Class_10C26070::FUN_10c26070(float Margin)
{
    if (!Unknown00)
        return 0;
    int Column = Unknown08;
    int Row = Unknown04;
    Struct_10C26030* Data = &Unknown00->Unknown1C;
    FUN_10c25f40(Data);
    float Value = Data->Unknown08[FUN_10b0fdb0() * Row + Column];
    if (Value < FUN_10c00480() - Margin && Unknown00)
    {
        Column = Unknown08;
        Row = Unknown04;
        Class_10B9FBE0* Array = &Unknown00->Unknown10;
        FUN_10c25ef0(Array);
        int Index = FUN_10b0fdb0() * Row + Column;
        Array->Unknown08[Index] = 0;
    }
    Column = Unknown08;
    Row = Unknown04;
    Class_10B9FBE0* Array = &Unknown00->Unknown10;
    FUN_10c25ef0(Array);
    int Index = FUN_10b0fdb0() * Row + Column;
    return Array->Unknown08[Index];
}
