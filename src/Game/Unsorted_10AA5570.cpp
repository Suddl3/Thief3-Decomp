// Game/Unsorted_10AA5570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA5570.h"

struct Struct_10AA5570_Array
{
    int* Unknown00;
};

struct Struct_10AA5570_Owner
{
    char Unknown00[0x5C];
    Struct_10AA5570_Array* Unknown5C;
};

// FUNCTION: 0x10AA5570 ?GetValueAtIndex@Class_10AA5570@@QAEHXZ
int Class_10AA5570::GetValueAtIndex()
{
    Struct_10AA5570_Array* Array = Unknown00->Unknown5C;
    if (Array == 0)
        return 0;
    return Array->Unknown00[m_Index];
}
