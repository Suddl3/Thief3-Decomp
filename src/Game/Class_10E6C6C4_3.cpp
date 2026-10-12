// Game/Class_10E6C6C4_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

extern const char DAT_10e5da10[];

class Class_10E6C6C4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual cString GetValue();

    FName m_Value;
};

// FUNCTION: 0x10A8C140 ?GetValue@Class_10E6C6C4@@UAE?AVcString@@XZ
cString Class_10E6C6C4::GetValue()
{
    if (!m_Value.Value)
        return cString(DAT_10e5da10);
    FName Name = m_Value;
    return cString(Name.FUN_10af9730());
}
