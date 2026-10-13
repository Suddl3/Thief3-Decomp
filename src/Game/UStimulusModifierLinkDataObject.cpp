// Game/UStimulusModifierLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A1070 ??_GUStimulusModifierLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A1090's definition in this unit.

// FUNCTION: 0x109A1090 ??1UStimulusModifierLinkDataObject@@UAE@XZ
UStimulusModifierLinkDataObject::~UStimulusModifierLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A18A0 ?InternalConstructor@UStimulusModifierLinkDataObject@@SAXPAX@Z
void UStimulusModifierLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UStimulusModifierLinkDataObject();
}
