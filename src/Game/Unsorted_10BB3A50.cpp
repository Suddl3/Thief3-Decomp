// Game/Unsorted_10BB3A50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

int FUN_10bb3730(int A, int B, int C, const Class_109081E0& Name);

class Class_10E8C7A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb3a50(int A, int B, int C);
};

// FUNCTION: 0x10BB3A50 ?FUN_10bb3a50@Class_10E8C7A0@@UAEHHHH@Z
int Class_10E8C7A0::FUN_10bb3a50(int A, int B, int C)
{
    Class_109081E0 Name("STATE_PATROL");
    return FUN_10bb3730(A, B, C, Name);
}
