// Game/Unsorted_10A698D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B19940.h"
#include "Game/Class_10E6B620.h"
#include "Game/Class_10A04080.h"
#include "Game/Class_10905A90_Member.h"

struct Struct_10A69C00Color
{
    unsigned char B;
    unsigned char G;
    unsigned char R;
    unsigned char A;
};

struct Struct_10A69C00
{
    float Unknown00;
    float Unknown04;
    Class_10B19940 Unknown08;
};

Class_10905A90_Member* GetAllocator();

void* FUN_10a030c0();

class Class_10A03DE0
{
public:
    void FUN_10a03de0();
};

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

// FUNCTION: 0x10A69AD0 ?FUN_10a69ad0@Class_10E6B620@@QAEXPAVAActor@@@Z
void Class_10E6B620::FUN_10a69ad0(AActor* A)
{
    cIntArray Found;
    ((Class_10A04080*)FUN_10a030c0())->FUN_10a04080((int)A, Found, false);
    for (int i = 0; i < Found.Count; i++)
    {
        ((Class_10A03DE0*)Found.Data[i])->FUN_10a03de0();
    }
}

// FUNCTION: 0x10A69C00 ?InitPrimaryColors@@YAXPAUStruct_10A69C00@@@Z
void InitPrimaryColors(Struct_10A69C00* A)
{
    A->Unknown00 = 1.0f;
    A->Unknown04 = 1.0f;
    Struct_10A69C00Color Color;
    Color.B = 0;
    Color.G = 0;
    Color.R = 255;
    Color.A = 255;
    A->Unknown08.m_Items[A->Unknown08.FUN_10af4cc0(4, 1)] = Color;
    Color.B = 0;
    Color.G = 255;
    Color.R = 0;
    Color.A = 255;
    A->Unknown08.m_Items[A->Unknown08.FUN_10af4cc0(4, 1)] = Color;
    Color.B = 255;
    Color.G = 0;
    Color.R = 0;
    Color.A = 255;
    A->Unknown08.m_Items[A->Unknown08.FUN_10af4cc0(4, 1)] = Color;
}
