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
    void FUN_1090f2c0(int Count);
    void FUN_1090fd00();
    void FUN_10a37f80(int A, int B, int C);
    void RemoveAt(int Index);
    void Insert(int Index, const cString& Value);
    void FUN_10a5b5b0(int A, int B);
    void RemoveUnordered(int Index);
    void Empty()
    {
        FUN_1090f2c0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }

    int m_Count;
    int Unknown04;
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
    FUN_1090f2c0(Count + 1);
    m_Items[Count] = Item;
    return Count;
}
