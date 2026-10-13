// Game/Unsorted_109071F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

bool FUN_10907af0(const char* Str, int Max);

// FUNCTION: 0x10908230 ?GetBoundedLength@@YAHPBDH@Z
int GetBoundedLength(const char* Str, int Max)
{
    if (Str && Max >= 1 && FUN_10907af0(Str, Max))
        return strlen(Str);
    return 0;
}
