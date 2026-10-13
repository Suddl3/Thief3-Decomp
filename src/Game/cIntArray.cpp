// Game/cIntArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1092A280.h"
#include "Game/Class_10C00A60.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x1092A330 ?FindOrAdd@cIntArray@@QAEHPBH@Z
int cIntArray::FindOrAdd(const int* Item)
{
    int Count = Unknown00;
    for (int i = 0; i < Count; i++)
    {
        if (Unknown08[i] == *Item)
            return i;
    }
    SetCount(Count + 1);
    Unknown08[Count] = *Item;
    return Count;
}

// FUNCTION: 0x109DFF00 ?Clear@cIntArray@@QAEXXZ
void cIntArray::Clear()
{
    for (int i = 0; i < Unknown00; i++)
    {
        int* Item = Unknown08 + i;
        if (*Item)
        {
            int Key = *Item - 4;
            GetAllocator()->Virtual5((void*)Key);
            *Item = 0;
        }
    }
    Unknown00 = 0;
}

// FUNCTION: 0x109DFF50 ?RemoveAt@cIntArray@@QAEXH@Z
void cIntArray::RemoveAt(int Index)
{
    if (Index != Unknown00 - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = Unknown00 - Index - 1;
        if (From != To && Count)
            memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(int));
    }
    SetCount(Unknown00 - 1);
}

// FUNCTION: 0x10A58C70 ?AppendAll@cIntArray@@QAEXABV1@@Z
void cIntArray::AppendAll(const cIntArray& Other)
{
    int OldCount = Count;
    SetCount(Other.Count + OldCount);
    for (int i = 0; i < Other.Count; i++)
        Data[OldCount + i] = Other.Data[i];
}

// FUNCTION: 0x10A58CB0 ?CopyFrom@cIntArray@@QAEXABV1@@Z
void cIntArray::CopyFrom(const cIntArray& Other)
{
    SetCount(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}

// FUNCTION: 0x10A81B10 ?InsertAt@cIntArray@@QAEXHPAH@Z
void cIntArray::InsertAt(int Index, int* Value)
{
    int Old = Unknown00;
    if (Index == Old)
    {
        ((Class_10C00A60*)this)->FUN_10c00a60(Old + 1);
        Data[Old] = *Value;
    }
    else
    {
        ((Class_10C00A60*)this)->FUN_10c00a60(Old + 1);
        int Dst = Index + 1;
        int Src = Index;
        int Move = Unknown00 - Index - 1;
        if (Src != Dst && Move)
            memmove(&Data[Dst], &Data[Src], Move * sizeof(int));
        Data[Index] = *Value;
    }
}

// FUNCTION: 0x10BFBD70 ?SetCount@cIntArray@@QAEXH@Z
void cIntArray::SetCount(int NewCount)
{
    int Capacity = !Data ? 0 : m_CapacityBytes / sizeof(int);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Data = (int*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(int), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(int);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Data = (int*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(int), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(int);
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}

// FUNCTION: 0x10C2A2D0 ?SetMember@cIntArray@@QAEXHD@Z
void cIntArray::SetMember(int Item, char Flag)
{
    int Index = FindIndex(Item);
    if (Flag == 1)
    {
        if (Index == -1)
        {
            int Count = Unknown00;
            SetCount(Count + 1);
            Data[Count] = Item;
        }
    }
    else if (Index != -1)
    {
        RemoveAt(Index);
    }
}
