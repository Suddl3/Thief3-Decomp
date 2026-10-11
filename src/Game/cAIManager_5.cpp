// Game/cAIManager_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10AA3520.h"

extern Struct_10AA3520* DAT_10f35dec;

class cAIManager
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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void UpdateControllers();
    virtual void Virtual19(int A, int B);

    char m_Active[8];
    int m_UpdateIndex;
    char Unknown10[4];
    int m_Controllers;
    char Unknown18[0x28];
    bool m_UpdateAll;
};

// FUNCTION: 0x10C0B870 ?UpdateControllers@cAIManager@@UAEXXZ
void cAIManager::UpdateControllers()
{
    if (DAT_10f35dec && DAT_10f35dec->Unknown08)
    {
        if (m_UpdateAll)
        {
            Virtual19(0, m_Controllers);
            return;
        }
        if (m_UpdateIndex < m_Controllers)
            Virtual19(m_UpdateIndex, m_UpdateIndex + 1);
        m_UpdateIndex = m_UpdateIndex + 1;
        if (m_UpdateIndex >= m_Controllers)
            m_UpdateIndex = 0;
    }
}
