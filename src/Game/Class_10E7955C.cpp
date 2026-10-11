// Game/Class_10E7955C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10EB766C.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88.h"
#include "Game/Class_10E7955C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E7C2CC : public Class_10E6DC88
{
public:
    Class_10E7C2CC() : Class_10E6DC88(0x71)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10B35670 ?FUN_10b35670@Class_10E7955C@@UAEPAVClass_10E7C2CC@@XZ
Class_10E7C2CC* Class_10E7955C::FUN_10b35670()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E7C2CC* Result = new(0, 0, 0, 0, 0) Class_10E7C2CC;
    GetAllocator()->Virtual9();
    return Result;
}
