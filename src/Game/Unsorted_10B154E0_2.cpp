// Game/Unsorted_10B154E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15600.h"
#include "Game/TimeManager.h"

class Class_10E5B7C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_109e87f0(int p1);

    char Unknown04[0x90];
    int m_Pending;
};

class Class_10E79228 : public Class_10E5B7C8
{
public:
    virtual void FUN_10b15590(int p1);

    char Unknown98[0x1C4];
    bool m_Closing;
};

// FUNCTION: 0x10B15590 ?FUN_10b15590@Class_10E79228@@UAEXH@Z
void Class_10E79228::FUN_10b15590(int p1)
{
    if (!m_Closing)
        Class_10E5B7C8::FUN_109e87f0(p1);
}

// FUNCTION: 0x10B15600 ?FUN_10b15600@Class_10B15600@@QAEXXZ
void Class_10B15600::FUN_10b15600()
{
    Unknown268 = TimeManager::Instance()->GetGameTime();
}
