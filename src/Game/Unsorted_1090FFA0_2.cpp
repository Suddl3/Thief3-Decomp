// Game/Unsorted_1090FFA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

class cString;

Class_10905A90_Member* GetAllocator();

class Class_1090FD40
{
public:
    int Add(const cString& Item);
    int AddUnique(const cString& Item);
    void SetCount(int Count);
    void FUN_1090fd00();
    void MoveItems(int A, int B, int C);
    void RemoveAt(int Index);
    void Insert(int Index, const cString& Value);
    void FUN_10a5b5b0(int A, int B);
    void RemoveUnordered(int Index);
    void Empty()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
    }

    int m_Count;
    int m_CapacityBytes;
    cString* m_Items;
};

// FUNCTION: 0x1090FFA0 ?AddUnique@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::AddUnique(const cString& Item)
{
    int Count = m_Count;
    for (int i = 0; i < Count; i++)
    {
        if (strcmp(*m_Items[i], *Item) == 0)
            return i;
    }
    SetCount(Count + 1);
    m_Items[Count] = Item;
    return Count;
}
