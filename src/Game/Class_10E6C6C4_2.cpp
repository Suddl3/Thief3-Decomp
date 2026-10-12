// Game/Class_10E6C6C4_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

void ReadString(void* Reader, int* Out);

enum EFindName
{
    FNAME_Find = 0,
    FNAME_Add = 1,
    FNAME_Intrinsic = 2
};

class FName
{
public:
    FName(const char* Name, EFindName FindType);

    unsigned long Value;
};

class Class_10E6C6C4
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
    virtual bool ReadValue(int A, void* Reader);

    FName m_Value;
};

// FUNCTION: 0x10A8C0B0 ?ReadValue@Class_10E6C6C4@@UAE_NHPAX@Z
bool Class_10E6C6C4::ReadValue(int A, void* Reader)
{
    cString Text;
    ReadString(Reader, (int*)&Text);
    m_Value = FName(Text.Unknown00 ? Text.Unknown00 : DAT_10e47660, FNAME_Intrinsic);
    return true;
}
