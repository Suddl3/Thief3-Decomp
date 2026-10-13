// Game/cCitySectionManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10974340.h"
#include "Game/cCitySectionManager.h"
#include "Game/Struct_10974340_Result.h"
#include "Game/Struct_10ABF1B0.h"

class UEngine
{
public:
    char Unknown00[0x10C];
    Class_10974340* Unknown10C;
};

extern UEngine* GEngine;

// FUNCTION: 0x10ABF100 ?FUN_10abf100@cCitySectionManager@@QAE_NXZ
bool cCitySectionManager::FUN_10abf100()
{
    UEngine* Engine = GEngine;
    if (Engine && Engine->Unknown10C && Engine->Unknown10C->FUN_10974340())
        return (((Struct_10974340_Result*)Engine->Unknown10C->FUN_10974340())->Unknown218 & 0x100) == 0x100;
    return false;
}
