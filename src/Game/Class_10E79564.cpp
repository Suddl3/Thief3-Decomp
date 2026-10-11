// Game/Class_10E79564.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10EB766C.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88.h"
#include "Game/Class_10E79564.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Class_10E7C30C.h's declaration with the constructor added; its primary table is
// the destructor, Virtual1 and FUN_10b359d0, and its second base's table is Virtual0.
class Class_10E7C30C : public Class_10E6DC88
{
public:
    Class_10E7C30C()
        : Class_10E6DC88(0x73)
    {
    }

    virtual ~Class_10E7C30C();
    virtual void Virtual1();
    virtual void FUN_10b359d0();
    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10B358D0 ?FUN_10b358d0@Class_10E79564@@UAEPAVClass_10E7C30C@@XZ
Class_10E7C30C* Class_10E79564::FUN_10b358d0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E7C30C* Result = new(0, 0, 0, 0, 0) Class_10E7C30C;
    FUN_10905aa0()->Virtual9();
    return Result;
}
