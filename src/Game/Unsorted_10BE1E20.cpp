// Game/Unsorted_10BE1E20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E95AC8.h"
#include "Game/Class_10FF667C.h"

class Class_10978090
{
public:
    int FUN_10978090();
};

class Class_10C08E80 : public Class_10978090
{
public:
    void FUN_10c08e80();
};

extern Class_10FF667C* DAT_10ff667c;

// The flags of the object Unknown24 refers to, 0 when it refers to none.
inline int GetFlags()
{
    if (!DAT_10ff667c->Unknown24->FUN_10978090())
        return 0;
    return ((Class_10978090*)DAT_10ff667c->Unknown24->FUN_10978090())->FUN_10978090();
}

// FUNCTION: 0x10BE1E20 ?FUN_10be1e20@Class_10E95AC8@@UAEXXZ
void Class_10E95AC8::FUN_10be1e20()
{
    if (GetFlags() & 4)
        DAT_10ff667c->Unknown24->FUN_10c08e80();
}

// FUNCTION: 0x10BE1E60 ?FUN_10be1e60@Class_10E95AC8@@UAEXHHHHH@Z
void Class_10E95AC8::FUN_10be1e60(int A, int B, int C, int D, int E)
{
    if (GetFlags() & 4)
        DAT_10ff667c->Unknown24->FUN_10c08e80();
}
