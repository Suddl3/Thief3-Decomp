// Game/Unsorted_10AD0990.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15CC0.h"

void* GetWindowManager();

extern bool DAT_10f45c0c;

// FUNCTION: 0x10AD0990 ?FUN_10ad0990@@YAXH@Z
void FUN_10ad0990(int A)
{
    if (A == 1 && !DAT_10f45c0c)
        static_cast<Class_10B15CC0*>(GetWindowManager())->OpenMissionCompleteWindow();
}
