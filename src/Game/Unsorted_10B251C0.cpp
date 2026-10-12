// Game/Unsorted_10B251C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B16930.h"
#include "Game/Class_10B25200.h"

void* GetWindowManager();

// FUNCTION: 0x10B251C0 ?SetJunkItem@Class_10B25200@@QAEXH@Z
void Class_10B25200::SetJunkItem(int A)
{
    m_JunkItem = A;
    ((Class_10B16930*)GetWindowManager())->ShowJunkItemWindow(A);
    Unknown48 = Unknown28 = 3;
    ((Class_10B16930*)GetWindowManager())->FUN_10b166a0();
}
