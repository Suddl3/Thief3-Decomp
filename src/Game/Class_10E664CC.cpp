// Game/Unsorted_10A363F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A36380_Param.h"
#include "Game/Class_10E664CC.h"

class AMetaProperty;

class AStimulusModifierObject
{
    DECLARE_CLASS(AStimulusModifierObject, AMetaProperty, 0x0, Engine)
};

// FUNCTION: 0x10A363F0 ?FUN_10a363f0@Class_10E664CC@@UAEHHHPAVClass_10A36380_Param@@H@Z
int Class_10E664CC::FUN_10a363f0(int A, int B, Class_10A36380_Param* Object, int D)
{
    if (!Object->Virtual22(AStimulusModifierObject::StaticClass()))
        return 0;
    return FUN_10b10060(A, B, Object, D);
}
