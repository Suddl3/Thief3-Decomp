// Game/Unsorted_10B9FD80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10EC0808.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h copied whole, with SetCount inline as this unit compiles it
// (the header declares it out of line) and the building constructor this unit
// compiles.
class cIntArray
{
public:
    cIntArray() { Unknown00 = m_CapacityBytes = 0; Unknown08 = 0; }
    cIntArray(int NewCount, const cIntArray& Other)
    {
        Unknown00 = m_CapacityBytes = 0;
        Unknown08 = 0;
        SetCount(NewCount);
        for (int i = 0; i < Count; i++)
            Data[i] = Other.Data[i];
    }
    cIntArray(const cIntArray& Other)
    {
        Unknown00 = m_CapacityBytes = 0;
        Unknown08 = 0;
        CopyFrom(Other);
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

    void AppendAll(const cIntArray& Other);
    void RemoveAt(int Index);
    int FindIndex(int Item)
    {
        for (int i = 0; i < Count; i++)
        {
            if (Data[i] == Item)
                return i;
        }
        return -1;
    }
    int FindOrAdd(const int* Item);
    void Clear();
    void CopyFrom(const cIntArray& Other);
    void InsertAt(int Index, int* Value);
    cIntArray& operator=(const cIntArray& Other)
    {
        Unknown00 = 0;
        AppendAll(Other);
        return *this;
    }
    int Add(int* Item);
    void DeleteAll();
    void PushFront(const int* Item);
    void AddUnique(int Item);
    void Remove(int Item);
    void FUN_10c08690(struct Struct_10C08690* Item);

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
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
                Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

// The object the function's argument points to: it receives the values.
class Class_10B9FED0_Arg
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int* A, int B);
};

class Class_10B9FED0
{
public:
    void FUN_10b9fed0(Class_10B9FED0_Arg* Arg);

    char Unknown00[0x0C];
    int Unknown0C;
    char Unknown10[0x04];
    Class_10EC0808** Unknown14;
    cIntArray Unknown18;
};

// FUNCTION: 0x10B9FED0 ?FUN_10b9fed0@Class_10B9FED0@@QAEXPAVClass_10B9FED0_Arg@@@Z
void Class_10B9FED0::FUN_10b9fed0(Class_10B9FED0_Arg* Arg)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10EC0808* Element = Unknown14[i];
        cIntArray* Source = (cIntArray*)Element->FUN_10aa7220();
        cIntArray Local(Source->Count, *Source);
        int Count = Local.Count;
        Arg->Virtual1(&Count, 4);
        for (int j = 0; j < Count; j++)
        {
            int Item = Local.Data[j];
            int Index = Unknown18.FindIndex(Item);
            Arg->Virtual1(&Index, 4);
        }
    }
}
