// Game/Unsorted_10BA0EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E97BB8.h"
#include "Game/Class_10E97BC8.h"
#include "Game/Class_10E97BE8.h"
#include "Game/Class_10E97CC0.h"
#include "Game/cIntArray.h"

// The game's memory manager releases the object with the global operator.
void __cdecl operator delete(void* Ptr);

// cIntArray::SetCount is the game's (0x109ED5E0): inlined on normal paths,
// called from unwind funclets.
__forceinline void cIntArray::SetCount(int Count)
{
    int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(int);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(int);
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(int);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}

// The members destroyed through a virtual destructor in the vtable's slot 0.
class Class_10BA0EB0_Unknown0C
{
public:
    virtual ~Class_10BA0EB0_Unknown0C();
};

class Class_10BA0EB0_Unknown14
{
public:
    virtual ~Class_10BA0EB0_Unknown14();
};

class Class_10BA0EB0_Unknown18
{
public:
    virtual ~Class_10BA0EB0_Unknown18();
};

// The members destroyed through a virtual destructor in the vtable's slot 1.
class Class_10BA0EB0_Unknown08
{
public:
    virtual void Virtual0();
    virtual ~Class_10BA0EB0_Unknown08();
};

class Class_10BA0EB0_Unknown10
{
public:
    virtual void Virtual0();
    virtual ~Class_10BA0EB0_Unknown10();
};

class Class_10BA0EB0_Unknown28
{
public:
    virtual void Virtual0();
    virtual ~Class_10BA0EB0_Unknown28();
};

class Class_10BA0EB0_Unknown30
{
public:
    virtual void Virtual0();
    virtual ~Class_10BA0EB0_Unknown30();
};

class Class_10E8C118
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10ba0eb0();

    Class_10E97CC0* Unknown04;
    Class_10BA0EB0_Unknown08* Unknown08;
    Class_10BA0EB0_Unknown0C* Unknown0C;
    Class_10BA0EB0_Unknown10* Unknown10;
    Class_10BA0EB0_Unknown14* Unknown14;
    Class_10BA0EB0_Unknown18* Unknown18;
    Class_10E97BE8* Unknown1C;
    Class_10E97BC8* Unknown20;
    Class_10E97BB8* Unknown24;
    Class_10BA0EB0_Unknown28* Unknown28;
    cIntArray* Unknown2C;
    Class_10BA0EB0_Unknown30* Unknown30;
    char Unknown34[0x94 - 0x34];
    bool Unknown94;
};

// FUNCTION: 0x10BA0EB0 ?FUN_10ba0eb0@Class_10E8C118@@UAEXXZ
void Class_10E8C118::FUN_10ba0eb0()
{
    if (Unknown04)
    {
        delete Unknown04;
        Unknown04 = 0;
    }
    if (Unknown08)
    {
        delete Unknown08;
        Unknown08 = 0;
    }
    if (Unknown0C)
    {
        delete Unknown0C;
        Unknown0C = 0;
    }
    if (Unknown10)
    {
        delete Unknown10;
        Unknown10 = 0;
    }
    if (Unknown14)
    {
        delete Unknown14;
        Unknown14 = 0;
    }
    if (Unknown18)
    {
        delete Unknown18;
        Unknown18 = 0;
    }
    Class_10E97BE8* Object = Unknown1C;
    if (Object)
    {
        Object->Class_10E97BE8::~Class_10E97BE8();
        ::operator delete(Object);
        Unknown1C = 0;
    }
    if (Unknown20)
    {
        delete Unknown20;
        Unknown20 = 0;
    }
    Class_10E97BB8* Manager = Unknown24;
    if (Manager)
    {
        Manager->FUN_10c08880();
        delete Manager;
        Unknown24 = 0;
    }
    if (Unknown28)
    {
        delete Unknown28;
        Unknown28 = 0;
    }
    if (Unknown2C)
    {
        delete Unknown2C;
        Unknown2C = 0;
    }
    if (Unknown30)
    {
        delete Unknown30;
        Unknown30 = 0;
    }
    Unknown94 = false;
}
