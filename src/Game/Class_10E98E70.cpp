// Game/Class_10E98E70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E98E70.h"
#include "Game/Class_10C1AC00.h"
#include "Game/Struct_10C1ABD0.h"
#include "Game/Class_10C1B0F0.h"
#include "Game/Class_10FF667C.h"
#include "Game/FArchive.h"
#include "Game/Class_10E98D08.h"

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C1AB70 ?ClearReference@Class_10E98E70@@UAEXPAX@Z
void Class_10E98E70::ClearReference(void* p1)
{
    if (m_Reference == p1)
        m_Reference = 0;
}

// FUNCTION: 0x10C1ABD0 ?FUN_10c1abd0@Class_10E98E70@@UAE_NPAUStruct_10C1ABD0@@PAH@Z
bool Class_10E98E70::FUN_10c1abd0(Struct_10C1ABD0* Out, int* Value)
{
    *Out = Unknown48;
    *Value = Unknown54;
    return true;
}

// FUNCTION: 0x10C1B460 ?FUN_10c1b460@Class_10E98E70@@UAE_NXZ
bool Class_10E98E70::FUN_10c1b460()
{
    if (Unknown58 != DAT_10ff667c->Unknown40)
        return true;
    return false;
}
