// Game/Unsorted_10B10250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>
#include "Game/Class_10B10A70.h"
#include "Game/Class_10B10B80.h"
#include "Game/Class_10B10C30.h"
#include "Game/Class_10E6D4F0.h"
#include "Game/Class_10E77978.h"
#include "Game/Class_10E779F0.h"

extern "C" void* memset(void*, int, unsigned);

extern bool DAT_10ff35ce;

extern int DAT_10f7b5c8[0x1e000];

inline Class_10E6D4F0::~Class_10E6D4F0() {}

// FUNCTION: 0x10B10A70 ?Init@Class_10B10A70@@QAEPAV1@XZ
Class_10B10A70* Class_10B10A70::Init()
{
    memset(Unknown00, 0, sizeof(Unknown00));
    if (!DAT_10ff35ce)
    {
        memset(DAT_10f7b5c8, 0, sizeof(DAT_10f7b5c8));
        DAT_10ff35ce = true;
    }
    return this;
}

// FUNCTION: 0x10B10B80 ?FUN_10b10b80@Class_10B10B80@@QAE_NH@Z
bool Class_10B10B80::FUN_10b10b80(int p1)
{
    return FUN_10ad24b0(p1) != 0;
}

// FUNCTION: 0x10B10C30 ?FUN_10b10c30@Class_10B10C30@@QAEXH@Z
void Class_10B10C30::FUN_10b10c30(int p1)
{
    FUN_10b10ab0(0, p1);
}
