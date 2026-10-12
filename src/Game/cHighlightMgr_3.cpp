// Game/cHighlightMgr_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10939570.h"

struct Struct_10C08690;

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
    int FUN_10b9fa20(int* Item);
    void DeleteAll();
    void PushFront(const int* Item);
    void AddUnique(int Item);
    void Remove(int Item);
    void FUN_10c08690(Struct_10C08690* Item);
    void Add(int Item)
    {
        int Index = Count;
        SetCount(Index + 1);
        Data[Index] = Item;
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

Class_10905A90_Member* GetAllocator();

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);

    char* Unknown00;
};

class Class_109081E0 : public Class_1090A780
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
};

Class_109081E0 FUN_1090a660(const char* Format, ...);

extern Class_10939570* DAT_10f323fc;

class cHighlightMgr
{
public:
    void FindMembraneMaterials();

    char Pad00[0x8];
    cIntArray m_MembraneMaterials;
};

// FUNCTION: 0x10ABB900 ?FindMembraneMaterials@cHighlightMgr@@QAEXXZ
void cHighlightMgr::FindMembraneMaterials()
{
    if (m_MembraneMaterials.Count == 0)
    {
        int Index = 0;
        do
        {
            ++Index;
            Class_109081E0 Name = FUN_1090a660("MetaselectionFrob_M%03d", Index);
            void* Value = DAT_10f323fc->FUN_1093bd40((int*)&Name, 0, 0);
            m_MembraneMaterials.Add((int)Value);
        } while (Index < 16);
    }
}
