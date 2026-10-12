// Game/cTriggerOperatorParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

void WriteString(void* Stream, int* Value);

class cTriggerOperatorParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Class_109081E0 Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void WriteValue(int A, void* Stream);
};

// FUNCTION: 0x10A8D350 ?WriteValue@cTriggerOperatorParam@@UAEXHPAX@Z
void cTriggerOperatorParam::WriteValue(int A, void* Stream)
{
    WriteString(Stream, (int*)&Virtual3());
}
