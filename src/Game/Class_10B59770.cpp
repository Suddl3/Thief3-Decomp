// Game/Class_10B59770.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B59770.h"
#include "Game/Struct_10B597B0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10ABC210 ?Resize@Class_10B59770@@QAEXH@Z
void Class_10B59770::Resize(int NewCount)
{
    int Capacity = !Data ? 0 : m_AllocBytes / sizeof(Struct_10B597B0);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Data = (Struct_10B597B0*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Struct_10B597B0), 0, 0, 0, 0);
        m_AllocBytes = NewCapacity * sizeof(Struct_10B597B0);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            m_AllocBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Data = (Struct_10B597B0*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Struct_10B597B0), 0, 0, 0, 0);
            m_AllocBytes = NewCapacity * sizeof(Struct_10B597B0);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10B59770 ?FUN_10b59770@Class_10B59770@@QAEXXZ
void Class_10B59770::FUN_10b59770()
{
    Resize(0);
    if (m_AllocBytes)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        m_AllocBytes = 0;
    }
}

// FUNCTION: 0x10B597B0 ?CopyFrom@Class_10B59770@@QAEXABV1@@Z
void Class_10B59770::CopyFrom(const Class_10B59770& Other)
{
    Resize(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
