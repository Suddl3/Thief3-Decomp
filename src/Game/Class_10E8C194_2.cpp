// Game/Class_10E8C194_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"

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

class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    Class_10C08940* FUN_10978090();

    Class_10C08940* Unknown04;
};

class Class_10AAB5C0 : public Class_10978090
{
public:
    int GetUnknown08();

    int Unknown08;
};

struct Class_10C13D90
{
    char Unknown00[0x78];
    unsigned char Unknown78;
};

class Class_10E8C194 : public Class_10AAB5C0, public Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10C13D90 ?Virtual0@Class_10E8C194@@UAEHHHHPAH@Z
int Class_10E8C194::Virtual0(int A, int B, int C, int* D)
{
    Class_10C08940* Obj = FUN_10978090();
    int Y = (*D && (((Class_10C13D90*)*D)->Unknown78 & 4)) ? *D : 0;
    if (Y == Obj->Virtual8())
        return FUN_10978090()->Virtual3(Virtual4(), GetUnknown08());
}
