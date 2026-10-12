// Game/MC_FollowAbsolute_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10BCE8D0.h"

class Class_10E9AF04
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();

    void FUN_10c372e0(Object_10BCE8D0* A);
};

class MC_FollowAbsolute : public Class_10E9AF04
{
public:
    virtual void Serialize(Object_10BCE8D0* A);

    char Unknown04[0x90];
    int m_OffsetX;
    int m_OffsetY;
};

// FUNCTION: 0x10C37860 ?Serialize@MC_FollowAbsolute@@UAEXPAVObject_10BCE8D0@@@Z
void MC_FollowAbsolute::Serialize(Object_10BCE8D0* A)
{
    FUN_10c372e0(A);
    A->Virtual1(&m_OffsetX, 4);
    A->Virtual1(&m_OffsetY, 4);
}
