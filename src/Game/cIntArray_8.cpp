// Game/cIntArray_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C08690;

// Copied whole from include/Game/cIntArray.h, with SetMember added.
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

    void AppendAll(const cIntArray& Other);
    void SetCount(int Count);
    void RemoveAt(int Index);
    void SetMember(int Item, char Flag);
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
