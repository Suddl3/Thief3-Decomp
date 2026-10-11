// Game/Class_10E79560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88.h"
#include "Game/Class_10E79560.h"
#include "Game/Class_10EB766C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Its primary table is its own; its second base's table is named by its class.
class Class_10E7C2EC : public Class_10E6DC88
{
public:
    Class_10E7C2EC()
        : Class_10E6DC88(0x72)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10B357A0 ?FUN_10b357a0@Class_10E79560@@UAEPAVClass_10E7C2EC@@XZ
Class_10E7C2EC* Class_10E79560::FUN_10b357a0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E7C2EC* Result = new(0, 0, 0, 0, 0) Class_10E7C2EC;
    GetAllocator()->Virtual9();
    return Result;
}
