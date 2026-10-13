// Game/cTriggerLinkParam_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

void ReadString(void* Reader, int* Out);

void FUN_10d3d430(void* Reader, void* Out);

extern const char DAT_10e6c040[];

extern const char DAT_10e4f474[];

class cTriggerLinkParam
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
    virtual void Virtual10();
    virtual bool Save(int A, void* Reader);
    void FUN_10a80000(cString* Value);

    char Pad04;
    char Unknown05;
    char Unknown06;
    char Unknown07;
    cString Unknown08;
    char Pad0C[0x4];
    cString Unknown10;
};

// FUNCTION: 0x10A80670 ?Save@cTriggerLinkParam@@UAE_NHPAX@Z
bool cTriggerLinkParam::Save(int A, void* Reader)
{
    GetAllocator()->Virtual8(0, 0);
    cString Text;
    ReadString(Reader, (int*)&Text);
    if (A > 10)
        FUN_10d3d430(Reader, &Unknown05);
    if (A > 12)
        FUN_10d3d430(Reader, &Unknown07);
    if (A > 14)
        ReadString(Reader, (int*)&Unknown10);
    if (A > 15)
        FUN_10d3d430(Reader, &Unknown06);
    if (Unknown05)
        Unknown08.FUN_1090a590(DAT_10e6c040);
    else if (Unknown06)
        Unknown08.FUN_1090a590(DAT_10e4f474);
    else
        FUN_10a80000(&Text);
    GetAllocator()->Virtual9();
    return true;
}
