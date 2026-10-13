// Game/Unsorted_10C5AC30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C5B790
{
public:
    Class_10C5B790();

    char Unknown00[4];
};

extern Class_10C5B790* DAT_10ff70d0;

// FUNCTION: 0x10C5B850 ?FUN_10c5b850@@YAPAVClass_10C5B790@@XZ
Class_10C5B790* FUN_10c5b850()
{
    if (!DAT_10ff70d0)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff70d0 = new(0, 0, 0, 0, 0) Class_10C5B790;
        GetAllocator()->Virtual9();
    }
    return DAT_10ff70d0;
}
