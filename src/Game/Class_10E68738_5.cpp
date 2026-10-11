// Game/Class_10E68738_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"

class Class_10E68738
{
public:
    void SetEntry(int Index, int Value);

    char Unknown00[0x154];
    Class_10BFBD70 m_Entries;
};

// FUNCTION: 0x10A58FE0 ?SetEntry@Class_10E68738@@QAEXHH@Z
void Class_10E68738::SetEntry(int Index, int Value)
{
    if (m_Entries.Count < Index + 1)
        m_Entries.FUN_10bfbd70(Index + 1);
    m_Entries.Data[Index] = Value;
}
