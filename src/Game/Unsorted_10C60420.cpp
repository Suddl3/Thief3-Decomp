// Game/Unsorted_10C60420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C60480.h"

class Class_10953EC0
{
public:
    void FUN_10953ec0();
};

// FUNCTION: 0x10C60480 ?FUN_10c60480@Class_10C60480@@QAEXXZ
void Class_10C60480::FUN_10c60480()
{
    FUN_10c60420();
    Unknown38 = false;
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10953EC0* Item = Unknown14[i];
        if (Item)
        {
            Item->FUN_10953ec0();
            ::operator delete(Item);
        }
    }
    Unknown0C = 0;
}
