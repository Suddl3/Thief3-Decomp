// Game/UStimulusModifierLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A18A0 ?InternalConstructor@UStimulusModifierLinkDataObject@@SAXPAX@Z
void UStimulusModifierLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UStimulusModifierLinkDataObject();
}
