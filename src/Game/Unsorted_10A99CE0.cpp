// Game/Unsorted_10A99CE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A7F5A0.h"

Class_10905A90_Member* FUN_10905aa0();

// Game/Class_10BFBD70.h has no destructor and an out-of-line FUN_10bfbd70; this copy inlines both, as the function does.
class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        FUN_10905aa0()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                FUN_10905aa0()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        FUN_10905aa0()->Virtual9();
        Unknown00 = NewCount;
    }

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
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

    Class_10E6D110* FUN_10a99640();
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

    Class_10E6D104* FUN_10a99640();
    void FUN_10a9a700(void* Item, Class_10A9A5D0_Param3* C);

    void* Unknown00;
};

// FUNCTION: 0x10A9A4A0 ?FUN_10a9a4a0@Class_10E6D110@@UAEHHPAVClass_10A9A4A0_Param2@@PAVClass_10A9A4A0_Param3@@@Z
int Class_10E6D110::FUN_10a9a4a0(int A, Class_10A9A4A0_Param2* B, Class_10A9A4A0_Param3* C)
{
    Class_10BFBD70 Local = C->Virtual4(2)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
        FUN_10a9a350(Local.Unknown08[i], C);
    return 1;
}

// FUNCTION: 0x10A9A5D0 ?FUN_10a9a5d0@Class_10E6D104@@UAEHHPAVClass_10A9A5D0_Param2@@PAVClass_10A9A5D0_Param3@@@Z
int Class_10E6D104::FUN_10a9a5d0(int A, Class_10A9A5D0_Param2* B, Class_10A9A5D0_Param3* C)
{
    Class_10BFBD70 Local = C->Virtual4(2)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
        FUN_10a9a700(Local.Unknown08[i], C);
    return 1;
}
