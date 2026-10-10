// Game/Unsorted_10BAA6F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10BAA6F0.h"

class AAIController;

struct Struct_10BAA6F0
{
    char Unknown00[4];
    int Unknown04;
};

class AAIPawnController
{
    DECLARE_CLASS(AAIPawnController, AAIController, 0x0, AICore)

public:
    char Unknown00[0x118];
    Struct_10BAA6F0* Unknown118;
};

class AAIPawn
{
public:
    char Unknown00[0xC0];
    UObject* Controller;
};

// FUNCTION: 0x10BAA6F0 ?FUN_10baa6f0@Class_10BAA6F0@@QAEHXZ
int Class_10BAA6F0::FUN_10baa6f0()
{
    AAIPawnController* Ctrl = Cast<AAIPawnController>(Unknown34->Controller);
    if (Ctrl && Ctrl->Unknown118)
        return Ctrl->Unknown118->Unknown04;
    return 0;
}
