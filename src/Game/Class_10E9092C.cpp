// Game/Class_10E9092C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10E9092C.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10BB67F0.h"
#include "Game/Struct_10AA3520.h"

// FUNCTION: 0x10BB74E0 ??0Class_10E9092C@@QAE@PAX@Z
Class_10E9092C::Class_10E9092C(void* p1)
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = (Class_10C7D570*)p1;
}

// FUNCTION: 0x10BB7500 ?FUN_10bb7500@Class_10E9092C@@QAE_NH_N@Z
bool Class_10E9092C::FUN_10bb7500(int Value, bool Flag)
{
    if (Flag)
    {
        Unknown04 = 3;
        return Value == 3;
    }
    if (Unknown0C->Unknown64)
        return false;
    bool Local = false;
    int Result = ((Class_10971570*)Unknown0C->FUN_10c7d570())->FUN_10971570(0x42000543, &Local);
    if (Result != 0 && Value > Local)
    {
        Unknown04 = Local;
        return false;
    }
    Unknown04 = Value;
    return true;
}
