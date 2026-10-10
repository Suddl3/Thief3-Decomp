// Game/Unsorted_10C1A6C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090EC30.h"
#include "Game/Class_10BA9FD0.h"

class Class_10BAA6B0_Param;

class Class_10BABED0 : public Class_10BA9FD0
{
};

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

class Class_10BB75C0
{
public:
    bool FUN_10bb75c0();
};

extern char const* const DAT_10e47660;

class Class_10E98CF8
{
public:
    virtual bool FUN_10c1a790(Class_10BAA6B0_Param* A);

    Class_1090EC30 Unknown04;
};

// FUNCTION: 0x10C1A790 ?FUN_10c1a790@Class_10E98CF8@@UAE_NPAVClass_10BAA6B0_Param@@@Z
bool Class_10E98CF8::FUN_10c1a790(Class_10BAA6B0_Param* A)
{
    Class_10BABED0* Obj = FUN_10baa6b0(A);
    if (Obj && ((Class_10BB75C0*)Obj->FUN_10ba9fd0())->FUN_10bb75c0())
    {
        if (!Unknown04.FUN_1090ec30(&DAT_10e47660) && !Unknown04.FUN_1090ec30("unassigned"))
            return true;
    }
    return false;
}
