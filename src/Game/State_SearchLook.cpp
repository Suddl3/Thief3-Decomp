// Game/State_SearchLook.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class State_SearchLook : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x40];
    int m_EndTime;
};

// FUNCTION: 0x10BD3150 ?Serialize@State_SearchLook@@UAEXAAVFArchive@@@Z
void State_SearchLook::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&m_EndTime, 4);
}
