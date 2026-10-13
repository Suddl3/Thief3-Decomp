// Game/AEnumStateType.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B93750 ??_GAEnumStateType@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B93780's definition in this unit.

// FUNCTION: 0x10B93780 ??1AEnumStateType@@UAE@XZ
AEnumStateType::~AEnumStateType()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10B95180 ?InternalConstructor@AEnumStateType@@SAXPAX@Z
void AEnumStateType::InternalConstructor(void* X)
{
    new ((EInternal*)X) AEnumStateType();
}
