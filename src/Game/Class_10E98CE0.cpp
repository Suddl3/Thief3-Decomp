// Game/Class_10E98CE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98CE0.h"

class Class_10E98CE0_Member
{
public:
    virtual char Virtual0(int A);
};

// FUNCTION: 0x10C1A3F0 ?FUN_10c1a3f0@Class_10E98CE0@@UAEDH@Z
char Class_10E98CE0::FUN_10c1a3f0(int A)
{
    if (Unknown04->Virtual0(A) == 1)
        return 1;
    return Unknown08->Virtual0(A);
}
