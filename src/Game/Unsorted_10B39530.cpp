// Game/Unsorted_10B39530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39530.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B481C0.h"

Class_10B3A460* GetEntries();

// FUNCTION: 0x10B39530 ?Play@Class_10B39530@@QAEXHMMHHHM@Z
void Class_10B39530::Play(int A, float B, float C, int D, int E, int F, float G)
{
    int Index = GetEntries()->GetEntry(A)->m_Index;
    m_Handlers[Index]->ReplaceAndPlay(A, B, C, D, E, 0, F, G);
}
