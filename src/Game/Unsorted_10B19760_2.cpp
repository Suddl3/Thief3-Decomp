// Game/Unsorted_10B19760_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABDAE0.h"
#include "Game/Class_10B197E0.h"
#include "Game/Class_10E79464.h"

Class_10905A90_Member* GetAllocator();

class Class_10B1B8A0
{
public:
    void FUN_10b1a840();
    void EmptyArrays();

    char Unknown00[4];
    Class_10ABDAE0 m_Arrays[8];
};

struct Struct_10B1BC90
{
    char Unknown00[0x110];
    int Unknown110;
};

// FUNCTION: 0x10B197E0 ?Free@Class_10B197E0@@QAEXXZ
void Class_10B197E0::Free()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B1ABA0 ?EmptyArrays@Class_10B1B8A0@@QAEXXZ
void Class_10B1B8A0::EmptyArrays()
{
    for (int i = 0; i < 8; i++)
        m_Arrays[i].SetCount(0);
    FUN_10b1a840();
}

// FUNCTION: 0x10B1BC90 ?FUN_10b1bc90@Class_10E79464@@UAEXPAUStruct_10B1BC90@@@Z
void Class_10E79464::FUN_10b1bc90(Struct_10B1BC90* p1)
{
    if (p1->Unknown110)
        FUN_10b1ba70();
}
