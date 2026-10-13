// Game/cStateStack_13.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9E410_Item.h"
#include "Game/cStateStack.h"

class Class_10B9E410_Item;

struct Class_10B9E410_Unknown0C;

class Class_10B9E410_Member;

// Copied whole from include/Game/Class_10B9E410_Member.h, with slot 10's real
// signature (three ints; it returns the state object) in place of the header's void Virtual10().
class Class_10B9E410_Member
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
    virtual Class_10B9E410_Item* Virtual10(int A, int B, int C);
    virtual int Virtual11(Class_10B9E410_Unknown0C* A, int B);
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
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual int Virtual28(int A);
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual int Virtual43(int A, Class_10B9E410_Item* B, int C);
    virtual int Virtual44(int A, Class_10B9E410_Item* B, int C);
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int Virtual48(Class_10B9E410_Unknown0C* A, int B);
};

// FUNCTION: 0x10B9E0F0 ?FUN_10b9e0f0@cStateStack@@QAEXHHHH@Z
void cStateStack::FUN_10b9e0f0(int A, int B, int C, int D)
{
    if (!Top())
        return;
    Class_10B9E410_Item* State;
    if (Top()->Virtual3() != 0xf)
        State = m_Member->Virtual10(Unknown0C, 0, 0);
    else
        State = Top();
    State->FUN_10bd1550(A, B, C, D);
    if (Top()->Virtual3() != 0xf)
        ApplyNextState((int)State);
}
