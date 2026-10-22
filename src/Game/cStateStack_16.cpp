// Game/cStateStack_16.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cStateStack.h"
#include "Game/Class_10BC4010.h"
#include "Game/Class_10BC4020.h"
#include "Game/Class_10B9E410_Unknown0C.h"
#include "Game/Class_10C7D570.h"

class Class_10B9E410_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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
    virtual void Virtual20(int A);
};

class Class_10E50610
{
public:
    virtual ~Class_10E50610() {}
};

class Class_10E8BF90 : public Class_10E50610
{
public:
    Class_10E8BF90(int Value) : Unknown04(Value) {}
    virtual Class_10E8BF90* Clone();
    int Unknown04;
};

struct StateActivationInfo
{
    unsigned char Unknown00;
    int Unknown04;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Event, void* Object, Class_10E8BF90* State, StateActivationInfo* Data);
};

extern Class_10F46DA0* DAT_10f46da0;

inline Class_10C7D570* StateOwner(cStateStack* Stack)
{ return Stack->Unknown0C->Unknown08; }

// FUNCTION: 0x10B9CAD0 ?FUN_10b9cad0@cStateStack@@QAEXPAVClass_10B9E410_Item@@HH@Z
void cStateStack::FUN_10b9cad0(Class_10B9E410_Item* A, int B, int C)
{
    ((Class_10BC4010*)A)->FUN_10bc4010(B);
    ((Class_10BC4020*)A)->FUN_10bc4020(1);
    A->Virtual20(C);
    Class_10E8BF90 State(A->Virtual3());

    StateActivationInfo Data;
    Data.Unknown00 = (unsigned char)C;
    Data.Unknown04 = B;
    DAT_10f46da0->Virtual5(0x57, StateOwner(this)->FUN_10c7d570(), &State, &Data);
}
