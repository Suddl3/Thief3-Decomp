// Game/Unsorted_10A31620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A31F00.h"
#include "Game/Class_10A32270.h"
#include "Game/Class_10E663C8.h"

class Class_10A31F00;

class Class_10A31F00_Owner
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Virtual2(Class_10A31F00* A, int B);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Class_10A31F00* A);
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern Class_10E663C8* DAT_10f39f3c;

// FUNCTION: 0x10A31E70 ?FUN_10a31e70@@YAXXZ
void FUN_10a31e70()
{
    if (!DAT_10f39f3c)
        DAT_10f39f3c = new(0, 0, 0, 0, 0) Class_10E663C8;
}

// FUNCTION: 0x10A31F00 ?Remove@Class_10A31F00@@QAEHXZ
int Class_10A31F00::Remove()
{
    if (!m_Owner)
        return 0;
    if (!m_Owner->Virtual7(this))
        return 0;
    int Result = m_Owner->Virtual2(this, m_Index);
    m_Index = -1;
    return Result;
}

// FUNCTION: 0x10A32270 ?Clear@Class_10A32270@@QAEXXZ
void Class_10A32270::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
