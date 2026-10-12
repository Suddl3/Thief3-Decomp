// Game/Unsorted_1098E580_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E70A50.h"

class AZoneProperties : public Class_10E70A50
{
public:
    AZoneProperties* Construct();

    char Unknown2C[0x84];
    int UnknownB0;
    int UnknownB4;
    int UnknownB8;
};

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

class AMetaProperty
{
public:
    AMetaProperty();
};

// FUNCTION: 0x1098E580 ?ConstructAZoneProperties@@YAXPAVAZoneProperties@@@Z
void ConstructAZoneProperties(AZoneProperties* Object)
{
    if (Object)
        Object->Construct();
}

// FUNCTION: 0x1098E5A0 ?ConstructAMetaProperty@@YAXPAX@Z
void ConstructAMetaProperty(void* Memory)
{
    new ((EInternal*)Memory) AMetaProperty();
}
