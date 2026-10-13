// Game/Class_10E98CE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E98CE0.h"
#include "Game/Class_10C1A560.h"
#include "Game/Class_10E98CE4.h"
#include "Game/Class_10E98CE8.h"

class Class_10E98CE0_Member
{
public:
    virtual char Virtual0(int A);
};

extern void* DAT_10e98ce0[];

// FUNCTION: 0x10C1A3D0 ??0Class_10E98CE0@@QAE@HH@Z
Class_10E98CE0::Class_10E98CE0(int p1, int p2)
{
    *(void***)this = DAT_10e98ce0;
    Unknown04 = (Class_10E98CE0_Member*)p1;
    Unknown08 = (Class_10E98CE0_Member*)p2;
}

// FUNCTION: 0x10C1A3F0 ?FUN_10c1a3f0@Class_10E98CE0@@UAEDH@Z
char Class_10E98CE0::FUN_10c1a3f0(int A)
{
    if (Unknown04->Virtual0(A) == 1)
        return 1;
    return Unknown08->Virtual0(A);
}
