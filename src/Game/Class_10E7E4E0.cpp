// Game/Class_10E7E4E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E7E4E0.h"
#include "Game/Struct_10B48890.h"

class Class_10B3AF40_UnknownB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Struct_10B48890* Virtual6();
};

class AGarrett
{
public:
    char Unknown00[0x44];
    FVector Velocity;
    char Unknown50[0x60];
    Class_10B3AF40_UnknownB0* m_physicsObject;
};

// FUNCTION: 0x10B3AED0 ?FUN_10b3aed0@Class_10E7E4E0@@UAEXPAVAGarrett@@@Z
void Class_10E7E4E0::FUN_10b3aed0(AGarrett* Garrett)
{
    Struct_10B48890* Body = Garrett->m_physicsObject->Virtual6();
    Body->Unknown2C = Garrett->Velocity;
    Body->Unknown3C = 1000.0f;
    Virtual4();
}
