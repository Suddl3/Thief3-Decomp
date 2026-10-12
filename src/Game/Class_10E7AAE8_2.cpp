// Game/Class_10E7AAE8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B42340.h"
#include "Game/Class_10B42640.h"
#include "Game/Class_10E7AAE8.h"

Class_10B42640* FUN_10b42920();

// FUNCTION: 0x10B26970 ?FUN_10b26970@Class_10E7AAE8@@UAEXHH@Z
void Class_10E7AAE8::FUN_10b26970(int A, int B)
{
    for (int i = 0; i < Unknown08; i++)
        Unknown10[i]->FUN_10b42300(A, B);
    FUN_10b42920()->FUN_10b42650(A, B);
    FUN_10b42920()->Clear();
}
