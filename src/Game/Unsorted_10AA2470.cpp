// Game/Unsorted_10AA2470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A7F5A0.h"
#include "Game/Class_10E6D3F4.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h's cIntArray, with SetCount written out: the function inlines it.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                m_CapacityBytes = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
    }

    int Unknown00;
    int m_CapacityBytes;
    void** Unknown08;
};

// The object whose slot 8 gives the number of emitters.
class Class_10AA2470_Param2
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
    virtual int Virtual8();
};

// The object whose slot 4 gives the emitter holder.
class Class_10AA2470_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

// FUNCTION: 0x10AA2470 ?FUN_10aa2470@Class_10E6D3F4@@UAEHHPAVClass_10AA2470_Param2@@PAVClass_10AA2470_Param3@@@Z
int Class_10E6D3F4::FUN_10aa2470(int A, Class_10AA2470_Param2* B, Class_10AA2470_Param3* C)
{
    cIntArray Local = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        AEmitter* Item = (AEmitter*)Local.Unknown08[i];
        if (Item && Item->IsA(AEmitter::StaticClass()))
            Item->Virtual93();
    }
    return 1;
}
