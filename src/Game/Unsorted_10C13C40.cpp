// Game/Unsorted_10C13C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BFC020.h"

int FUN_10bb0c60(int A);

extern float DAT_10eafbdc;

class Class_10C13C40_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

class Class_10E8D5FC : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10C13C40 ?Virtual6@Class_10E8D5FC@@UAEHHH@Z
int Class_10E8D5FC::Virtual6(int A, int B)
{
    if (GetUnknown08() && ((Class_10C13C40_Unknown08*)GetUnknown08())->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)FUN_10978090());
        if (Obj)
        {
            Class_10BFC020* Flags = (Class_10BFC020*)(((Class_10AA82D0*)Obj)->GetLinkedObject() + 0x30);
            Class_10AAB5C0* Item = ((Class_10C13C40_Unknown08*)GetUnknown08())->Virtual4(0);
            if (Flags->SumValuesFor(Item->GetUnknown08()) > DAT_10eafbdc)
                return 1;
        }
    }
    return 0;
}
