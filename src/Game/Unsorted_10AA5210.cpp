// Game/Unsorted_10AA5210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA52C0.h"
#include "Game/Class_10E6D600.h"

// FUNCTION: 0x10AA52C0 ?FUN_10aa52c0@Class_10AA52C0@@QAEXXZ
void Class_10AA52C0::FUN_10aa52c0()
{
    FUN_10aa5250(0);
    FUN_10aa5240();
}

// FUNCTION: 0x10AA5360 ?FUN_10aa5360@Class_10E6D600@@UAEXH@Z
void Class_10E6D600::FUN_10aa5360(int A)
{
    Unknown04 = (Unknown04 + A) % Unknown08;
    Unknown0C -= A;
}
