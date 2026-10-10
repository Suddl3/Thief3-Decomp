// Game/Unsorted_10A68C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A680C0.h"
#include "Game/Class_10E6B5B8.h"

// FUNCTION: 0x10A68CB0 ?FUN_10a68cb0@Class_10E6B5B8@@QAEXXZ
void Class_10E6B5B8::FUN_10a68cb0()
{
    for (int i = 0; i < Unknown04; i++)
    {
        Class_10A680C0* Item = Unknown0C[i];
        if (Item)
        {
            Item->FUN_10a680c0();
            ::operator delete(Item);
        }
    }
    Unknown04 = 0;
}
