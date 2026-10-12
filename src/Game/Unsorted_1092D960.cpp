// Game/Unsorted_1092D960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1092D960.h"
#include "Game/Class_1092E8F0.h"
#include "Game/Class_1092E930.h"
#include "Game/Class_1092F100.h"

class Class_1092F100;

class cIntArray
{
public:
    void SetCount(int Count);

    int Unknown00;
    int m_CapacityBytes;
    Class_1092F100** Unknown08;
};

extern cIntArray DAT_10f31b9c;

struct Struct_1092FCA0
{
    char Unknown00[0x38];
    int Unknown38;
};

Class_10905A90_Member* GetAllocator();

class Class_1092D960_Member
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

// FUNCTION: 0x1092D960 ?FUN_1092d960@Class_1092D960@@QAEXXZ
void Class_1092D960::FUN_1092d960()
{
    if (Unknown00)
    {
        Unknown00->Virtual2();
        Unknown00 = 0;
    }
    if (Unknown04)
    {
        Unknown04->Virtual2();
        Unknown04 = 0;
    }
}

// FUNCTION: 0x1092E8F0 ?Clear@Class_1092E8F0@@QAEXXZ
void Class_1092E8F0::Clear()
{
    FUN_1091f380(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x1092E930 ?Clear@Class_1092E930@@QAEXXZ
void Class_1092E930::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x1092F100 ?FUN_1092f100@Class_1092F100@@QAEXXZ
void Class_1092F100::FUN_1092f100()
{
    int Index = DAT_10f31b9c.Unknown00;
    DAT_10f31b9c.SetCount(DAT_10f31b9c.Unknown00 + 1);
    DAT_10f31b9c.Unknown08[Index] = this;
}

// FUNCTION: 0x1092FCA0 ?FUN_1092fca0@@YAHPAUStruct_1092FCA0@@0@Z
int FUN_1092fca0(Struct_1092FCA0* a, Struct_1092FCA0* b)
{
    return a->Unknown38 - b->Unknown38;
}
