// Game/Unsorted_10BE1D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E90D70.h"

class Class_10E95AC8 : public Class_10E90D70
{
public:
    Class_10E95AC8(int A, int B, int C);
};

class cTacticMoveToPoint
{
public:
    virtual void Virtual0();

    void PopState();
};

class Class_10E959B0 : public cTacticMoveToPoint
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10be1d50();

    char Unknown04[0x3C];
    char Unknown40;
};

// FUNCTION: 0x10BE1D50 ?FUN_10be1d50@Class_10E959B0@@UAEXXZ
void Class_10E959B0::FUN_10be1d50()
{
    if (Unknown40)
        PopState();
}

// FUNCTION: 0x10BE1D60 ??0Class_10E95AC8@@QAE@HHH@Z
Class_10E95AC8::Class_10E95AC8(int A, int B, int C) : Class_10E90D70(A, B)
{
}
