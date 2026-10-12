// Game/Unsorted_10B4D650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B22020.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"
#include "Game/Class_10E7EA48.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

class Class_10E7EBB0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int OnAnimationEnd(int A, int B);

    char Unknown10[4];
    int Unknown14;
};

extern float DAT_10f04aa0;

void FUN_10abc090(float p1);

class Class_10E7EBF8 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10b4d6f0(Class_10B22020* A);

    char Unknown10;
};

// FUNCTION: 0x10B4D6F0 ?FUN_10b4d6f0@Class_10E7EBF8@@UAEXPAVClass_10B22020@@@Z
void Class_10E7EBF8::FUN_10b4d6f0(Class_10B22020* A)
{
    if (Unknown08 != 0x101)
    {
        ((Class_10B396B0*)GetLinkedObject())->FUN_10b396b0(Unknown08);
        Unknown08 = 0x101;
    }
    ((Class_10B39530*)GetLinkedObject())->FUN_10b39530(0x60 + (Unknown10 == 10), -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    A->Unknown54E = false;
}

// FUNCTION: 0x10B4DB40 ?OnAnimationEnd@Class_10E7EBB0@@UAEHHH@Z
int Class_10E7EBB0::OnAnimationEnd(int A, int B)
{
    ((Class_10B396B0*)GetLinkedObject())->FUN_10b396b0(B);
    Unknown08 = 0x101;
    Unknown14 = 0;
    return 0x17;
}

// FUNCTION: 0x10B4E650 ?FUN_10b4e650@Class_10E7EA48@@UAEXH@Z
void Class_10E7EA48::FUN_10b4e650(int p1)
{
    FUN_10abc090(DAT_10f04aa0);
}
