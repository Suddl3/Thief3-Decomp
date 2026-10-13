// Game/Unsorted_10BC0150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

struct Struct_10C08690;

Class_10905A90_Member* GetAllocator();

class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}
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
    void SetCount(int Count);
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
    void Append(int Item)
    {
        int Index = Count;
        SetCount(Index + 1);
        Data[Index] = Item;
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
    void FUN_10c08690(Struct_10C08690* Item);

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

class Class_10BC0990_Unknown0C0
{
public:
    char Unknown00[0x18];
    cIntArray Unknown18;
};

class Class_10BC0990_Unknown00
{
public:
    char Unknown00[0xC0];
    Class_10BC0990_Unknown0C0* Unknown0C0;
};

// FUNCTION: 0x10BC0990 ?FUN_10bc0990@@YAXPAVClass_10BC0990_Unknown00@@0@Z
void FUN_10bc0990(Class_10BC0990_Unknown00* A, Class_10BC0990_Unknown00* B)
{
    Class_10BC0990_Unknown0C0* X = A->Unknown0C0;
    Class_10BC0990_Unknown0C0* Y = B->Unknown0C0;
    if (X->Unknown18.FindIndex((int)B) == -1)
    {
        X->Unknown18.Append((int)B);
    }
    if (Y->Unknown18.FindIndex((int)A) == -1)
    {
        Y->Unknown18.Append((int)A);
    }
}
