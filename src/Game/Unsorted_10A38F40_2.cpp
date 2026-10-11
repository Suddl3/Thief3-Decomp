// Game/Unsorted_10A38F40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10A378B0;

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
// A copy of Game/Class_109081E0.h without its base, with the inlined body as its own destructor.
class Class_109081E0
{
public:
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

class Class_10A382D0
{
public:
    char Unknown00[0x38];
    float Unknown38;
    char Unknown3C[4];
    bool Unknown40;
};

// Game/Class_10A37F30.h copied whole, with FUN_10a38f40 and FUN_10a382d0 added and the padding
// split at Unknown44.
class Class_10A37F30
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
    virtual float Virtual15();

    void FUN_10a37f30(Struct_10A378B0* A);
    Class_109081E0 FUN_10a38f00();
    Class_10A382D0* FUN_10a382d0(const Class_109081E0& Name);
    float FUN_10a38f40();

    char Unknown04[0x40];
    float Unknown44;
    char Pad48[0x554];
    int Unknown59C;
    char Unknown5A0[4];
    Class_109081E0* Unknown5A4;
};

// FUNCTION: 0x10A38F40 ?FUN_10a38f40@Class_10A37F30@@QAEMXZ
float Class_10A37F30::FUN_10a38f40()
{
    if (Unknown59C != 0 && FUN_10a382d0(*Unknown5A4)->Unknown40)
    {
        Class_10A382D0* Result = FUN_10a382d0(FUN_10a38f00());
        float Value = Result->Unknown38;
        if (Value != 0.0f)
            return Value;
    }
    return Unknown44;
}
