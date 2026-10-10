// Game/Unsorted_10A300C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A304C0.h"

struct Item_10A304C0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E66390
{
public:
    virtual void Virtual0();
    virtual Class_10E66390* Virtual1();

    Class_10E66390(const Class_109081E0& In);

    Class_109081E0 Unknown04;
};

// FUNCTION: 0x10A300C0 ?Virtual1@Class_10E66390@@UAEPAV1@XZ
Class_10E66390* Class_10E66390::Virtual1()
{
    return new(0, 0, 0, 0, 0) Class_10E66390(Unknown04);
}

// FUNCTION: 0x10A304C0 ?FUN_10a304c0@Class_10A304C0@@QAEXHH@Z
void Class_10A304C0::FUN_10a304c0(int A, int B)
{
    Item_10A304C0 Temp = Unknown08[A];
    Unknown08[A] = Unknown08[B];
    Unknown08[B] = Temp;
}
