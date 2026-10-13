// Game/Class_10ABDAE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABDAE0.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

class Class_10B1A7D0Item
{
public:
    int Unknown00;
    int Unknown04;
    cString Unknown08;
};

// FUNCTION: 0x10ABE1D0 ?Clear@Class_10ABDAE0@@QAEXXZ
void Class_10ABDAE0::Clear()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B1A7D0 ?Insert@Class_10ABDAE0@@QAEXHABVClass_10B1A7D0Item@@@Z
void Class_10ABDAE0::Insert(int Index, const Class_10B1A7D0Item& Value)
{
    int Count = m_Count;
    if (Index == Count)
    {
        SetCount(Count + 1);
        m_Data[Count] = Value;
    }
    else
    {
        SetCount(Count + 1);
        MoveElements(Index, Index + 1, m_Count - Index - 1);
        m_Data[Index] = Value;
    }
}
