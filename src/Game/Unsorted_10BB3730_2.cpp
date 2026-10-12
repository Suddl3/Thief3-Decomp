// Game/Unsorted_10BB3730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"

class Class_10B9EC70
{
public:
    void FUN_10b9ec70(const cString& A, cString& B);
};

class Class_10BB3730_Unknown118
{
public:
    char Unknown00[8];
    Class_10B9EC70* Unknown08;
};

class Class_10BB3730_Param2
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AB37C0* Virtual4(int A);
};

class Struct_10BB0B90
{
public:
    char Unknown00[0x118];
    Class_10BB3730_Unknown118* Unknown118;
};

Struct_10BB0B90* FUN_10bb0b90(int A);

// FUNCTION: 0x10BB3730 ?FUN_10bb3730@@YAHHHHABVcString@@@Z
int FUN_10bb3730(int A, int B, int C, const cString& D)
{
    Struct_10BB0B90* Ctx = FUN_10bb0b90(B);
    Class_10B9EC70* Target = 0;
    if (Ctx && Ctx->Unknown118)
        Target = Ctx->Unknown118->Unknown08;
    if (Target == 0)
        return 0;
    Class_10BB3730_Param2* Writer = (Class_10BB3730_Param2*)C;
    if (Writer && Writer->Virtual3() >= 1)
    {
        cString Local(*(cString*)Writer->Virtual4(0)->FUN_10ab37c0());
        int Length = Local.Unknown00 == 0 ? 0 : ((int*)Local.Unknown00)[-1];
        if (Length == 0)
            return 0;
        _strlwr(Local.Unknown00);
        Target->FUN_10b9ec70(D, Local);
        return 1;
    }
    return 0;
}
