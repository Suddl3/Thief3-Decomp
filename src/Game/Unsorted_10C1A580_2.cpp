// Game/Unsorted_10C1A580_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9CBE4.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10E9CBE4* DAT_10ff7090;

extern void* DAT_10ff7118;

// The class whose vtable is DAT_10e98cec: a Class_10E9CBE4 whose constructor sets Unknown04 to 0.
class SoundNotifier : public Class_10E9CBE4
{
public:
    SoundNotifier() : Class_10E9CBE4() { Unknown04 = 0; }
};

// FUNCTION: 0x10C1A580 ?AcquireSoundNotifier@@YAXXZ
void AcquireSoundNotifier()
{
    if (!DAT_10ff7090)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff7090 = new(0, 0, 0, 0, 0) SoundNotifier;
        GetAllocator()->Virtual9();
        DAT_10ff7118 = DAT_10ff7090;
    }
    DAT_10ff7090->Unknown04++;
}
