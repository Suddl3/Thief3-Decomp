// Game/Unsorted_10C28CA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C28CA0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern Class_10C28CA0* DAT_10ff70a0;

// FUNCTION: 0x10C28D20 ?AcquireSingleton@@YAXXZ
void AcquireSingleton()
{
    if (DAT_10ff70a0 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10C28CA0* Result = new(0, 0, 0, 0, 0) Class_10C28CA0;
        DAT_10ff70a0 = Result;
        GetAllocator()->Virtual9();
    }
    DAT_10ff70a0->Unknown0C++;
}
