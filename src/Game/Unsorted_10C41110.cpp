// Game/Unsorted_10C41110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/cRefPtr.h"

// FUNCTION: 0x10C41110 ?FUN_10c41110@@YAPAVcRefPtr@@PAV1@00@Z
cRefPtr* FUN_10c41110(cRefPtr* Begin, cRefPtr* End, cRefPtr* Out)
{
    cRefPtr* Saved = Out;
    try
    {
        for (; Begin != End; ++Begin)
        {
            new (Out) cRefPtr(*Begin);
            ++Out;
        }
    }
    catch (...)
    {
        for (; Saved != Out; ++Saved)
            Saved->~cRefPtr();
        throw;
    }
    return Out;
}
