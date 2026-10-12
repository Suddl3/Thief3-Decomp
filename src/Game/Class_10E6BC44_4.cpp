// Game/Class_10E6BC44_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10E6BC44.h"

class Class_Field04;

class Class_10A76DA0_Arg2;

class Class_10A76CD0_Arg3;

void FUN_10a49da0(Class_10BFBD70* Result, void* Source, float Scale, int A, int B, int C);

class Class_10A76CD0_Unknown2C
{
};

class Class_Field04
{
public:
    char Pad00[0x2c];
    Class_10A76CD0_Unknown2C Unknown2C;
};

class Class_10A76CD0_Arg3
{
public:
    float Unknown00;
    char Pad04[0x4];
    unsigned char Unknown08;
};

// FUNCTION: 0x10A76CD0 ?FUN_10a76cd0@Class_10E6BC44@@QAEXPAVClass_Field04@@PAVClass_10A76DA0_Arg2@@PAVClass_10A76CD0_Arg3@@@Z
void Class_10E6BC44::FUN_10a76cd0(Class_Field04* Param1, Class_10A76DA0_Arg2* Param2, Class_10A76CD0_Arg3* Param3)
{
    Class_10BFBD70 Found;
    FUN_10a49da0(&Found, &Param1->Unknown2C, Param3->Unknown00 * 16.0f, 1, 0, 7);
    if (Param3->Unknown08 & 1)
        FUN_10a76b20(Param1, Param2, &Found);
    else
        FUN_10a76a60(Param1, &Found);
}
