// Game/Class_10E4B040.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B7C000.h"
#include "Game/Class_10E4B040.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E70A50.h"

void FUN_10ad1dc0(void* Memory, int Size);

// FUNCTION: 0x109615B0 ??1Class_10E4B040@@QAE@XZ
Class_10E4B040::~Class_10E4B040()
{
    FUN_10ad5310();
}

// FUNCTION: 0x10961620 ?ScalarDeletingDestructor@Class_10E4B040@@UAEPAV1@I@Z
Class_10E4B040* Class_10E4B040::ScalarDeletingDestructor(unsigned int Flags)
{
    FUN_109615b0();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x30);
    return this;
}
