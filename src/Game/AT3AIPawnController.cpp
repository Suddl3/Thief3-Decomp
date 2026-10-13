// Game/AT3AIPawnController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3AI/T3AIClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10962BF0 ??_GAT3AIPawnController@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10962C20's definition in this unit.

// FUNCTION: 0x10962C20 ??1AT3AIPawnController@@UAE@XZ
AT3AIPawnController::~AT3AIPawnController()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109644E0 ?InternalConstructor@AT3AIPawnController@@SAXPAX@Z
void AT3AIPawnController::InternalConstructor(void* X)
{
    new ((EInternal*)X) AT3AIPawnController();
}
