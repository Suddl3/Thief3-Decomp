// Game/Unsorted_10B25DC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

class WindowManager
{
public:
    virtual void Virtual0(int A, int B, int C);

    char Unknown04[0x94];
    int Unknown98;
};

extern WindowManager* GWindowManager;

// FUNCTION: 0x10B265B0 ?FUN_10b265b0@@YGXPAH0H@Z
void __stdcall FUN_10b265b0(int* A, int* B, int C)
{
    if (*B)
        GWindowManager->Virtual0(C, 3, GWindowManager->Unknown98);
    *B = 0;
    *A = 0;
}
