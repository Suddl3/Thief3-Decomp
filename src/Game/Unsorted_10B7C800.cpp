// Game/Unsorted_10B7C800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10978090.h"
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

// The header's cUObjectLinkManager copied whole, with slot 3's and slot 5's real signature.
class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(void* A, void* B, void* C);
    virtual void Virtual4();
    virtual void Virtual5(void* A, int B, void* C, cIntArray* D, int E);
};

cUObjectLinkManager* GetUObjectLinkManager();

// The link object, as symbols.txt names its GetUnknown08.
class Class_10E6CE28
{
public:
    int GetUnknown08();
};

// The class the first parameter points at.
class Class_10B7DC60_Param0
{
public:
};

class Class_10E4B180
{
public:
    void UpdatePhysicsObject(Class_10B7DC60_Param0* A, void* B);
};

// FUNCTION: 0x10B7DAF0 ?UpdatePhysicsObject@Class_10E4B180@@QAEXPAVClass_10B7DC60_Param0@@PAX@Z
void Class_10E4B180::UpdatePhysicsObject(Class_10B7DC60_Param0* A, void* B)
{
    bool bFound = false;
    cIntArray Found;
    GetUObjectLinkManager()->Virtual5(A, 0, B, &Found, 3);
    for (int i = 0; i < Found.Unknown00; i++)
    {
        Class_10978090* Link = (Class_10978090*)Found.Unknown08[i];
        if ((int)Link->FUN_10978090() == ((Class_10E6CE28*)Link)->GetUnknown08() && !bFound)
        {
            bFound = true;
            if (A != (void*)Link->FUN_10978090())
                GetUObjectLinkManager()->Virtual3(A, A, Link);
        }
    }
}
