// Game/cFlagElementLogic_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

void WriteInt(void* A, int B);

void WriteString(void* Stream, int* Value);

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

class cFlagElementLogic
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void WriteFields(void* Stream, int Unused1, int Unused2);

    FName m_FlagName;
    int m_ExpectedValue;
};

// FUNCTION: 0x10A84A30 ?WriteFields@cFlagElementLogic@@UAEXPAXHH@Z
void cFlagElementLogic::WriteFields(void* Stream, int Unused1, int Unused2)
{
    WriteString(Stream, (int*)&m_FlagName.FUN_10af9730());
    WriteInt(Stream, m_ExpectedValue);
}
