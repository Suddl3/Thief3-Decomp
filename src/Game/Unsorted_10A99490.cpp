// Game/Unsorted_10A99490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D860.h"
#include "Game/Class_10E5D9E0.h"
#include "Game/Class_10E6D0D0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6d0b4[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6D0B4 : public Class_10EB766C
{
public:
    Class_10E6D0B4()
    {
        VTable = DAT_10e6d0b4;
    }
};

// FUNCTION: 0x10A99490 ?FUN_10a99490@Class_10E5D860@@UAEPAVClass_10E6D0B4@@XZ
Class_10E6D0B4* Class_10E5D860::FUN_10a99490()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D0B4* Result = new(0, 0, 0, 0, 0) Class_10E6D0B4;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A99530 ?FUN_10a99530@Class_10E5D9E0@@UAEPAVClass_10E6D0D0@@XZ
Class_10E6D0D0* Class_10E5D9E0::FUN_10a99530()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D0D0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D0D0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D0D0*>(Memory)->FUN_10a99470();
    GetAllocator()->Virtual9();
    return Result;
}
