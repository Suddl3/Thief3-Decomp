// Game/Unsorted_10C18520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0C360.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10C05A80.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h copied whole, with SetCount inline as this unit compiles it.
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

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

// The object the helper returns: the search's centre sits inside it.
struct Class_10C186E0_Center
{
    BYTE Unknown00[0x2C];
    Struct_10C05A80 Center;
};

// The object the global points at: its third table slot answers a question.
class Class_10C186E0_Unknown14
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool Virtual6();
};

class Class_10FF667C
{
public:
    BYTE Unknown00[0x10];
    Class_10C0C360* Unknown10;
    Class_10C186E0_Unknown14* Unknown14;
};

extern Class_10FF667C* DAT_10ff667c;

// The object the function is a method of.
class Class_10C186E0
{
public:
    void FUN_10c186e0();
    void FUN_10c18520(int Element);

    BYTE Unknown00[0x4];
    Class_10C7D570* Unknown04;
    BYTE Unknown08[0x94];
    float Unknown9C;
};

// FUNCTION: 0x10C186E0 ?FUN_10c186e0@Class_10C186E0@@QAEXXZ
void Class_10C186E0::FUN_10c186e0()
{
    cIntArray Local;
    DAT_10ff667c->Unknown10->FindInRadius(&Local, &((Class_10C186E0_Center*)Unknown04->FUN_10c7d570())->Center, Unknown9C);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        int Element = Local.Data[i];
        if (Element != 0 && DAT_10ff667c->Unknown14->Virtual6())
            FUN_10c18520(Element);
    }
}
