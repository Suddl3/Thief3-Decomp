// Game/Unsorted_10ADD850.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/CoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10ADD850 ?InternalConstructor@@YAXPAX@Z
void InternalConstructor(void* Memory)
{
    new ((EInternal*)Memory) UBitfieldEnum();
}
