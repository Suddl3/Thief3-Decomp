// Game/Class_10E664C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A36380_Param.h"
#include "Game/Class_10E664C0.h"

class AMetaProperty;

class AVulnerabilityObject
{
    DECLARE_CLASS(AVulnerabilityObject, AMetaProperty, 0x0, Engine)
};

// FUNCTION: 0x10A36380 ?FUN_10a36380@Class_10E664C0@@UAEHHHPAVClass_10A36380_Param@@H@Z
int Class_10E664C0::FUN_10a36380(int A, int B, Class_10A36380_Param* Object, int D)
{
    if (!Object->Virtual22(AVulnerabilityObject::StaticClass()))
        return 0;
    return FUN_10b10060(A, B, Object, D);
}
