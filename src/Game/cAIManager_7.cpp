// Game/cAIManager_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

extern void* DAT_10e97c18[];

class cAIManager
{
public:
    void FUN_10c0b920();

    void** VTable;
    char m_Active[0x10];
    cIntArray m_Controllers;
};

// FUNCTION: 0x10C0B920 ?FUN_10c0b920@cAIManager@@QAEXXZ
void cAIManager::FUN_10c0b920()
{
    VTable = DAT_10e97c18;
    m_Controllers.~cIntArray();
}
