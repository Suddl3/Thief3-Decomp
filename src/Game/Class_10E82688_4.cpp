// Game/Class_10E82688_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A54FE0.h"
#include "Game/Class_10A55000.h"
#include "Game/Class_10A64D50.h"
#include "Game/Class_10A55050.h"

class Class_10E82688
{
public:
    void StartSequence();

    char Unknown00[0x11C];
    Class_10A55050* Unknown11C;
    char m_FrameTime[4];
    int m_Elapsed;
    int m_FrameCount;
    int m_Frame;
    int Unknown130;
    Class_10A64D50 Unknown134;
};

// FUNCTION: 0x10B5A570 ?StartSequence@Class_10E82688@@QAEXXZ
void Class_10E82688::StartSequence()
{
    if (Unknown11C)
    {
        Unknown11C->Virtual36();
        m_FrameCount = ((Class_10A55000*)Unknown11C)->FUN_10a55000();
        if (!m_FrameCount)
            m_FrameCount = 1;
        m_Elapsed = 0;
        Unknown134.Reset();
        Unknown130 = 0;
        if (Unknown11C)
            Unknown11C->FUN_10a55050((unsigned char)Unknown130);
        m_Frame = 0;
        Unknown11C->FUN_10a55050((unsigned char)Unknown130);
        ((Class_10A54FE0*)Unknown11C)->FUN_10a54fe0(m_Frame);
    }
}
