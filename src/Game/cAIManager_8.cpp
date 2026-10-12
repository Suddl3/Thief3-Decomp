// Game/cAIManager_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/cAIManager.h"

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);

    char Unknown04[16];
    int Unknown14;
};

// FUNCTION: 0x10C0B960 ?Serialize@cAIManager@@QAEXAAVFArchive@@@Z
void cAIManager::Serialize(FArchive& Ar)
{
    int Count = m_Controllers.Count;
    Ar.Virtual1(&Count, 4);
    if (Ar.Unknown14)
        m_Controllers.SetCount(Count);
    for (int i = 0; i < Count; i++)
        Ar.Virtual6(&m_Controllers.Data[i]);
}
