// Game/Class_10E6C77C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

extern const char DAT_10e5d9f0[];

class Class_10E6C77C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual cString GetText();

    FName m_Name;
};

// FUNCTION: 0x10A8D220 ?GetText@Class_10E6C77C@@UAE?AVcString@@XZ
cString Class_10E6C77C::GetText()
{
    if (!m_Name.Value)
        return cString(DAT_10e5d9f0);
    FName Name = m_Name;
    return cString(Name.FUN_10af9730());
}
