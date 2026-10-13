// Game/Class_10E8D5A8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10B9CD50.h"

int FUN_10bb0c60(int A);

class Class_10C13AB0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

class Class_10E8D5A8 : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10C13AB0 ?Virtual6@Class_10E8D5A8@@UAEHHH@Z
int Class_10E8D5A8::Virtual6(int A, int B)
{
    Class_10C13AB0_Unknown08* Source = (Class_10C13AB0_Unknown08*)GetUnknown08();
    if (Source && Source->Virtual3() >= 1)
    {
        Class_10B9CD50* Obj = (Class_10B9CD50*)FUN_10bb0c60((int)FUN_10978090());
        if (Obj)
        {
            Class_10AAB5C0* Item = Source->Virtual4(0);
            return Obj->ContainsType(Item->GetUnknown08()) == 1;
        }
    }
    return 0;
}
