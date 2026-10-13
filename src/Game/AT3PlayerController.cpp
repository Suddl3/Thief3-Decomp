// Game/AT3PlayerController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B1D3D0.h"
#include "Game/Class_10B228A0.h"
#include "T3Player/T3PlayerClasses.h"

struct Struct_10B1D1C0
{
    int Unknown00;
    Class_10B228A0* Unknown04;
};

// FUNCTION: 0x10B1D1C0 ?FUN_10b1d1c0@AT3PlayerController@@UAEHXZ
int AT3PlayerController::Virtual98()
{
    Struct_10B1D1C0* Handle = pad0.Unknown00;
    return (!Handle ? 0 : Handle->Unknown04)->FUN_10b228a0();
}
