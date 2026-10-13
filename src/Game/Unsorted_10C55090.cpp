// Game/Unsorted_10C55090.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A04240.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C551D0.h"

class Object_10C552D0_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C552D0_Member
{
public:
    ~Class_10C552D0_Member()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }

    Object_10C552D0_Member* Unknown00;
};

class Class_10C552D0 : public Class_10A04240
{
public:
    ~Class_10C552D0();

    Class_10C552D0_Member Unknown4C;
};

Class_10905A90_Member* GetAllocator();

class Class_10C551D0_Unknown04
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// The element: 8 bytes, an int and a pointer; the shrink calls Virtual2 on the pointer.
class Class_10C551D0_Unknown08
{
public:
    int Unknown00;
    Class_10C551D0_Unknown04* Unknown04;
};

// FUNCTION: 0x10C551D0 ?SetCount@Class_10C551D0@@QAEXH@Z
void Class_10C551D0::SetCount(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10C551D0_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_10C551D0_Unknown08* Element = (Class_10C551D0_Unknown08*)((char*)Unknown08 + i * sizeof(Class_10C551D0_Unknown08));
        Class_10C551D0_Unknown04** Slot = &Element->Unknown04;
        if (*Slot)
        {
            (*Slot)->Virtual2();
        }
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C551D0_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C551D0_Unknown08);
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
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C551D0_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C551D0_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10C551D0_Unknown08* Element = (Class_10C551D0_Unknown08*)((char*)Unknown08 + j * sizeof(Class_10C551D0_Unknown08));
        if (Element)
        {
            Element->Unknown00 = -1;
            Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10C552D0 ??1Class_10C552D0@@QAE@XZ
Class_10C552D0::~Class_10C552D0()
{
}
