// Game/Unsorted_10A9D1B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The game's array of ints, with SetCount and the destructor inline as this
// function compiles them.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
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
                Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
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
    int* Unknown08;
};

class Class_10A7F5A0
{
public:
    cIntArray FUN_10a7f5a0(int A, int B);

    char Pad00[0x1];
};

// The message object and its bases: the base's destructor puts the base's
// vtable back.
class Class_10E50610
{
public:
    Class_10E50610() : Unknown04(0) {}
    virtual ~Class_10E50610() {}

    int Unknown04;
    int Unknown08;
};

class Class_10E5D5E0 : public Class_10E50610
{
public:
    virtual ~Class_10E5D5E0() {}
    virtual Class_10E5D5E0* Clone();
};

class Class_10E6D208 : public Class_10E5D5E0
{
public:
    Class_10E6D208() { Unknown08 = 1; }
    Class_10E6D208* Clone();
};

class Class_10E6D208_Param2
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

class Class_10E6D208_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, void* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6D218
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Virtual2(int A, Class_10E6D208_Param2* B, Class_10E6D208_Param3* C);
};

// FUNCTION: 0x10A9D1B0 ?Virtual2@Class_10E6D218@@UAEHHPAVClass_10E6D208_Param2@@PAVClass_10E6D208_Param3@@@Z
int Class_10E6D218::Virtual2(int A, Class_10E6D208_Param2* B, Class_10E6D208_Param3* C)
{
    cIntArray Local = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
    Class_10E6D208 Msg;
    Msg.Unknown04 = B->Virtual8();
    for (int i = 0; i < Local.Unknown00; i++)
    {
        DAT_10f46da0->Virtual5(0x12, Local.Unknown08[i], &Msg, 0);
    }
    return 1;
}
