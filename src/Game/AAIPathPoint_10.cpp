// Game/AAIPathPoint_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "AICore/AICoreClasses.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h copied whole, with SetCount inline as this unit compiles it
// (the header declares it out of line).
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
    cIntArray& operator=(const cIntArray& Other)
    {
        Unknown00 = 0;
        AppendAll(Other);
        return *this;
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
    int Add(int* Item);
    void DeleteAll();
    void PushFront(const int* Item);
    void AddUnique(int Item);
    void Remove(int Item);
    void FUN_10c08690(struct Struct_10C08690* Item);

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

void FUN_10bc02f0(cIntArray* Items);

// FUNCTION: 0x10BBF010 ?Modify@AAIPathPoint@@UAEXXZ
void AAIPathPoint::Modify()
{
    cIntArray Found;
    Found.SetCount(1);
    Found.Data[0] = (int)this;
    FUN_10bc02f0(&Found);
    for (int i = 0; i < Found.Count; i++)
        ((UObject*)Found.Data[i])->UObject::Modify();
}
