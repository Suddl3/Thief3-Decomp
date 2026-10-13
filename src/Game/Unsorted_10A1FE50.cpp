// Game/Unsorted_10A1FE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A21280.h"
#include "Game/Class_10BD4120.h"
#include <new>
#include "Game/Class_10A21480.h"
#include "Game/Class_10BAEC80.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10A21280_Element
{
    char Unknown00[0x34];
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A1FF60
{
public:
    Class_10A1FF60();

    int Unknown00;
};

extern Class_10A1FF60* DAT_10f39f04;

struct Struct_10BD4120_Element
{
    char Unknown00[0x18];
};

class Class_10967650
{
public:
    Class_10967650() { Unknown148 = -1; FUN_10967650(); }
    void FUN_10967650();

    char Unknown00[0x148];
    int Unknown148;
};

struct Struct_10C22AD0
{
    char Unknown00[0x24];
};

// FUNCTION: 0x10A20440 ?FUN_10a20440@@YAXXZ
void FUN_10a20440()
{
    if (!DAT_10f39f04)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f39f04 = new(0, 0, 0, 0, 0) Class_10A1FF60;
        GetAllocator()->Virtual9();
    }
}

// FUNCTION: 0x10A20940 ?FUN_10a20940@Class_10BD4120@@QAEXH@Z
void Class_10BD4120::FUN_10a20940(int NewCount)
{
    int Capacity = !m_Buffer ? 0 : (unsigned int)Unknown04 / sizeof(Struct_10BD4120_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10BD4120_Element), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Struct_10BD4120_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10BD4120_Element), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Struct_10BD4120_Element);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10A20F60 ?FUN_10a20f60@Class_10A21480@@QAEXH@Z
void Class_10A21480::FUN_10a20f60(int Count)
{
    int OldCount = Unknown00;
    int Capacity = !m_Buffer ? 0 : Unknown04 / sizeof(Class_10967650);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Class_10967650), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10967650);
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Class_10967650), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10967650);
        }
    }
    for (int i = OldCount; i < Count; i++)
    {
        new ((Class_10967650*)((char*)m_Buffer + i * sizeof(Class_10967650))) Class_10967650();
    }
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}

// FUNCTION: 0x10A211E0 ?FUN_10a211e0@Class_10BAEC80@@QAEXH@Z
void Class_10BAEC80::FUN_10a211e0(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : m_BlockBytes / sizeof(Struct_10C22AD0);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10C22AD0), 0, 0, 0, 0);
        m_BlockBytes = NewCapacity * sizeof(Struct_10C22AD0);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_BlockBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10C22AD0), 0, 0, 0, 0);
            m_BlockBytes = NewCapacity * sizeof(Struct_10C22AD0);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10A21280 ?Resize@Class_10A21280@@QAEXH@Z
void Class_10A21280::Resize(int NewCount)
{
    int Capacity = !m_Buffer ? 0 : m_BufferBytes / sizeof(Struct_10A21280_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10A21280_Element), 0, 0, 0, 0);
        m_BufferBytes = NewCapacity * sizeof(Struct_10A21280_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            m_BufferBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10A21280_Element), 0, 0, 0, 0);
            m_BufferBytes = NewCapacity * sizeof(Struct_10A21280_Element);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
