// Game/Class_10E5B7C8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B7C8.h"

struct Struct_109E4FB0_Item
{
};

// FUNCTION: 0x109E4FB0 ?FUN_109e4fb0@Class_10E5B7C8@@QAEXXZ
void Class_10E5B7C8::FUN_109e4fb0()
{
    for (int i = 0; i < Unknown1E8; i++)
    {
        if (Unknown1F0[i])
        {
            delete Unknown1F0[i];
            Unknown1F0[i] = 0;
        }
    }
}
