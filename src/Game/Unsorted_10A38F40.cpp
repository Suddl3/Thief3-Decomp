// Game/Unsorted_10A38F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1090FD40.h"

// FUNCTION: 0x10A391A0 ?Insert@Class_1090FD40@@QAEXHABVcString@@@Z
void Class_1090FD40::Insert(int Index, const cString& Value)
{
    int Count = m_Count;
    if (Index == Count)
    {
        FUN_1090f2c0(Count + 1);
        m_Items[Count] = Value;
    }
    else
    {
        FUN_1090f2c0(Count + 1);
        FUN_10a37f80(Index, Index + 1, m_Count - Index - 1);
        m_Items[Index] = Value;
    }
}
