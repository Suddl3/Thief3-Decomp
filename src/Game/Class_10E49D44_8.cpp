// Game/Class_10E49D44_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49D44.h"

// FUNCTION: 0x109331A0 ?Release@Class_10E49D44@@UAEHXZ
int Class_10E49D44::Release()
{
    int Count = --Unknown04;
    if (Count == 0)
        delete this;
    return Count;
}
