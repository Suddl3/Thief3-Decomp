// Game/Unsorted_10C18520_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10DC1750.h"
#include "Game/Class_10E98CA4.h"
#include "Game/Struct_10B9F810.h"
#include "Game/Struct_10DC1750_Result_1C.h"
#include "Game/Class_10DC1750_Result.h"

Class_10905A90_Member* GetAllocator();

class cIntArray
{
public:
    void SetCount(int Count);
    void DeleteAll();

    int Unknown00;
    int m_CapacityBytes;
    Struct_10B9F810** Unknown08;
};

class Class_10C19FD0
{
public:
    ~Class_10C19FD0();

    char Unknown00[4];
    cIntArray Unknown04;
};

// FUNCTION: 0x10C19FD0 ??1Class_10C19FD0@@QAE@XZ
Class_10C19FD0::~Class_10C19FD0()
{
    cIntArray& Items = Unknown04;
    for (int i = 0; i < Items.Unknown00; i++)
        delete Items.Unknown08[i];
    Items.Unknown00 = 0;
    Items.SetCount(0);
    if (Items.m_CapacityBytes)
    {
        GetAllocator()->Virtual5(Items.Unknown08);
        Items.Unknown08 = 0;
        Items.m_CapacityBytes = 0;
    }
}
