// Game/Unsorted_1094E150_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094E3A0.h"
#include "Game/Class_1094E650.h"
#include "Game/Class_1094E690.h"
#include "Game/Class_1094E780.h"
#include "Game/Class_Field108.h"
#include "Game/Elem_1094E3A0.h"

struct Struct_1094E650
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_1094E650_Unknown10
{
    Struct_1094E650* Unknown00;
    char Unknown04[0x24];
};

struct Struct_1094E650_Unknown108
{
    char Unknown00[0x10];
    Struct_1094E650_Unknown10 Unknown10[1];
};

struct Struct_1094E690
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_1094E690_Unknown10
{
    Struct_1094E690* Unknown00;
    char Unknown04[0x24];
};

struct Struct_1094E690_Unknown108
{
    char Unknown00[0x10];
    Struct_1094E690_Unknown10 Unknown10[1];
};

struct Struct_1094E820A
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_1094E820B
{
    char Unknown00[0x10];
    Struct_1094E820A* Unknown10;
    int Unknown14;
    char Unknown18[0x10];
};

class Class_10E4AB88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_1094e820(int Index);

    char Unknown04[0xF8];
    int* UnknownFC;
    char Unknown100[8];
    Struct_1094E820B* Unknown108;
    int Unknown10C;
    int Unknown110;
};

// FUNCTION: 0x1094E3A0 ?FUN_1094e3a0@Class_1094E3A0@@QAEPAUElem_1094E3A0@@XZ
Elem_1094E3A0* Class_1094E3A0::FUN_1094e3a0()
{
    return &Unknown108[Unknown110];
}

// FUNCTION: 0x1094E650 ?FUN_1094e650@Class_1094E650@@QAEXHHPAUStruct_1094E650@@@Z
void Class_1094E650::FUN_1094e650(int A, int B, Struct_1094E650* Out)
{
    *Out = Unknown108->Unknown10[A].Unknown00[B];
}

// FUNCTION: 0x1094E690 ?FUN_1094e690@Class_1094E690@@QAEXHHPAUStruct_1094E690@@@Z
void Class_1094E690::FUN_1094e690(int A, int B, Struct_1094E690* In)
{
    Unknown108->Unknown10[A].Unknown00[B] = *In;
}

// FUNCTION: 0x1094E780 ?FUN_1094e780@Class_1094E780@@QAEHH@Z
int Class_1094E780::FUN_1094e780(int param)
{
    return Unknown108[param].Unknown20;
}

// FUNCTION: 0x1094E820 ?FUN_1094e820@Class_10E4AB88@@UAEHH@Z
int Class_10E4AB88::FUN_1094e820(int Index)
{
    Struct_1094E820B* Entry = &Unknown108[Unknown110];
    if (Index < Entry->Unknown14)
        return UnknownFC[Entry->Unknown10[Index].Unknown04];
    return 0;
}
