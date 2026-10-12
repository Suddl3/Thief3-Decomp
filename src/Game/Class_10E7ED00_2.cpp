// Game/Class_10E7ED00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A18FA0.h"
#include "Game/Class_10E7E538.h"
#include "Game/cLockPickController.h"
#include "Game/Class_10E7ED00.h"

struct Struct_10B3ACE0;

class Object_10A18FC0 : public Class_10A18FA0
{
};

Object_10A18FC0* FUN_10a18fc0();

// FUNCTION: 0x10B3E380 ?FUN_10b3e380@Class_10E7ED00@@UAEXPAUStruct_10B3ACE0@@MM@Z
void Class_10E7ED00::FUN_10b3e380(Struct_10B3ACE0* A, float B, float C)
{
    if (!FUN_10a18fc0()->FUN_10a18fa0(3))
        Class_10E7E538::FUN_10b3ace0(A, 0, 0);
    else
        Class_10E7E538::FUN_10b3ace0(A, B, C);
}
