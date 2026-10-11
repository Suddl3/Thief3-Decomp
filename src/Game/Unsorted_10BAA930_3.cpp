// Game/Unsorted_10BAA930_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

class Class_109BC840;

class Class_1098E330;

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

class Class_1098E330
{
public:
    int FUN_1098e330(int Id, int* Out);
};

// Game/Class_10BAA580.h has a base and padding that cannot hold the fields at 0x34 and 0x84;
// this copy keeps the layout the accepted Unsorted_10BAA930.cpp matched, with the two fields named.
class Class_10BAA580
{
public:
    Class_109BC840* FUN_10baa580();
    int* FUN_10babdd0(int* Out);
    int FUN_10babe80();
    int* FUN_10babab0(int* A, Class_109081E0* B);

    char Unknown00[0x34];
    Class_1098E330* Unknown34;
    char Unknown38[0x4c];
    int Unknown84;
    char Unknown88[0x4];
    int Unknown8C;
    char Unknown90[0x24];
    bool UnknownB4;
};

// FUNCTION: 0x10BABDD0 ?FUN_10babdd0@Class_10BAA580@@QAEPAHPAH@Z
int* Class_10BAA580::FUN_10babdd0(int* Out)
{
    if (Unknown84 == 0 && Unknown34 != 0)
    {
        FName Name;
        Name.Value = 0;
        if (Unknown34->FUN_1098e330(0x10005d0, (int*)&Name.Value))
        {
            Class_109081E0 Str = Name.FUN_10af9730();
            int Index;
            Unknown84 = *FUN_10babab0(&Index, &Str);
        }
    }
    *Out = Unknown84;
    return Out;
}
