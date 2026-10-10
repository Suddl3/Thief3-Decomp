// Game/Class_10E9092C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E9092C.h"

class Class_10971570
{
public:
    int FUN_10971570(int Id, bool* Out);
};

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
