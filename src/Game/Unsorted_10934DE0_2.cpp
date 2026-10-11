// Game/Unsorted_10934DE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109242E0.h"
#include "Game/Class_10934DE0.h"

extern Class_109242E0* DAT_10f319a0;

Class_10905A90_Member* GetAllocator();

void __stdcall FUN_10d6b575(int A, int B, int C, unsigned int D, int E, int* F, int G, int H);

// FUNCTION: 0x10934DE0 ?FUN_10934de0@Class_10934DE0@@QAEXXZ
void Class_10934DE0::FUN_10934de0()
{
    unsigned int Length = DAT_10f319a0->Unknown08;
    GetAllocator()->Virtual8(0, 0);
    int Rect[4];
    Rect[2] = 0x80;
    Rect[3] = 0x80;
    Rect[0] = 0;
    Rect[1] = 0;
    FUN_10d6b575(Unknown00, 0, 0, Length, 0, Rect, 1, 0);
    GetAllocator()->Virtual9();
}
