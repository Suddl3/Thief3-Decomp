// Game/Unsorted_10A744B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(UObject* A, int B, int C, int* D, int E);
};

cUObjectLinkManager* GetUObjectLinkManager();

// cIntArray: the array the link manager fills: the count, the block's size and the block.
class cIntArray
{
public:
    cIntArray()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

template AActor* Cast<AActor>(UObject* Src);

// The class whose vtable holds this function: slot 15 is it, slot 16 is called.
class Class_10E6BB88
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
    virtual void FUN_10a744d0(UObject* Src, int B, int C);
    virtual void Virtual16(AActor* Actor, UObject* Item);
};

// FUNCTION: 0x10A744D0 ?FUN_10a744d0@Class_10E6BB88@@UAEXPAVUObject@@HH@Z
void Class_10E6BB88::FUN_10a744d0(UObject* Src, int B, int C)
{
    cIntArray Local;

    {
        cIntArray Temp;

        GetUObjectLinkManager()->Virtual5(Src, 0, 0x29038a6, &Local.Unknown00, 1);

        for (int i = 0; i < Local.Unknown00; i++)
        {
            AActor* Actor = Cast<AActor>(Src);
            Virtual16(Actor, (UObject*)Local.Unknown08[i]);
        }
    }
}
