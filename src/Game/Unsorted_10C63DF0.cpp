// Game/Unsorted_10C63DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C5BFD0.h"

class Class_10C63DF0_Unknown08
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23(int A);

    char Unknown04[0x14];
    float Unknown18;
    float Unknown1C;
};

Class_10C5BFD0* FUN_10c5c660();

class Class_10C63DF0
{
public:
    void FUN_10c63df0(float A, bool B);

    char Unknown00[8];
    Class_10C63DF0_Unknown08* Unknown08;
    char Unknown0C[9];
    bool Unknown15;
    char Unknown16[6];
    int Unknown1C;
};

// FUNCTION: 0x10C63DF0 ?FUN_10c63df0@Class_10C63DF0@@QAEXM_N@Z
void Class_10C63DF0::FUN_10c63df0(float A, bool B)
{
    if (!Unknown15)
        A = 0.0f;
    else if (A < Unknown08->Unknown18)
        A = 1.0f;
    else if (A > Unknown08->Unknown1C)
        A = 0.0f;
    else
        A = 1.0f - (A - Unknown08->Unknown18) / (Unknown08->Unknown1C - Unknown08->Unknown18);
    if (B)
        A = 0.0f;
    int Value = *(int*)&A;
    Unknown08->Virtual23(Value);
    int Index = Unknown1C;
    if (Index != -1)
        FUN_10c5c660()->Update(Index, Value);
}
