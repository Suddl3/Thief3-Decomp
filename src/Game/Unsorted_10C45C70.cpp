// Game/Unsorted_10C45C70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C41420
{
public:
};

class Class_10C45C70 : public Class_10C41420
{
public:
    Class_10C45C70();

    char Unknown00[0x12c];
};

extern Class_10C45C70* DAT_10ff70b0;

// FUNCTION: 0x10C47D90 ?GetSoundBufferPool@@YAPAVClass_10C41420@@XZ
Class_10C41420* GetSoundBufferPool()
{
    if (!DAT_10ff70b0)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff70b0 = new(0, 0, 0, 0, 0) Class_10C45C70;
        GetAllocator()->Virtual9();
    }
    return DAT_10ff70b0;
}
