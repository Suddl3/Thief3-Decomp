// Game/Unsorted_10B8FB00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A7F5A0.h"
#include "Game/Struct_10C09A10.h"

Class_10905A90_Member* GetAllocator();

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

// The object an actor holds at 0xB0: a flag at 0x8 and a virtual at slot 6.
class Class_10B8FB00_UnknownB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Struct_10C09A10* Virtual6();

    char Pad04[0x4];
    int Unknown08;
};

// Engine/EngineClasses.h's AActor, with the pointer at 0xB0 the code reads.
class AActor : public UObject
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)

public:
    char Pad2C[0x84];
    Class_10B8FB00_UnknownB0* UnknownB0;
};

class Class_10B8FB00_Param2
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

class Class_10B8FB00_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

// Game/Class_10E89800.h copied whole, with the vtable it heads: slot 2 is this function.
class Class_10E89800
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10b8fb00(int A, Class_10B8FB00_Param2* B, Class_10B8FB00_Param3* C);
};

// FUNCTION: 0x10B8FB00 ?FUN_10b8fb00@Class_10E89800@@UAEHHPAVClass_10B8FB00_Param2@@PAVClass_10B8FB00_Param3@@@Z
int Class_10E89800::FUN_10b8fb00(int A, Class_10B8FB00_Param2* B, Class_10B8FB00_Param3* C)
{
    cIntArray Local = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        UObject* Obj = (UObject*)Local.Unknown08[i];
        if (Obj && Obj->IsA(AActor::StaticClass()))
        {
            AActor* Actor = (AActor*)Obj;
            Class_10B8FB00_UnknownB0* Goal = Actor->UnknownB0;
            if (Goal && Goal->Unknown08 == 1)
                Goal->Virtual6()->FUN_10b8c080();
        }
    }
    return 1;
}
