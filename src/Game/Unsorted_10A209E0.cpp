// Game/Unsorted_10A209E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"

// A point: three coordinates.
struct Class_10A20BD0_Vector
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// A point of a bounds list.
struct Class_10A20BD0_Item
{
    Class_10A20BD0_Vector Position;
    char Unknown0C[0x50];
};

// An entry of the bounds list: a count of points and the points themselves.
struct Class_10A20BD0_Entry
{
    char Unknown00[0x14];
    int Unknown14;
    char Unknown18[0x04];
    Class_10A20BD0_Item* Unknown1C;
    char Unknown20[0x04];
};

class Class_10A20BD0
{
public:
    void FUN_10a20bd0(int Index, int EndIndex, Class_10A20BD0_Vector* Min, Class_10A20BD0_Vector* Max);

    char Unknown00[0x30];
    Class_10A20BD0_Entry* Unknown30;
};

Class_10905A90_Member* GetAllocator();

struct Struct_109481F0;

// The element of the array: the objects the array holds, one per slot.
class Class_10E4A668
{
public:
    Class_10E4A668();

    // The vtable's slots; the array calls the one in slot 5.
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10946b90(int A);

    char Unknown04[0xAC];
    Struct_109481F0* Unknown0B0;
    char Unknown0B4[0x3C];
    int Unknown0F0;
    char Unknown0F4[0xB8];
};

class Class_10A209E0
{
public:
    void FUN_10a209e0(int Count);

    int m_Count;
    int Unknown04;
    Class_10E4A668* m_Items;
};

// FUNCTION: 0x10A209E0 ?FUN_10a209e0@Class_10A209E0@@QAEXH@Z
void Class_10A209E0::FUN_10a209e0(int Count)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : Unknown04 / sizeof(Class_10E4A668);
    for (int i = Count; i < OldCount; i++)
        m_Items[i].FUN_10946b90(0);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        m_Items = (Class_10E4A668*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Class_10E4A668), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10E4A668);
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            m_Items = (Class_10E4A668*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Class_10E4A668), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10E4A668);
        }
    }
    for (int i = OldCount; i < Count; i++)
        new (&m_Items[i]) Class_10E4A668();
    GetAllocator()->Virtual9();
    m_Count = Count;
}

// FUNCTION: 0x10A20BD0 ?FUN_10a20bd0@Class_10A20BD0@@QAEXHHPAUClass_10A20BD0_Vector@@0@Z
void Class_10A20BD0::FUN_10a20bd0(int Index, int EndIndex, Class_10A20BD0_Vector* Min, Class_10A20BD0_Vector* Max)
{
    if (Index == EndIndex)
    {
        Max->Unknown00 = 0.0f;
        Max->Unknown04 = 0.0f;
        Max->Unknown08 = 0.0f;
        Min->Unknown00 = 0.0f;
        Min->Unknown04 = 0.0f;
        Min->Unknown08 = 0.0f;
        return;
    }

    Class_10A20BD0_Item* Items = Unknown30[Index].Unknown1C;

    *Max = Items[0].Position;
    *Min = *Max;

    for (int E = Index; E < EndIndex; E++)
    {
        for (int I = 0; I < Unknown30[E].Unknown14; I++)
        {
            if (Min->Unknown00 > Unknown30[E].Unknown1C[I].Position.Unknown00)
                Min->Unknown00 = Unknown30[E].Unknown1C[I].Position.Unknown00;
            if (Min->Unknown04 > Unknown30[E].Unknown1C[I].Position.Unknown04)
                Min->Unknown04 = Unknown30[E].Unknown1C[I].Position.Unknown04;
            if (Min->Unknown08 > Unknown30[E].Unknown1C[I].Position.Unknown08)
                Min->Unknown08 = Unknown30[E].Unknown1C[I].Position.Unknown08;
            if (Max->Unknown00 < Unknown30[E].Unknown1C[I].Position.Unknown00)
                Max->Unknown00 = Unknown30[E].Unknown1C[I].Position.Unknown00;
            if (Max->Unknown04 < Unknown30[E].Unknown1C[I].Position.Unknown04)
                Max->Unknown04 = Unknown30[E].Unknown1C[I].Position.Unknown04;
            if (Max->Unknown08 < Unknown30[E].Unknown1C[I].Position.Unknown08)
                Max->Unknown08 = Unknown30[E].Unknown1C[I].Position.Unknown08;
        }
    }
}
