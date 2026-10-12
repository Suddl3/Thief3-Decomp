// Game/Unsorted_10AC1860_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AC1C40.h"

// FUNCTION: 0x10AC1C40 ?Integrate@Class_10AC1C40@@QAEXM@Z
void Class_10AC1C40::Integrate(float Dt)
{
    m_Acceleration = m_Force * m_InverseMass;
    m_Velocity = m_Acceleration * Dt;
    m_Position += m_Velocity * Dt;
}
