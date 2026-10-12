// Game/Unsorted_10B16110_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10B251A0.h"
#include "Game/Class_10B251B0.h"
#include "Game/Class_10B2E000.h"
#include "Game/Class_10B2D600.h"

class Class_10B255F0;

Class_10B255F0* GetSelection();

class cIntArray;

class Class_10B16930
{
public:
    cIntArray FUN_109e6d80(int A);
    void FUN_10b164e0(int A, int B, char C);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void ShowJunkItemWindow(int A);
    void FUN_10b16ef0(int A);

    char Pad00[0x1];
};

// FUNCTION: 0x10B164E0 ?FUN_10b164e0@Class_10B16930@@QAEXHHD@Z
void Class_10B16930::FUN_10b164e0(int A, int B, char C)
{
    int Value = 0;
    cIntArray Found = FUN_109e6d80(0x6a);
    if (Found.Count > 0)
        Value = Found.Data[0];
    if (C)
    {
        if (Value)
            ((Class_10B2D600*)Value)->RefreshNextSlots();
        Class_10B255F0* Obj = GetSelection();
        if ((char)A != 0)
            ((Class_10B251B0*)Obj)->Refresh();
        else
            ((Class_10B251A0*)Obj)->Refresh();
    }
    if (Value)
        ((Class_10B2E000*)Value)->FUN_10b2e000(A, B);
}
