// Game/Unsorted_10958A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10958D00.h"
#include "Game/Class_1096A820.h"

extern "C" void* memcpy(void* Dst, const void* Src, unsigned int Size);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr) throw();

// FUNCTION: 0x10958D00 ?FUN_10958d00@Class_10958D00@@QAEXXZ
void Class_10958D00::FUN_10958d00()
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
