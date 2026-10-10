// Game/Unsorted_10AA3560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AA44B0.h"
#include "Game/Class_10E5D9D8.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUN_10aa3550 is the constructor: it stores the vtable and returns this.
class Class_10E6D498
{
public:
    Class_10E6D498* FUN_10aa3550();

    void* Unknown00;
};

// FUNCTION: 0x10AA3580 ?FUN_10aa3580@Class_10E5D9D8@@UAEPAVClass_10E6D498@@XZ
Class_10E6D498* Class_10E5D9D8::FUN_10aa3580()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D498* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D498), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D498*>(Memory)->FUN_10aa3550();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA44B0 ?FUN_10aa44b0@Class_10AA44B0@@QAEXXZ
void Class_10AA44B0::FUN_10aa44b0()
{
    FUN_10aa3830(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
