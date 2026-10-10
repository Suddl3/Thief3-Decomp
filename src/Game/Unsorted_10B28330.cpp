// Game/Unsorted_10B28330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B28330.h"
#include "Game/Class_10B31570.h"

// FUNCTION: 0x10B28330 ?FUN_10b28330@Class_10B28330@@QAEX_N@Z
void Class_10B28330::FUN_10b28330(bool A)
{
    if (A)
    {
        if (Unknown184)
        {
            Unknown184->FUN_10b31570(0);
            Unknown184->Virtual56(2);
        }
    }
    else
    {
        if (Unknown184)
        {
            Unknown184->Virtual56(0);
            Unknown184->FUN_10b31570(1);
        }
    }
}
