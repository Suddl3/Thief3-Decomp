// Game/Class_10E6BEBC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6BEBC.h"

extern int DAT_10e6becc;

extern const char DAT_10e4da8c[];

int FUN_10af36e0(const char* A, const char* B);

// FUNCTION: 0x10A7DD80 ?IsHitProxyName@Class_10E6BEBC@@UAEHPBD@Z
int Class_10E6BEBC::IsHitProxyName(const char* Name)
{
    if (FUN_10af36e0((const char*)&DAT_10e6becc, Name) && FUN_10af36e0(DAT_10e4da8c, Name))
        return 0;
    return 1;
}
