// Game/Unsorted_10A322B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A32370.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A322B0.h"
#include "Game/Class_10A32AB0_Element.h"

class Class_10A322B0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C56E40
{
public:
    Class_10C56E40() : Ptr(0) {}
    Class_10C56E40(const Class_10C56E40& Other)
    {
        Ptr = Other.Ptr;
        if (Ptr)
        {
            Ptr->Virtual1();
        }
    }
    ~Class_10C56E40()
    {
        if (Ptr)
        {
            Ptr->Virtual2();
        }
    }
    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10A322B0_Unknown08* Old = Ptr;
        Ptr = Other.Ptr;
        if (Ptr)
        {
            Ptr->Virtual1();
        }
        if (Old)
        {
            Old->Virtual2();
        }
        return *this;
    }

    Class_10A322B0_Unknown08* Ptr;
};

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A322B0 ?FUN_10a322b0@Class_10A322B0@@QAEXHH@Z
void Class_10A322B0::FUN_10a322b0(int A, int B)
{
    Class_10C56E40 Temp;
    Temp = Unknown08[A];
    Unknown08[A] = Unknown08[B];
    Unknown08[B] = Temp;
}

// FUNCTION: 0x10A32370 ?FUN_10a32370@Class_10A32370@@QAEXH@Z
void Class_10A32370::FUN_10a32370(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10A32AB0_Element*);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_10A32AB0_Element** Slot = Unknown08 + i;
        if (*Slot)
        {
            (*Slot)->Virtual2();
        }
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Class_10A32AB0_Element**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10A32AB0_Element*), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10A32AB0_Element*);
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
            Unknown08 = (Class_10A32AB0_Element**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10A32AB0_Element*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10A32AB0_Element*);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10A32AB0_Element** Element = Unknown08 + j;
        if (Element)
        {
            *Element = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
