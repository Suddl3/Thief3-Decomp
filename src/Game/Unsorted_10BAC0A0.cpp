// Game/Unsorted_10BAC0A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8D7A8.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10DDA810
{
public:
    Class_10DDA810();

    char Unknown00[0x4c];
};

// FUNCTION: 0x10BAD820 ?FUN_10bad820@@YAPAVClass_10DDA810@@XZ
Class_10DDA810* FUN_10bad820()
{
    return new(0, 0, 0, 0, 0) Class_10DDA810;
}

// FUNCTION: 0x10BAD8A0 ??0Class_10E8D7A8@@QAE@ABV0@@Z
Class_10E8D7A8::Class_10E8D7A8(const Class_10E8D7A8& Other)
    : Unknown04(Other.Unknown04), Unknown08(Other.Unknown08), Unknown0C(Other.Unknown0C), Unknown10(Other.Unknown10),
      Unknown14(Other.Unknown14), Unknown18(Other.Unknown18), Unknown1C(Other.Unknown1C), Unknown20(Other.Unknown20),
      Unknown24(Other.Unknown24), Unknown28(Other.Unknown28), Unknown2C(Other.Unknown2C)
{
}
