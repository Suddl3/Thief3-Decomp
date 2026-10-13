// Game/State_PatrolLook_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BB8070.h"

class Class_10B39870;

class Class_10BF7F90;

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();

    Class_10BB8070* Unknown04;
};

class State_PatrolLook : public Class_10BC4160
{
public:
    virtual void FUN_10beded0();
    bool FUN_10bcb600();
    void FUN_10bedca0();

    char Unknown08[0x50];
    int m_Limit;
    int m_Count;
    int Unknown60;
};

// FUNCTION: 0x10BEDED0 ?FUN_10beded0@State_PatrolLook@@UAEXXZ
void State_PatrolLook::FUN_10beded0()
{
    if (Unknown60 == 0x11 || Unknown60 == 0)
    {
        Unknown04->FUN_10bb7ff0();
        if (Unknown04->FUN_10bb8070())
        {
            if (FUN_10bcb600())
                Unknown04->RollInterval();
            return;
        }
    }
    if (FUN_10bc4160()->GetLinkedObject() == 0 && (m_Limit <= 0 || m_Count < m_Limit))
        FUN_10bedca0();
}
