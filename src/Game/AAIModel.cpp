// Game/AAIModel.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10962810 ??1AAIModel@@UAE@XZ
AAIModel::~AAIModel()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10962880 ??_GAAIModel@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10962810's definition in this unit.

// FUNCTION: 0x10B95280 ?InternalConstructor@AAIModel@@SAXPAX@Z
void AAIModel::InternalConstructor(void* X)
{
    new ((EInternal*)X) AAIModel();
}
