// Game/Unsorted_10B9F4B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9F5B0.h"
#include "Game/Struct_10B9F810.h"

class Class_10B9F5B0_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* V, int Length);
};

class Class_10B9F5B0_Unknown20
{
public:
    char Unknown00[0x24];
    int Unknown24[2];
};

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

// FUNCTION: 0x10B9F5B0 ?FUN_10b9f5b0@Class_10B9F5B0@@QAEXPAVClass_10B9F5B0_Param@@@Z
void Class_10B9F5B0::FUN_10b9f5b0(Class_10B9F5B0_Param* A)
{
    for (int i = 0; i < Unknown18; i++)
    {
        int* Dest = Unknown20[i]->Unknown24;
        for (int j = 0; j < 2; j++)
        {
            int Index;
            A->Virtual1(&Index, 4);
            *Dest++ = Unknown14[Index];
        }
    }
}

// FUNCTION: 0x10B9F810 ?DeleteAll@cIntArray@@QAEXXZ
void cIntArray::DeleteAll()
{
    for (int i = 0; i < Unknown00; i++)
        delete Unknown08[i];
    Unknown00 = 0;
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        m_CapacityBytes = 0;
    }
}
