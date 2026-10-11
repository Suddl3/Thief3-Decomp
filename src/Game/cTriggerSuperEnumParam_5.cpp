// Game/cTriggerSuperEnumParam_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class Class_10E6C740_Member;

void FUN_10d3d3b0(void* Reader, int* Out);

void FUN_10d3ddc0(void* Reader, int* Out);

// cTriggerSuperEnumParam from include/Game/cTriggerSuperEnumParam.h, copied whole: slot 4 takes a string and slot 11 is this function.
class cTriggerSuperEnumParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int TestRelation(int A, const cTriggerSuperEnumParam* B);
    virtual void Virtual3();
    virtual void Virtual4(Class_109081E0* Text);
    virtual void Virtual5();
    virtual void AdvanceCursor();
    virtual int IsDone();
    virtual void Virtual8() = 0;
    virtual void Virtual9() = 0;
    virtual void Virtual10() = 0;
    virtual bool Load(int A, void* Reader);
    virtual void CopyValueFrom(const cTriggerSuperEnumParam* p1);

    Class_10E6C740_Member* m_SuperEnum;
    int m_Value;
};

// FUNCTION: 0x10A8C9E0 ?Load@cTriggerSuperEnumParam@@UAE_NHPAX@Z
bool cTriggerSuperEnumParam::Load(int A, void* Reader)
{
    if (A < 8)
    {
        FUN_10d3d3b0(Reader, &m_Value);
        return true;
    }
    Class_109081E0 Text;
    m_Value = -1;
    FUN_10d3ddc0(Reader, (int*)&Text);
    Virtual4(&Text);
    return true;
}
