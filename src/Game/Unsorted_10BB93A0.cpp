// Game/Unsorted_10BB93A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"

struct Info_10BB9560
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_10BB9560_UnknownB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(void* A, Info_10BB9560* B);
};

struct Struct_10AA3520
{
    char Unknown00[0xB0];
    Class_10BB9560_UnknownB0* UnknownB0;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10BB9560
{
public:
    void FUN_10bb93a0();
    void FUN_10bb9560(float A);

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x1CC];
    float Unknown1D8;
};

// FUNCTION: 0x10BB9560 ?FUN_10bb9560@Class_10BB9560@@QAEXM@Z
void Class_10BB9560::FUN_10bb9560(float A)
{
    Info_10BB9560 Local;
    // the source of the value handed to the virtual call
    Class_10C7D570* Src = Unknown08;
    DAT_10f35dec->UnknownB0->Virtual2(Src->FUN_10c7d570(), &Local);
    Unknown1D8 += A / Local.Unknown04;
    FUN_10bb93a0();
}
