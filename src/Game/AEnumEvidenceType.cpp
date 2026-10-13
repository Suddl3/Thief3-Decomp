// Game/AEnumEvidenceType.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B93610 ??_GAEnumEvidenceType@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B93640's definition in this unit.

// FUNCTION: 0x10B93640 ??1AEnumEvidenceType@@UAE@XZ
AEnumEvidenceType::~AEnumEvidenceType()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10B95160 ?InternalConstructor@AEnumEvidenceType@@SAXPAX@Z
void AEnumEvidenceType::InternalConstructor(void* X)
{
    new ((EInternal*)X) AEnumEvidenceType();
}
