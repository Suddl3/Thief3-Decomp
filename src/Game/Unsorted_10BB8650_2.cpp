// Game/Unsorted_10BB8650_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10BB8650.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"

class AAIPawn;

class Class_10B9CAC0
{
public:
    void FUN_10b9e430();
};

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// FUNCTION: 0x10BB8650 ?FUN_10bb8650@Class_10BB8650@@QAE_NM@Z
bool Class_10BB8650::FUN_10bb8650(float Value)
{
    Unknown288 = Value;
    if (Value <= 0.0f)
    {
        Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
        Class_10B9CAC0* Target;
        if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
            Target = Controller->Unknown118->Unknown08;
        else
            Target = 0;
        Target->FUN_10b9e430();
        return true;
    }
    return false;
}
