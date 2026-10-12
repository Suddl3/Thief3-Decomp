// Game/Unsorted_10B39890.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39890.h"
#include "Game/Class_10B3A460.h"

Class_10B3A460* GetEntries();

// FUNCTION: 0x10B39890 ?GetEntryData@Class_10B39890@@QAEPAXH@Z
void* Class_10B39890::GetEntryData(int A)
{
    return GetEntries()->GetEntry(A)->Unknown0C;
}
