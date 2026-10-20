// Game/Class_10E9B570_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9B570.h"

extern void* DAT_10e9b570[];

void FUN_10a37340(int p1);

// FUNCTION: 0x10C3EDB0 ?FUN_10c3edb0@Class_10E9B570@@QAEPAV1@H@Z
Class_10E9B570* Class_10E9B570::FUN_10c3edb0(int Id)
{
    m_Owner = Id;
    *(void**)this = DAT_10e9b570;
    FUN_10a37340(Id);
    return this;
}
