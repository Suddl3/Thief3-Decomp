// Game/Class_10E89778.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"

class Class_10C08940
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int A, int B);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual int Virtual8();
};

class Class_10B8EEC0_Virtual6
{
public:
    char Unknown00[4];
    int Unknown04;
    char Unknown08[4];
    Class_10C08940* Unknown0C;
};

class Class_10B8EEC0_UnknownB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B8EEC0_Virtual6* Virtual6();

    char Unknown04[4];
    int Unknown08;
};

class Class_10B8EEC0_Virtual8
{
public:
    char Unknown00[0xB0];
    Class_10B8EEC0_UnknownB0* UnknownB0;
};

class Class_10B8EEC0_GetUnknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10978090* Virtual4(int A);
};

class Class_10E89778 : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10B8EEC0 ?Virtual6@Class_10E89778@@UAEHHH@Z
int Class_10E89778::Virtual6(int A, int B)
{
    Class_10B8EEC0_Virtual8* O1 = (Class_10B8EEC0_Virtual8*)FUN_10978090()->Virtual8();
    if (O1)
    {
        Class_10B8EEC0_UnknownB0* P = O1->UnknownB0;
        if (P && P->Unknown08 == 1)
        {
            Class_10B8EEC0_Virtual6* Q = P->Virtual6();
            if (Q && Q->Unknown04 == 3)
            {
                Class_10C08940* V = Q->Unknown0C;
                Class_10B8EEC0_GetUnknown08* X = (Class_10B8EEC0_GetUnknown08*)GetUnknown08();
                Class_10978090* Y = X->Virtual4(0);
                return V == Y->FUN_10978090();
            }
        }
    }
    return 0;
}
