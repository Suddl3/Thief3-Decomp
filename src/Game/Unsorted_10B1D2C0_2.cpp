// Game/Unsorted_10B1D2C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B1D2C0.h"
#include "Game/Class_10E7A768.h"
#include "Game/Class_10E7C584.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_109A62E0;

class Class_10B48300;

class Object_10B22790;

class Class_10B384C0
{
public:
    Class_10B384C0(Class_109A62E0* Arg, void* Other);

    char Pad00[0x18];
};

// FUNCTION: 0x10B1D2C0 ?Init@Class_10B1D2C0@@QAEPAV1@PAVClass_109A62E0@@@Z
Class_10B1D2C0* Class_10B1D2C0::Init(Class_109A62E0* Arg)
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown00 = new(0, 0, 0, 0, 0) Class_10E7C584(Arg);
    Unknown04 = new(0, 0, 0, 0, 0) Class_10E7A768((int)Arg, (int)Unknown00);
    Unknown08 = new(0, 0, 0, 0, 0) Class_10B384C0(Arg, Unknown04);
    return this;
}
