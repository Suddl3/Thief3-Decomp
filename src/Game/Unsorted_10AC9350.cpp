// Game/Unsorted_10AC9350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC9AE0.h"
#include "Game/Class_10E6FD2C.h"
#include "Game/Class_10E9BE7C.h"

extern void* DAT_10e6fd2c[];

Class_10E9BE7C* FUN_10c51550();

// FUNCTION: 0x10AC9AE0 ?Release@Class_10AC9AE0@@QAEXXZ
void Class_10AC9AE0::Release()
{
    if (m_Handle)
    {
        FUN_10c51550()->FUN_10c4e880(m_Handle);
        m_Handle = 0;
    }
}

// FUNCTION: 0x10ACA530 ?Init@Class_10E6FD2C@@QAEPAV1@XZ
Class_10E6FD2C* Class_10E6FD2C::Init()
{
    Unknown00 = DAT_10e6fd2c;
    Unknown04 = 0;
    Unknown08 = 0;
    return this;
}
