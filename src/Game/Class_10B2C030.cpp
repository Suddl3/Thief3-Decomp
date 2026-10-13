// Game/Class_10B2C030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B2C030.h"
#include "Game/Class_10967060.h"
#include "Game/Class_10B2C160.h"
#include "Game/Class_10E7B558.h"

// FUNCTION: 0x10B2C030 ?FUN_10b2c030@Class_10B2C030@@QAEXH@Z
void Class_10B2C030::FUN_10b2c030(int p1)
{
    Unknown11C = p1;
    FUN_10b2bb70();
}

// FUNCTION: 0x10B2C100 ?EnterUnEquip@Class_10B2C030@@QAEXXZ
void Class_10B2C030::EnterUnEquip()
{
    if (Virtual71() != 2)
    {
        FUN_10b2c050();
        Virtual70(2);
    }
}

// FUNCTION: 0x10B2C130 ?FUN_10b2c130@Class_10B2C030@@QAEXXZ
void Class_10B2C030::FUN_10b2c130()
{
    if (Virtual71() != 6)
    {
        FUN_10b2c050();
        Virtual70(6);
    }
}
