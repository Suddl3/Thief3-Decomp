// Game/Unsorted_10BFF2A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "Game/Class_10978090.h"

class Class_10BFF460
{
public:
    void* FUN_10bff2a0();

    char Unknown00[8];
    Class_10978090 m_Pawn;
};

// FUNCTION: 0x10BFF2A0 ?FUN_10bff2a0@Class_10BFF460@@QAEPAXXZ
void* Class_10BFF460::FUN_10bff2a0()
{
    if (m_Pawn.FUN_10978090())
        return Cast<APawn>((UObject*)m_Pawn.FUN_10978090());
    return 0;
}
