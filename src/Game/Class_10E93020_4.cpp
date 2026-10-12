// Game/Class_10E93020_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E90D70.h"
#include "Game/Class_10BD0270.h"

class State_PlayAction : public Class_10E90D70
{
public:
    ~State_PlayAction();

    int m_CurrentAction;
    Class_10BD0270* m_ActionQueue[4];
    bool Unknown54;
    bool Unknown55;
    bool Unknown56;
    char Pad57[0x1];
};

// FUNCTION: 0x10BD0730 ??1State_PlayAction@@QAE@XZ
State_PlayAction::~State_PlayAction()
{
    for (int i = 0; i < 4; i++)
    {
        if (m_ActionQueue[i])
        {
            delete m_ActionQueue[i];
            m_ActionQueue[i] = 0;
        }
    }
}
