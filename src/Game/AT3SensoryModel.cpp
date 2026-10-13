// Game/AT3SensoryModel.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3AI/T3AIClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10962F10 ??_GAT3SensoryModel@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10962F40's definition in this unit.

// FUNCTION: 0x10962F40 ??1AT3SensoryModel@@UAE@XZ
AT3SensoryModel::~AT3SensoryModel()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10964530 ?InternalConstructor@AT3SensoryModel@@SAXPAX@Z
void AT3SensoryModel::InternalConstructor(void* X)
{
    new ((EInternal*)X) AT3SensoryModel();
}
