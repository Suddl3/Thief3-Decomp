// Game/Unsorted_10C5F060.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C80360
{
public:
    Class_10C80360();

    char Unknown00[0x4c];
};

extern Class_10C80360* DAT_10ff710c;

// FUNCTION: 0x10C5F280 ?FUN_10c5f280@@YAPAVClass_10C80360@@XZ
Class_10C80360* FUN_10c5f280()
{
    if (!DAT_10ff710c)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff710c = new(0, 0, 0, 0, 0) Class_10C80360;
        GetAllocator()->Virtual9();
    }
    return DAT_10ff710c;
}
