// Game/Unsorted_10926230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    // The game's (0x109ED5E0): inlined on normal paths, called from unwind funclets.
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

struct Struct_10926230
{
    char Unknown00[0x44];
    int Unknown44;
    bool Unknown48;
    char Unknown49[0x17];
    int Unknown60;
    char Unknown64[0xD4];
    unsigned char Unknown138;
};

class Class_10925F10
{
public:
    void AddUnique(int Item);
    bool FUN_10926230(Struct_10926230* Obj);

    char Unknown00[0x50];
    cIntArray Unknown50;
};

// FUNCTION: 0x10926230 ?FUN_10926230@Class_10925F10@@QAE_NPAUStruct_10926230@@@Z
bool Class_10925F10::FUN_10926230(Struct_10926230* Obj)
{
    if (Obj->Unknown60 != 0)
    {
        Obj->Unknown48 = false;
        return false;
    }
    Obj->Unknown48 = true;
    if (Obj->Unknown44 == 3)
    {
        if (!(Obj->Unknown138 & 1))
            AddUnique((int)Obj);
        return true;
    }
    for (int i = 0; i < Unknown50.Count; i++)
    {
        if (Unknown50.Data[i] == (int)Obj)
            return false;
    }
    Unknown50.Append((int)Obj);
    return true;
}
