// Game/VBPoolStaticPermanent.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10933420.h"

class VBPoolStaticPermanent
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
    virtual void Remove(void* Item);

    char Unknown04[0x38];
    Class_10933420 m_Pending;
};

// FUNCTION: 0x109333D0 ?Remove@VBPoolStaticPermanent@@UAEXPAX@Z
void VBPoolStaticPermanent::Remove(void* Item)
{
    Class_10933420& List = m_Pending;
    for (unsigned int i = 0; i < List.Unknown04.size(); i++)
    {
        if (m_Pending.Unknown04[i] == Item)
        {
            List.FUN_10933420(m_Pending.Unknown04.begin() + i);
            return;
        }
    }
}
