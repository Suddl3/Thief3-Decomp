// Game/Unsorted_10C223E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BAEC80.h"
#include "Game/Class_10C22D60.h"
#include "Game/Class_10BAE0C0.h"

struct Item_10C22A70
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10C22A70 : public Class_10BAE0C0
{
public:
    void CopyFrom(const Class_10C22A70& Other);
};

// FUNCTION: 0x10C22A70 ?CopyFrom@Class_10C22A70@@QAEXABV1@@Z
void Class_10C22A70::CopyFrom(const Class_10C22A70& Other)
{
    Resize(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        ((Item_10C22A70*)m_Data)[i] = ((Item_10C22A70*)Other.m_Data)[i];
}

// FUNCTION: 0x10C22D60 ?FUN_10c22d60@Class_10C22D60@@QAEXXZ
void Class_10C22D60::FUN_10c22d60()
{
    Unknown14.Empty();
}
