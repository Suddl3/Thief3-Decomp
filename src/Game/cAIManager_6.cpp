// Game/cAIManager_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e97c18[];

class cAIManager
{
public:
    cAIManager* Init();

    void** VTable;
    bool m_Active;
    int Unknown08[6];
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
    bool m_UpdateAll;
    bool Unknown41;
    bool Unknown42;
};

// FUNCTION: 0x10C0B8D0 ?Init@cAIManager@@QAEPAV1@XZ
cAIManager* cAIManager::Init()
{
    VTable = DAT_10e97c18;
    m_Active = false;
    for (int i = 0; i < 6; i++)
        Unknown08[i] = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown28 = 0;
    Unknown2C = 0;
    Unknown30 = 0;
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown3C = 0;
    m_UpdateAll = true;
    Unknown41 = true;
    Unknown42 = false;
    return this;
}
