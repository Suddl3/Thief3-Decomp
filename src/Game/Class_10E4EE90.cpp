// Game/Class_10E4EE90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1097D530.h"
#include "Game/Class_10B7C000.h"
#include "Game/Class_10E4B040.h"
#include "Game/Class_10E4EE90.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E70A50.h"

void FUN_10ad1dc0(void* Memory, unsigned int Size);

// FUNCTION: 0x1097D720 ?FUN_1097d720@Class_10E4EE90@@UAEPAV1@I@Z
Class_10E4EE90* Class_10E4EE90::FUN_1097d720(unsigned int Flags)
{
    FUN_1097d750();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x10c);
    return this;
}

// FUNCTION: 0x1097D750 ??1Class_10E4EE90@@QAE@XZ
Class_10E4EE90::~Class_10E4EE90()
{
    FUN_10ad5310();
}
