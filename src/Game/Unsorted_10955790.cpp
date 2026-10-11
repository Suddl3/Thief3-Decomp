// Game/Unsorted_10955790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E4A668
{
public:
    Class_10E4A668();
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A);
    bool FUN_10944f00(int A, int B, int C);

    char Unknown04[0x5C];
    int Unknown60;
    char Unknown64[0x148];
};

// FUNCTION: 0x10955790 ?FUN_10955790@@YAPAVClass_10E4A668@@H@Z
Class_10E4A668* FUN_10955790(int A)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E4A668* Result = new(0, 0, 0, 0, 0) Class_10E4A668;
    GetAllocator()->Virtual9();
    Result->Unknown60 |= 0x809;
    if (!Result->FUN_10944f00(A, 0, 0))
    {
        Result->Virtual5(1);
        return 0;
    }
    return Result;
}
