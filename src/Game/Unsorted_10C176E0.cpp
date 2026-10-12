// Game/Unsorted_10C176E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAE080.h"
#include "Game/VisualSubsystem.h"

// FUNCTION: 0x10C176E0 ?Add@Class_10BAE080@@QAEHABVVisualSubsystem@@@Z
int Class_10BAE080::Add(const VisualSubsystem& Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Items[Index] = Item;
    return Index;
}
