// Game/Unsorted_10B9C060.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9C450.h"
#include "Game/Class_10FF667C.h"

class Class_10BFFF60
{
public:
    void FUN_10bfff60(int A, int B);
};

extern Class_10FF667C* DAT_10ff667c;

class Object_10B9C450
{
public:
    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    int Unknown10;
};

// FUNCTION: 0x10B9C450 ?FUN_10b9c450@Class_10B9C450@@QAEX_N@Z
void Class_10B9C450::FUN_10b9c450(bool Param)
{
    Object_10B9C450* Object = Unknown118;
    FUN_10b9b940();
    Virtual106();
    if (!Param)
    {
        FUN_10b9c330();
        if (DAT_10ff667c && DAT_10ff667c->Unknown0C)
            DAT_10ff667c->Unknown0C->FUN_10bfff60(Object->Unknown10, Object->Unknown08);
    }
}
