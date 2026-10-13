// Game/Class_10E5D858.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D858.h"
#include "Game/Class_10E6D07C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A992B0 ?FUN_10a992b0@Class_10E5D858@@UAEPAVClass_10E6D07C@@XZ
Class_10E6D07C* Class_10E5D858::FUN_10a992b0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D07C* Result = new(0, 0, 0, 0, 0) Class_10E6D07C;
    GetAllocator()->Virtual9();
    return Result;
}
