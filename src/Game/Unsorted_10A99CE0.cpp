// Game/Unsorted_10A99CE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A7F5A0.h"
#include "Core/Core.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10AAB5C0.h"

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

class Class_10A9A4A0_Param2
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

class Class_10A9A4A0_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

// Game/Class_10E6D110.h copied whole, with the vtable it heads: slot 2 is this function.
class Class_10E6D110
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a9a4a0(int A, Class_10A9A4A0_Param2* B, Class_10A9A4A0_Param3* C);

    Class_10E6D110* Construct();
    void FUN_10a9a350(void* Item, Class_10A9A4A0_Param3* C);

    void* Unknown00;
};

class Class_10A9A5D0_Param2
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

class Class_10A9A5D0_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

// Game/Class_10E6D104.h copied whole, with the vtable it heads: slot 2 is this function.
class Class_10E6D104
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a9a5d0(int A, Class_10A9A5D0_Param2* B, Class_10A9A5D0_Param3* C);

    Class_10E6D104* Construct();
    void FUN_10a9a700(void* Item, Class_10A9A5D0_Param3* C);

    void* Unknown00;
};

class Class_10A99F80_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

class Class_10E6D0F8
{
public:
    void FUN_10a99ce0(int A, Class_10A73EF0_Object* B, int C, Class_10AAB5C0* D, Class_10AAB5C0* E, Class_10AAB5C0* F);
    int FUN_10a99f80(int A, Class_10A99F80_Param* B);
};

extern UClass* DAT_10f3eda0;

Class_10A73EF0_Table* FUN_10af3470();

UClass* FUN_10af1d40(const char* A);

void FUN_10aef840();

// FUNCTION: 0x10A99F80 ?FUN_10a99f80@Class_10E6D0F8@@QAEHHPAVClass_10A99F80_Param@@@Z
int Class_10E6D0F8::FUN_10a99f80(int A, Class_10A99F80_Param* B)
{
    Class_10AAB5C0* V = B->Virtual4(0);
    Class_10A73EF0_Object* Obj = FUN_10af3470()->FUN_10af33e0(V->GetUnknown08());
    if (!DAT_10f3eda0)
    {
        DAT_10f3eda0 = FUN_10af1d40("Core");
        FUN_10aef840();
    }
    if (!((UObject*)Obj)->IsA(DAT_10f3eda0))
        FUN_10a99ce0(A, Obj, V->GetUnknown08(), B->Virtual4(1), B->Virtual4(2), B->Virtual4(3));
    return 1;
}

// FUNCTION: 0x10A9A4A0 ?FUN_10a9a4a0@Class_10E6D110@@UAEHHPAVClass_10A9A4A0_Param2@@PAVClass_10A9A4A0_Param3@@@Z
int Class_10E6D110::FUN_10a9a4a0(int A, Class_10A9A4A0_Param2* B, Class_10A9A4A0_Param3* C)
{
    cIntArray Local = C->Virtual4(2)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
        FUN_10a9a350(Local.Unknown08[i], C);
    return 1;
}

// FUNCTION: 0x10A9A5D0 ?FUN_10a9a5d0@Class_10E6D104@@UAEHHPAVClass_10A9A5D0_Param2@@PAVClass_10A9A5D0_Param3@@@Z
int Class_10E6D104::FUN_10a9a5d0(int A, Class_10A9A5D0_Param2* B, Class_10A9A5D0_Param3* C)
{
    cIntArray Local = C->Virtual4(2)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
        FUN_10a9a700(Local.Unknown08[i], C);
    return 1;
}
