// Game/Unsorted_10A0E240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905530.h"
#include "Game/Class_10A0E240.h"
#include "Game/Class_10A0E3E0.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_109709F0.h"

// FUNCTION: 0x10A0E240 ?Remove@Class_10A0E240@@QAEXHH@Z
void Class_10A0E240::Remove(int Index, int Count)
{
    for (int i = Index; i < Index + Count; i++)
        ((Class_109709F0*)Unknown00)[i].FUN_109709f0();
    FUN_10af3bd0(Index, Count, 0x18);
}

// FUNCTION: 0x10A0E3E0 ??1Class_10A0E3E0@@QAE@XZ
Class_10A0E3E0::~Class_10A0E3E0()
{
}
