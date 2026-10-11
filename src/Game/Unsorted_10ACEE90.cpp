// Game/Unsorted_10ACEE90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A174E0.h"
#include "Game/Class_10ACEE90.h"
#include "Game/Class_109081E0.h"

Class_10A174E0* FUN_10a18230();

class UEngine
{
public:
    void FUN_109844d0();
};

extern UEngine* GEngine;

// FUNCTION: 0x10ACF2D0 ?FUN_10acf2d0@Class_10ACEE90@@QAE_NXZ
bool Class_10ACEE90::FUN_10acf2d0()
{
    FUN_10a18230()->FUN_10a16700(Class_109081E0("TravelFlags"));
    GEngine->FUN_109844d0();
    return true;
}

// FUNCTION: 0x10ACF350 ??$Cast@VUObject@@@@YAPAVUObject@@PAV0@@Z
template UObject* Cast<UObject>(UObject* Src);
