// Game/Unsorted_10B35530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"

class Class_10A98570_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10978090* Virtual4(int A);
};

class Class_10E6BF84
{
public:
    Class_10E6BF84();
    virtual ~Class_10E6BF84() {}

    void FUN_10d51e20(int A);
    int FUN_10d521c0(Class_10C08940* A, Class_10978090* B);

    int Unknown04;
    int Unknown08;
};

struct Info_10B196B0
{
    char Unknown00[0xC];
    int Unknown0C;
    int Unknown10;
};

class Class_10B1B8A0
{
public:
    int FUN_10b196a0();
    Info_10B196B0* FUN_10b196b0(int A);
};

Class_10B1B8A0* FUN_10b1b600();

class Class_10B3AC90_Result
{
public:
    char Unknown00[0x474];
    int Unknown474;
};

struct Static_10B3AC60
{
    Class_10B3AC90_Result* FUN_10b3ac90();
};

Static_10B3AC60* FUN_10b3ac60();

class Class_10E7C344 : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10B35530 ?Virtual6@Class_10E7C344@@UAEHHH@Z
int Class_10E7C344::Virtual6(int A, int B)
{
    Class_10A98570_Unknown08* Obj1 = (Class_10A98570_Unknown08*)FUN_10aab5c0();
    Class_10978090* Obj1Result = Obj1->Virtual4(0);
    Class_10C08940* Result0 = Obj1Result->FUN_10978090();
    Class_10A98570_Unknown08* Obj2 = (Class_10A98570_Unknown08*)FUN_10aab5c0();
    Class_10978090* Obj3 = Obj2->Virtual4(1);
    int Sum = 0;
    Class_10A98570_Unknown08* Obj4 = (Class_10A98570_Unknown08*)FUN_10aab5c0();
    if (Obj4->Virtual4(2)->FUN_10978090())
    {
        Class_10B1B8A0* Block = FUN_10b1b600();
        for (int i = Block->FUN_10b196a0() - 1; i >= 0; i--)
        {
            Info_10B196B0* Info = Block->FUN_10b196b0(i);
            Sum += Info->Unknown10 * Info->Unknown0C;
        }
    }
    Class_10E6BF84 Local;
    Static_10B3AC60* Static = FUN_10b3ac60();
    Local.FUN_10d51e20(Static->FUN_10b3ac90()->Unknown474 + Sum);
    return Local.FUN_10d521c0(Result0, Obj3);
}
