// Game/cConversationManager_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class Class_10A13BC0_Data
{
public:
    int* Unknown00;
    int Unknown04;
};

class cConversationManager
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual int Virtual23(int Key);

    void ResolvePending();

    char Unknown04[0x38];
    int Count;
    unsigned m_DataBytes;
    Class_10A13BC0_Data* Data;
};

// FUNCTION: 0x10A13BC0 ?ResolvePending@cConversationManager@@QAEXXZ
void cConversationManager::ResolvePending()
{
    int Num = Count;
    for (int i = 0; i < Num; i++)
    {
        int* Dest = Data[i].Unknown00;
        *Dest = Virtual23(Data[i].Unknown04);
    }
    unsigned Capacity;
    if (Data == 0)
        Capacity = 0;
    else
        Capacity = m_DataBytes / sizeof(Class_10A13BC0_Data);
    GetAllocator()->Virtual8(0, 0);
    if ((int)Capacity < 0)
    {
        int NewCapacity = 0;
        if (Capacity)
            NewCapacity = 0x10;
        Data = (Class_10A13BC0_Data*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Class_10A13BC0_Data), 0, 0, 0, 0);
        m_DataBytes = NewCapacity * sizeof(Class_10A13BC0_Data);
    }
    else if ((int)(Capacity - 16) >= 0)
    {
        GetAllocator()->Virtual5(Data);
        Data = 0;
        m_DataBytes = 0;
    }
    GetAllocator()->Virtual9();
    Count = 0;
}
