// Game/Class_10E5D7F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7F0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cc48[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CC48 : public Class_10EB766C
{
public:
    Class_10E6CC48()
    {
        VTable = DAT_10e6cc48;
    }
};

// FUNCTION: 0x10A93460 ?FUN_10a93460@Class_10E5D7F0@@UAEPAVClass_10E6CC48@@XZ
Class_10E6CC48* Class_10E5D7F0::FUN_10a93460()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CC48* Result = new(0, 0, 0, 0, 0) Class_10E6CC48;
    GetAllocator()->Virtual9();
    return Result;
}
