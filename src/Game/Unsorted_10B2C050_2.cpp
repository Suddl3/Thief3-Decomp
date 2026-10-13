// Game/Unsorted_10B2C050_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10967060.h"
#include "Game/Class_10B2C030.h"
#include "Game/Class_10B2C160.h"
#include "Game/Class_10E7B558.h"

// FUNCTION: 0x10B2C160 ?FUN_10b2c160@Class_10B2C160@@QAEHXZ
int Class_10B2C160::FUN_10b2c160()
{
    if (FUN_10b2bc10() && Virtual71() == 3)
        return 0;
    return 1;
}

// FUNCTION: 0x10B2C5D0 ?FUN_10b2c5d0@Class_10E7B558@@UAEXABVClass_10967060@@@Z
void Class_10E7B558::FUN_10b2c5d0(const Class_10967060& A)
{
    Unknown28 = A;
    Unknown34 = Unknown28.FUN_10967060(Unknown1C);
}
