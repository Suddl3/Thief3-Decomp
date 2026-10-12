// Game/cTriggerByteEnumParam_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Struct_10A8C2B0_Outer.h"

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

struct Struct_10A8C2B0_Inner
{
    char Unknown00[0x34];
    FName* Unknown34;
    int Unknown38;
};

cString FUN_1090a660(const char* Format, ...);

class cTriggerByteEnumParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Compare(int p1, cTriggerByteEnumParam* p2);
    virtual cString GetValueText();
    virtual void Virtual4();
    virtual void FirstValue();
    virtual void NextValue();
    virtual int IsAtEnd();
    virtual void Virtual8();
    virtual bool HasIndex();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void CopyFrom(cTriggerByteEnumParam* p1);

    cTriggerByteEnumParam();

    Struct_10A8C2B0_Outer* Unknown04;
    int m_Index;
    int m_Name;
};

// FUNCTION: 0x10A8C720 ?GetValueText@cTriggerByteEnumParam@@UAE?AVcString@@XZ
cString cTriggerByteEnumParam::GetValueText()
{
    if (m_Index == -1)
        return cString("Byte/Enum");
    if (Unknown04 && Unknown04->Unknown60 && m_Index < Unknown04->Unknown60->Unknown38)
        return cString(Unknown04->Unknown60->Unknown34[m_Index].FUN_10af9730());
    return cString(FUN_1090a660("%d", m_Index));
}
