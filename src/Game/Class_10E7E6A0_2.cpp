// Game/Class_10E7E6A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B3AF40_UnknownB0.h"
#include "Game/Class_10B48890.h"
#include "Game/Class_10E7E6A0.h"

class AGarrett
{
public:
    char Unknown00[0x44];
    FVector Velocity;
    char Unknown50[0x60];
    Class_10B3AF40_UnknownB0* m_physicsObjectPadding;
};

// FUNCTION: 0x10B3B130 ?ClearVelocity@Class_10E7E6A0@@QAEXPAVAGarrett@@@Z
void Class_10E7E6A0::ClearVelocity(AGarrett* Garrett)
{
    Class_10B48890* Body = Garrett->m_physicsObjectPadding->Virtual6();
    Body->Virtual18(3, 1, 0);
    Body->Unknown20 = FVector(0.0f, 0.0f, 0.0f);
    Body->Unknown2C = FVector(0.0f, 0.0f, 0.0f);
    Body->Unknown14 = FVector(0.0f, 0.0f, 0.0f);
    Garrett->Velocity = FVector(0.0f, 0.0f, 0.0f);
}
