// Game/UInvenBook_LinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Player/T3PlayerClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B12E10 ?InternalConstructor@UInvenBook_LinkDataObject@@SAXPAX@Z
void UInvenBook_LinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UInvenBook_LinkDataObject();
}
