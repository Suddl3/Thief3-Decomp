// Game/Unsorted_10B226C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B19300.h"

class Object_10B22790
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void* Virtual12(void* A);

    void FUN_10cab310(int A);
};

struct Struct_10B226C0
{
    int Unknown00[5];
};

class Class_10E7A768
{
public:
    Class_10E7A768(int A, int B);
    virtual ~Class_10E7A768();

    int Unknown04;
    Object_10B22790* Unknown08[34];
    Object_10B22790* Unknown90;
    Object_10B22790* Unknown94;
    int Unknown98;
    int Unknown9C;
    int UnknownA0;
    bool UnknownA4;
    int UnknownA8;
};

Class_10B19300* FUN_10b190e0();

Object_10B22790* FUN_10b3d510(int A);

// FUNCTION: 0x10B226C0 ??0Class_10E7A768@@QAE@HH@Z
Class_10E7A768::Class_10E7A768(int A, int B)
{
    Unknown04 = A;
    Unknown90 = 0;
    Unknown94 = 0;
    Unknown98 = B;
    Unknown9C = 0;
    UnknownA0 = 0;
    UnknownA4 = false;
    UnknownA8 = -1;
    for (int i = 0; i < 34; i++)
    {
        Unknown08[i] = FUN_10b3d510(i);
        if (Unknown08[i])
            Unknown08[i]->FUN_10cab310(B);
    }
    Unknown94 = Unknown08[23];
    Unknown90 = Unknown08[0];
    Unknown90->Virtual2(Unknown04);
    Struct_10B226C0 Info;
    FUN_10b190e0()->FUN_10de9b20(Unknown90->Virtual12(&Info));
    Unknown94->Virtual2(Unknown04);
}
