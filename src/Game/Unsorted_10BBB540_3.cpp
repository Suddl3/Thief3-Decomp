// Game/Unsorted_10BBB540_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BFF460.h"

class Class_10BBB410
{
public:
    void CancelCurrent();
    void RemoveItem(int Item);
    int FUN_10bbb730();

    char Unknown00[0x14];
    cIntArray Unknown14;
    char Unknown20[0x1F0];
    Class_10BFF460* m_Current;
};

// FUNCTION: 0x10BBB730 ?FUN_10bbb730@Class_10BBB410@@QAEHXZ
int Class_10BBB410::FUN_10bbb730()
{
    if (m_Current)
    {
        if (m_Current->FUN_10bff460() != 1)
            CancelCurrent();
    }
    if (m_Current && m_Current->FUN_10bff330() == 1)
        return 1;
    return 0;
}
