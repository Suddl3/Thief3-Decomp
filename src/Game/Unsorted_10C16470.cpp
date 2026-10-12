// Game/Unsorted_10C16470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E98C88.h"

class Class_10E98C8C;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10E98C88* DAT_10ff7080;

// FUNCTION: 0x10C164C0 ?FUN_10c164c0@@YAXPAVClass_10E98C8C@@@Z
void FUN_10c164c0(Class_10E98C8C* Item)
{
    if (!DAT_10ff7080)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff7080 = new(0, 0, 0, 0, 0) Class_10E98C88;
        GetAllocator()->Virtual9();
    }
    int Index = DAT_10ff7080->Count;
    cIntArray* List = DAT_10ff7080;
    List->SetCount(Index + 1);
    List->Data[Index] = (int)Item;
}
