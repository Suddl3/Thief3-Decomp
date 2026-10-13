// Game/AT3CombatModel.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3AI/T3AIClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10962D30 ??_GAT3CombatModel@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10962D60's definition in this unit.

// FUNCTION: 0x10962D60 ??1AT3CombatModel@@UAE@XZ
AT3CombatModel::~AT3CombatModel()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10964500 ?InternalConstructor@AT3CombatModel@@SAXPAX@Z
void AT3CombatModel::InternalConstructor(void* X)
{
    new ((EInternal*)X) AT3CombatModel();
}
