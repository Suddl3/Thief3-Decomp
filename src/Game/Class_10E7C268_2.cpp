// Game/Class_10E7C268_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C08940.h"
#include "Game/Class_10E5B578.h"

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

class Class_10E6CE28 : public Class_10978090
{
public:
    int GetUnknown08();

    int Unknown08;
};

class Class_10E7C268 : public Class_10E6CE28, public Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10B35150 ?Virtual0@Class_10E7C268@@UAEHHHHPAH@Z
int Class_10E7C268::Virtual0(int A, int B, int C, int* D)
{
    if (*D == 0x53 || *D == 0x56 || *D == 0x59 || *D == 0x5c)
        return FUN_10978090()->Virtual3(Virtual4(), GetUnknown08());
}
