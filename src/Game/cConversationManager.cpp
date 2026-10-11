// Game/cConversationManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cConversationManager.h"
#include "Game/Struct_10A13110.h"

class Class_10A80E60;

// FUNCTION: 0x10A12FD0 ?FUN_10a12fd0@cConversationManager@@UAEXH@Z
void cConversationManager::FUN_10a12fd0(int Param)
{
    for (int i = 0; i < Unknown14; i++)
        Virtual14(Param, &Unknown1C[i]);
}
