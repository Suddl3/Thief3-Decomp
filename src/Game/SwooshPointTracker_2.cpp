// Game/SwooshPointTracker_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/SwooshPointTracker.h"

struct Struct_10AA53E0_Item
{
    char Unknown00[0x1C];
};

// FUNCTION: 0x10AA53E0 ?GetPoint@SwooshPointTracker@@UAEPAUStruct_10AA53E0_Item@@H@Z
Struct_10AA53E0_Item* SwooshPointTracker::GetPoint(int A)
{
    return &m_Points[(m_Head + A) % m_Capacity];
}
