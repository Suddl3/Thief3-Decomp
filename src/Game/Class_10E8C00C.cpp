// Game/Class_10E8C00C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C00C.h"

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
};

// FUNCTION: 0x10C068F0 ?FUN_10c068f0@Class_10E8C00C@@UAEXAAVFArchive@@@Z
void Class_10E8C00C::FUN_10c068f0(FArchive& Ar)
{
    int Count = Unknown04;
    Ar.Virtual1(&Count, 4);
    for (int i = 0; i < Count; i++)
        Unknown0C[i]->FUN_10c068f0(Ar);
}
