// Game/Unsorted_10978B80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Config.h"

extern const char DAT_10e47820[];

extern const char DAT_10e4ebdc[];

extern const char DAT_10e4ebc8[];

int FUN_10af4710();

void FUN_10ca7ab0(char* Path);

// FUNCTION: 0x10978B80 ?FUN_10978b80@@YG?AVcString@@XZ
cString __stdcall FUN_10978b80()
{
    char Path[0x80] = {0};
    if (FUN_10af4710())
    {
        if (!Config::Instance()->FUN_10910ca0(DAT_10e47820, DAT_10e4ebdc, Path, 0x80, 0))
            FUN_10ca7ab0(Path);
    }
    else
    {
        if (!Config::Instance()->FUN_10910ca0(DAT_10e47820, DAT_10e4ebc8, Path, 0x80, 0))
            FUN_10ca7ab0(Path);
    }
    return cString(Path);
}
