// Game/Unsorted_10BA90A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Struct_10BA91E0.h"
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10BA8F10
{
};

class Class_10E8D65C : public Class_10BA8F10
{
public:
    Class_10E8D65C();

    char Unknown00[0x8050];
};

extern Class_10BA8F10* DAT_10ff6684;

// FUNCTION: 0x10BA90A0 ?FUN_10ba90a0@@YAHXZ
int FUN_10ba90a0()
{
    if (!DAT_10ff6684)
        DAT_10ff6684 = new((int)DAT_10ff6684, 0, 0, 0, 0) Class_10E8D65C;
    return (int)DAT_10ff6684;
}

// FUNCTION: 0x10BA91A0 ?PushFront@cIntArray@@QAEXPBH@Z
void cIntArray::PushFront(const int* Item)
{
    SetCount(Unknown00 + 1);
    int Count = Unknown00 - 1;
    if (Count)
        memmove(Unknown08 + 1, Unknown08, Count * sizeof(int));
    Unknown08[0] = *Item;
}

// FUNCTION: 0x10BA91E0 ?FUN_10ba91e0@@YAMPBUStruct_10BA91E0@@0@Z
float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B)
{
    float X = B->Unknown00 - A->Unknown00;
    float Y = B->Unknown04 - A->Unknown04;
    float Z = B->Unknown08 - A->Unknown08;
    return sqrtf(X * X + Y * Y + Z * Z);
}
