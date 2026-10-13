// Game/Unsorted_10A13C80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

extern const char DAT_10e47660[];

// FUNCTION: 0x10A13C80 ?FUN_10a13c80@@YA_NPBH0@Z
bool FUN_10a13c80(int const* A, int const* B)
{
    const char* b = DAT_10e47660;
    if (*B)
        b = (const char*)*B;
    const char* a = *A ? (const char*)*A : DAT_10e47660;
    return strcmp(a, b) < 0;
}
