// Game/Class_10E9AEC8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Class_10c380d0_Member.h"
#include "Game/Struct_10C05A50.h"
#include "Game/Struct_10C3D0A0.h"

float FUN_10c05a20(const Struct_10C05A50* A, const Struct_10C05A50* B);

class Class_10C270C0
{
public:
    virtual void Virtual0();

    Class_10C7D570* FUN_10c270c0();

    Class_10c380d0_Member* Unknown04;
};

class Class_10E9AEC8 : public Class_10C270C0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void CheckDistance();

    char Unknown08[0x50];
    unsigned char m_bTriggered;
    Struct_10C05A50 m_Point;
    char Unknown64[4];
    float m_Threshold;
};

// FUNCTION: 0x10C38210 ?CheckDistance@Class_10E9AEC8@@UAEXXZ
void Class_10E9AEC8::CheckDistance()
{
    if (!m_bTriggered)
    {
        Struct_10C3D0A0* Actor = (Struct_10C3D0A0*)FUN_10c270c0()->FUN_10c7d570();
        if (FUN_10c05a20(&m_Point, &Actor->Unknown2C) > m_Threshold)
        {
            m_bTriggered = 1;
            Unknown04->Virtual44();
        }
    }
}
