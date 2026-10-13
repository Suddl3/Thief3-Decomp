// Game/AAIBehaviorModel.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109628B0 ??1AAIBehaviorModel@@UAE@XZ
AAIBehaviorModel::~AAIBehaviorModel()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10962920 ??_GAAIBehaviorModel@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109628B0's definition in this unit.

// FUNCTION: 0x10B95290 ?InternalConstructor@AAIBehaviorModel@@SAXPAX@Z
void AAIBehaviorModel::InternalConstructor(void* X)
{
    new ((EInternal*)X) AAIBehaviorModel();
}
