// Game/Unsorted_10C5C3E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C5D4F0.h"
#include "Game/Class_10905A90_Member.h"

extern Class_10C5D4F0* DAT_10ff7108;

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C5C3E0
{
public:
    Class_10C5C3E0();

    char Unknown00[0x48];
};

extern Class_10C5C3E0* DAT_10ff7104;

// FUNCTION: 0x10C5C660 ?FUN_10c5c660@@YAPAVClass_10C5C3E0@@XZ
Class_10C5C3E0* FUN_10c5c660()
{
    if (!DAT_10ff7104)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff7104 = new(0, 0, 0, 0, 0) Class_10C5C3E0;
        GetAllocator()->Virtual9();
    }
    return DAT_10ff7104;
}

// FUNCTION: 0x10C5CB70 ?FUN_10c5cb70@@YAXXZ
void FUN_10c5cb70()
{
    if (DAT_10ff7108)
    {
        delete DAT_10ff7108;
        DAT_10ff7108 = 0;
    }
}
