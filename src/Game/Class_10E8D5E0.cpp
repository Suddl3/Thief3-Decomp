// Game/Class_10E8D5E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10C273E0.h"

int FUN_10bb0c60(int A);

class Class_10C13BB0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

class Class_10E8D5E0 : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10C13BB0 ?Virtual6@Class_10E8D5E0@@UAEHHH@Z
int Class_10E8D5E0::Virtual6(int A, int B)
{
    if (GetUnknown08() && ((Class_10C13BB0_Unknown08*)GetUnknown08())->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)FUN_10978090());
        if (Obj)
        {
            Class_10C273E0* Flags = (Class_10C273E0*)(((Class_10AA82D0*)Obj)->GetLinkedObject() + 0x94);
            Class_10AAB5C0* Item = ((Class_10C13BB0_Unknown08*)GetUnknown08())->Virtual4(0);
            return Flags->IsBitSet(Item->GetUnknown08()) == 1;
        }
    }
    return 0;
}
