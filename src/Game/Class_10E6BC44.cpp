// Game/Class_10E6BC44.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cActorManager.h"
#include "Game/Class_10E6BC44.h"
#include "Game/cIntArray.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6BC44;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BC44* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_Field04;

class Class_10A76DA0_Arg2;

class Class_10A76CD0_Arg3;

void FUN_10a49da0(cIntArray* Result, void* Source, float Scale, int A, int B, int C);

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

// FUNCTION: 0x10A767A0 ??0Class_10E6BC44@@QAE@XZ
Class_10E6BC44::Class_10E6BC44()
{
    Class_10E5D360 Local(0x800277);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
}

// FUNCTION: 0x10A76CD0 ?FUN_10a76cd0@Class_10E6BC44@@QAEXPAVClass_Field04@@PAVClass_10A76DA0_Arg2@@PAVClass_10A76CD0_Arg3@@@Z
void Class_10E6BC44::FUN_10a76cd0(Class_Field04* Param1, Class_10A76DA0_Arg2* Param2, Class_10A76CD0_Arg3* Param3)
{
    cIntArray Found;
    FUN_10a49da0(&Found, &Param1->Unknown2C, Param3->Unknown00 * 16.0f, 1, 0, 7);
    if (Param3->Unknown08 & 1)
        FUN_10a76b20(Param1, Param2, &Found);
    else
        FUN_10a76a60(Param1, &Found);
}
