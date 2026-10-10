// Game/Class_10E5D814.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D814.h"
#include "Game/Class_10EB766C.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E6CD50 : public Class_10E6DC88
{
public:
    Class_10E6CD50() : Class_10E6DC88(0x45) {}
    virtual ~Class_10E6CD50();
    virtual void FUN_10bbe970();
};

// FUNCTION: 0x10A94640 ?FUN_10a94640@Class_10E5D814@@UAEPAVClass_10E6CD50@@XZ
Class_10E6CD50* Class_10E5D814::FUN_10a94640()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CD50* Result = new(0, 0, 0, 0, 0) Class_10E6CD50;
    FUN_10905aa0()->Virtual9();
    return Result;
}
