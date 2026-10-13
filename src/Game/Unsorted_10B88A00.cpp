// Game/Unsorted_10B88A00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include <string.h>

extern const char DAT_10e47660[];

extern const char* DAT_10ff65dc[];

int FUN_10b88a00(const char** Name);

// FUNCTION: 0x10B88A00 ?FUN_10b88a00@@YAHPAPBD@Z
int FUN_10b88a00(const char** Name)
{
    for (int i = 0; i < 4; i++)
    {
        const char* Want = (*Name == 0) ? DAT_10e47660 : *Name;
        const char* Have = DAT_10ff65dc[i] ? DAT_10ff65dc[i] : DAT_10e47660;
        if (strcmp(Have, Want) == 0)
            return i;
    }
    return 4;
}
