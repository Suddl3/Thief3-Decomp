// Game/Unsorted_10C4EDA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4E970.h"
#include "Game/Class_10C4EDA0.h"
#include "Game/Class_10C4F450.h"
#include "Game/Class_10C4F970.h"

class Class_10C4EE60
{
public:
    void FUN_10c4ee60();

    int Unknown00;
    int Unknown04;
    Class_10C4E970 Unknown08;
};

// FUNCTION: 0x10C4EDA0 ?Free@Class_10C4EDA0@@QAEXXZ
void Class_10C4EDA0::Free()
{
    Resize(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_Capacity = 0;
    }
}

// FUNCTION: 0x10C4F450 ?Empty@Class_10C4F450@@QAEXXZ
void Class_10C4F450::Empty()
{
    FUN_10c4eea0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10C4F970 ?FUN_10c4f970@Class_10C4F970@@QAEXXZ
void Class_10C4F970::FUN_10c4f970()
{
    FUN_10c4f490(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
