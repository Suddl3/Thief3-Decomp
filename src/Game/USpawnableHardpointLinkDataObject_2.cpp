// Game/USpawnableHardpointLinkDataObject_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E55E78
{
public:
    Class_10E55E78();
    ~Class_10E55E78();

    virtual void Virtual0();

    char Unknown04[0x4C];
};

class UHardpointLinkDataObject : public Class_10E55E78
{
public:
    FStringNoInit m_parentBone;
};

class USpawnableHardpointLinkDataObject : public UHardpointLinkDataObject
{
public:
    USpawnableHardpointLinkDataObject();

    INT NumberToSpawn;
    unsigned bTakeParentRotation : 1;
    unsigned bAttachObjects : 1;
    unsigned bDeleteOnDeath : 1;
    FStringNoInit m_childBone;
};

// FUNCTION: 0x109A0310 ??0USpawnableHardpointLinkDataObject@@QAE@XZ
USpawnableHardpointLinkDataObject::USpawnableHardpointLinkDataObject()
{
}
