// Game/URuntimeAttachmentLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1099F740 ??_GURuntimeAttachmentLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1099F760's definition in this unit.

// FUNCTION: 0x1099F760 ??1URuntimeAttachmentLinkDataObject@@UAE@XZ
URuntimeAttachmentLinkDataObject::~URuntimeAttachmentLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1610 ?InternalConstructor@URuntimeAttachmentLinkDataObject@@SAXPAX@Z
void URuntimeAttachmentLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) URuntimeAttachmentLinkDataObject();
}
