// Game/Unsorted_10A3BDC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cProximityManager.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A3C210 ?FUN_10a3c210@@YAPAVClass_10E667AC@@XZ
Class_10E66700* FUN_10a3c210()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E66700* Result = new(0, 0, 0, 0, 0) cProximityManager;
    GetAllocator()->Virtual9();
    return Result;
}
