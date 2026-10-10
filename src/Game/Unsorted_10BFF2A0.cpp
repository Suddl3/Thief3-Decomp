// Game/Unsorted_10BFF2A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

class Class_10978090
{
public:
    int FUN_10978090();
};

class Class_10BFF460
{
public:
    void* FUN_10bff2a0();

    char Unknown00[8];
    Class_10978090 Unknown08;
};

// FUNCTION: 0x10BFF2A0 ?FUN_10bff2a0@Class_10BFF460@@QAEPAXXZ
void* Class_10BFF460::FUN_10bff2a0()
{
    if (Unknown08.FUN_10978090())
        return Cast<APawn>((UObject*)Unknown08.FUN_10978090());
    return 0;
}
