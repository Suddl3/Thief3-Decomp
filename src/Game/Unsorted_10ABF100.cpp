// Game/Unsorted_10ABF100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10974340.h"
#include "Game/Class_10ABF100.h"
#include "Game/Struct_10974340_Result.h"
#include "Game/Struct_10ABF1B0.h"

class UEngine
{
public:
    char Unknown00[0x10C];
    Class_10974340* Unknown10C;
};

extern UEngine* GEngine;

class APlayerPawn
{
public:
    char Unknown00[0x214];
    TArray<Struct_10ABF1B0> CitySectionGoals;
};

struct Struct_10AA3520
{
    char Unknown00[8];
    APlayerPawn* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10ABF100 ?FUN_10abf100@Class_10ABF100@@QAE_NXZ
bool Class_10ABF100::FUN_10abf100()
{
    UEngine* Engine = GEngine;
    if (Engine && Engine->Unknown10C && Engine->Unknown10C->FUN_10974340())
        return (((Struct_10974340_Result*)Engine->Unknown10C->FUN_10974340())->Unknown218 & 0x100) == 0x100;
    return false;
}

// FUNCTION: 0x10ABF1B0 ?FUN_10abf1b0@@YGPAUStruct_10ABF1B0@@H@Z
Struct_10ABF1B0* __stdcall FUN_10abf1b0(int A)
{
    APlayerPawn* Pawn = DAT_10f35dec->Unknown08;
    for (int i = 0; i < Pawn->CitySectionGoals.Num(); i++)
    {
        if (A == Pawn->CitySectionGoals(i).Unknown04)
            return &Pawn->CitySectionGoals(i);
    }
    return 0;
}
