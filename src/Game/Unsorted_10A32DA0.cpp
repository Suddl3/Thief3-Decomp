// Game/Unsorted_10A32DA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cSoundStreamingManager.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern cSoundStreamingManager* DAT_10f39f40;

// FUNCTION: 0x10A32FA0 ?GetSoundStreamingManager@@YAPAVcSoundStreamingManager@@XZ
cSoundStreamingManager* GetSoundStreamingManager()
{
    if (!DAT_10f39f40)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f39f40 = new(0, 0, 0, 0, 0) cSoundStreamingManager;
        GetAllocator()->Virtual9();
    }
    return DAT_10f39f40;
}
