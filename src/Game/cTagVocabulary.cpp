// Game/cTagVocabulary.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTagVocabulary.h"

// FUNCTION: 0x10C62D70 ?GetSlot@cTagVocabulary@@UAEPAHH@Z
int* cTagVocabulary::GetSlot(int Index)
{
    if (Index < 0 || Index >= 6)
        Index = 0;
    return &m_Slots[Index];
}
