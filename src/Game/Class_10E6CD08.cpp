// Game/Class_10E6CD08.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10A94480_Result.h"
#include "Game/Class_10B0FDC0.h"

class Class_10A94050_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10B0FDC0* Virtual4(int A);
};

class Class_10A174E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int A);
};

Class_10A174E0* GetStats();

class Class_10E6CD08 : public Class_10AAB5C0
{
public:
    virtual void Virtual5();
    virtual int FUN_10a94050(int A, int B);
};

// FUNCTION: 0x10A94050 ?FUN_10a94050@Class_10E6CD08@@UAEHHH@Z
int Class_10E6CD08::FUN_10a94050(int A, int B)
{
    int Key;
    Class_10B0FDC0* Left = ((Class_10A94050_Unknown08*)GetUnknown08())->Virtual4(0);
    Class_10B0FDC0* Right = ((Class_10A94050_Unknown08*)GetUnknown08())->Virtual4(1);
    int LeftValue = GetStats()->Virtual3(Left->FUN_10b0fdc0(&Key)->Unknown00);
    int RightValue = GetStats()->Virtual3(Right->FUN_10b0fdc0(&Key)->Unknown00);
    return LeftValue == RightValue;
}
