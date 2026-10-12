// Game/Class_10E6C470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"

struct Struct_10C08690;

Class_10905A90_Member* GetAllocator();

struct Struct_10A88D40
{
};

// The header's cIntArray copied whole, with the union's pointer typed as the array of Struct_10A88D40 pointers
// and the first-element removal the destructor inlines.
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
    void RemoveFirst()
    {
        int Rest = Count - 1;
        if (Rest != 0)
            memmove(Data, Data + 1, Rest * 4);
        SetCount(Count - 1);
    }

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        Struct_10A88D40** Unknown08;
        int* Data;
    };
};

class Class_10E6C470
{
public:
    virtual ~Class_10E6C470();

    char Unknown04[0x7F8];
    cIntArray Unknown7FC;
};

// FUNCTION: 0x10A88D40 ??1Class_10E6C470@@UAE@XZ
Class_10E6C470::~Class_10E6C470()
{
    while (Unknown7FC.Count > 0)
    {
        Struct_10A88D40* First = Unknown7FC.Unknown08[0];
        Unknown7FC.RemoveFirst();
        operator delete(First);
    }
}

// FUNCTION: 0x10A88E10 ??_GClass_10E6C470@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A88D40's definition in this unit.
