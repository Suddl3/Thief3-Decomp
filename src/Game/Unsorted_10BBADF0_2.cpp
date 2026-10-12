// Game/Unsorted_10BBADF0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFF460.h"

class Class_10BBB410
{
public:
    Class_10BFF460* GetCurrent();
    void CancelCurrent();

    char Unknown00[0x210];
    Class_10BFF460* m_Current;
};

// FUNCTION: 0x10BBB410 ?GetCurrent@Class_10BBB410@@QAEPAVClass_10BFF460@@XZ
Class_10BFF460* Class_10BBB410::GetCurrent()
{
    if (m_Current)
    {
        if (m_Current->FUN_10bff460() != 1)
            CancelCurrent();
    }
    return m_Current;
}
