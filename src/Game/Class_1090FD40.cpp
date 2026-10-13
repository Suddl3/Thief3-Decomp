// Game/Class_1090FD40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_1090FF70.h"

extern const char DAT_10e47660[];

class cString;

// FUNCTION: 0x1090F160 ?FUN_1090f160@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::FUN_1090f160(const cString& Name)
{
    for (int i = 0; i < m_Count; i++)
    {
        const char* Want = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
        const char* Have = m_Items[i].Unknown00 ? m_Items[i].Unknown00 : DAT_10e47660;
        if (strcmp(Have, Want) == 0)
            return i;
    }
    return -1;
}

// FUNCTION: 0x1090FD00 ?FUN_1090fd00@Class_1090FD40@@QAEXXZ
void Class_1090FD40::FUN_1090fd00()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x1090FD40 ?Add@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::Add(const cString& Item)
{
    int Index = m_Count;
    SetCount(Index + 1);
    m_Items[Index] = Item;
    return Index;
}

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

// FUNCTION: 0x10A391A0 ?Insert@Class_1090FD40@@QAEXHABVcString@@@Z
void Class_1090FD40::Insert(int Index, const cString& Value)
{
    int Count = m_Count;
    if (Index == Count)
    {
        SetCount(Count + 1);
        m_Items[Count] = Value;
    }
    else
    {
        SetCount(Count + 1);
        MoveItems(Index, Index + 1, m_Count - Index - 1);
        m_Items[Index] = Value;
    }
}

// FUNCTION: 0x10A39200 ?RemoveAt@Class_1090FD40@@QAEXH@Z
void Class_1090FD40::RemoveAt(int Index)
{
    if (Index != m_Count - 1)
        MoveItems(Index + 1, Index, m_Count - Index - 1);
    SetCount(m_Count - 1);
}

// FUNCTION: 0x10A5C560 ?RemoveUnordered@Class_1090FD40@@QAEXH@Z
void Class_1090FD40::RemoveUnordered(int Index)
{
    FUN_10a5b5b0(Index, m_Count - 1);
    SetCount(m_Count - 1);
}
