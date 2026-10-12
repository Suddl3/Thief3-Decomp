// Game/Class_10E93020_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BD0270.h"

class State_PlayAction
{
public:
    void PopAction();

    char Unknown00[0x40];
    Class_10BD0270* m_CurrentAction;
    int m_ActionQueue[4];
};

// FUNCTION: 0x10BD03D0 ?PopAction@State_PlayAction@@QAEXXZ
void State_PlayAction::PopAction()
{
    if (m_CurrentAction)
    {
        delete m_CurrentAction;
        m_CurrentAction = 0;
        for (int i = 0; i < 3; i++)
            m_ActionQueue[i] = m_ActionQueue[i + 1];
    }
}
