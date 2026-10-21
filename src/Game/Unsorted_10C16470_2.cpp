// Game/Unsorted_10C16470_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10E98C8C;

class Class_10E98C88
{
public:
    virtual ~Class_10E98C88();

    Class_10E98C88();

    void FUN_10c16470(Class_10E98C8C* P);

    cIntArray Unknown04;
};

// FUNCTION: 0x10C16470 ?FUN_10c16470@Class_10E98C88@@QAEXPAVClass_10E98C8C@@@Z
void Class_10E98C88::FUN_10c16470(Class_10E98C8C* P)
{
    cIntArray* Set = &Unknown04;
    int Index = Unknown04.FindIndex((int)P);
    int Last = Set->Count - 1;
    int Moved = Set->Data[Last];
    int Old = Set->Data[Index];
    Set->Data[Index] = Moved;
    Set->Data[Last] = Old;
    Set->SetCount(Set->Count - 1);
}
