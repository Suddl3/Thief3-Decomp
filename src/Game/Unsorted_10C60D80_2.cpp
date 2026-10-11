// Game/Unsorted_10C60D80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C64AA0.h"
#include "Game/Class_10C60D80.h"

class Class_10C662F0;

struct Elem_10C64AC0
{
    void FUN_10d57770(int A);
    void FUN_10d577b0(void* A, int B);

    char Unknown00[0x38];
};

class Class_10C64AC0
{
public:
    char Unknown00[0x1c];
    Elem_10C64AC0 Unknown1C[1];

    Elem_10C64AC0* FUN_10c64ac0(int Index);
};

void operator delete(void* Ptr);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

Class_10C662F0* FUN_10c65090();

// FUNCTION: 0x10C60D80 ?FUN_10c60d80@Class_10C60D80@@QAEXXZ
void Class_10C60D80::FUN_10c60d80()
{
    if (Unknown12C == 0)
    {
        ::operator delete(Unknown130);
        Unknown130 = 0;
        return;
    }
    if (Unknown130)
    {
        ::operator delete(Unknown130);
        Unknown130 = 0;
    }
    unsigned Hi;
    unsigned Lo;
    ((Class_10C64AA0*)FUN_10c65090())->FUN_10c64aa0(Unknown120, &Hi, &Lo);
    Elem_10C64AC0* Elem = ((Class_10C64AC0*)FUN_10c65090())->FUN_10c64ac0(Hi);
    int Tag = 0;
    Unknown130 = operator new(Unknown12C, Tag, 0, 0, 0, 0);
    Elem->FUN_10d57770(Unknown128 + Unknown124 + Lo);
    Elem->FUN_10d577b0(Unknown130, Unknown12C);
}
