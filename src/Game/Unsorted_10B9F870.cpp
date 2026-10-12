// Game/Unsorted_10B9F870.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9F2F0.h"
#include "Game/Class_10B9F950.h"

class FArchive;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B9F950 ?FUN_10b9f950@Class_10B9F950@@QAEXAAVFArchive@@H@Z
void Class_10B9F950::FUN_10b9f950(FArchive& Ar, int Count)
{
    int Start = Unknown18.Count;
    Unknown18.SetCount(Start + Count);
    for (int i = 0; i < Count; i++)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10B9F2F0* Item = new(0, 0, 0, 0, 0) Class_10B9F2F0(Ar);
        GetAllocator()->Virtual9();
        Unknown18.Data[Start + i] = (int)Item;
    }
}
