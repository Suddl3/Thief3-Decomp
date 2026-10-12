// Game/Unsorted_10C3FBE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10C3FF10.h"
#include "Game/Class_10C40590.h"
#include "Game/Class_10C41500.h"
#include "Game/Class_10C63E90.h"
#include "Game/Struct_10C40590_Item.h"
#include "Game/Struct_10C41500.h"
#include "Game/Struct_10C63E90.h"

// FUNCTION: 0x10C3FF10 ?CommitPending@Class_10C3FF10@@QAEXH@Z
void Class_10C3FF10::CommitPending(int Value)
{
    if (m_PendingValue != -1)
    {
        if (Value != -1)
        {
            m_PendingValue = Value;
        }
        m_CommittedValue = m_PendingValue;
        m_PendingValue = -1;
    }
}

// FUNCTION: 0x10C40590 ?GetItemCount@Class_10C40590@@QAEHXZ
int Class_10C40590::GetItemCount()
{
    return m_Items.size();
}

// FUNCTION: 0x10C41500 ?GetItemData@Class_10C41500@@QAE?AUStruct_10C63E90@@H@Z
Struct_10C63E90 Class_10C41500::GetItemData(int Index)
{
    return m_Items[Index].Unknown00->FUN_10c63e90();
}
