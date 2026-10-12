// Game/Class_10E95898.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E95898.h"

void __stdcall FUN_109e3c90(int A);

// FUNCTION: 0x10BED110 ?FUN_10bed110@Class_10E95898@@UAEXH@Z
void Class_10E95898::FUN_10bed110(int A)
{
    FUN_109e3c90(A);
    if (m_Handle == A)
        m_Handle = 0;
}
