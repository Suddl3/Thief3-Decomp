// Game/Unsorted_10ABEA90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ABED70.h"
#include "Game/Class_10ACEE90.h"

Class_10ACEE90* FUN_10acee60();

class cCitySectionManager;

extern cCitySectionManager* DAT_10f3a3fc;

void* FUN_10905c10(int Kind, int* Arg, int A, int B, int C, int D);

// FUNCTION: 0x10ABED70 ?FUN_10abed70@Class_10ABED70@@QAEXXZ
void Class_10ABED70::FUN_10abed70()
{
    FUN_10abe520(Unknown0C, 0);
    FUN_10acee60()->FUN_10acf2d0();
}

// FUNCTION: 0x10ABF0D0 ?GetCitySectionManager@@YAPAVcCitySectionManager@@XZ
cCitySectionManager* GetCitySectionManager()
{
    if (!DAT_10f3a3fc)
    {
        int Local = 0;
        DAT_10f3a3fc = (cCitySectionManager*)FUN_10905c10(1, &Local, 0, 0, 0, 0);
    }
    return DAT_10f3a3fc;
}
