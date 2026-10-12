// Game/Vocabulary_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10928760.h"
#include "Game/Vocabulary.h"
#include "Game/cIntArray.h"

extern cIntArray DAT_10f31ba8;

// FUNCTION: 0x109302A0 ??1Vocabulary@@UAE@XZ
Vocabulary::~Vocabulary()
{
    DAT_10f31ba8.SetCount(0);
}
