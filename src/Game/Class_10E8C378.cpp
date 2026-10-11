// Game/Class_10E8C378.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_109081E0.h"

extern Class_1090A780 DAT_10ff7064;

bool FUN_1090f010(const int* A, const int* B);

bool FUN_1094c430(const Class_109081E0& A, const Class_109081E0& B) throw();

Class_109081E0 FUN_10c12e40(const Class_1090A780& A, int B);

class Class_10E8C378
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10c12df0(int A, Class_10E8C378* B);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10c130b0();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual int Virtual14();

    Class_109081E0 Unknown04;
};

// FUNCTION: 0x10C12DF0 ?FUN_10c12df0@Class_10E8C378@@UAEHHPAV1@@Z
int Class_10E8C378::FUN_10c12df0(int A, Class_10E8C378* B)
{
    switch (A)
    {
    case 1:
        if (FUN_1090f010((const int*)&B->Unknown04, (const int*)&Unknown04))
            return 1;
        break;
    case 6:
        if (FUN_1094c430(B->Unknown04, Unknown04))
            return 1;
        break;
    }
    return 0;
}

// FUNCTION: 0x10C130B0 ?FUN_10c130b0@Class_10E8C378@@UAEHXZ
int Class_10E8C378::FUN_10c130b0()
{
    if (FUN_10c12e40(DAT_10ff7064, Virtual14()).IsEmpty())
        return 1;
    return 0;
}
