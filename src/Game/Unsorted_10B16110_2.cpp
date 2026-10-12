// Game/Unsorted_10B16110_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/cListReverseCursor.h"
#include "Game/cListCursor.h"
#include "Game/Class_10B2D600.h"
#include "Game/Class_10B2E000.h"

class Class_10B255F0;

Class_10B255F0* GetSelection();

class Class_10B16930
{
public:
    cIntArray FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void ShowJunkItemWindow(int A);
    void FUN_10b16ef0(int A);
    void FUN_10b16300(int A, int B, bool C);

    char Pad00[0x1];
};

// FUNCTION: 0x10B16300 ?FUN_10b16300@Class_10B16930@@QAEXHH_N@Z
void Class_10B16930::FUN_10b16300(int A, int B, bool C)
{
    Class_10B2D600* Item = 0;
    cIntArray Found = FUN_109e6d80(0x69);
    if (Found.Count > 0)
        Item = (Class_10B2D600*)Found.Data[0];
    if (C)
    {
        if (Item)
            Item->RefreshNextSlots();
        Class_10B255F0* Obj = GetSelection();
        if ((char)A)
            ((cListReverseCursor*)Obj)->StepBack();
        else
            ((cListCursor*)Obj)->Advance();
    }
    if (Item)
        ((Class_10B2E000*)Item)->FUN_10b2e000(A, B);
}
