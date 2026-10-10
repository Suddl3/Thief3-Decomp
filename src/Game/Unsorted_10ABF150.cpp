// Game/Unsorted_10ABF150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10974340.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Struct_10974340_Result.h"

class UEngine
{
public:
    char Unknown00[0x10C];
    Class_10974340* Unknown10C;
};

extern UEngine* GEngine;

// FUNCTION: 0x10ABF150 ?FUN_10abf150@@YG_NPAVFName@@@Z
bool __stdcall FUN_10abf150(FName* Out)
{
    UEngine* Engine = GEngine;
    if (Engine && Engine->Unknown10C && Engine->Unknown10C->FUN_10974340())
    {
        *Out = FName(((Struct_10974340_Result*)Engine->Unknown10C->FUN_10974340())->Unknown258.FUN_10af7f80());
        return true;
    }
    return false;
}
