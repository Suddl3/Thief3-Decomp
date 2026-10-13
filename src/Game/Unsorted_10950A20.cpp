// Game/Unsorted_10950A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_1090B040.h"

extern "C" char* _strrchr(const char* Str, int Ch);

// FUNCTION: 0x10950D60 ?FUN_10950d60@Class_1090B040@@QAE?AVcString@@XZ
cString Class_1090B040::FUN_10950d60()
{
    if (!Unknown00.Unknown00)
        return cString();
    int Back;
    char* P = _strrchr(Unknown00.Unknown00, 0x5c);
    if (P)
        Back = P - Unknown00.Unknown00;
    else
        Back = -1;
    int Fwd;
    if (Unknown00.Unknown00)
    {
        P = _strrchr(Unknown00.Unknown00, 0x2f);
        if (P)
            Fwd = P - Unknown00.Unknown00;
        else
            Fwd = -1;
    }
    else
        Fwd = -1;
    if (Fwd <= Back)
        Fwd = Back;
    if (Fwd != -1)
        return FUN_1090b040(Fwd);
    return cString();
}
