// Game/Unsorted_10C49230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C49740.h"
#include "Game/Class_10C58C80.h"
#include "Game/Class_10C58C90.h"

void GetCadenceFactory();

class Class_10E9BE7C;

Class_10E9BE7C* FUN_10c51550();

void FUN_10c53200();

void FUN_10c562c0();

void FUN_10c57e70();

class Class_Field_10C58C80 {
public:
    void FUN_10c57e70();
};

struct Info_10C58C90
{
    char Unknown00[0xDC];
    Class_10C49740 UnknownDC;
};

// FUNCTION: 0x10C4CD50 ?EnsureCadenceFactory@@YAXXZ
void EnsureCadenceFactory()
{
    GetCadenceFactory();
}

// FUNCTION: 0x10C515F0 ?FUN_10c515f0@@YAPAVClass_10E9BE7C@@XZ
Class_10E9BE7C* FUN_10c515f0()
{
    return FUN_10c51550();
}

// FUNCTION: 0x10C53230 ?FUN_10c53230@@YAXXZ
void FUN_10c53230()
{
    FUN_10c53200();
}

// FUNCTION: 0x10C56CF0 ?GetSoundSimulator@@YAXXZ
void GetSoundSimulator()
{
    FUN_10c562c0();
}

// FUNCTION: 0x10C58C80 ?FUN_10c58c80@Class_10C58C80@@QAEXXZ
void Class_10C58C80::FUN_10c58c80()
{
    Field00->FUN_10c57e70();
}

// FUNCTION: 0x10C58C90 ?FUN_10c58c90@Class_10C58C90@@QAEXHH@Z
void Class_10C58C90::FUN_10c58c90(int A, int B)
{
    int Value = A;
    Unknown00->UnknownDC.FUN_10c49740(&Value, B);
}
