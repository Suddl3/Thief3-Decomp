// Game/cConversation_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

class cConversation
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
    virtual void ReplaceConEvent(int Item, int Param3);

    cIntArray m_ConEvents;
};

// FUNCTION: 0x10A823F0 ?ReplaceConEvent@cConversation@@UAEXHH@Z
void cConversation::ReplaceConEvent(int Item, int Param3)
{
    if (!Item)
    {
        Virtual2(Param3);
        return;
    }
    for (int i = 0; i < m_ConEvents.Count; i++)
    {
        if (Item == m_ConEvents.Data[i])
        {
            m_ConEvents.InsertAt(i, &Param3);
            return;
        }
    }
}
