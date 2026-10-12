// Game/Unsorted_10BA5350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10BA9E70.h"
#include "Game/Class_10BA9E70.h"

class Class_10E8D65C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void SetActive(bool p1);

    char Unknown04;
    bool m_Active;
    char Unknown06[6];
    int m_OwnerKey;
};

// FUNCTION: 0x10BA9010 ?SetActive@Class_10E8D65C@@UAEX_N@Z
void Class_10E8D65C::SetActive(bool p1)
{
    m_Active = p1;
    if (!p1)
        m_OwnerKey = 0;
}

// FUNCTION: 0x10BA9E70 ?Init@Class_10BA9E70@@QAEPAV1@ABUStruct_10BA9E70@@0HHHH@Z
Class_10BA9E70* Class_10BA9E70::Init(const Struct_10BA9E70& A, const Struct_10BA9E70& B, int C, int D, int E,
                                             int F)
{
    Unknown00 = A;
    Unknown0C = B;
    Unknown18 = C;
    Unknown1C = D;
    Unknown20 = E;
    Unknown24 = F;
    return this;
}
