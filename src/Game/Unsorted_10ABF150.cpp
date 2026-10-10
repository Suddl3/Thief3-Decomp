// Game/Unsorted_10ABF150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10974340
{
public:
    int FUN_10974340();
};

class UEngine
{
public:
    char Unknown00[0x10C];
    Class_10974340* Unknown10C;
};

extern UEngine* GEngine;

class Class_10AF7F80
{
public:
    const char* FUN_10af7f80();
};

struct Struct_10974340_Result
{
    char Unknown00[0x218];
    unsigned int Unknown218;
    char Unknown21C[0x3C];
    Class_10AF7F80 Unknown258;
};

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
