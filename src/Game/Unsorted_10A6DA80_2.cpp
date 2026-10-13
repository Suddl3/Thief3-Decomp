// Game/Unsorted_10A6DA80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6B978.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h copied whole, with SetCount and the destructor inline as this unit compiles them.
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

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray* D);
};

cUObjectLinkManager* GetUObjectLinkManager();

// The object the global struct's field points at: slot 1 takes three ints.
class Class_10A6DB10_Unknown1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, int C);
};

struct Struct_10AA3520
{
    char Pad00[0x1C];
    Class_10A6DB10_Unknown1C* Unknown1C;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A6DB10 ?FUN_10a6db10@Class_10E6B978@@QAEXHHH@Z
void Class_10E6B978::FUN_10a6db10(int A, int B, int C)
{
    cIntArray Found;
    GetUObjectLinkManager()->Virtual4(A, 0, 0x2b21a41, &Found);
    for (int i = 0; i < Found.Unknown00; i++)
    {
        int Value = ((Class_10AAB5C0*)Found.Unknown08[i])->GetUnknown08();
        DAT_10f35dec->Unknown1C->Virtual1(Value, 0, 0);
    }
}
