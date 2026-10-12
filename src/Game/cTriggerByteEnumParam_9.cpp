// Game/cTriggerByteEnumParam_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class cTriggerByteEnumParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Compare(int p1, cTriggerByteEnumParam* p2);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FirstValue();
    virtual void NextValue();
    virtual int IsAtEnd();
    virtual cString GetCurrentValue();
    virtual bool HasIndex();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void CopyFrom(cTriggerByteEnumParam* p1);

    cTriggerByteEnumParam();

    Struct_10A8C2B0_Outer* Unknown04;
    int m_Index;
    int m_Name;
};

extern int DAT_10f3a1f0;

extern const char DAT_10e6c100[];

extern const char DAT_10e48c2c[];

cString FUN_1090a660(const char* Format, int Value);

// FUNCTION: 0x10A8C830 ?GetCurrentValue@cTriggerByteEnumParam@@UAE?AVcString@@XZ
cString cTriggerByteEnumParam::GetCurrentValue()
{
    if (Unknown04 && Unknown04->Unknown60)
    {
        int Count = Unknown04->Unknown60->Unknown38;
        if (DAT_10f3a1f0 < Count)
            return cString(Unknown04->Unknown60->Unknown34[DAT_10f3a1f0].FUN_10af9730());
        return cString(DAT_10e6c100);
    }
    return cString(FUN_1090a660(DAT_10e48c2c, DAT_10f3a1f0));
}
