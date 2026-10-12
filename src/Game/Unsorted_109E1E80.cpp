// Game/Unsorted_109E1E80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

extern bool DAT_10f35b48;

void AdvanceIndexOnTimer();

void DrawLoadingProgress(float A, bool B);

extern bool DAT_10f35b24;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x109E1F90 ?UpdateLoadingProgress@@YAXM@Z
void UpdateLoadingProgress(float A)
{
    AdvanceIndexOnTimer();
    bool Flag = false;
    if (DAT_10f35b48)
    {
        Flag = true;
        DAT_10f35b48 = false;
    }
    DrawLoadingProgress(A, Flag);
}

// FUNCTION: 0x109E2930 ?FinishLoadingProgress@@YAXXZ
void FinishLoadingProgress()
{
    AdvanceIndexOnTimer();
    bool Flag = false;
    if (DAT_10f35b48)
    {
        Flag = true;
        DAT_10f35b48 = false;
    }
    DrawLoadingProgress(1.0f, Flag);
    DAT_10f35b24 = false;
}

// FUNCTION: 0x109E2970 ?AllocRADMemory@@YGPAXI@Z
void* __stdcall AllocRADMemory(unsigned int A)
{
    return GetAllocator()->Virtual2(A, 0, 0, 0, 0);
}
