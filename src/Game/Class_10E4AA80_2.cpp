// Game/Class_10E4AA80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E4AA80
{
public:
    virtual void Update(int A);

    void FUN_1094ca70(int A);
    float FUN_1094c700();
    void FUN_1094b730();
    void FUN_10948e80();
    void IntegrateOffsets(float A);

    char Unknown04[0x58];
    int m_PendingFlags;
    int Unknown60;
    char Pad64[0x14];
    float Field78;
    char Pad7C[0x188];
    bool m_HasVelocity;
    bool m_HasAngularVelocity;
    char Pad206[2];
    FVector m_Velocity;
    FVector m_AngularVelocity;
    FVector m_Offset;
    FVector m_Angles;
};

void WrapAngles(FVector* A);

// FUNCTION: 0x10949060 ?IntegrateOffsets@Class_10E4AA80@@QAEXM@Z
void Class_10E4AA80::IntegrateOffsets(float A)
{
    if (m_HasVelocity)
        m_Offset += m_Velocity * A;
    else
    {
        m_Offset.X = 0.0f;
        m_Offset.Y = 0.0f;
        m_Offset.Z = 0.0f;
    }
    m_Offset.Z = 0.0f;
    if (m_HasAngularVelocity)
    {
        m_Angles += m_AngularVelocity * A;
        WrapAngles(&m_Angles);
    }
    else
    {
        m_Angles.X = 0.0f;
        m_Angles.Y = 0.0f;
        m_Angles.Z = 0.0f;
    }
}
