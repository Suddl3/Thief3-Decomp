// Game/Unsorted_10A65110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10919B90.h"
#include "Game/Struct_1091A610.h"
#include "Game/Class_10A65480.h"

double FUN_10d20ec0(double A);

class Class_10919C40;

// Game/Class_1091CB20.h copied whole, with FUN_1091cbc0 added: it returns the string by value.
class Class_1091CB20
{
public:
    int FUN_1091cb20();
    void FUN_1091be70();
    int FUN_1091cb40();
    int GetValue(unsigned int Index);
    cString FUN_1091cbc0(int B, int C);
    int Count()
    {
        if (!Unknown0C)
            FUN_1091be70();
        return Unknown00;
    }

    int Unknown00;
    char Unknown04[4];
    int* Unknown08;
    bool Unknown0C;
    char Unknown0D[0xB];
    float Unknown18;
    int Unknown1C;
    Class_10919C40* Unknown20;
};

// FUNCTION: 0x10A65480 ?FUN_10a65480@Class_10A65480@@QAEHXZ
int Class_10A65480::FUN_10a65480()
{
    int Max = 0;
    for (int I = 0; I < Unknown18C->FUN_1091cb20(); I++)
    {
        cString Name = Unknown18C->FUN_1091cbc0(I, 4);
        float Value = Unknown154->MeasureText((const Struct_1091A610*)&Name, 8);
        int Ms = (int)FUN_10d20ec0(Value);
        if (Ms > Max)
            Max = Ms;
    }
    return Max;
}
