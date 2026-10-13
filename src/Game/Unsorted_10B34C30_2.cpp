// Game/Unsorted_10B34C30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B0D530.h"

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int* Obj);
};

Class_10905A90_Member* GetAllocator();

class Class_1096C8D0
{
public:
    int Unknown00[5];
    Class_10B0D530 Unknown14;
};

extern Class_1096C8D0* DAT_10ff3818;

class Class_10E6BF84
{
public:
    virtual ~Class_10E6BF84() {}
};

class Class_10E7C178 : public Class_10E6BF84
{
public:
    virtual ~Class_10E7C178();

    int* Unknown04;
};

// FUNCTION: 0x10B34EB0 ??1Class_10E7C178@@UAE@XZ
Class_10E7C178::~Class_10E7C178()
{
    if (DAT_10ff3818)
    {
        delete DAT_10ff3818;
        DAT_10ff3818 = 0;
    }
    if (Unknown04)
    {
        int* Obj = Unknown04 - 1;
        GetAllocator()->Virtual5(Obj);
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B34F40 ??_GClass_10E7C178@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B34EB0's definition in this unit.
