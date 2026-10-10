// Game/Unsorted_10BD1EA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8960.h"
#include "Game/Class_10bb8960_Result.h"

extern void* DAT_10e934d0[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
};

class Class_10E934D0 : public Class_10E90D70
{
public:
    Class_10E934D0* FUN_10bd1ec0(int A, int B);

    char Unknown04[0x3C];
    char Unknown40;
};

class Class_10E933B8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10bd1ea0();

    Class_10BB8960* Unknown04;
};

// FUNCTION: 0x10BD1EA0 ?FUN_10bd1ea0@Class_10E933B8@@UAEXXZ
void Class_10E933B8::FUN_10bd1ea0()
{
    Unknown04->FUN_10bb8960()->Virtual70();
}

// FUNCTION: 0x10BD1EC0 ?FUN_10bd1ec0@Class_10E934D0@@QAEPAV1@HH@Z
Class_10E934D0* Class_10E934D0::FUN_10bd1ec0(int A, int B)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = 0;
    Unknown00 = DAT_10e934d0;
    return this;
}
