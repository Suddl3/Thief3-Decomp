// Game/Unsorted_10BB1E10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9BCA0.h"
#include "Game/Struct_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

class AAIPawn;

class Class_10A7F5A0;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// Game/cIntArray.h has no destructor and an out-of-line SetCount; this copy inlines both, as the function does.
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

class Class_10A7F5A0
{
public:
    cIntArray FUN_10a7f5a0(int A, int B);
};

// The second argument: a virtual at slot 8.
class Class_10BB1E10_Param2
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

// The third argument: a virtual at slot 4 that returns the object to work on.
class Class_10BB1E10_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

// The class whose table at 0x10E8C7AC holds this function: slot 2.
class Class_10E8C7AC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb1e10(int A, Class_10BB1E10_Param2* B, Class_10BB1E10_Param3* C);
};

// FUNCTION: 0x10BB1E10 ?FUN_10bb1e10@Class_10E8C7AC@@UAEHHPAVClass_10BB1E10_Param2@@PAVClass_10BB1E10_Param3@@@Z
int Class_10E8C7AC::FUN_10bb1e10(int A, Class_10BB1E10_Param2* B, Class_10BB1E10_Param3* C)
{
    cIntArray Local = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        UObject* Item = (UObject*)Local.Unknown08[i];
        if (Item && Item->IsA(APawn::StaticClass()))
        {
            Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Item);
            if (Controller)
            {
                Struct_10B9BCA0* Holder = Controller->Unknown118;
                if (Holder)
                {
                    Class_10B9CAC0* Stack = Holder->Unknown08;
                    if (Stack)
                    {
                        Stack->FUN_10b9ed70((int)&cString("STATE_PATROL"));
                    }
                }
            }
        }
    }
    return 1;
}
