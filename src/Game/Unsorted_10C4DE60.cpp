// Game/Unsorted_10C4DE60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C4DE60.h"

struct Elem_10C4DE60
{
    char Unknown00[0x48];
};

struct Struct_10C4DE60
{
    char Unknown00[0xC];
    Elem_10C4DE60* Unknown0c;
};

// FUNCTION: 0x10C4DE60 ?GetElement@Class_10C4DE60@@QAEPAUElem_10C4DE60@@HH@Z
Elem_10C4DE60* Class_10C4DE60::GetElement(int p1, int p2)
{
    return &m_Groups[p1].Unknown0c[p2];
}
