// Game/Unsorted_10C18520_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C19FD0.h"
#include "Game/Class_10DC1750.h"
#include "Game/Class_10E98CA4.h"
#include "Game/Struct_10B9F810.h"
#include "Game/Struct_10DC1750_Result_1C.h"
#include "Game/Class_10DC1750_Result.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C19FD0 ??1Class_10C19FD0@@QAE@XZ
Class_10C19FD0::~Class_10C19FD0()
{
    Class_10C19FD0_Items& Items = Unknown04;
    for (int i = 0; i < Items.Count; i++)
        delete Items.m_Items[i];
    Items.Count = 0;
    ((cIntArray*)&Items)->SetCount(0);
    if (Items.m_CapacityBytes)
    {
        GetAllocator()->Virtual5(Items.m_Items);
        Items.m_Items = 0;
        Items.m_CapacityBytes = 0;
    }
}
