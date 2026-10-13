// Game/Unsorted_10B37F00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/PlayerStateController.h"
#include "Game/Class_10B25200.h"

class Class_1098E3D0;

class Class_10BB3190_Result;

class Class_10B255F0;

void FUN_10a4a9f0(Class_1098E3D0* A);

Class_10BB3190_Result* FUN_10983cf0(int A);

Class_10B255F0* GetSelection();

class Class_10B37F00
{
public:
    void FUN_10b37f00(Class_1098E330* A, int Unused1, int Unused2);

    char Unknown00[8];
    PlayerStateController* Unknown08;
};

// FUNCTION: 0x10B37F00 ?FUN_10b37f00@Class_10B37F00@@QAEXPAVClass_1098E330@@HH@Z
void Class_10B37F00::FUN_10b37f00(Class_1098E330* A, int Unused1, int Unused2)
{
    int Result = 0;
    A->FUN_1098e330(0x8001fa, &Result);
    if (Result == 0)
    {
        if (A->IsA(APawn::StaticClass()))
            Unknown08->HandleBodyCarryNotification((int)FUN_10983cf0((int)A));
        if (Result == 0)
            return;
    }
    FUN_10a4a9f0((Class_1098E3D0*)A);
    ((Class_10B25200*)GetSelection())->SetJunkItem((int)A);
}
