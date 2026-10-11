// Game/Class_10E5D83C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D83C.h"
#include "Game/Class_10EB766C.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6CFB8.h"
#include "Game/Class_10E6DC88.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A987A0 ?FUN_10a987a0@Class_10E5D83C@@UAEPAVClass_10E6CFB8@@XZ
Class_10E6CFB8* Class_10E5D83C::FUN_10a987a0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CFB8* Result = new(0, 0, 0, 0, 0) Class_10E6CFB8;
    GetAllocator()->Virtual9();
    return Result;
}
