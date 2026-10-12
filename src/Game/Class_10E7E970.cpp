// Game/Class_10E7E970.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B22020.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"
#include "Game/Class_10B398B0.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

class Class_10E7E970 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10b4d920(Class_10B22020* A);

    char Unknown10;
};

// FUNCTION: 0x10B4D920 ?FUN_10b4d920@Class_10E7E970@@UAEXPAVClass_10B22020@@@Z
void Class_10E7E970::FUN_10b4d920(Class_10B22020* A)
{
    A->Unknown54E = false;
    if (Unknown08 != 0x101)
    {
        ((Class_10B396B0*)GetLinkedObject())->FUN_10b396b0(Unknown08);
        Unknown08 = 0x101;
    }
    ((Class_10B39530*)GetLinkedObject())->FUN_10b39530(0x60 + (Unknown10 == 10), -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    A->Unknown460 = 0;
    A->Unknown4BC = 0;
    ((Class_10B398B0*)GetLinkedObject())->FUN_10b398b0(0);
}
