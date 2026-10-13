// Game/AT3BehaviorModel.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3AI/T3AIClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10962C90 ??_GAT3BehaviorModel@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10962CC0's definition in this unit.

// FUNCTION: 0x10962CC0 ??1AT3BehaviorModel@@UAE@XZ
AT3BehaviorModel::~AT3BehaviorModel()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109644F0 ?InternalConstructor@AT3BehaviorModel@@SAXPAX@Z
void AT3BehaviorModel::InternalConstructor(void* X)
{
    new ((EInternal*)X) AT3BehaviorModel();
}
