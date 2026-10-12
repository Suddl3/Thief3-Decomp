// Game/cTriggerByteEnumParam_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

void WriteInt(void* A, int B);

void WriteString(void* Stream, int* Value);

class cTriggerByteEnumParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Write(int A, void* B);

    int Unknown04;
    int m_Index;
    FName m_Name;
};

// FUNCTION: 0x10A8C390 ?Write@cTriggerByteEnumParam@@UAEXHPAX@Z
void cTriggerByteEnumParam::Write(int A, void* B)
{
    WriteInt(B, m_Index);
    WriteString(B, (int*)&m_Name.FUN_10af9730());
}
