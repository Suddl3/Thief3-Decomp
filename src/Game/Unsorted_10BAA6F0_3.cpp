// Game/Unsorted_10BAA6F0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10BAA8A0.h"

class Class_10B9CAC0;

class AAIController;

struct Struct_10BAA750
{
    char Unknown00[8];
    Class_10B9CAC0* Unknown08;
};

class AAIPawnController
{
    DECLARE_CLASS(AAIPawnController, AAIController, 0x0, AICore)

public:
    char Unknown00[0x118];
    Struct_10BAA750* Unknown118;
};

class AAIPawn
{
public:
    char Unknown00[0xC0];
    UObject* Controller;
};

// FUNCTION: 0x10BAA750 ?FUN_10baa750@Class_10BAA8A0@@QAEPAVClass_10B9CAC0@@XZ
Class_10B9CAC0* Class_10BAA8A0::FUN_10baa750()
{
    AAIPawnController* Ctrl = Cast<AAIPawnController>(m_Pawn->Controller);
    if (Ctrl && Ctrl->Unknown118)
        return Ctrl->Unknown118->Unknown08;
    return 0;
}
