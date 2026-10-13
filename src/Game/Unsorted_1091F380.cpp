// Game/Unsorted_1091F380.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10924100.h"
#include "Game/Class_10924100_Unknown44.h"
#include "Game/Class_1092E8F0.h"
#include "Game/Class_10905A90_Member.h"

struct Struct_1092E970
{
    char Unknown00[0xC];
};

Class_10905A90_Member* GetAllocator();

class FVector
{
public:
    float X, Y, Z;
};

extern float DAT_10eafbdc;

class Class_1091F4C0_Unknown20
{
public:
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
};

class Class_1091F4C0
{
public:
    bool FUN_1091f4c0(FVector* A, FVector* B);

    char Unknown00[0x18];
    int Unknown18;
    char Unknown1C[4];
    Class_1091F4C0_Unknown20* Unknown20;
};

// FUNCTION: 0x1091F380 ?SetCount@Class_1092E8F0@@QAEXH@Z
void Class_1092E8F0::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Struct_1092E970);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~3) + 4;
        m_Data = (Struct_1092E970*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Struct_1092E970), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Struct_1092E970);
    }
    else if (NewCount <= Capacity - 4)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~3) + 4;
            m_Data = (Struct_1092E970*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Struct_1092E970), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Struct_1092E970);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x1091F4C0 ?FUN_1091f4c0@Class_1091F4C0@@QAE_NPAVFVector@@0@Z
bool Class_1091F4C0::FUN_1091f4c0(FVector* A, FVector* B)
{
    for (int i = 0; i < Unknown18; i++)
    {
        Class_1091F4C0_Unknown20* Plane = &Unknown20[i];
        float X = Plane->Unknown00 > DAT_10eafbdc ? A->X : B->X;
        float Y = Plane->Unknown04 > DAT_10eafbdc ? A->Y : B->Y;
        float Z = Plane->Unknown08 > DAT_10eafbdc ? A->Z : B->Z;
        if (Z * Plane->Unknown08 + X * Plane->Unknown00 + Y * Plane->Unknown04 + Plane->Unknown0C > DAT_10eafbdc)
            return false;
    }
    return true;
}

// FUNCTION: 0x1091F6A0 ?FUN_1091f6a0@Class_10924100@@QAEXXZ
void Class_10924100::FUN_1091f6a0()
{
    for (int i = 0; i < Unknown3C; i++)
    {
        Unknown44[i]->Unknown5C |= 1;
        Unknown44[i]->Virtual0(0);
    }
}

// FUNCTION: 0x1091F6E0 ?Contains@Class_10924100@@QAE_NPAVClass_10924100_Unknown44@@@Z
bool Class_10924100::Contains(Class_10924100_Unknown44* Item)
{
    if (Item)
    {
        for (int i = 0; i < Unknown3C; i++)
        {
            if (Unknown44[i] == Item)
                return true;
        }
    }
    return false;
}
