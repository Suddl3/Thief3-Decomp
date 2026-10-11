// Game/Unsorted_10A943E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7F8.h"
#include "Game/Class_10E5D868.h"
#include "Game/Class_10E6CD40.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cd24[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CD24 : public Class_10EB766C
{
public:
    Class_10E6CD24()
    {
        VTable = DAT_10e6cd24;
    }
};

// FUNCTION: 0x10A943E0 ?FUN_10a943e0@Class_10E5D7F8@@UAEPAVClass_10E6CD24@@XZ
Class_10E6CD24* Class_10E5D7F8::FUN_10a943e0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CD24* Result = new(0, 0, 0, 0, 0) Class_10E6CD24;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A94510 ?FUN_10a94510@Class_10E5D868@@UAEPAVClass_10E6CD40@@XZ
Class_10E6CD40* Class_10E5D868::FUN_10a94510()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CD40* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CD40), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CD40*>(Memory)->FUN_10a943d0();
    GetAllocator()->Virtual9();
    return Result;
}
