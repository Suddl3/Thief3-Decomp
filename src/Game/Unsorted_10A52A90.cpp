// Game/Unsorted_10A52A90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A52B30.h"
#include "Game/cFloatInterpolator.h"
#include "Game/Class_10E67FD0.h"
#include "Game/WindowManager.h"

extern WindowManager* GWindowManager;

// FUNCTION: 0x10A52A90 ?FUN_10a52a90@Class_10E67FD0@@UAEXH@Z
void Class_10E67FD0::FUN_10a52a90(int A)
{
    bool Old = Virtual54();
    Unknown0C8 = A;
    if (Virtual54() != Old)
        Virtual88(Virtual54());
}

// FUNCTION: 0x10A52AF0 ?Update@cFloatInterpolator@@UAEXM@Z
void cFloatInterpolator::Update(float DeltaTime)
{
    if (m_Finished)
        return;
    m_Elapsed += DeltaTime;
    m_Value = m_Start + m_Delta * (m_Elapsed / m_Duration);
    if (m_Elapsed >= m_Duration)
    {
        m_Value = m_End;
        m_Finished = true;
    }
}

// FUNCTION: 0x10A52B30 ?FUN_10a52b30@Class_10A52B30@@QAEXXZ
void Class_10A52B30::FUN_10a52b30()
{
    for (int i = 0; i < UnknownB8; i++)
    {
        if (UnknownC0[i])
            GWindowManager->FUN_109e8ae0(UnknownC0[i]);
    }
    UnknownB8 = 0;
}
