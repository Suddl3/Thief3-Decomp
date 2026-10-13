// Game/Class_10E5D818.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D818.h"
#include "Game/Class_10E6CD70.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A94890 ?Create@Class_10E5D818@@UAEPAVClass_10E6CD70@@XZ
Class_10E6CD70* Class_10E5D818::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CD70* Result = new(0, 0, 0, 0, 0) Class_10E6CD70;
    GetAllocator()->Virtual9();
    return Result;
}
