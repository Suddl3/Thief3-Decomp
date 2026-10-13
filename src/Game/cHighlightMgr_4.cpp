// Game/cHighlightMgr_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10939570.h"

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
    void Add(int Item)
    {
        int Index = Count;
        SetCount(Index + 1);
        Data[Index] = Item;
    }
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

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);

    char* Unknown00;
};

class cString : public Class_1090A780
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
};

cString FUN_1090a660(const char* Format, ...);

extern Class_10939570* DAT_10f323fc;

class cHighlightMgr
{
public:
    void FindRimliteMaterials();

    char Pad00[0x8];
    cIntArray Unknown08;
};

// FUNCTION: 0x10ABB9E0 ?FindRimliteMaterials@cHighlightMgr@@QAEXXZ
void cHighlightMgr::FindRimliteMaterials()
{
    if (Unknown08.Count == 0)
    {
        cString Name = FUN_1090a660("Rimlite");
        void* Value = DAT_10f323fc->FUN_1093bd40((int*)&Name, 0, 0);
        Unknown08.Add((int)Value);
    }
}
