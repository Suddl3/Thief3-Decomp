// Game/cFlagElementLogic_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

class Object_10A84AC0
{
public:
    virtual void Virtual0(const cString& Name);
    virtual void Virtual1(int Value);
};

class cFlagElementLogic
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Write(Object_10A84AC0* Writer);

    FName m_FlagName;
    int m_ExpectedValue;
};

// FUNCTION: 0x10A84AC0 ?Write@cFlagElementLogic@@UAEHPAVObject_10A84AC0@@@Z
int cFlagElementLogic::Write(Object_10A84AC0* Writer)
{
    Writer->Virtual0(m_FlagName.FUN_10af9730());
    Writer->Virtual1(m_ExpectedValue);
    return 1;
}
