// Game/Class_10943520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10943520.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109434F0.h"
#include "Game/cShortArray.h"
#include "Game/cEntryArray.h"

Class_10905A90_Member* GetAllocator();

// Freed with operator delete alone: no destructor is called on it.
struct Struct_10943240
{
};

// The element: 8 bytes, an int and a pointer.
class Class_10943240_Unknown08
{
public:
    int Unknown00;
    Struct_10943240* Unknown04;
};

// FUNCTION: 0x10943240 ?FUN_10943240@Class_10943520@@QAEXH@Z
void Class_10943520::FUN_10943240(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10943240_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_10943240_Unknown08* Element = (Class_10943240_Unknown08*)((char*)Unknown08 + i * sizeof(Class_10943240_Unknown08));
        if (Element->Unknown04)
            delete Element->Unknown04;
        Element->Unknown04 = 0;
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10943240_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10943240_Unknown08);
        Unknown08 = Block;
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
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10943240_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10943240_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10943240_Unknown08* Element = (Class_10943240_Unknown08*)((char*)Unknown08 + j * sizeof(Class_10943240_Unknown08));
        if (Element)
        {
            Element->Unknown00 = -1;
            Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10943520 ?Clear@Class_10943520@@QAEXXZ
void Class_10943520::Clear()
{
    FUN_10943240(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
