// Game/Class_10E666A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E666A0.h"
#include "Game/Object_10A37820.h"
#include "Game/Object_10A37860.h"
#include "Game/Struct_10A37860.h"

// FUNCTION: 0x10A37730 ?FUN_10a37730@Class_10E666A0@@UAEHXZ
int Class_10E666A0::FUN_10a37730()
{
    Object_10A37820* First = Virtual12();
    if (!First)
        return Virtual4();
    Object_10A37860* Second = First->Virtual1();
    if (!Second)
        return Virtual4();
    if (Second->Virtual4())
        return Second->Virtual4()->Unknown04;
    return Virtual4();
}
