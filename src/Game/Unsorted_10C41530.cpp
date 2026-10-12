// Game/Unsorted_10C41530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cRefPtr.h"
#include "Game/Class_10C41530.h"
#include "Game/Class_10C423F0.h"
#include "Game/Object_10AB5B20.h"

struct Struct_10C41530
{
    cRefPtr Unknown00;
    char Unknown04[8];
};

struct Struct_10C423F0
{
};

// FUNCTION: 0x10C41530 ?GetItem@Class_10C41530@@QAE?AVcRefPtr@@H@Z
cRefPtr Class_10C41530::GetItem(int Index)
{
    return m_Items[Index].Unknown00;
}
