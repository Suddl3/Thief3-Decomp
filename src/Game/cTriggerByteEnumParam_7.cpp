// Game/cTriggerByteEnumParam_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

void FUN_10d3d360(void* A, int* B);

void FUN_10d3d3b0(void* A, int* B);

void FUN_10d3ddc0(void* A, int* B);

class Class_10A8C610_Unknown60
{
public:
    char Unknown00[0x34];
    FName* Unknown34;
    int Unknown38;
};

class Class_10A8C610_Unknown04
{
public:
    char Unknown00[0x60];
    Class_10A8C610_Unknown60* Unknown60;
};

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
    virtual void Virtual10();
    virtual bool Read(int A, void* Reader);

    Class_10A8C610_Unknown04* Unknown04;
    int m_Index;
    FName m_Name;
};

// FUNCTION: 0x10A8C610 ?Read@cTriggerByteEnumParam@@UAE_NHPAX@Z
bool cTriggerByteEnumParam::Read(int A, void* Reader)
{
    if (A < 8)
    {
        short Index;
        FUN_10d3d360(Reader, (int*)&Index);
        m_Index = Index;
        if (Unknown04 && Unknown04->Unknown60)
        {
            if (m_Index < Unknown04->Unknown60->Unknown38)
            {
                m_Name = Unknown04->Unknown60->Unknown34[m_Index];
            }
            else
            {
                m_Name.Value = 0;
            }
        }
        return true;
    }
    FUN_10d3d3b0(Reader, &m_Index);
    Class_109081E0 Text;
    FUN_10d3ddc0(Reader, (int*)&Text);
    m_Name = FName(Text.Unknown00 ? Text.Unknown00 : DAT_10e47660, FNAME_Add);
    return true;
}
