// Game/Unsorted_10A37730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10924E80.h"
#include "Game/Class_10E66530.h"
#include "Game/Class_10E666A0.h"
#include "Game/Info_10A399C0.h"
#include "Game/Struct_10A378B0.h"
#include "Game/UClient.h"
#include "Engine/EngineClasses.h"

class Class_10A37810
{
public:
    int FUN_10a37810();

    char Unknown00[0x20];
    int Unknown20;
    int Unknown24;
    int Unknown28;
};

extern Class_10924E80* DAT_10f2c734;

extern UEngine* GEngine;

// FUNCTION: 0x10A37810 ?FUN_10a37810@Class_10A37810@@QAEHXZ
int Class_10A37810::FUN_10a37810()
{
    return Unknown20 ? Unknown20 : Unknown28;
}

// FUNCTION: 0x10A378B0 ?FUN_10a378b0@@YGXPAUStruct_10A378B0@@@Z
void __stdcall FUN_10a378b0(Struct_10A378B0* A)
{
    A->Unknown40 = true;
    DAT_10f2c734->FUN_10925c60(A->Unknown04, 0);
    GEngine->Client->Unknown70 = A->Unknown2A0;
    GEngine->Virtual35();
}
