// Game/Unsorted_10C086D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C086D0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

extern void* DAT_10ff66ac;

// FUNCTION: 0x10C08760 ?AcquireShared@@YAXH@Z
void AcquireShared(int A)
{
    if (!DAT_10ff66ac)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff66ac = new(0, 0, 0, 0, 0) Class_10C086D0(A);
        GetAllocator()->Virtual9();
    }
    ++*(int*)DAT_10ff66ac;
}
