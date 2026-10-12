// Game/Class_10E7E658.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B3AF40_UnknownB0.h"
#include "Game/Class_10B48890.h"
#include "Game/Class_10E7E658.h"

class AGarrett
{
public:
    char Unknown00[0xB0];
    Class_10B3AF40_UnknownB0* m_physicsObjectPadding;
};

// FUNCTION: 0x10B3B030 ?StopBody@Class_10E7E658@@QAEXPAVAGarrett@@@Z
void Class_10E7E658::StopBody(AGarrett* Garrett)
{
    Class_10B48890* Body = Garrett->m_physicsObjectPadding->Virtual6();
    Body->Unknown20 = FVector(0.0f, 0.0f, 0.0f);
    Body->Unknown2C = FVector(0.0f, 0.0f, 0.0f);
    Body->Virtual18(8, 1, 0);
}
