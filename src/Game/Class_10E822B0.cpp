// Game/Class_10E822B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B7B910.h"

class Class_10E6AEA0
{
public:
    Class_10E6AEA0();
    virtual ~Class_10E6AEA0();

    char Unknown04[0x14C];
};

class Class_10E822B0 : public Class_10E6AEA0
{
public:
    Class_10E822B0();
    virtual ~Class_10E822B0();

    Class_10B7B910 m_StateMachine;
};

// FUNCTION: 0x10B7A6A0 ??0Class_10E822B0@@QAE@XZ
Class_10E822B0::Class_10E822B0()
{
    m_StateMachine.FUN_10b7b910();
}
