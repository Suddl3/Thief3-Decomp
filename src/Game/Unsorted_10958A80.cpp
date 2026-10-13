// Game/Unsorted_10958A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10958D00.h"
#include "Game/Class_1096A820.h"
#include "Game/Class_10958A80.h"

extern "C" void* memcpy(void* Dst, const void* Src, unsigned int Size);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr) throw();

class FVector
{
public:
    float X, Y, Z;
};

// FUNCTION: 0x10958A80 ?FUN_10958a80@Class_10958A80@@QAEHPAVFVector@@@Z
int Class_10958A80::FUN_10958a80(FVector* A)
{
    int i;
    for (i = 0; i < Unknown18; i++)
    {
        if ((Unknown00[i].X - A->X) * (Unknown00[i].X - A->X) <= 9.9999994e-11f
            && (Unknown00[i].Y - A->Y) * (Unknown00[i].Y - A->Y) <= 9.9999994e-11f
            && (Unknown00[i].Z - A->Z) * (Unknown00[i].Z - A->Z) <= 9.9999994e-11f)
            break;
    }
    if (i == Unknown18)
    {
        Unknown00[i] = *A;
        Unknown18++;
    }
    return i;
}

// FUNCTION: 0x10958D00 ?Apply@Class_10958D00@@QAEXXZ
void Class_10958D00::Apply()
{
    if (Unknown14 != Unknown10)
        Unknown10 = Unknown14;
    if (Unknown18 != Unknown0C)
    {
        if (Unknown18 < Unknown0C)
            Unknown0C = Unknown18;
        Class_1096A820* Old = Unknown00;
        Unknown0C = Unknown18;
        Class_1096A820* New = new(0, 0, 0, 0, 0) Class_1096A820[Unknown18];
        Unknown00 = New;
        memcpy(New, Old, Unknown0C * sizeof(Class_1096A820));
        operator delete(Old);
    }
}
