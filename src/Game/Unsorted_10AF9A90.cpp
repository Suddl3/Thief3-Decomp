// Game/Unsorted_10AF9A90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF4B90.h"
#include "Game/FNameEntry.h"

extern void* DAT_10e74218[];

// FUNCTION: 0x10AF9A90 ?InitConcretes@FNameEntry@@QAEPAV1@XZ
FNameEntry* FNameEntry::InitConcretes()
{
    m_Concretes.FUN_10af4b90(4, DAT_10e74218);
    return this;
}
