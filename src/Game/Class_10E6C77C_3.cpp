// Game/Class_10E6C77C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

extern const char DAT_10e5d9f0[];

class Class_10E6C77C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Class_109081E0 GetText();

    FName m_Name;
};

// FUNCTION: 0x10A8D220 ?GetText@Class_10E6C77C@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E6C77C::GetText()
{
    if (!m_Name.Value)
        return Class_109081E0(DAT_10e5d9f0);
    FName Name = m_Name;
    return Class_109081E0(Name.FUN_10af9730());
}
