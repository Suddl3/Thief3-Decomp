// Game/cSoundStreamingManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cSoundStreamingManager.h"
#include "Game/Struct_10A334E0.h"
#include "Core/Core.h"
#include "Engine/EngineClasses.h"

struct Struct_10A32090
{
    ~Struct_10A32090();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

struct Struct_10A33B70_Param
{
    char Pad00[4];
    int Unknown04;
};

// FUNCTION: 0x10A334E0 ?ClearItems@cSoundStreamingManager@@QAEXXZ
void cSoundStreamingManager::ClearItems()
{
    for (int i = 0; i < 5; i++)
        FUN_10a33040(i, Struct_10A334E0());
}

// FUNCTION: 0x10A33B70 ?HandleMoveEvent@cSoundStreamingManager@@QAEXHHH@Z
void cSoundStreamingManager::HandleMoveEvent(int A, int B, int C)
{
    if (A)
    {
        ((UObject*)A)->IsA(AActor::StaticClass());
    }
    int Value = ((Struct_10A33B70_Param*)C)->Unknown04;
    Struct_10A32090 Items = { 0, 0, 0, 0, 0 };
    FUN_10a32450(Value, &Items);
    FUN_10a33930(0, &Items.Unknown00);
    FUN_10a33930(1, &Items.Unknown04);
    FUN_10a33930(2, &Items.Unknown08);
    FUN_10a33930(3, &Items.Unknown0C);
    FUN_10a33930(4, &Items.Unknown10);
}

// FUNCTION: 0x10A33CE0 ?HandleEvent@cSoundStreamingManager@@UAEXHHHH@Z
void cSoundStreamingManager::HandleEvent(int A, int B, int C, int D)
{
    switch (A)
    {
    case 1:
        FUN_10a33c60();
        break;
    case 0x5A:
        FUN_10a33c60();
        if (Unknown54)
        {
            ClearItems();
            FUN_10a33c60();
        }
        break;
    case 0x70:
        HandleMoveEvent(B, C, D);
        break;
    }
}
