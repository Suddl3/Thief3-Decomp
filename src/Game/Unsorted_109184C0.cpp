// Game/Unsorted_109184C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109203B0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void DestroyState();

void FUN_10932b40();

class Class_10924100;

extern Class_10924100* DAT_10f2c740;

// FUNCTION: 0x10918D00 ?FUN_10918d00@@YAXXZ
void FUN_10918d00()
{
    DestroyState();
    GetAllocator()->Virtual8(0, 0);
    DAT_10f2c740 = (Class_10924100*)new(0, 0, 0, 0, 0) Class_109203B0();
    GetAllocator()->Virtual9();
    FUN_10932b40();
}
