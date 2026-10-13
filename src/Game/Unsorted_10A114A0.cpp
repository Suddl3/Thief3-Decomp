// Game/Unsorted_10A114A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A11910
{
public:
    Class_10A11910();

    char Unknown00[0x44];
};

extern int DAT_10f39870;

// FUNCTION: 0x10A11A10 ?FUN_10a11a10@@YAXXZ
void FUN_10a11a10()
{
    if (!DAT_10f39870)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f39870 = (int)new(0, 0, 0, 0, 0) Class_10A11910;
        GetAllocator()->Virtual9();
    }
}
