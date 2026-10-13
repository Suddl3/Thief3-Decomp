// Game/Class_10E8D634.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BBA080.h"

int FUN_10bb0c60(int A);

class Class_10C13B20_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

class Class_10E8D634 : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10C13B20 ?Virtual6@Class_10E8D634@@UAEHHH@Z
int Class_10E8D634::Virtual6(int A, int B)
{
    Class_10C13B20_Unknown08* Source = (Class_10C13B20_Unknown08*)GetUnknown08();
    if (Source && Source->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)FUN_10978090());
        if (Obj)
        {
            int Linked = ((Class_10AA82D0*)Obj)->GetLinkedObject();
            Class_10AAB5C0* Item = Source->Virtual4(0);
            int Type = Item->GetUnknown08();
            if (Type == 4)
                return 1;
            return ((Class_10BBA080*)Linked)->FUN_10bb8c60() == Type;
        }
    }
    return 0;
}
