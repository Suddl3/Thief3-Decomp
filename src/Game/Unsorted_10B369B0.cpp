// Game/Unsorted_10B369B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10B374A0.h"
#include "Game/WindowManager.h"
#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10B154C0.h"
#include "Game/Class_10B36E40_Arg.h"

Class_10B1B8A0* FUN_10b1b600();

extern WindowManager* GWindowManager;

class WindowManager;

struct FColor
{
    FColor() {}
    int Unknown00;
};

FColor GetFlavorColor(int A);

void FUN_10a27a60(void* A, void* B);

void* GetWindowManager();

// FUNCTION: 0x10B36E40 ?FUN_10b36e40@@YGHHHPAVClass_10B36E40_Arg@@@Z
int __stdcall FUN_10b36e40(int A, int B, Class_10B36E40_Arg* C)
{
    if (GWindowManager)
    {
        cString Text(*(Class_1090A780*)C->Virtual4(0)->GetName());
        cString Key;
        FUN_10a27a60(&Text, &Key);
        ((Class_10B154C0*)GetWindowManager())->FUN_10b15e30(&Key, GetFlavorColor(0).Unknown00);
    }
    return 1;
}

// FUNCTION: 0x10B374A0 ?FUN_10b374a0@Class_10B374A0@@QAEXHPAV1@H@Z
void Class_10B374A0::FUN_10b374a0(int A, Class_10B374A0* B, int C)
{
    if (B->Unknown04 == Unknown04)
    {
        if (FUN_10b1b600()->FUN_10b1b7f0(A) && GWindowManager)
            GWindowManager->FUN_10b16110(A, 1);
    }
}
