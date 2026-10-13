// Game/Unsorted_10C06FA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C07070.h"

// FUNCTION: 0x10C06FA0 ?IndexToMask@@YAHH@Z
int IndexToMask(int Value)
{
    switch (Value)
    {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 4;
    case 3:
        return 8;
    case 4:
        return 0x10;
    }
    return 0;
}

// FUNCTION: 0x10C07070 ?GetRemainingCapacity@Class_10C07070@@QAEHXZ
int Class_10C07070::GetRemainingCapacity()
{
    int Total = Unknown38 + Unknown2C + Unknown20 + Unknown14 + Unknown08;
    int Used = *(short*)((char*)this + 0x4C) + *(short*)((char*)this + 0x4A) + *(short*)((char*)this + 0x48) + *(short*)((char*)this + 0x46) + *(short*)((char*)this + 0x44);
    if (Total >= 0 && Used >= 0 && Total >= Used)
        return Total - Used;
    return 0;
}
