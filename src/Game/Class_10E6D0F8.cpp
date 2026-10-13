// Game/Class_10E6D0F8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A7F5A0.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h has no destructor and an out-of-line SetCount; this copy inlines both, as the function does.
class cIntArray
{
public:
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

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

class Class_10A9A020_Param2
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

class Class_10A9A020_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

class Class_10E6D0F8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a9a020(int A, Class_10A9A020_Param2* B, Class_10A9A020_Param3* C);

    void FUN_10a99f80(void* Item, Class_10A9A020_Param3* C);
};

// FUNCTION: 0x10A9A020 ?FUN_10a9a020@Class_10E6D0F8@@UAEHHPAVClass_10A9A020_Param2@@PAVClass_10A9A020_Param3@@@Z
int Class_10E6D0F8::FUN_10a9a020(int A, Class_10A9A020_Param2* B, Class_10A9A020_Param3* C)
{
    cIntArray Local = C->Virtual4(4)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
        FUN_10a99f80(Local.Unknown08[i], C);
    return 1;
}
