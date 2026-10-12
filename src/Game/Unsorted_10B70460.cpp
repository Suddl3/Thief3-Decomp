// Game/Unsorted_10B70460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E871C8.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10E871C8* DAT_10ff65ac;

// FUNCTION: 0x10B70460 ?GetSoupManager@@YAPAVClass_10E871C8@@XZ
Class_10E871C8* GetSoupManager()
{
    if (!DAT_10ff65ac)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff65ac = new(0, 0, 0, 0, 0) Class_10E871C8;
        GetAllocator()->Virtual9();
    }
    return DAT_10ff65ac;
}
