// Game/Class_10E6C68C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E6BF84.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10F3A1EC
{
public:
    int Unknown00[5];
    Class_10B0D530 Unknown14;
};

extern Class_10F3A1EC* DAT_10f3a1ec;

class Class_10E6C68C : public Class_10E6BF84
{
public:
    virtual ~Class_10E6C68C();

    int Unknown04;
    int Unknown08;
    int* Unknown0C;
};

// FUNCTION: 0x10A8BDC0 ??1Class_10E6C68C@@UAE@XZ
Class_10E6C68C::~Class_10E6C68C()
{
    if (DAT_10f3a1ec)
    {
        delete DAT_10f3a1ec;
        DAT_10f3a1ec = 0;
    }
    if (Unknown0C)
    {
        int* Obj = Unknown0C - 1;
        FUN_10905aa0()->Virtual5(Obj);
        Unknown0C = 0;
    }
}

// FUNCTION: 0x10A8BE50 ??_GClass_10E6C68C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A8BDC0's definition in this unit.
