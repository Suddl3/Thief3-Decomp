// Game/AT3FactionModel.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3AI/T3AIClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10962DD0 ??_GAT3FactionModel@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10962E00's definition in this unit.

// FUNCTION: 0x10962E00 ??1AT3FactionModel@@UAE@XZ
AT3FactionModel::~AT3FactionModel()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10964510 ?InternalConstructor@AT3FactionModel@@SAXPAX@Z
void AT3FactionModel::InternalConstructor(void* X)
{
    new ((EInternal*)X) AT3FactionModel();
}
