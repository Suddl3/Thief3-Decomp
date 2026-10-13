// Game/Unsorted_1090EED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_1090FF70.h"
#include <string.h>

extern const char DAT_10e47660[];

// FUNCTION: 0x1090F010 ?FUN_1090f010@@YA_NPBH0@Z
bool FUN_1090f010(int const* A, int const* B)
{
    const char* b = DAT_10e47660;
    if (*B)
        b = (const char*)*B;
    const char* a = *A ? (const char*)*A : DAT_10e47660;
    return strcmp(a, b) == 0;
}
