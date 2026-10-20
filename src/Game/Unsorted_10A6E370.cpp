// Game/Unsorted_10A6E370.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6B9F8.h"
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

// The header's cUObjectLinkManager copied whole, with slot 4's real signature.
class UClass;

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(UObject* A, int B, int C, cIntArray* D);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

cUObjectLinkManager* GetUObjectLinkManager();

// The header's Class_10F46DA0 copied whole, with slot 5's real signature.
class Class_10B697A0;

class Class_10E5B578;

class Class_10E5D650;

class Class_10E8C35C_Secondary;

struct Struct_10C14320;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E8C35C_Secondary* A, int B, Struct_10C14320* C, int D);
    virtual void Virtual2(Class_10E5B578* A);
    virtual void Virtual3(Class_10E5D650* Listener, int Code, int A, int B);
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// The link object, as symbols.txt names its GetUnknown08.
class Class_10E6CE28
{
public:
    int GetUnknown08();
};

// FUNCTION: 0x10A6E490 ?FUN_10a6e490@Class_10E6B9F8@@QAEXPAVUObject@@HHHH@Z
void Class_10E6B9F8::FUN_10a6e490(UObject* A, int B, int C, int Event, int Id)
{
    cIntArray Found;
    GetUObjectLinkManager()->Virtual4(A, 0, Id, &Found);
    for (int i = 0; i < Found.Unknown00; i++)
    {
        DAT_10f46da0->Virtual5(Event, ((Class_10E6CE28*)Found.Unknown08[i])->GetUnknown08(), B, C);
    }
}
