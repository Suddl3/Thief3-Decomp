// Game/Unsorted_10A706B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AA82D0.h"

Class_10905A90_Member* GetAllocator();

class UClass;

class Class_10B47720;

struct Struct_10B4C2C0;

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

// The header's cUObjectLinkManager copied whole, with slot 5's fourth argument named.
class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray* D);
    virtual void Virtual5(int A, int B, int C, cIntArray* D, int E);
    virtual void Virtual6(Class_10AA82D0* A);
};

cUObjectLinkManager* GetUObjectLinkManager();

// The header's Class_10B39870 copied whole, with the flag byte at 0x70 named.
class Class_10B39870
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Unknown10[0x60];
    unsigned char Unknown70;
};

class Class_10A706B0
{
public:
    void FUN_10a706b0(int A, int B);
    void FUN_10a6ff90(int A, Class_10AA82D0* B);
};

// FUNCTION: 0x10A706B0 ?FUN_10a706b0@Class_10A706B0@@QAEXHH@Z
void Class_10A706B0::FUN_10a706b0(int A, int B)
{
    cIntArray Local;
    GetUObjectLinkManager()->Virtual5(A, 0, 0x2391e18, &Local, 3);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        Class_10AA82D0* Element = (Class_10AA82D0*)Local.Unknown08[i];
        if (((Class_10B39870*)Element->GetLinkedObject())->Unknown70 & 1)
            FUN_10a6ff90(A, Element);
    }
}
