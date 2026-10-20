// Game/Unsorted_10A32000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A32000.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32210.h"

Class_10905A90_Member* GetAllocator();

class Class_10A32210;

class Class_10A32210_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Virtual2(Class_10A32210* A, int B);
    virtual void Virtual3();
    virtual int Virtual4(Class_10A32210* A, int* B);
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Class_10A32210* A);
};

// FUNCTION: 0x10A32000 ?SetCount@Class_10A32000@@QAEXH@Z
void Class_10A32000::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes;
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity, 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity, 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10A32210 ?FUN_10a32210@Class_10A32210@@QAEHXZ
int Class_10A32210::FUN_10a32210()
{
    if (!Unknown00)
        return 1;
    if (!Unknown00->Virtual7(this))
        return 1;
    if (Unknown0C != -1)
        return 0;
    int Result = Unknown00->Virtual4(this, &Unknown0C);
    if (Result == 1 && !Unknown00->Virtual2(this, Unknown0C))
        Result = 2;
    return Result;
}
