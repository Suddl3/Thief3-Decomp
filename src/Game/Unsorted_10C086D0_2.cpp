// Game/Unsorted_10C086D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C086D0.h"
#include "Game/Class_10E8C00C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C086D0_Unknown04
{
public:
    int Unknown00;
    Class_10E8C00C* Unknown04;
};

// FUNCTION: 0x10C086D0 ??0Class_10C086D0@@QAE@H@Z
Class_10C086D0::Class_10C086D0(int A)
{
    Unknown00 = 0;
    Unknown04 = A;
    if (((Class_10C086D0_Unknown04*)A)->Unknown04 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10E8C00C* Obj = new(0, 0, 0, 0, 0) Class_10E8C00C(Unknown04);
        ((Class_10C086D0_Unknown04*)Unknown04)->Unknown04 = Obj;
        GetAllocator()->Virtual9();
    }
}
