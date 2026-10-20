// Game/cTriggerPropertyParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BF84.h"
#include "Game/Class_10A73EF0_Table.h"

class Class_10A73EF0_Table* __cdecl FUN_10af3470(void);

class cTriggerPropertyParam : public Class_10E6BF84
{
public:
    virtual ~cTriggerPropertyParam();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int IsDone();
    virtual void Virtual8();
    virtual int Virtual9();
    virtual void WriteValue(int A, void* Stream);

    Class_10A73EF0_Object* FUN_10a89740();

    int Unknown04;
    int Unknown08;
    int* Unknown0C;
};

// FUNCTION: 0x10A89740 ?FUN_10a89740@cTriggerPropertyParam@@QAEPAVClass_10A73EF0_Object@@XZ
Class_10A73EF0_Object* cTriggerPropertyParam::FUN_10a89740()
{
    if (Virtual9() && Unknown04)
        return FUN_10af3470()->FUN_10af33e0(Unknown08);
    return 0;
}
