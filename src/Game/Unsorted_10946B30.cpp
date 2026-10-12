// Game/Unsorted_10946B30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10946D70.h"
#include "Game/Config.h"

extern bool DAT_10f34104;

extern bool DAT_10f340f0;

// FUNCTION: 0x10946B30 ?IsUseNewConversion@@YA_NXZ
bool IsUseNewConversion()
{
    if (!DAT_10f34104)
    {
        DAT_10f340f0 = Config::Instance()->GetBool("Flesh", "UseNewConversion", &DAT_10f340f0, 0) && DAT_10f340f0;
        DAT_10f34104 = true;
    }
    return DAT_10f340f0;
}

// FUNCTION: 0x10946D70 ?Free@Class_10946D70@@QAEXPAX@Z
void Class_10946D70::Free(void* P)
{
    if (P)
        ::operator delete(P);
}
