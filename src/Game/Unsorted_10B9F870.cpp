// Game/Unsorted_10B9F870.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10905A90_Member.h"

class FArchive;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The object the new-expression builds: its constructor loads it from the archive.
class Class_10B9F2F0
{
public:
    Class_10B9F2F0(FArchive& Ar) { FUN_10b9f2f0(Ar); }
    void FUN_10b9f2f0(FArchive& Ar);

    char Unknown00[0x2c];
};

class Class_10B9F950
{
public:
    void FUN_10b9f950(FArchive& Ar, int Count);

    char Unknown00[0x18];
    Class_10BFBD70 Unknown18;
};

// FUNCTION: 0x10B9F950 ?FUN_10b9f950@Class_10B9F950@@QAEXAAVFArchive@@H@Z
void Class_10B9F950::FUN_10b9f950(FArchive& Ar, int Count)
{
    int Start = Unknown18.Count;
    Unknown18.FUN_10bfbd70(Start + Count);
    for (int i = 0; i < Count; i++)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        Class_10B9F2F0* Item = new(0, 0, 0, 0, 0) Class_10B9F2F0(Ar);
        FUN_10905aa0()->Virtual9();
        Unknown18.Data[Start + i] = (int)Item;
    }
}
