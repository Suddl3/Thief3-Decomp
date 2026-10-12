// Game/Unsorted_10C62EA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10926730.h"
#include "Game/MetaSound.h"

class Class_10C63530_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

void FUN_10c62e70(int Param1, Class_10926730* Param2);

extern const char DAT_10e47660[];

// FUNCTION: 0x10C63530 ?bind@MetaSound@@QAE_NPAVClass_10C63530_Param@@@Z
bool MetaSound::bind(Class_10C63530_Param* Param1)
{
    if (m_Bound)
        return true;
    if (!m_Loaded)
        return false;
    if (!Param1)
        return false;
    FUN_10c62e70(Param1->Virtual3(), &Unknown5C);
    Unknown54 = Param1->Virtual5();
    Unknown5C.FUN_109263e0(DAT_10e47660, 0);
    m_Bound = true;
    return true;
}
