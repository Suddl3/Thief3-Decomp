// Game/Unsorted_10C04AA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C04B70.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

struct Struct_10C04B70
{
    char Unknown00[0x1C];
};

// FUNCTION: 0x10C04B70 ?MoveItems@Class_10C04B70@@QAEXHHH@Z
void Class_10C04B70::MoveItems(int From, int To, int Count)
{
    if (From != To && Count)
        memmove(m_Items + To, m_Items + From, Count * sizeof(Struct_10C04B70));
}
