// Game/Unsorted_10BBD180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E90A64
{
public:
    virtual void FUN_10bbd2a0(FArchive& Ar);

    int Unknown04;
    void* Unknown08;
    void* Unknown0C;
};

// FUNCTION: 0x10BBD2A0 ?FUN_10bbd2a0@Class_10E90A64@@UAEXAAVFArchive@@@Z
void Class_10E90A64::FUN_10bbd2a0(FArchive& Ar)
{
    Ar.Serialize(&Unknown04, 4);
    bool HasA = Unknown08 != 0;
    Ar.Serialize(&HasA, 1);
    if (HasA)
    {
        if (Ar.Unknown14)
            Unknown08 = new(0, 0, 0, 0, 0) int;
        Ar.Serialize(Unknown08, 4);
    }
    bool HasB = Unknown0C != 0;
    Ar.Serialize(&HasB, 1);
    if (HasB)
    {
        if (Ar.Unknown14)
            Unknown0C = new(0, 0, 0, 0, 0) char;
        Ar.Serialize(Unknown0C, 1);
    }
}
