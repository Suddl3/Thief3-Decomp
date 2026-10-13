// Game/Class_109262B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109262B0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x44 bytes; the loops call its destructor and clear its words.
class Class_10925880
{
public:
    ~Class_10925880();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    bool Unknown3C;
    int Unknown40;
};

class Class_10931F10_Unknown00
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10931F10_Unknown08
{
public:
    Class_10931F10_Unknown00 Unknown00;
    int Unknown0C;
    cIntArray Unknown10;
    cIntArray Unknown1C;
    cIntArray Unknown28;
    int Unknown34;
    int Unknown38;
    bool Unknown3C;
    int Unknown40;
};

// FUNCTION: 0x10926020 ?SetCount@Class_109262B0@@QAEXH@Z
void Class_109262B0::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10925880);
    for (int i = NewCount; i < OldCount; i++)
        ((Class_10925880*)m_Data)[i].~Class_10925880();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10925880), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10925880);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10925880), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10925880);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10925880* Element = (Class_10925880*)((char*)m_Data + j * sizeof(Class_10925880));
        if (Element)
        {
            Element->Unknown0C = 0;
            Element->Unknown10 = 0;
            Element->Unknown14 = 0;
            Element->Unknown18 = 0;
            Element->Unknown1C = 0;
            Element->Unknown20 = 0;
            Element->Unknown24 = 0;
            Element->Unknown28 = 0;
            Element->Unknown2C = 0;
            Element->Unknown30 = 0;
            Element->Unknown34 = 1;
            Element->Unknown38 = 0;
            Element->Unknown3C = false;
            Element->Unknown40 = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x109262B0 ?Clear@Class_109262B0@@QAEXXZ
void Class_109262B0::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x10931F10 ?CopyFrom@Class_109262B0@@QAEXABV1@@Z
void Class_109262B0::CopyFrom(const Class_109262B0& Other)
{
    SetCount(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
    {
        Class_10931F10_Unknown08* Src = (Class_10931F10_Unknown08*)Other.m_Data + i;
        Class_10931F10_Unknown08* Dst = (Class_10931F10_Unknown08*)m_Data + i;
        Dst->Unknown00 = Src->Unknown00;
        Dst->Unknown0C = Src->Unknown0C;
        cIntArray& Dst10 = Dst->Unknown10;
        Dst10.SetCount(Src->Unknown10.Unknown00);
        for (int j = 0; j < Dst10.Unknown00; j++)
            Dst10.Unknown08[j] = Src->Unknown10.Unknown08[j];
        cIntArray& Dst1C = Dst->Unknown1C;
        Dst1C.SetCount(Src->Unknown1C.Unknown00);
        for (int j = 0; j < Dst1C.Unknown00; j++)
            Dst1C.Unknown08[j] = Src->Unknown1C.Unknown08[j];
        cIntArray& Dst28 = Dst->Unknown28;
        Dst28.SetCount(Src->Unknown28.Unknown00);
        for (int j = 0; j < Dst28.Unknown00; j++)
            Dst28.Unknown08[j] = Src->Unknown28.Unknown08[j];
        Dst->Unknown34 = Src->Unknown34;
        Dst->Unknown38 = Src->Unknown38;
        Dst->Unknown3C = Src->Unknown3C;
        Dst->Unknown40 = Src->Unknown40;
    }
}
